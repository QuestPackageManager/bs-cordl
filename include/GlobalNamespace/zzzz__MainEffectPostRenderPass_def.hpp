#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectPostRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectPostRenderPass)
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass_PassData;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass___c;
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectPostRenderPass;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass_PassData;
}
namespace GlobalNamespace {
class MainEffectPostRenderPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectPostRenderPass*);
MARK_REF_T(::GlobalNamespace::MainEffectPostRenderPass_PassData*);
MARK_REF_T(::GlobalNamespace::MainEffectPostRenderPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPostRenderPass*, "", "MainEffectPostRenderPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPostRenderPass_PassData*, "", "MainEffectPostRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectPostRenderPass___c*, "", "MainEffectPostRenderPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPostRenderPass/PassData
class CORDL_TYPE MainEffectPostRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeColorTexture, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_activeColorTexture, put = __cordl_internal_set_activeColorTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle activeColorTexture;

  /// @brief Field bloomTexture, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomTexture, put = __cordl_internal_set_bloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture;

  /// @brief Field copyColor, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_copyColor, put = __cordl_internal_set_copyColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle copyColor;

  /// @brief Field effectContainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_effectContainer, put = __cordl_internal_set_effectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> effectContainer;

  /// @brief Field fadeValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeValue, put = __cordl_internal_set_fadeValue)) float_t fadeValue;

  /// @brief Field tempTextures, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_tempTextures, put = __cordl_internal_set_tempTextures)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures;

  static inline ::GlobalNamespace::MainEffectPostRenderPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_activeColorTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_activeColorTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_bloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_bloomTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_copyColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_copyColor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get_effectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get_effectContainer();

  constexpr float_t const& __cordl_internal_get_fadeValue() const;

  constexpr float_t& __cordl_internal_get_fadeValue();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_tempTextures() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_tempTextures();

  constexpr void __cordl_internal_set_activeColorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_copyColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_effectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set_fadeValue(float_t value);

  constexpr void __cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  /// @brief Method .ctor, addr 0x5f45044, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPostRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPostRenderPass_PassData(MainEffectPostRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPostRenderPass_PassData(MainEffectPostRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20640 };

  /// @brief Field effectContainer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ___effectContainer;

  /// @brief Field fadeValue, offset: 0x18, size: 0x4, def value: None
  float_t ___fadeValue;

  /// @brief Field activeColorTexture, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___activeColorTexture;

  /// @brief Field copyColor, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___copyColor;

  /// @brief Field bloomTexture, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___bloomTexture;

  /// @brief Field tempTextures, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___tempTextures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___effectContainer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___fadeValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___activeColorTexture) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___copyColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___bloomTexture) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectPostRenderPass_PassData, ___tempTextures) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectPostRenderPass_PassData) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPostRenderPass/<>c
class CORDL_TYPE MainEffectPostRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MainEffectPostRenderPass___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0,
                      put = setStaticF___9__2_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1,
                      put = setStaticF___9__2_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__2_1;

  static inline ::GlobalNamespace::MainEffectPostRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__2_0, addr 0x5f450a0, size 0xc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__2_0(::GlobalNamespace::MainEffectPostRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RecordRenderGraph>b__2_1, addr 0x5f450ac, size 0x10, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__2_1(::GlobalNamespace::MainEffectPostRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f4509c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MainEffectPostRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__2_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__2_1();

  static inline void setStaticF___9(::GlobalNamespace::MainEffectPostRenderPass___c* value);

  static inline void setStaticF___9__2_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__2_1(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPostRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPostRenderPass___c(MainEffectPostRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPostRenderPass___c(MainEffectPostRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectPostRenderPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectPostRenderPass
class CORDL_TYPE MainEffectPostRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::MainEffectPostRenderPass_PassData;

  using __c = ::GlobalNamespace::MainEffectPostRenderPass___c;

  /// @brief Method ExecuteNoPostProcessPass, addr 0x5f45008, size 0x3c, virtual false, abstract: false, final false
  static inline void ExecuteNoPostProcessPass(::GlobalNamespace::MainEffectPostRenderPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method ExecutePyramidBloomPass, addr 0x5f44d94, size 0x274, virtual false, abstract: false, final false
  static inline void ExecutePyramidBloomPass(::GlobalNamespace::MainEffectPostRenderPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  static inline ::GlobalNamespace::MainEffectPostRenderPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method RecordRenderGraph, addr 0x5f43f38, size 0xe5c, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x5f435c0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPostRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectPostRenderPass(MainEffectPostRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectPostRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectPostRenderPass(MainEffectPostRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectPostRenderPass) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
