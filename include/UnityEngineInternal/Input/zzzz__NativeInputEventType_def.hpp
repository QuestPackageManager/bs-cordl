#pragma once
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
// Type: UnityEngineInternal.Input::NativeInputEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16219))
// CS Name: ::UnityEngineInternal.Input::NativeInputEventType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeInputEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DeviceRemoved value: static_cast<int32_t>(0x4452454d)
  static ::UnityEngineInternal::Input::NativeInputEventType const DeviceRemoved;

  /// @brief Field DeviceConfigChanged value: static_cast<int32_t>(0x44434647)
  static ::UnityEngineInternal::Input::NativeInputEventType const DeviceConfigChanged;

  /// @brief Field Text value: static_cast<int32_t>(0x54455854)
  static ::UnityEngineInternal::Input::NativeInputEventType const Text;

  /// @brief Field State value: static_cast<int32_t>(0x53544154)
  static ::UnityEngineInternal::Input::NativeInputEventType const State;

  /// @brief Field Delta value: static_cast<int32_t>(0x444c5441)
  static ::UnityEngineInternal::Input::NativeInputEventType const Delta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngineInternal::Input::NativeInputEventType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventType, "UnityEngineInternal.Input", "NativeInputEventType");
