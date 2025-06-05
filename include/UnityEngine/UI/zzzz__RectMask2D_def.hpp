#pragma once
// IWYU pragma private; include "UnityEngine/UI/RectMask2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(RectMask2D)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine::UI {
class RectangularVertexClipper;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UI {
class RectMask2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::RectMask2D);
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.ICanvasRaycastFilter, UnityEngine.Rect, UnityEngine.UI.IClipper, UnityEngine.Vector2Int, UnityEngine.Vector4
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.RectMask2D
class CORDL_TYPE RectMask2D : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Canvas)) ::UnityW<::UnityEngine::Canvas> Canvas;

  __declspec(property(get = get_canvasRect)) ::UnityEngine::Rect canvasRect;

  /// @brief Field m_Canvas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_ClipTargets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipTargets, put = __cordl_internal_set_m_ClipTargets)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* m_ClipTargets;

  /// @brief Field m_Clippers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clippers, put = __cordl_internal_set_m_Clippers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* m_Clippers;

  /// @brief Field m_Corners, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Corners, put = __cordl_internal_set_m_Corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  /// @brief Field m_ForceClip, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceClip, put = __cordl_internal_set_m_ForceClip)) bool m_ForceClip;

  /// @brief Field m_LastClipRectCanvasSpace, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_m_LastClipRectCanvasSpace, put = __cordl_internal_set_m_LastClipRectCanvasSpace)) ::UnityEngine::Rect m_LastClipRectCanvasSpace;

  /// @brief Field m_MaskableTargets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskableTargets,
                      put = __cordl_internal_set_m_MaskableTargets)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* m_MaskableTargets;

  /// @brief Field m_Padding, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Padding, put = __cordl_internal_set_m_Padding)) ::UnityEngine::Vector4 m_Padding;

  /// @brief Field m_RectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform)) ::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_ShouldRecalculateClipRects, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldRecalculateClipRects, put = __cordl_internal_set_m_ShouldRecalculateClipRects)) bool m_ShouldRecalculateClipRects;

  /// @brief Field m_Softness, offset 0x74, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Softness, put = __cordl_internal_set_m_Softness)) ::UnityEngine::Vector2Int m_Softness;

  /// @brief Field m_VertexClipper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexClipper, put = __cordl_internal_set_m_VertexClipper)) ::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;

  __declspec(property(get = get_padding, put = set_padding)) ::UnityEngine::Vector4 padding;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_rootCanvasRect)) ::UnityEngine::Rect rootCanvasRect;

  __declspec(property(get = get_softness, put = set_softness)) ::UnityEngine::Vector2Int softness;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::IClipper"
  constexpr operator ::UnityEngine::UI::IClipper*() noexcept;

  /// @brief Method AddClippable, addr 0x4ac35c4, size 0x114, virtual false, abstract: false, final false
  inline void AddClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method IsRaycastLocationValid, addr 0x4ac28d8, size 0xdc, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  static inline ::UnityEngine::UI::RectMask2D* New_ctor();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x4ac389c, size 0x24, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDestroy, addr 0x4ac28b8, size 0x20, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x4ac27e8, size 0xd0, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4ac27b4, size 0x34, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x4ac3878, size 0x24, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method PerformClipping, addr 0x4ac2ab0, size 0x81c, virtual true, abstract: false, final false
  inline void PerformClipping();

  /// @brief Method RemoveClippable, addr 0x4ac36d8, size 0x1a0, virtual false, abstract: false, final false
  inline void RemoveClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method UpdateClipSoftness, addr 0x4ac32cc, size 0x2f8, virtual true, abstract: false, final false
  inline void UpdateClipSoftness();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* const& __cordl_internal_get_m_ClipTargets() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*& __cordl_internal_get_m_ClipTargets();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* const& __cordl_internal_get_m_Clippers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*& __cordl_internal_get_m_Clippers();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Corners();

  constexpr bool const& __cordl_internal_get_m_ForceClip() const;

  constexpr bool& __cordl_internal_get_m_ForceClip();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_LastClipRectCanvasSpace() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_LastClipRectCanvasSpace();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* const& __cordl_internal_get_m_MaskableTargets() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>*& __cordl_internal_get_m_MaskableTargets();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_Padding() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_Padding();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr bool const& __cordl_internal_get_m_ShouldRecalculateClipRects() const;

  constexpr bool& __cordl_internal_get_m_ShouldRecalculateClipRects();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_Softness() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_Softness();

  constexpr ::UnityEngine::UI::RectangularVertexClipper* const& __cordl_internal_get_m_VertexClipper() const;

  constexpr ::UnityEngine::UI::RectangularVertexClipper*& __cordl_internal_get_m_VertexClipper();

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_ClipTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* value);

  constexpr void __cordl_internal_set_m_Clippers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* value);

  constexpr void __cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_ForceClip(bool value);

  constexpr void __cordl_internal_set_m_LastClipRectCanvasSpace(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_MaskableTargets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* value);

  constexpr void __cordl_internal_set_m_Padding(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_ShouldRecalculateClipRects(bool value);

  constexpr void __cordl_internal_set_m_Softness(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_VertexClipper(::UnityEngine::UI::RectangularVertexClipper* value);

  /// @brief Method .ctor, addr 0x4ac2650, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Canvas, addr 0x4ac2454, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_Canvas();

  /// @brief Method get_canvasRect, addr 0x4ac25b4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_canvasRect();

  /// @brief Method get_padding, addr 0x4ac2418, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_padding();

  /// @brief Method get_rectTransform, addr 0x4ac25f8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_rootCanvasRect, addr 0x4ac29b4, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rootCanvasRect();

  /// @brief Method get_softness, addr 0x4ac2434, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_softness();

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IClipper"
  constexpr ::UnityEngine::UI::IClipper* i___UnityEngine__UI__IClipper() noexcept;

  /// @brief Method set_padding, addr 0x4ac2424, size 0x10, virtual false, abstract: false, final false
  inline void set_padding(::UnityEngine::Vector4 value);

  /// @brief Method set_softness, addr 0x4ac243c, size 0x18, virtual false, abstract: false, final false
  inline void set_softness(::UnityEngine::Vector2Int value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectMask2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectMask2D(RectMask2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectMask2D(RectMask2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15123 };

  /// @brief Field m_VertexClipper, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::RectangularVertexClipper* ___m_VertexClipper;

  /// @brief Field m_RectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_MaskableTargets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::MaskableGraphic>>* ___m_MaskableTargets;

  /// @brief Field m_ClipTargets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* ___m_ClipTargets;

  /// @brief Field m_ShouldRecalculateClipRects, offset: 0x40, size: 0x1, def value: None
  bool ___m_ShouldRecalculateClipRects;

  /// @brief Field m_Clippers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* ___m_Clippers;

  /// @brief Field m_LastClipRectCanvasSpace, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_LastClipRectCanvasSpace;

  /// @brief Field m_ForceClip, offset: 0x60, size: 0x1, def value: None
  bool ___m_ForceClip;

  /// @brief Field m_Padding, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_Padding;

  /// @brief Field m_Softness, offset: 0x74, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_Softness;

  /// @brief Field m_Canvas, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_Corners, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_VertexClipper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_RectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_MaskableTargets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ClipTargets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ShouldRecalculateClipRects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Clippers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_LastClipRectCanvasSpace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ForceClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Padding) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Softness) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Canvas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Corners) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::RectMask2D, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::RectMask2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RectMask2D*, "UnityEngine.UI", "RectMask2D");
