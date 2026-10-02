#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialBufferTypeEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialBufferTypeEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferTypeEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialBufferTypeEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialBufferTypeEXT
struct CORDL_TYPE XrSpatialBufferTypeEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialBufferTypeEXT_Unwrapped
  enum struct __XrSpatialBufferTypeEXT_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Uint8 = static_cast<int32_t>(0x2),
    __E_Uint16 = static_cast<int32_t>(0x3),
    __E_Uint32 = static_cast<int32_t>(0x4),
    __E_Float = static_cast<int32_t>(0x5),
    __E_Vector2f = static_cast<int32_t>(0x6),
    __E_Vector3f = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialBufferTypeEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialBufferTypeEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialBufferTypeEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialBufferTypeEXT(int32_t value__) noexcept;

  /// @brief Field Float value: I32(5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Float;

  /// @brief Field String value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const String;

  /// @brief Field Uint16 value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Uint16;

  /// @brief Field Uint32 value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Uint32;

  /// @brief Field Uint8 value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Uint8;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Unknown;

  /// @brief Field Vector2f value: I32(6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Vector2f;

  /// @brief Field Vector3f value: I32(7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT const Vector3f;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17538 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
