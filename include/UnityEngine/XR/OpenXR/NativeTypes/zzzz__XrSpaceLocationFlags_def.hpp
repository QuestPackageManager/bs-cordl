#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpaceLocationFlags)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpaceLocationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags);
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrSpaceLocationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14419))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrSpaceLocationFlags
struct CORDL_TYPE XrSpaceLocationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpaceLocationFlags_Unwrapped
  enum struct __XrSpaceLocationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OrientationValid = static_cast<int32_t>(0x1),
    __E_PositionValid = static_cast<int32_t>(0x2),
    __E_OrientationTracked = static_cast<int32_t>(0x4),
    __E_PositionTracked = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpaceLocationFlags_Unwrapped() const noexcept {
    return static_cast<__XrSpaceLocationFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrSpaceLocationFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpaceLocationFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const None;

  /// @brief Field OrientationValid value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationValid;

  /// @brief Field PositionValid value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionValid;

  /// @brief Field OrientationTracked value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationTracked;

  /// @brief Field PositionTracked value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionTracked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpaceLocationFlags");