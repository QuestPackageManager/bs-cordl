#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrReferenceSpaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrReferenceSpaceType)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrReferenceSpaceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType
struct CORDL_TYPE XrReferenceSpaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrReferenceSpaceType_Unwrapped
  enum struct __XrReferenceSpaceType_Unwrapped : int32_t {
    __E_View = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
    __E_Stage = static_cast<int32_t>(0x3),
    __E_UnboundedMsft = static_cast<int32_t>(0x3b9b5e70),
    __E_CombinedEyeVarjo = static_cast<int32_t>(0x3b9ca2a8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrReferenceSpaceType_Unwrapped() const noexcept {
    return static_cast<__XrReferenceSpaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrReferenceSpaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrReferenceSpaceType(int32_t value__) noexcept;

  /// @brief Field CombinedEyeVarjo value: I32(1000121000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const CombinedEyeVarjo;

  /// @brief Field Local value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const Local;

  /// @brief Field Stage value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const Stage;

  /// @brief Field UnboundedMsft value: I32(1000038000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const UnboundedMsft;

  /// @brief Field View value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const View;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18496 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, "UnityEngine.XR.OpenXR.NativeTypes", "XrReferenceSpaceType");
