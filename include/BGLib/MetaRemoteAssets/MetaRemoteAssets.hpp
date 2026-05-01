#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGLib/MetaRemoteAssets/IRemoteCatalogLoader.hpp"
#include "BGLib/MetaRemoteAssets/MetaRemoteAssetsCatalogUpdater.hpp"
#include "BGLib/MetaRemoteAssets/MetaRemoteAssetsManager.hpp"
#include "BGLib/MetaRemoteAssets/MetaRemoteAssetsPreloader.hpp"
#include "BGLib/MetaRemoteAssets/MetaRemoteAssetsRemoteCatalogLoader.hpp"
#include "BGLib/MetaRemoteAssets/MockRemoteCatalogLoader.hpp"
#ifdef __cpp_modules
export module MetaRemoteAssets;
#endif
