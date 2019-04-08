/*=========================================================================
 *
 *  Copyright (c) 2019 Sunnybrook Research Institute
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "MinimalPlugin.h"

//Sedeen required headers
#include "Algorithm.h"
#include "Geometry.h"
#include "Global.h"
#include "Image.h"

// Poco header needed for the macros below 
#include <Poco/ClassLibrary.h>

// Declare that this object has AlgorithmBase subclasses
//  and declare each of those sub-classes
POCO_BEGIN_MANIFEST(sedeen::algorithm::AlgorithmBase)
POCO_EXPORT_CLASS(sedeen::algorithm::MinimalPlugin)
POCO_END_MANIFEST

namespace sedeen {
namespace algorithm {

//Constructor
MinimalPlugin::MinimalPlugin() : _result() {
}

//Destructor
MinimalPlugin::~MinimalPlugin() {
}

void MinimalPlugin::init(const image::ImageHandle& image) {
}

void MinimalPlugin::run() {
}

} // namespace algorithm
} // namespace sedeen