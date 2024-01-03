#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214)), TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13042))
// CS Name: ::UnityEngine.UI::Graphic*
class CORDL_TYPE Graphic : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_Material, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Material, put = __set_m_Material))::UnityEngine::Material* m_Material;

  /// @brief Field m_Color, offset 0x20, size 0x10
  __declspec(property(get = __get_m_Color, put = __set_m_Color))::UnityEngine::Color m_Color;

  /// @brief Field m_SkipLayoutUpdate, offset 0x30, size 0x1
  __declspec(property(get = __get_m_SkipLayoutUpdate, put = __set_m_SkipLayoutUpdate)) bool m_SkipLayoutUpdate;

  /// @brief Field m_SkipMaterialUpdate, offset 0x31, size 0x1
  __declspec(property(get = __get_m_SkipMaterialUpdate, put = __set_m_SkipMaterialUpdate)) bool m_SkipMaterialUpdate;

  /// @brief Field m_RaycastTarget, offset 0x32, size 0x1
  __declspec(property(get = __get_m_RaycastTarget, put = __set_m_RaycastTarget)) bool m_RaycastTarget;

  /// @brief Field m_RaycastTargetCache, offset 0x33, size 0x1
  __declspec(property(get = __get_m_RaycastTargetCache, put = __set_m_RaycastTargetCache)) bool m_RaycastTargetCache;

  /// @brief Field m_RaycastPadding, offset 0x34, size 0x10
  __declspec(property(get = __get_m_RaycastPadding, put = __set_m_RaycastPadding))::UnityEngine::Vector4 m_RaycastPadding;

  /// @brief Field m_RectTransform, offset 0x48, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_CanvasRenderer, offset 0x50, size 0x8
  __declspec(property(get = __get_m_CanvasRenderer, put = __set_m_CanvasRenderer))::UnityEngine::CanvasRenderer* m_CanvasRenderer;

  /// @brief Field m_Canvas, offset 0x58, size 0x8
  __declspec(property(get = __get_m_Canvas, put = __set_m_Canvas))::UnityEngine::Canvas* m_Canvas;

  /// @brief Field m_VertsDirty, offset 0x60, size 0x1
  __declspec(property(get = __get_m_VertsDirty, put = __set_m_VertsDirty)) bool m_VertsDirty;

  /// @brief Field m_MaterialDirty, offset 0x61, size 0x1
  __declspec(property(get = __get_m_MaterialDirty, put = __set_m_MaterialDirty)) bool m_MaterialDirty;

  /// @brief Field m_OnDirtyLayoutCallback, offset 0x68, size 0x8
  __declspec(property(get = __get_m_OnDirtyLayoutCallback, put = __set_m_OnDirtyLayoutCallback))::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback;

  /// @brief Field m_OnDirtyVertsCallback, offset 0x70, size 0x8
  __declspec(property(get = __get_m_OnDirtyVertsCallback, put = __set_m_OnDirtyVertsCallback))::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback;

  /// @brief Field m_OnDirtyMaterialCallback, offset 0x78, size 0x8
  __declspec(property(get = __get_m_OnDirtyMaterialCallback, put = __set_m_OnDirtyMaterialCallback))::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback;

  /// @brief Field m_CachedMesh, offset 0x80, size 0x8
  __declspec(property(get = __get_m_CachedMesh, put = __set_m_CachedMesh))::UnityEngine::Mesh* m_CachedMesh;

  /// @brief Field m_CachedUvs, offset 0x88, size 0x8
  __declspec(property(get = __get_m_CachedUvs, put = __set_m_CachedUvs))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_CachedUvs;

  /// @brief Field m_ColorTweenRunner, offset 0x90, size 0x8
  __declspec(property(get = __get_m_ColorTweenRunner,
                      put = __set_m_ColorTweenRunner))::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* m_ColorTweenRunner;

  /// @brief Field <useLegacyMeshGeneration>k__BackingField, offset 0x98, size 0x1
  __declspec(property(get = __get__useLegacyMeshGeneration_k__BackingField, put = __set__useLegacyMeshGeneration_k__BackingField)) bool _useLegacyMeshGeneration_k__BackingField;

  /// @brief Field s_DefaultUI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultUI, put = setStaticF_s_DefaultUI))::UnityEngine::Material* s_DefaultUI;

  /// @brief Field s_WhiteTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_WhiteTexture, put = setStaticF_s_WhiteTexture))::UnityEngine::Texture2D* s_WhiteTexture;

  /// @brief Field s_Mesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Mesh, put = setStaticF_s_Mesh))::UnityEngine::Mesh* s_Mesh;

  /// @brief Field s_VertexHelper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertexHelper, put = setStaticF_s_VertexHelper))::UnityEngine::UI::VertexHelper* s_VertexHelper;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_raycastTarget, put = set_raycastTarget)) bool raycastTarget;

  __declspec(property(get = get_raycastPadding, put = set_raycastPadding))::UnityEngine::Vector4 raycastPadding;

  __declspec(property(get = get_useLegacyMeshGeneration, put = set_useLegacyMeshGeneration)) bool useLegacyMeshGeneration;

  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_canvas))::UnityEngine::Canvas* canvas;

  __declspec(property(get = get_canvasRenderer))::UnityEngine::CanvasRenderer* canvasRenderer;

  __declspec(property(get = get_defaultMaterial))::UnityEngine::Material* defaultMaterial;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_materialForRendering))::UnityEngine::Material* materialForRendering;

  __declspec(property(get = get_mainTexture))::UnityEngine::Texture* mainTexture;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  constexpr ::UnityEngine::Material*& __get_m_Material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_Material() const;

  constexpr void __set_m_Material(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Color& __get_m_Color();

  constexpr ::UnityEngine::Color const& __get_m_Color() const;

  constexpr void __set_m_Color(::UnityEngine::Color value);

  constexpr bool& __get_m_SkipLayoutUpdate();

  constexpr bool const& __get_m_SkipLayoutUpdate() const;

  constexpr void __set_m_SkipLayoutUpdate(bool value);

  constexpr bool& __get_m_SkipMaterialUpdate();

  constexpr bool const& __get_m_SkipMaterialUpdate() const;

  constexpr void __set_m_SkipMaterialUpdate(bool value);

  constexpr bool& __get_m_RaycastTarget();

  constexpr bool const& __get_m_RaycastTarget() const;

  constexpr void __set_m_RaycastTarget(bool value);

  constexpr bool& __get_m_RaycastTargetCache();

  constexpr bool const& __get_m_RaycastTargetCache() const;

  constexpr void __set_m_RaycastTargetCache(bool value);

  constexpr ::UnityEngine::Vector4& __get_m_RaycastPadding();

  constexpr ::UnityEngine::Vector4 const& __get_m_RaycastPadding() const;

  constexpr void __set_m_RaycastPadding(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::CanvasRenderer*& __get_m_CanvasRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> const& __get_m_CanvasRenderer() const;

  constexpr void __set_m_CanvasRenderer(::UnityEngine::CanvasRenderer* value);

  constexpr ::UnityEngine::Canvas*& __get_m_Canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_m_Canvas() const;

  constexpr void __set_m_Canvas(::UnityEngine::Canvas* value);

  constexpr bool& __get_m_VertsDirty();

  constexpr bool const& __get_m_VertsDirty() const;

  constexpr void __set_m_VertsDirty(bool value);

  constexpr bool& __get_m_MaterialDirty();

  constexpr bool const& __get_m_MaterialDirty() const;

  constexpr void __set_m_MaterialDirty(bool value);

  constexpr ::UnityEngine::Events::UnityAction*& __get_m_OnDirtyLayoutCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __get_m_OnDirtyLayoutCallback() const;

  constexpr void __set_m_OnDirtyLayoutCallback(::UnityEngine::Events::UnityAction* value);

  constexpr ::UnityEngine::Events::UnityAction*& __get_m_OnDirtyVertsCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __get_m_OnDirtyVertsCallback() const;

  constexpr void __set_m_OnDirtyVertsCallback(::UnityEngine::Events::UnityAction* value);

  constexpr ::UnityEngine::Events::UnityAction*& __get_m_OnDirtyMaterialCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __get_m_OnDirtyMaterialCallback() const;

  constexpr void __set_m_OnDirtyMaterialCallback(::UnityEngine::Events::UnityAction* value);

  constexpr ::UnityEngine::Mesh*& __get_m_CachedMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_CachedMesh() const;

  constexpr void __set_m_CachedMesh(::UnityEngine::Mesh* value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get_m_CachedUvs();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get_m_CachedUvs() const;

  constexpr void __set_m_CachedUvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*& __get_m_ColorTweenRunner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>*> const& __get_m_ColorTweenRunner() const;

  constexpr void __set_m_ColorTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* value);

  constexpr bool& __get__useLegacyMeshGeneration_k__BackingField();

  constexpr bool const& __get__useLegacyMeshGeneration_k__BackingField() const;

  constexpr void __set__useLegacyMeshGeneration_k__BackingField(bool value);

  static inline void setStaticF_s_DefaultUI(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_DefaultUI();

  static inline void setStaticF_s_WhiteTexture(::UnityEngine::Texture2D* value);

  static inline ::UnityEngine::Texture2D* getStaticF_s_WhiteTexture();

  static inline void setStaticF_s_Mesh(::UnityEngine::Mesh* value);

  static inline ::UnityEngine::Mesh* getStaticF_s_Mesh();

  static inline void setStaticF_s_VertexHelper(::UnityEngine::UI::VertexHelper* value);

  static inline ::UnityEngine::UI::VertexHelper* getStaticF_s_VertexHelper();

  /// @brief Method get_defaultGraphicMaterial, addr 0x2d5b8d0, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Material* get_defaultGraphicMaterial();

  /// @brief Method get_color, addr 0x2d5b9ac, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2d5b9b8, size 0x38, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_raycastTarget, addr 0x2d5b9f0, size 0x8, virtual true, abstract: false, final false
  inline bool get_raycastTarget();

  /// @brief Method set_raycastTarget, addr 0x2d5b9f8, size 0xd4, virtual true, abstract: false, final false
  inline void set_raycastTarget(bool value);

  /// @brief Method get_raycastPadding, addr 0x2d5beb0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_raycastPadding();

  /// @brief Method set_raycastPadding, addr 0x2d5bebc, size 0xc, virtual false, abstract: false, final false
  inline void set_raycastPadding(::UnityEngine::Vector4 value);

  /// @brief Method get_useLegacyMeshGeneration, addr 0x2d5bec8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useLegacyMeshGeneration();

  /// @brief Method set_useLegacyMeshGeneration, addr 0x2d5bed0, size 0xc, virtual false, abstract: false, final false
  inline void set_useLegacyMeshGeneration(bool value);

  static inline ::UnityEngine::UI::Graphic* New_ctor();

  /// @brief Method .ctor, addr 0x2d5bedc, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetAllDirty, addr 0x2d5bf8c, size 0x70, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetLayoutDirty, addr 0x2d5c0cc, size 0xa0, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetVerticesDirty, addr 0x2d5c1c4, size 0x94, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method SetMaterialDirty, addr 0x2d5c258, size 0x94, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetRaycastDirty, addr 0x2d5bffc, size 0xd0, virtual false, abstract: false, final false
  inline void SetRaycastDirty();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2d5c2ec, size 0xac, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x2d5c398, size 0xa8, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnTransformParentChanged, addr 0x2d5c5c0, size 0xb4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method get_depth, addr 0x2d5c9d8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_rectTransform, addr 0x2d5c16c, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method get_canvas, addr 0x2d5bacc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Canvas* get_canvas();

  /// @brief Method CacheCanvas, addr 0x2d5c674, size 0x170, virtual false, abstract: false, final false
  inline void CacheCanvas();

  /// @brief Method get_canvasRenderer, addr 0x2d5c9f4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::CanvasRenderer* get_canvasRenderer();

  /// @brief Method get_defaultMaterial, addr 0x2d5ca84, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* get_defaultMaterial();

  /// @brief Method get_material, addr 0x2d5cad0, size 0x88, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material, addr 0x2d5cb58, size 0x98, virtual true, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_materialForRendering, addr 0x2d5cbf0, size 0x224, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* get_materialForRendering();

  /// @brief Method get_mainTexture, addr 0x2d5ce14, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Texture* get_mainTexture();

  /// @brief Method OnEnable, addr 0x2d5ce6c, size 0x130, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d5cf9c, size 0x148, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2d5d0e4, size 0x104, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x2d5d38c, size 0x138, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnCullingChanged, addr 0x2d5d4c4, size 0x8c, virtual true, abstract: false, final false
  inline void OnCullingChanged();

  /// @brief Method Rebuild, addr 0x2d5d550, size 0xe4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method LayoutComplete, addr 0x2d5d634, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete, addr 0x2d5d638, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method UpdateMaterial, addr 0x2d5d63c, size 0xb8, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateGeometry, addr 0x2d5d6f4, size 0x10, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method DoMeshGeneration, addr 0x2d5daa4, size 0x3d4, virtual false, abstract: false, final false
  inline void DoMeshGeneration();

  /// @brief Method DoLegacyMeshGeneration, addr 0x2d5d704, size 0x3a0, virtual false, abstract: false, final false
  inline void DoLegacyMeshGeneration();

  /// @brief Method get_workerMesh, addr 0x2d5de78, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh* get_workerMesh();

  /// @brief Method OnFillVBO, addr 0x2d5dfb4, size 0x4, virtual true, abstract: false, final false
  inline void OnFillVBO(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vbo);

  /// @brief Method OnPopulateMesh, addr 0x2d5dfb8, size 0x98, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::Mesh* m);

  /// @brief Method OnPopulateMesh, addr 0x2d5e050, size 0x48c, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2d5e608, size 0x10, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method SetNativeSize, addr 0x2d5e618, size 0x4, virtual true, abstract: false, final false
  inline void SetNativeSize();

  /// @brief Method Raycast, addr 0x2d5e61c, size 0x48c, virtual true, abstract: false, final false
  inline bool Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method PixelAdjustPoint, addr 0x2d5eaa8, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point);

  /// @brief Method GetPixelAdjustedRect, addr 0x2d5e4dc, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetPixelAdjustedRect();

  /// @brief Method CrossFadeColor, addr 0x2d5ebe8, size 0x1c, virtual true, abstract: false, final false
  inline void CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha);

  /// @brief Method CrossFadeColor, addr 0x2d5ec04, size 0x294, virtual true, abstract: false, final false
  inline void CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha, bool useRGB);

  /// @brief Method CreateColorFromAlpha, addr 0x2d5ee98, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color CreateColorFromAlpha(float_t alpha);

  /// @brief Method CrossFadeAlpha, addr 0x2d5eeac, size 0x9c, virtual true, abstract: false, final false
  inline void CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale);

  /// @brief Method RegisterDirtyLayoutCallback, addr 0x2d5ef48, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnregisterDirtyLayoutCallback, addr 0x2d5efc8, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyLayoutCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method RegisterDirtyVerticesCallback, addr 0x2d5f048, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnregisterDirtyVerticesCallback, addr 0x2d5f0c8, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyVerticesCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method RegisterDirtyMaterialCallback, addr 0x2d5f148, size 0x80, virtual false, abstract: false, final false
  inline void RegisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnregisterDirtyMaterialCallback, addr 0x2d5f1c8, size 0x80, virtual false, abstract: false, final false
  inline void UnregisterDirtyMaterialCallback(::UnityEngine::Events::UnityAction* action);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x2d5f2d8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Graphic(Graphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Graphic(Graphic const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Graphic();

public:
  /// @brief Field m_Material, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_Material;

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
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_CanvasRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::CanvasRenderer* ___m_CanvasRenderer;

  /// @brief Field m_Canvas, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Canvas* ___m_Canvas;

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
  ::UnityEngine::Mesh* ___m_CachedMesh;

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
