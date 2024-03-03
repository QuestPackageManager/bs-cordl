#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrapMode)
// Forward declare root types
namespace UnityEngine {
struct WrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WrapMode);
// Type: UnityEngine::WrapMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::WrapMode
struct CORDL_TYPE WrapMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WrapMode_Unwrapped
  enum struct __WrapMode_Unwrapped : int32_t {
    __E_Once = static_cast<int32_t>(0x1),
    __E_Loop = static_cast<int32_t>(0x2),
    __E_PingPong = static_cast<int32_t>(0x4),
    __E_Default = static_cast<int32_t>(0x0),
    __E_ClampForever = static_cast<int32_t>(0x8),
    __E_Clamp = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WrapMode_Unwrapped() const noexcept {
    return static_cast<__WrapMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WrapMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Clamp value: static_cast<int32_t>(0x1)
  static ::UnityEngine::WrapMode const Clamp;

  /// @brief Field ClampForever value: static_cast<int32_t>(0x8)
  static ::UnityEngine::WrapMode const ClampForever;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::WrapMode const Default;

  /// @brief Field Loop value: static_cast<int32_t>(0x2)
  static ::UnityEngine::WrapMode const Loop;

  /// @brief Field Once value: static_cast<int32_t>(0x1)
  static ::UnityEngine::WrapMode const Once;

  /// @brief Field PingPong value: static_cast<int32_t>(0x4)
  static ::UnityEngine::WrapMode const PingPong;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WrapMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::WrapMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WrapMode, "UnityEngine", "WrapMode");
