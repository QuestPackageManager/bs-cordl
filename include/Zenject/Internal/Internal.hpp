#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Zenject/Internal/DecoratorProvider_1.hpp"
#include "Zenject/Internal/IDecoratorProvider.hpp"
#include "Zenject/Internal/LookupId.hpp"
#include "Zenject/Internal/PreserveAttribute.hpp"
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "Zenject/Internal/SingletonMarkRegistry.hpp"
#include "Zenject/Internal/ZenPools.hpp"
#include "Zenject/Internal/ZenUtilInternal.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
