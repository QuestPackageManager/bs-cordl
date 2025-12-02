#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Diagnostics/CodeAnalysis/AllowNullAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/DisallowNullAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/DoesNotReturnAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/DoesNotReturnIfAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/ExcludeFromCodeCoverageAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/MaybeNullAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/MaybeNullWhenAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/NotNullAttribute.hpp"
#include "System/Diagnostics/CodeAnalysis/NotNullWhenAttribute.hpp"
#ifdef __cpp_modules
export module CodeAnalysis;
#endif
