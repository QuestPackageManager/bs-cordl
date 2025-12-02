#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrQuaternionf.hpp"
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
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrQuaternionf
struct CORDL_TYPE XrQuaternionf {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x67be9bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion quaternion);

  /// @brief Method .ctor, addr 0x67be9a8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrQuaternionf();

  // Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: None }]
  constexpr XrQuaternionf(float_t X, float_t Y, float_t Z, float_t W) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18488 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field X, offset: 0x0, size: 0x4, def value: None
  float_t X;

  /// @brief Field Y, offset: 0x4, size: 0x4, def value: None
  float_t Y;

  /// @brief Field Z, offset: 0x8, size: 0x4, def value: None
  float_t Z;

  /// @brief Field W, offset: 0xc, size: 0x4, def value: None
  float_t W;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, Z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, W) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, "UnityEngine.XR.OpenXR.NativeTypes", "XrQuaternionf");
