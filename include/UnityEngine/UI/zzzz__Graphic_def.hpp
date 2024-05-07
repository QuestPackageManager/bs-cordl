#pragma once
// IWYU pragma private; include "UnityEngine/UI/Graphic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Graphic)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI::CoroutineTween {
struct ColorTween;
}
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class TweenRunner_1;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UI {
class Graphic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Graphic);
// Type: UnityEngine.UI::Graphic
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Graphic*
class CORDL_TYPE Graphic : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field <useLegacyMeshGeneration>k__BackingField, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__useLegacyMeshGeneration_k__BackingField,
                      put = __cordl_internal_set__useLegacyMeshGeneration_k__BackingField)) bool _useLegacyMeshGeneration_k__BackingField;

  __declspec(property(get = get_canvas))::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_canvasRenderer))::UnityW<::UnityEngine::CanvasRenderer> canvasRenderer;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_defaultMaterial))::UnityW<::UnityEngine::Material> defaultMaterial;

  __declspec(property(get = get_depth)) int32_t depth;

  /// @brief Field m_CachedMesh, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedMesh, put = __cordl_internal_set_m_CachedMesh))::UnityW<::UnityEngine::Mesh> m_CachedMesh;

  /// @brief Field m_CachedUvs, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedUvs, put = __cordl_internal_set_m_CachedUvs))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_CachedUvs;

  /// @brief Field m_Canvas, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas))::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_CanvasRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasRenderer, put = __cordl_internal_set_m_CanvasRenderer))::UnityW<::UnityEngine::CanvasRenderer> m_CanvasRenderer;

  /// @brief Field m_Color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color))::UnityEngine::Color m_Color;

  /// @brief Field m_ColorTweenRunner, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorTweenRunner,
                      put = __cordl_internal_set_m_ColorTweenRunner))::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner;

  /// @brief Field m_Material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material))::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_MaterialDirty, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MaterialDirty, put = __cordl_internal_set_m_MaterialDirty)) bool m_MaterialDirty;

  /// @brief Field m_OnDirtyLayoutCallback, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDirtyLayoutCallback, put = __cordl_internal_set_m_OnDirtyLayoutCallback))::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback;

  /// @brief Field m_OnDirtyMaterialCallback, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDirtyMaterialCallback, put = __cordl_internal_set_m_OnDirtyMaterialCallback))::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback;

  /// @brief Field m_OnDirtyVertsCallback, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDirtyVertsCallback, put = __cordl_internal_set_m_OnDirtyVertsCallback))::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback;

  /// @brief Field m_RaycastPadding, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RaycastPadding, put = __cordl_internal_set_m_RaycastPadding))::UnityEngine::Vector4 m_RaycastPadding;

  /// @brief Field m_RaycastTarget, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RaycastTarget, put = __cordl_internal_set_m_RaycastTarget)) bool m_RaycastTarget;

  /// @brief Field m_RaycastTargetCache, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RaycastTargetCache, put = __cordl_internal_set_m_RaycastTargetCache)) bool m_RaycastTargetCache;

  /// @brief Field m_RectTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform))::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_SkipLayoutUpdate, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SkipLayoutUpdate, put = __cordl_internal_set_m_SkipLayoutUpdate)) bool m_SkipLayoutUpdate;

  /// @brief Field m_SkipMaterialUpdate, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SkipMaterialUpdate, put = __cordl_internal_set_m_SkipMaterialUpdate)) bool m_SkipMaterialUpdate;

  /// @brief Field m_VertsDirty, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VertsDirty, put = __cordl_internal_set_m_VertsDirty)) bool m_VertsDirty;

  __declspec(property(get = get_mainTexture))::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_materialForRendering))::UnityW<::UnityEngine::Material> materialForRendering;

  __declspec(property(get = get_raycastPadding, put = set_raycastPadding))::UnityEngine::Vector4 raycastPadding;

  __declspec(property(get = get_raycastTarget, put = set_raycastTarget)) bool raycastTarget;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Field s_DefaultUI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultUI, put = setStaticF_s_DefaultUI))::UnityW<::UnityEngine::Material> s_DefaultUI;

  /// @brief Field s_Mesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Mesh, put = setStaticF_s_Mesh))::UnityW<::UnityEngine::Mesh> s_Mesh;

  /// @brief Field s_VertexHelper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertexHelper, put = setStaticF_s_VertexHelper))::UnityEngine::UI::VertexHelper* s_VertexHelper;

  /// @brief Field s_WhiteTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_WhiteTexture, put = setStaticF_s_WhiteTexture))::UnityW<::UnityEngine::Texture2D> s_WhiteTexture;

  __declspec(property(get = get_useLegacyMeshGeneration, put = set_useLegacyMeshGeneration)) bool useLegacyMeshGeneration;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Method CacheCanvas, addr 0x34b1510, size 0x170, virtual false, abstract: false, final false
  inline void CacheCanvas();

  /// @brief Method CreateColorFromAlpha, addr 0x34b3d34, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color CreateColorFromAlpha(float_t alpha);

  /// @brief Method CrossFadeAlpha, addr 0x34b3d48, size 0x9c, virtual true, abstract: false, final false
  inline void CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale);

  /// @brief Method CrossFadeColor, addr 0x34b3a84, size 0x1c, virtual true, abstract: false, final false
  inline void CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha);

  /// @brief Method CrossFadeColor, addr 0x34b3aa0, size 0x294, virtual true, abstract: false, final false
  inline void CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha, bool useRGB);

  /// @brief Method DoLegacyMeshGeneration, addr 0x34b25a0, size 0x3a0, virtual false, abstract: false, final false
  inline void DoLegacyMeshGeneration();

  /// @brief Method DoMeshGeneration, addr 0x34b2940, size 0x3d4, virtual false, abstract: false, final false
  inline void DoMeshGeneration();

  /// @brief Method GetPixelAdjustedRect, addr 0x34b3378, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetPixelAdjustedRect();

  /// @brief Method GraphicUpdateComplete, addr 0x34b24d4, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method LayoutComplete, addr 0x34b24d0, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  static inline ::UnityEngine::UI::Graphic* New_ctor();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x34b1234, size 0xa8, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x34b2228, size 0x138, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnCullingChanged, addr 0x34b2360, size 0x8c, virtual true, abstract: false, final false
  inline void OnCullingChanged();

  /// @brief Method OnDestroy, addr 0x34b1f80, size 0x104, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x34b34a4, size 0x10, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x34b1e38, size 0x148, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x34b1d08, size 0x130, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFillVBO, addr 0x34b2e50, size 0x4, virtual true, abstract: false, final false
  inline void OnFillVBO(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vbo);

  /// @brief Method OnPopulateMesh, addr 0x34b2e54, size 0x98, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::Mesh* m);

  /// @brief Method OnPopulateMesh, addr 0x34b2eec, size 0x48c, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x34b1188, size 0xac, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x34b145c, size 0xb4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method PixelAdjustPoint, addr 0x34b3944, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point);

  /// @brief Method Raycast, addr 0x34b34b8, size 0x48c, virtual true, abstract: false, final false
  inline bool Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method Rebuild, addr 0x34b23ec, size 0xe4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method RegisterDirtyLayoutCallback, addr 0x34b3de4, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method RegisterDirtyMaterialCallback, addr 0x34b3fe4, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method RegisterDirtyVerticesCallback, addr 0x34b3ee4, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method SetAllDirty, addr 0x34b0e28, size 0x70, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetLayoutDirty, addr 0x34b0f68, size 0xa0, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMaterialDirty, addr 0x34b10f4, size 0x94, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetNativeSize, addr 0x34b34b4, size 0x4, virtual true, abstract: false, final false
  inline void SetNativeSize();

  /// @brief Method SetRaycastDirty, addr 0x34b0e98, size 0xd0, virtual false, abstract: false, final false
  inline void SetRaycastDirty();

  /// @brief Method SetVerticesDirty, addr 0x34b1060, size 0x94, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x34b4174, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UnregisterDirtyLayoutCallback, addr 0x34b3e64, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnregisterDirtyMaterialCallback, addr 0x34b4064, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnregisterDirtyVerticesCallback, addr 0x34b3f64, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UpdateGeometry, addr 0x34b2590, size 0x10, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method UpdateMaterial, addr 0x34b24d8, size 0xb8, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  constexpr bool const& __cordl_internal_get__useLegacyMeshGeneration_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useLegacyMeshGeneration_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_CachedMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_CachedMesh();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get_m_CachedUvs() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get_m_CachedUvs();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& __cordl_internal_get_m_CanvasRenderer() const;

  constexpr ::UnityW<::UnityEngine::CanvasRenderer>& __cordl_internal_get_m_CanvasRenderer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_Color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_Color();

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*& __cordl_internal_get_m_ColorTweenRunner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*> const&
  __cordl_internal_get_m_ColorTweenRunner() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr bool const& __cordl_internal_get_m_MaterialDirty() const;

  constexpr bool& __cordl_internal_get_m_MaterialDirty();

  constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_m_OnDirtyLayoutCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __cordl_internal_get_m_OnDirtyLayoutCallback() const;

  constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_m_OnDirtyMaterialCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __cordl_internal_get_m_OnDirtyMaterialCallback() const;

  constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_m_OnDirtyVertsCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __cordl_internal_get_m_OnDirtyVertsCallback() const;

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_RaycastPadding() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_RaycastPadding();

  constexpr bool const& __cordl_internal_get_m_RaycastTarget() const;

  constexpr bool& __cordl_internal_get_m_RaycastTarget();

  constexpr bool const& __cordl_internal_get_m_RaycastTargetCache() const;

  constexpr bool& __cordl_internal_get_m_RaycastTargetCache();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr bool const& __cordl_internal_get_m_SkipLayoutUpdate() const;

  constexpr bool& __cordl_internal_get_m_SkipLayoutUpdate();

  constexpr bool const& __cordl_internal_get_m_SkipMaterialUpdate() const;

  constexpr bool& __cordl_internal_get_m_SkipMaterialUpdate();

  constexpr bool const& __cordl_internal_get_m_VertsDirty() const;

  constexpr bool& __cordl_internal_get_m_VertsDirty();

  constexpr void __cordl_internal_set__useLegacyMeshGeneration_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CachedMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_CachedUvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_CanvasRenderer(::UnityW<::UnityEngine::CanvasRenderer> value);

  constexpr void __cordl_internal_set_m_Color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ColorTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_MaterialDirty(bool value);

  constexpr void __cordl_internal_set_m_OnDirtyLayoutCallback(::UnityEngine::Events::UnityAction* value);

  constexpr void __cordl_internal_set_m_OnDirtyMaterialCallback(::UnityEngine::Events::UnityAction* value);

  constexpr void __cordl_internal_set_m_OnDirtyVertsCallback(::UnityEngine::Events::UnityAction* value);

  constexpr void __cordl_internal_set_m_RaycastPadding(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_RaycastTarget(bool value);

  constexpr void __cordl_internal_set_m_RaycastTargetCache(bool value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_SkipLayoutUpdate(bool value);

  constexpr void __cordl_internal_set_m_SkipMaterialUpdate(bool value);

  constexpr void __cordl_internal_set_m_VertsDirty(bool value);

  /// @brief Method .ctor, addr 0x34b0d78, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DefaultUI();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_Mesh();

  static inline ::UnityEngine::UI::VertexHelper* getStaticF_s_VertexHelper();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_s_WhiteTexture();

  /// @brief Method get_canvas, addr 0x34b0968, size 0x74, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_canvasRenderer, addr 0x34b1890, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CanvasRenderer> get_canvasRenderer();

  /// @brief Method get_color, addr 0x34b0848, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_defaultGraphicMaterial, addr 0x34b076c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultGraphicMaterial();

  /// @brief Method get_defaultMaterial, addr 0x34b1920, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_depth, addr 0x34b1874, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_mainTexture, addr 0x34b1cb0, size 0x58, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_material, addr 0x34b196c, size 0x88, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_materialForRendering, addr 0x34b1a8c, size 0x224, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_materialForRendering();

  /// @brief Method get_raycastPadding, addr 0x34b0d4c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_raycastPadding();

  /// @brief Method get_raycastTarget, addr 0x34b088c, size 0x8, virtual true, abstract: false, final false
  inline bool get_raycastTarget();

  /// @brief Method get_rectTransform, addr 0x34b1008, size 0x58, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_useLegacyMeshGeneration, addr 0x34b0d64, size 0x8, virtual false, abstract: false, final false
  inline bool get_useLegacyMeshGeneration();

  /// @brief Method get_workerMesh, addr 0x34b2d14, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> get_workerMesh();

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  static inline void setStaticF_s_DefaultUI(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_Mesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF_s_VertexHelper(::UnityEngine::UI::VertexHelper* value);

  static inline void setStaticF_s_WhiteTexture(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method set_color, addr 0x34b0854, size 0x38, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_material, addr 0x34b19f4, size 0x98, virtual true, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_raycastPadding, addr 0x34b0d58, size 0xc, virtual false, abstract: false, final false
  inline void set_raycastPadding(::UnityEngine::Vector4 value);

  /// @brief Method set_raycastTarget, addr 0x34b0894, size 0xd4, virtual true, abstract: false, final false
  inline void set_raycastTarget(bool value);

  /// @brief Method set_useLegacyMeshGeneration, addr 0x34b0d6c, size 0xc, virtual false, abstract: false, final false
  inline void set_useLegacyMeshGeneration(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Graphic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Graphic(Graphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Graphic(Graphic const&) = delete;

  /// @brief Field m_Material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_Color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  /// @brief Field m_SkipLayoutUpdate, offset: 0x30, size: 0x1, def value: None
  bool ___m_SkipLayoutUpdate;

  /// @brief Field m_SkipMaterialUpdate, offset: 0x31, size: 0x1, def value: None
  bool ___m_SkipMaterialUpdate;

  /// @brief Field m_RaycastTarget, offset: 0x32, size: 0x1, def value: None
  bool ___m_RaycastTarget;

  /// @brief Field m_RaycastTargetCache, offset: 0x33, size: 0x1, def value: None
  bool ___m_RaycastTargetCache;

  /// @brief Field m_RaycastPadding, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_RaycastPadding;

  /// @brief Field m_RectTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_CanvasRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasRenderer> ___m_CanvasRenderer;

  /// @brief Field m_Canvas, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_VertsDirty, offset: 0x60, size: 0x1, def value: None
  bool ___m_VertsDirty;

  /// @brief Field m_MaterialDirty, offset: 0x61, size: 0x1, def value: None
  bool ___m_MaterialDirty;

  /// @brief Field m_OnDirtyLayoutCallback, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* ___m_OnDirtyLayoutCallback;

  /// @brief Field m_OnDirtyVertsCallback, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* ___m_OnDirtyVertsCallback;

  /// @brief Field m_OnDirtyMaterialCallback, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* ___m_OnDirtyMaterialCallback;

  /// @brief Field m_CachedMesh, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_CachedMesh;

  /// @brief Field m_CachedUvs, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_CachedUvs;

  /// @brief Field m_ColorTweenRunner, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* ___m_ColorTweenRunner;

  /// @brief Field <useLegacyMeshGeneration>k__BackingField, offset: 0x98, size: 0x1, def value: None
  bool ____useLegacyMeshGeneration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Graphic, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_Material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_Color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_SkipLayoutUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_SkipMaterialUpdate) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_RaycastTarget) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_RaycastTargetCache) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_RaycastPadding) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_RectTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_CanvasRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_Canvas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_VertsDirty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_MaterialDirty) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_OnDirtyLayoutCallback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_OnDirtyVertsCallback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_OnDirtyMaterialCallback) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_CachedMesh) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_CachedUvs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ___m_ColorTweenRunner) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Graphic, ____useLegacyMeshGeneration_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Graphic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Graphic*, "UnityEngine.UI", "Graphic");
