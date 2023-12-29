#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Resources/FastResourceComparer.hpp"
#include "System/Resources/FileBasedResourceGroveler.hpp"
#include "System/Resources/IResourceGroveler.hpp"
#include "System/Resources/IResourceReader.hpp"
#include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "System/Resources/MissingManifestResourceException.hpp"
#include "System/Resources/NeutralResourcesLanguageAttribute.hpp"
#include "System/Resources/ResourceLocator.hpp"
#include "System/Resources/ResourceManager.hpp"
#include "System/Resources/ResourceReader.hpp"
#include "System/Resources/ResourceSet.hpp"
#include "System/Resources/ResourceTypeCode.hpp"
#include "System/Resources/RuntimeResourceSet.hpp"
#include "System/Resources/SatelliteContractVersionAttribute.hpp"
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
#ifdef __cpp_modules
export module Resources;
#endif
