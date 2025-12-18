#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/OverlayCanvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OverlayCanvas)
namespace GlobalNamespace {
class OVROverlay;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class OverlayCanvasPanel;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class OverlayCanvas;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas
class CORDL_TYPE OverlayCanvas : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field FrustumPlanes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FrustumPlanes, put = setStaticF_FrustumPlanes)) ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> FrustumPlanes;

  __declspec(property(get = get_Panel, put = set_Panel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel> Panel;

  /// @brief Field <Panel>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Panel_k__BackingField,
                      put = __cordl_internal_set__Panel_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel>
      _Panel_k__BackingField;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _defaultMat, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultMat, put = __cordl_internal_set__defaultMat)) ::UnityW<::UnityEngine::Material> _defaultMat;

  /// @brief Field _meshRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _overlay, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__overlay, put = __cordl_internal_set__overlay)) ::UnityW<::GlobalNamespace::OVROverlay> _overlay;

  /// @brief Field _quad, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__quad, put = __cordl_internal_set__quad)) ::UnityW<::UnityEngine::Mesh> _quad;

  /// @brief Field _renderTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTexture, put = __cordl_internal_set__renderTexture)) ::UnityW<::UnityEngine::RenderTexture> _renderTexture;

  /// @brief Field _scaleViewport, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__scaleViewport, put = __cordl_internal_set__scaleViewport)) bool _scaleViewport;

  /// @brief Method Init, addr 0x58afe64, size 0x88, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas* New_ctor();

  /// @brief Method OnDestroy, addr 0x58b09b8, size 0x78, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x58b0b28, size 0xf8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58b0a30, size 0xf8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ShouldRender, addr 0x58b0c20, size 0x194, virtual false, abstract: false, final false
  inline bool ShouldRender(::UnityEngine::Camera* baseCamera);

  /// @brief Method Start, addr 0x58afefc, size 0xabc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x58b0db4, size 0x45c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel> const& __cordl_internal_get__Panel_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel>& __cordl_internal_get__Panel_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__defaultMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__defaultMat();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__overlay() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__overlay();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__quad() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__quad();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__renderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__renderTexture();

  constexpr bool const& __cordl_internal_get__scaleViewport() const;

  constexpr bool& __cordl_internal_get__scaleViewport();

  constexpr void __cordl_internal_set__Panel_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel> value);

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__defaultMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set__quad(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__scaleViewport(bool value);

  /// @brief Method .ctor, addr 0x58b1210, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> getStaticF_FrustumPlanes();

  /// @brief Method get_Panel, addr 0x58afeec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel> get_Panel();

  static inline void setStaticF_FrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value);

  /// @brief Method set_Panel, addr 0x58afef4, size 0x8, virtual false, abstract: false, final false
  inline void set_Panel(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverlayCanvas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverlayCanvas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverlayCanvas(OverlayCanvas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverlayCanvas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverlayCanvas(OverlayCanvas const&) = delete;

  /// @brief Field MaxTextureSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxTextureSize{ static_cast<int32_t>(0x640) };

  /// @brief Field MinTextureSize offset 0xffffffff size 0x4
  static constexpr int32_t MinTextureSize{ static_cast<int32_t>(0xc8) };

  /// @brief Field PixelsPerUnit offset 0xffffffff size 0x4
  static constexpr float_t PixelsPerUnit{ static_cast<float_t>(1.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18382 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _overlay, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ____overlay;

  /// @brief Field _renderTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____renderTexture;

  /// @brief Field _meshRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _quad, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____quad;

  /// @brief Field _defaultMat, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____defaultMat;

  /// @brief Field _scaleViewport, offset: 0x50, size: 0x1, def value: None
  bool ____scaleViewport;

  /// @brief Field <Panel>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel> ____Panel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____overlay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____renderTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____meshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____quad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____defaultMat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____scaleViewport) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, ____Panel_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas, 0x60>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "OverlayCanvas");
