#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XrQuaternionf)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrQuaternionf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf);
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrQuaternionf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14425))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrQuaternionf
struct CORDL_TYPE XrQuaternionf {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2b03504 size 0x14 virtual false final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method .ctor addr 0x2b03518 size 0x14 virtual false final false
  inline void _ctor(::UnityEngine::Quaternion quaternion);

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr XrQuaternionf(float_t x, float_t y, float_t z, float_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrQuaternionf();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, w) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, "UnityEngine.XR.OpenXR.NativeTypes", "XrQuaternionf");
