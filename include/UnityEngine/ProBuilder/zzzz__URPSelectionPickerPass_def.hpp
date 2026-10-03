#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/URPSelectionPickerPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(URPSelectionPickerPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
class URPSelectionPickerPass_PassData;
}
namespace UnityEngine::ProBuilder {
class URPSelectionPickerPass___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class URPSelectionPickerPass;
}
namespace UnityEngine::ProBuilder {
class URPSelectionPickerPass_PassData;
}
namespace UnityEngine::ProBuilder {
class URPSelectionPickerPass___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::URPSelectionPickerPass*);
MARK_REF_T(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*);
MARK_REF_T(::UnityEngine::ProBuilder::URPSelectionPickerPass___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::URPSelectionPickerPass*, "UnityEngine.ProBuilder", "URPSelectionPickerPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, "UnityEngine.ProBuilder", "URPSelectionPickerPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::URPSelectionPickerPass___c*, "UnityEngine.ProBuilder", "URPSelectionPickerPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.URPSelectionPickerPass/PassData
class CORDL_TYPE URPSelectionPickerPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field rendererListHandle, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHandle, put = __cordl_internal_set_rendererListHandle)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHandle;

  static inline ::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHandle();

  constexpr void __cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x6b0da88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPSelectionPickerPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPSelectionPickerPass_PassData(URPSelectionPickerPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPSelectionPickerPass_PassData(URPSelectionPickerPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17343 };

  /// @brief Field rendererListHandle, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData, ___rendererListHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.URPSelectionPickerPass/<>c
class CORDL_TYPE URPSelectionPickerPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::URPSelectionPickerPass___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0,
                      put = setStaticF___9__5_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__5_0;

  static inline ::UnityEngine::ProBuilder::URPSelectionPickerPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__5_0, addr 0x6b0dae4, size 0x10, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__5_0(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6b0dae0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::URPSelectionPickerPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::URPSelectionPickerPass___c* value);

  static inline void setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPSelectionPickerPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPSelectionPickerPass___c(URPSelectionPickerPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPSelectionPickerPass___c(URPSelectionPickerPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::URPSelectionPickerPass___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.URPSelectionPickerPass
class CORDL_TYPE URPSelectionPickerPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData;

  using __c = ::UnityEngine::ProBuilder::URPSelectionPickerPass___c;

  /// @brief Field m_ShaderTagIdList, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method ExecutePass, addr 0x6b0d504, size 0x7c, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method InitRendererLists, addr 0x6b0d0d4, size 0x430, virtual false, abstract: false, final false
  inline void InitRendererLists(::UnityEngine::Rendering::ContextContainer* frameData, ::by_ref<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*> passData,
                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  static inline ::UnityEngine::ProBuilder::URPSelectionPickerPass* New_ctor(::UnityEngine::LayerMask layerMask);

  /// @brief Method RecordRenderGraph, addr 0x6b0d580, size 0x508, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x6afb710, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LayerMask layerMask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPSelectionPickerPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPSelectionPickerPass(URPSelectionPickerPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPSelectionPickerPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPSelectionPickerPass(URPSelectionPickerPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17345 };

  /// @brief Field m_ShaderTagIdList, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::URPSelectionPickerPass, ___m_ShaderTagIdList) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::URPSelectionPickerPass) == 0x68, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
