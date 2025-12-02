#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ProbeVolumeDebugPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ProbeVolumeDebugPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class ProbeVolumeDebugPass_WriteApvData;
}
namespace UnityEngine::Rendering::Universal {
class ProbeVolumeDebugPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ProbeVolumeDebugPass;
}
namespace UnityEngine::Rendering::Universal {
class ProbeVolumeDebugPass_WriteApvData;
}
namespace UnityEngine::Rendering::Universal {
class ProbeVolumeDebugPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.BufferHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ProbeVolumeDebugPass/WriteApvData
class CORDL_TYPE ProbeVolumeDebugPass_WriteApvData : public ::System::Object {
public:
  // Declarations
  /// @brief Field clickCoordinates, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_clickCoordinates, put = __cordl_internal_set_clickCoordinates)) ::UnityEngine::Vector2 clickCoordinates;

  /// @brief Field computeShader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_computeShader, put = __cordl_internal_set_computeShader)) ::UnityW<::UnityEngine::ComputeShader> computeShader;

  /// @brief Field depthBuffer, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_depthBuffer, put = __cordl_internal_set_depthBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthBuffer;

  /// @brief Field normalBuffer, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_normalBuffer, put = __cordl_internal_set_normalBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle normalBuffer;

  /// @brief Field resultBuffer, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_resultBuffer, put = __cordl_internal_set_resultBuffer)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle resultBuffer;

  static inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* New_ctor();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_clickCoordinates() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_clickCoordinates();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_computeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_computeShader();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_normalBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_normalBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_resultBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_resultBuffer();

  constexpr void __cordl_internal_set_clickCoordinates(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_depthBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_normalBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_resultBuffer(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  /// @brief Method .ctor, addr 0x668222c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebugPass_WriteApvData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass_WriteApvData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebugPass_WriteApvData(ProbeVolumeDebugPass_WriteApvData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass_WriteApvData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebugPass_WriteApvData(ProbeVolumeDebugPass_WriteApvData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12841 };

  /// @brief Field computeShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___computeShader;

  /// @brief Field resultBuffer, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ___resultBuffer;

  /// @brief Field clickCoordinates, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___clickCoordinates;

  /// @brief Field depthBuffer, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthBuffer;

  /// @brief Field normalBuffer, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___normalBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, ___computeShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, ___resultBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, ___clickCoordinates) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, ___depthBuffer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, ___normalBuffer) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ProbeVolumeDebugPass/<>c
class CORDL_TYPE ProbeVolumeDebugPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0,
                      put = setStaticF___9__7_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__7_0;

  static inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* New_ctor();

  /// @brief Method <Render>b__7_0, addr 0x6682288, size 0x1d0, virtual false, abstract: false, final false
  inline void _Render_b__7_0(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx);

  /// @brief Method .ctor, addr 0x6682284, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* value);

  static inline void setStaticF___9__7_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebugPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebugPass___c(ProbeVolumeDebugPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebugPass___c(ProbeVolumeDebugPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ProbeVolumeDebugPass
class CORDL_TYPE ProbeVolumeDebugPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using WriteApvData = ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData;

  using __c = ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c;

  /// @brief Field m_ComputeShader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ComputeShader, put = __cordl_internal_set_m_ComputeShader)) ::UnityW<::UnityEngine::ComputeShader> m_ComputeShader;

  /// @brief Field m_DepthTexture, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthTexture, put = __cordl_internal_set_m_DepthTexture)) ::UnityEngine::Rendering::RTHandle* m_DepthTexture;

  /// @brief Field m_NormalTexture, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NormalTexture, put = __cordl_internal_set_m_NormalTexture)) ::UnityEngine::Rendering::RTHandle* m_NormalTexture;

  /// @brief Method Execute, addr 0x66818e0, size 0x348, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::ComputeShader* computeShader);

  /// @brief Method Render, addr 0x6681c28, size 0x604, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthPyramidBuffer, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle normalBuffer);

  /// @brief Method Setup, addr 0x66818d8, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::RTHandle* normalBuffer);

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_ComputeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_ComputeShader();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthTexture();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_NormalTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_NormalTexture();

  constexpr void __cordl_internal_set_m_ComputeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_NormalTexture(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x6681808, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::ComputeShader* computeShader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebugPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebugPass(ProbeVolumeDebugPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebugPass(ProbeVolumeDebugPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12843 };

  /// @brief Field m_ComputeShader, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_ComputeShader;

  /// @brief Field m_DepthTexture, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DepthTexture;

  /// @brief Field m_NormalTexture, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_NormalTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass, ___m_ComputeShader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass, ___m_DepthTexture) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass, ___m_NormalTexture) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*, "UnityEngine.Rendering.Universal", "ProbeVolumeDebugPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*, "UnityEngine.Rendering.Universal", "ProbeVolumeDebugPass/WriteApvData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*, "UnityEngine.Rendering.Universal", "ProbeVolumeDebugPass/<>c");
