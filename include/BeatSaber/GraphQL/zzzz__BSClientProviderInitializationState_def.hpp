#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/BSClientProviderInitializationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BSClientProviderInitializationState)
// Forward declare root types
namespace BeatSaber::GraphQL {
struct BSClientProviderInitializationState;
}
// Write type traits
MARK_VAL_T(::BeatSaber::GraphQL::BSClientProviderInitializationState);
// Dependencies 
namespace BeatSaber::GraphQL {
// Is value type: true
// CS Name: BeatSaber.GraphQL.BSClientProviderInitializationState
struct CORDL_TYPE BSClientProviderInitializationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BSClientProviderInitializationState_Unwrapped
enum struct __BSClientProviderInitializationState_Unwrapped : int32_t {
__E_NotInitialized = static_cast<int32_t>(0x0),
__E_Initializing = static_cast<int32_t>(0x1),
__E_Initialized = static_cast<int32_t>(0x2),
__E_FailedToInitialize = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BSClientProviderInitializationState_Unwrapped () const noexcept {
return static_cast<__BSClientProviderInitializationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BSClientProviderInitializationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BSClientProviderInitializationState(int32_t  value__) noexcept;

/// @brief Field FailedToInitialize value: I32(3)
static ::BeatSaber::GraphQL::BSClientProviderInitializationState const FailedToInitialize;

/// @brief Field Initialized value: I32(2)
static ::BeatSaber::GraphQL::BSClientProviderInitializationState const Initialized;

/// @brief Field Initializing value: I32(1)
static ::BeatSaber::GraphQL::BSClientProviderInitializationState const Initializing;

/// @brief Field NotInitialized value: I32(0)
static ::BeatSaber::GraphQL::BSClientProviderInitializationState const NotInitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GraphQL::BSClientProviderInitializationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::BSClientProviderInitializationState, 0x4>, "Size mismatch!");

} // namespace end def BeatSaber::GraphQL
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::BSClientProviderInitializationState, "BeatSaber.GraphQL", "BSClientProviderInitializationState");
