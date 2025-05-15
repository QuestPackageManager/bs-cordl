#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEventType)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventType;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEventType);
// Dependencies
namespace UnityEngineInternal::Input {
// Is value type: true
// CS Name: UnityEngineInternal.Input.NativeInputEventType
struct CORDL_TYPE NativeInputEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativeInputEventType_Unwrapped
  enum struct __NativeInputEventType_Unwrapped : int32_t {
    __E_DeviceRemoved = static_cast<int32_t>(0x4452454d),
    __E_DeviceConfigChanged = static_cast<int32_t>(0x44434647),
    __E_Text = static_cast<int32_t>(0x54455854),
    __E_State = static_cast<int32_t>(0x53544154),
    __E_Delta = static_cast<int32_t>(0x444c5441),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativeInputEventType_Unwrapped() const noexcept {
    return static_cast<__NativeInputEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeInputEventType(int32_t value__) noexcept;

  /// @brief Field Delta value: I32(1145852993)
  static ::UnityEngineInternal::Input::NativeInputEventType const Delta;

  /// @brief Field DeviceConfigChanged value: I32(1145259591)
  static ::UnityEngineInternal::Input::NativeInputEventType const DeviceConfigChanged;

  /// @brief Field DeviceRemoved value: I32(1146242381)
  static ::UnityEngineInternal::Input::NativeInputEventType const DeviceRemoved;

  /// @brief Field State value: I32(1398030676)
  static ::UnityEngineInternal::Input::NativeInputEventType const State;

  /// @brief Field Text value: I32(1413830740)
  static ::UnityEngineInternal::Input::NativeInputEventType const Text;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18992 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngineInternal::Input::NativeInputEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEventType, 0x4>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventType, "UnityEngineInternal.Input", "NativeInputEventType");
