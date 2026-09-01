#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectPreRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(MainEffectPreRenderPass)
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass_PassData;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass___c;
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
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectPreRenderPass;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass_PassData;
}
namespace GlobalNamespace {
class MainEffectPreRenderPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectPreRenderPass*);
MARK_REF_T(::GlobalNamespace::MainEffectPreRenderPass_PassData*);
MARK_REF_T(::GlobalNamespace::MainEffectPreRenderPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPreRenderPass*, "", "MainEffectPreRenderPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPreRenderPass_PassData*, "", "MainEffectPreRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPreRenderPass___c*, "", "MainEffectPreRenderPass/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPreRenderPass/PassData
class CORDL_TYPE MainEffectPreRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field effectContainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_effectContainer, put = __cordl_internal_set_effectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> effectContainer;

  static inline ::GlobalNamespace::MainEffectPreRenderPass_PassData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get_effectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get_effectContainer();

  constexpr void __cordl_internal_set_effectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  /// @brief Method .ctor, addr 0x5f43e28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPreRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPreRenderPass_PassData(MainEffectPreRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPreRenderPass_PassData(MainEffectPreRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20637 };

  /// @brief Field effectContainer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ___effectContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectPreRenderPass_PassData, ___effectContainer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectPreRenderPass_PassData) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPreRenderPass/<>c
class CORDL_TYPE MainEffectPreRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MainEffectPreRenderPass___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0,
                      put = setStaticF___9__2_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__2_0;

  static inline ::GlobalNamespace::MainEffectPreRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__2_0, addr 0x5f43e84, size 0xb4, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__2_0(::GlobalNamespace::MainEffectPreRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f43e80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MainEffectPreRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__2_0();

  static inline void setStaticF___9(::GlobalNamespace::MainEffectPreRenderPass___c* value);

  static inline void setStaticF___9__2_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPreRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPreRenderPass___c(MainEffectPreRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPreRenderPass___c(MainEffectPreRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectPreRenderPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPreRenderPass
class CORDL_TYPE MainEffectPreRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::MainEffectPreRenderPass_PassData;

  using __c = ::GlobalNamespace::MainEffectPreRenderPass___c;

  static inline ::GlobalNamespace::MainEffectPreRenderPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method RecordRenderGraph, addr 0x5f439cc, size 0x45c, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x5f43550, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPreRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPreRenderPass(MainEffectPreRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPreRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPreRenderPass(MainEffectPreRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectPreRenderPass) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
