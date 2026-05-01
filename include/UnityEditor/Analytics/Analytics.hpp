#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEditor/Analytics/AssetDatabaseRefreshAnalytic.hpp"
#include "UnityEditor/Analytics/AssetExportAnalytic.hpp"
#include "UnityEditor/Analytics/AssetImportAnalytic.hpp"
#include "UnityEditor/Analytics/AssetImportStatusAnalytic.hpp"
#include "UnityEditor/Analytics/BuildAssetBundleAnalytic.hpp"
#include "UnityEditor/Analytics/CollabOperationAnalytic.hpp"
#include "UnityEditor/Analytics/LicensingErrorAnalytic.hpp"
#include "UnityEditor/Analytics/LicensingInitAnalytic.hpp"
#include "UnityEditor/Analytics/MetalPatchShaderComputeBufferAnalytic.hpp"
#include "UnityEditor/Analytics/NavmeshBakingAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerAddPackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerBaseAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerEmbedPackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerRemovePackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerResetPackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerResolveErrorPackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerResolvePackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerStartServerPackageAnalytic.hpp"
#include "UnityEditor/Analytics/PackageManagerTestAnalytic.hpp"
#include "UnityEditor/Analytics/ProjectSettingsInformationAnalytic.hpp"
#include "UnityEditor/Analytics/SendGameBuildAnalytic.hpp"
#include "UnityEditor/Analytics/StallMarkerAnalytic.hpp"
#include "UnityEditor/Analytics/StallSummaryAnalytic.hpp"
#include "UnityEditor/Analytics/TestAnalytic.hpp"
#ifdef __cpp_modules
export module Analytics;
#endif
