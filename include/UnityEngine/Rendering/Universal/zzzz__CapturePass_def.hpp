#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CapturePass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(CapturePass)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass_UnsafePassData;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CapturePass;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass_UnsafePassData;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CapturePass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CapturePass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.CapturePass/UnsafePassData
class CORDL_TYPE CapturePass_UnsafePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field captureActions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_captureActions, put = __cordl_internal_set_captureActions)) ::System::Collections::Generic::IEnumerator_1<
      ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* captureActions;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  static inline ::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData* New_ctor();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
  __cordl_internal_get_captureActions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
  __cordl_internal_get_captureActions();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_captureActions(
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6661be8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapturePass_UnsafePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapturePass_UnsafePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapturePass_UnsafePassData(CapturePass_UnsafePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapturePass_UnsafePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapturePass_UnsafePassData(CapturePass_UnsafePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12794 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field captureActions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* ___captureActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData, ___captureActions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.CapturePass/<>c
class CORDL_TYPE CapturePass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::CapturePass___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0,
                      put = setStaticF___9__4_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__4_0;

  static inline ::UnityEngine::Rendering::Universal::CapturePass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__4_0, addr 0x6661c44, size 0x260, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__4_0(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* unsafeContext);

  /// @brief Method .ctor, addr 0x6661c40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::CapturePass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::CapturePass___c* value);

  static inline void setStaticF___9__4_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapturePass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapturePass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapturePass___c(CapturePass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapturePass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapturePass___c(CapturePass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12795 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CapturePass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.CapturePass
class CORDL_TYPE CapturePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using UnsafePassData = ::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData;

  using __c = ::UnityEngine::Rendering::Universal::CapturePass___c;

  /// @brief Field m_CameraColorHandle, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraColorHandle, put = __cordl_internal_set_m_CameraColorHandle)) ::UnityEngine::Rendering::RTHandle* m_CameraColorHandle;

  /// @brief Method Execute, addr 0x66614c0, size 0x2a0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::CapturePass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method RecordRenderGraph, addr 0x6661760, size 0x488, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraColorHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraColorHandle();

  constexpr void __cordl_internal_set_m_CameraColorHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x66613f8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapturePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapturePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapturePass(CapturePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapturePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapturePass(CapturePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12796 };

  /// @brief Field m_CameraColorHandle, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraColorHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CapturePass, ___m_CameraColorHandle) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CapturePass, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CapturePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CapturePass*, "UnityEngine.Rendering.Universal", "CapturePass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CapturePass_UnsafePassData*, "UnityEngine.Rendering.Universal", "CapturePass/UnsafePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CapturePass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CapturePass___c*, "UnityEngine.Rendering.Universal", "CapturePass/<>c");
