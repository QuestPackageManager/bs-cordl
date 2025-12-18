#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpaceLocationFlags.hpp"
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
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpaceLocationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrSpaceLocationFlags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const None;

  /// @brief Field OrientationTracked value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationTracked;

  /// @brief Field OrientationValid value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationValid;

  /// @brief Field PositionTracked value: I32(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionTracked;

  /// @brief Field PositionValid value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionValid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18494 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpaceLocationFlags");
