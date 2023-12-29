#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrViewConfigurationType)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewConfigurationType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType);
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrViewConfigurationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14418))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrViewConfigurationType
struct CORDL_TYPE XrViewConfigurationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrViewConfigurationType_Unwrapped
  enum struct __XrViewConfigurationType_Unwrapped : int32_t {
    __E_PrimaryMono = static_cast<int32_t>(0x1),
    __E_PrimaryStereo = static_cast<int32_t>(0x2),
    __E_PrimaryQuadVarjo = static_cast<int32_t>(0x3b9b5a88),
    __E_SecondaryMonoFirstPersonObserver = static_cast<int32_t>(0x3b9b9cf0),
    __E_SecondaryMonoThirdPersonObserver = static_cast<int32_t>(0x3b9d0068),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrViewConfigurationType_Unwrapped() const noexcept {
    return static_cast<__XrViewConfigurationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrViewConfigurationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrViewConfigurationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PrimaryMono value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryMono;

  /// @brief Field PrimaryStereo value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryStereo;

  /// @brief Field PrimaryQuadVarjo value: static_cast<int32_t>(0x3b9b5a88)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryQuadVarjo;

  /// @brief Field SecondaryMonoFirstPersonObserver value: static_cast<int32_t>(0x3b9b9cf0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const SecondaryMonoFirstPersonObserver;

  /// @brief Field SecondaryMonoThirdPersonObserver value: static_cast<int32_t>(0x3b9d0068)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const SecondaryMonoThirdPersonObserver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, "UnityEngine.XR.OpenXR.NativeTypes", "XrViewConfigurationType");
