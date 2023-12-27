#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine\ResourceManagement\Util\AsyncOpHandlesCacheKey.hpp"
#include "UnityEngine\ResourceManagement\Util\ComponentSingleton_1.hpp"
#include "UnityEngine\ResourceManagement\Util\DefaultAllocationStrategy.hpp"
#include "UnityEngine\ResourceManagement\Util\DelayedActionManager.hpp"
#include "UnityEngine\ResourceManagement\Util\DependenciesCacheKey.hpp"
#include "UnityEngine\ResourceManagement\Util\GlobalLinkedListNodeCache_1.hpp"
#include "UnityEngine\ResourceManagement\Util\IAllocationStrategy.hpp"
#include "UnityEngine\ResourceManagement\Util\IInitializableObject.hpp"
#include "UnityEngine\ResourceManagement\Util\IObjectInitializationDataProvider.hpp"
#include "UnityEngine\ResourceManagement\Util\IOperationCacheKey.hpp"
#include "UnityEngine\ResourceManagement\Util\LRUCacheAllocationStrategy.hpp"
#include "UnityEngine\ResourceManagement\Util\LinkedListNodeCache_1.hpp"
#include "UnityEngine\ResourceManagement\Util\LocationCacheKey.hpp"
#include "UnityEngine\ResourceManagement\Util\LocationUtils.hpp"
#include "UnityEngine\ResourceManagement\Util\ObjectInitializationData.hpp"
#include "UnityEngine\ResourceManagement\Util\PlatformUtilities.hpp"
#include "UnityEngine\ResourceManagement\Util\ResourceManagerConfig.hpp"
#include "UnityEngine\ResourceManagement\Util\SerializedType.hpp"
#include "UnityEngine\ResourceManagement\Util\SerializedTypeRestrictionAttribute.hpp"
#include "UnityEngine\ResourceManagement\Util\UnityWebRequestResult.hpp"
#include "UnityEngine\ResourceManagement\Util\UnityWebRequestUtilities.hpp"
#ifdef __cpp_modules
export module Util;
#endif
