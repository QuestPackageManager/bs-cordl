#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrPosef)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrQuaternionf;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef);
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrPosef
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14425)), TypeDefinitionIndex(TypeDefinitionIndex(14424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14426))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrPosef
struct CORDL_TYPE XrPosef {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2b0352c size 0x20 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 vec3, ::UnityEngine::Quaternion quaternion);

  // Ctor Parameters [CppParam { name: "orientation", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: None }, CppParam { name: "position", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: None }]
  constexpr XrPosef(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f position) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPosef();

  /// @brief Field orientation, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf orientation;

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, orientation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, position) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, "UnityEngine.XR.OpenXR.NativeTypes", "XrPosef");
