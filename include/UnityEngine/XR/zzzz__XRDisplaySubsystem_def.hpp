#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__LateLatchNode;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc);
MARK_VAL_T(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass);
// Type: ::LateLatchNode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15641))
// CS Name: ::XRDisplaySubsystem::LateLatchNode
struct CORDL_TYPE __XRDisplaySubsystem__LateLatchNode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped
  enum struct ____XRDisplaySubsystem__LateLatchNode_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_LeftHand = static_cast<int32_t>(0x1),
    __E_RightHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDisplaySubsystem__LateLatchNode_Unwrapped() const noexcept {
    return static_cast<____XRDisplaySubsystem__LateLatchNode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__LateLatchNode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Head value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const Head;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const LeftHand;

  /// @brief Field RightHand value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode const RightHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRRenderPass
// SizeInfo { instance_size: 216, native_size: 216, calculated_instance_size: 216, calculated_native_size: 228, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(10346)), TypeDefinitionIndex(TypeDefinitionIndex(10089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15642))
// CS Name: ::XRDisplaySubsystem::XRRenderPass
struct CORDL_TYPE __XRDisplaySubsystem__XRRenderPass {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__XRRenderPass(void* displaySubsystemInstance, int32_t renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                               ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                               ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc,
                                               bool shouldFillOutDepth, int32_t cullingPassIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRRenderPass();

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  void* displaySubsystemInstance;

  /// @brief Field renderPassIndex, offset: 0x8, size: 0x4, def value: None
  int32_t renderPassIndex;

  /// @brief Field renderTarget, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  /// @brief Field renderTargetDesc, offset: 0x38, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  /// @brief Field hasMotionVectorPass, offset: 0x6c, size: 0x1, def value: None
  bool hasMotionVectorPass;

  /// @brief Field motionVectorRenderTarget, offset: 0x70, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  /// @brief Field motionVectorRenderTargetDesc, offset: 0x98, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  /// @brief Field shouldFillOutDepth, offset: 0xcc, size: 0x1, def value: None
  bool shouldFillOutDepth;

  /// @brief Field cullingPassIndex, offset: 0xd0, size: 0x4, def value: None
  int32_t cullingPassIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::XR
// Type: ::XRMirrorViewBlitDesc
// SizeInfo { instance_size: 16, native_size: 24, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15643))
// CS Name: ::XRDisplaySubsystem::XRMirrorViewBlitDesc
struct CORDL_TYPE __XRDisplaySubsystem__XRMirrorViewBlitDesc {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDisplaySubsystem__XRMirrorViewBlitDesc(void* displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDisplaySubsystem__XRMirrorViewBlitDesc();

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  void* displaySubsystemInstance;

  /// @brief Field nativeBlitAvailable, offset: 0x8, size: 0x1, def value: None
  bool nativeBlitAvailable;

  /// @brief Field nativeBlitInvalidStates, offset: 0x9, size: 0x1, def value: None
  bool nativeBlitInvalidStates;

  /// @brief Field blitParamsCount, offset: 0xc, size: 0x4, def value: None
  int32_t blitParamsCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
