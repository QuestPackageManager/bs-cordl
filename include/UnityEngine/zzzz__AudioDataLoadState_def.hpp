#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDataLoadState)
// Forward declare root types
namespace UnityEngine {
struct AudioDataLoadState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioDataLoadState);
// Type: UnityEngine::AudioDataLoadState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15292))
// CS Name: ::UnityEngine::AudioDataLoadState
struct CORDL_TYPE AudioDataLoadState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioDataLoadState_Unwrapped
  enum struct __AudioDataLoadState_Unwrapped : int32_t {
    __E_Unloaded = static_cast<int32_t>(0x0),
    __E_Loading = static_cast<int32_t>(0x1),
    __E_Loaded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioDataLoadState_Unwrapped() const noexcept {
    return static_cast<__AudioDataLoadState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioDataLoadState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioDataLoadState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unloaded value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AudioDataLoadState const Unloaded;

  /// @brief Field Loading value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AudioDataLoadState const Loading;

  /// @brief Field Loaded value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AudioDataLoadState const Loaded;

  /// @brief Field Failed value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AudioDataLoadState const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioDataLoadState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AudioDataLoadState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioDataLoadState, "UnityEngine", "AudioDataLoadState");
