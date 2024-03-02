#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputUpdateType)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputUpdateType);
// Type: UnityEngineInternal.Input::NativeInputUpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngineInternal::Input {
// Is value type: true
// CS Name: ::UnityEngineInternal.Input::NativeInputUpdateType
struct CORDL_TYPE NativeInputUpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativeInputUpdateType_Unwrapped
  enum struct __NativeInputUpdateType_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x1),
    __E_Fixed = static_cast<int32_t>(0x2),
    __E_BeforeRender = static_cast<int32_t>(0x4),
    __E_Editor = static_cast<int32_t>(0x8),
    __E_IgnoreFocus = static_cast<int32_t>(0x80000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativeInputUpdateType_Unwrapped() const noexcept {
    return static_cast<__NativeInputUpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputUpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeInputUpdateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x4)
  static ::UnityEngineInternal::Input::NativeInputUpdateType const BeforeRender;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x1)
  static ::UnityEngineInternal::Input::NativeInputUpdateType const Dynamic;

  /// @brief Field Editor value: static_cast<int32_t>(0x8)
  static ::UnityEngineInternal::Input::NativeInputUpdateType const Editor;

  /// @brief Field Fixed value: static_cast<int32_t>(0x2)
  static ::UnityEngineInternal::Input::NativeInputUpdateType const Fixed;

  /// @brief Field IgnoreFocus value: static_cast<int32_t>(0x80000000)
  static ::UnityEngineInternal::Input::NativeInputUpdateType const IgnoreFocus;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputUpdateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngineInternal::Input::NativeInputUpdateType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputUpdateType, "UnityEngineInternal.Input", "NativeInputUpdateType");
