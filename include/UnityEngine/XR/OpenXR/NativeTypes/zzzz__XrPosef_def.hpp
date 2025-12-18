#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPosef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrPosef)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef);
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrQuaternionf, UnityEngine.XR.OpenXR.NativeTypes.XrVector3f
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrPosef
struct CORDL_TYPE XrPosef {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6826548, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 vec3, ::UnityEngine::Quaternion quaternion);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPosef();

  // Ctor Parameters [CppParam { name: "Orientation", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: None }, CppParam { name: "Position", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: None }]
  constexpr XrPosef(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf Orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f Position) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18504 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field Orientation, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf Orientation;

  /// @brief Field Position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, Orientation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, Position) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, "UnityEngine.XR.OpenXR.NativeTypes", "XrPosef");
