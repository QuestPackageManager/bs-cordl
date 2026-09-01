#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorInitializePass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
CORDL_MODULE_EXPORT(PlanarMirrorInitializePass)
namespace GlobalNamespace {
class MirrorRendererSO;
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
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class PlanarMirrorInitializePass;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlanarMirrorInitializePass*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorInitializePass*, "", "PlanarMirrorInitializePass");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorInitializePass
class CORDL_TYPE PlanarMirrorInitializePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field _mirrorRenderer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer)) ::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _reflectedProjLeft, offset 0x100, size 0x40
  __declspec(property(get = __cordl_internal_get__reflectedProjLeft, put = __cordl_internal_set__reflectedProjLeft)) ::UnityEngine::Matrix4x4 _reflectedProjLeft;

  /// @brief Field _reflectedProjRight, offset 0x180, size 0x40
  __declspec(property(get = __cordl_internal_get__reflectedProjRight, put = __cordl_internal_set__reflectedProjRight)) ::UnityEngine::Matrix4x4 _reflectedProjRight;

  /// @brief Field _reflectedViewLeft, offset 0xc0, size 0x40
  __declspec(property(get = __cordl_internal_get__reflectedViewLeft, put = __cordl_internal_set__reflectedViewLeft)) ::UnityEngine::Matrix4x4 _reflectedViewLeft;

  /// @brief Field _reflectedViewRight, offset 0x140, size 0x40
  __declspec(property(get = __cordl_internal_get__reflectedViewRight, put = __cordl_internal_set__reflectedViewRight)) ::UnityEngine::Matrix4x4 _reflectedViewRight;

  static inline ::GlobalNamespace::PlanarMirrorInitializePass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer);

  /// @brief Method RecordRenderGraph, addr 0x5f48e9c, size 0x1f8, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetReflectedMatricesLeft, addr 0x5f485d8, size 0x24, virtual false, abstract: false, final false
  inline void SetReflectedMatricesLeft(::UnityEngine::Matrix4x4 reflectedViewLeft, ::UnityEngine::Matrix4x4 reflectedProjLeft);

  /// @brief Method SetReflectedMatricesRight, addr 0x5f48898, size 0x24, virtual false, abstract: false, final false
  inline void SetReflectedMatricesRight(::UnityEngine::Matrix4x4 reflectedViewRight, ::UnityEngine::Matrix4x4 reflectedProjRight);

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__reflectedProjLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__reflectedProjLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__reflectedProjRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__reflectedProjRight();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__reflectedViewLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__reflectedViewLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__reflectedViewRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__reflectedViewRight();

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__reflectedProjLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__reflectedProjRight(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__reflectedViewLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__reflectedViewRight(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x5f48dac, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorInitializePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorInitializePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorInitializePass(PlanarMirrorInitializePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorInitializePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorInitializePass(PlanarMirrorInitializePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20657 };

  /// @brief Field _mirrorRenderer, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _reflectedViewLeft, offset: 0xc0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____reflectedViewLeft;

  /// @brief Field _reflectedProjLeft, offset: 0x100, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____reflectedProjLeft;

  /// @brief Field _reflectedViewRight, offset: 0x140, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____reflectedViewRight;

  /// @brief Field _reflectedProjRight, offset: 0x180, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____reflectedProjRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlanarMirrorInitializePass, ____mirrorRenderer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorInitializePass, ____reflectedViewLeft) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorInitializePass, ____reflectedProjLeft) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorInitializePass, ____reflectedViewRight) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorInitializePass, ____reflectedProjRight) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlanarMirrorInitializePass) == 0x1c0, "Size mismatch!");

} // namespace GlobalNamespace
