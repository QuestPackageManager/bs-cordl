#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector3f.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XrVector3f)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrVector3f
struct CORDL_TYPE XrVector3f {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6826510, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6826500, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrVector3f();

  // Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr XrVector3f(float_t X, float_t Y, float_t Z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18502 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field X, offset: 0x0, size: 0x4, def value: None
  float_t X;

  /// @brief Field Y, offset: 0x4, size: 0x4, def value: None
  float_t Y;

  /// @brief Field Z, offset: 0x8, size: 0x4, def value: None
  float_t Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, Z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, 0xc>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, "UnityEngine.XR.OpenXR.NativeTypes", "XrVector3f");
