#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IClipper;
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
class ICanvasRaycastFilter;
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
// Type: UnityEngine.UI::RectMask2D
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(10244)), TypeDefinitionIndex(TypeDefinitionIndex(13214)),
// TypeDefinitionIndex(TypeDefinitionIndex(10165))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13107)) CS Name: ::UnityEngine.UI::RectMask2D*
class CORDL_TYPE RectMask2D : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_VertexClipper, offset 0x18, size 0x8
  __declspec(property(get = __get_m_VertexClipper, put = __set_m_VertexClipper))::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;

  /// @brief Field m_RectTransform, offset 0x20, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_MaskableTargets, offset 0x28, size 0x8
  __declspec(property(get = __get_m_MaskableTargets, put = __set_m_MaskableTargets))::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets;

  /// @brief Field m_ClipTargets, offset 0x30, size 0x8
  __declspec(property(get = __get_m_ClipTargets, put = __set_m_ClipTargets))::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* m_ClipTargets;

  /// @brief Field m_ShouldRecalculateClipRects, offset 0x38, size 0x1
  __declspec(property(get = __get_m_ShouldRecalculateClipRects, put = __set_m_ShouldRecalculateClipRects)) bool m_ShouldRecalculateClipRects;

  /// @brief Field m_Clippers, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Clippers, put = __set_m_Clippers))::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* m_Clippers;

  /// @brief Field m_LastClipRectCanvasSpace, offset 0x48, size 0x10
  __declspec(property(get = __get_m_LastClipRectCanvasSpace, put = __set_m_LastClipRectCanvasSpace))::UnityEngine::Rect m_LastClipRectCanvasSpace;

  /// @brief Field m_ForceClip, offset 0x58, size 0x1
  __declspec(property(get = __get_m_ForceClip, put = __set_m_ForceClip)) bool m_ForceClip;

  /// @brief Field m_Padding, offset 0x5c, size 0x10
  __declspec(property(get = __get_m_Padding, put = __set_m_Padding))::UnityEngine::Vector4 m_Padding;

  /// @brief Field m_Softness, offset 0x6c, size 0x8
  __declspec(property(get = __get_m_Softness, put = __set_m_Softness))::UnityEngine::Vector2Int m_Softness;

  /// @brief Field m_Canvas, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Canvas, put = __set_m_Canvas))::UnityEngine::Canvas* m_Canvas;

  /// @brief Field m_Corners, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Corners, put = __set_m_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  __declspec(property(get = get_padding, put = set_padding))::UnityEngine::Vector4 padding;

  __declspec(property(get = get_softness, put = set_softness))::UnityEngine::Vector2Int softness;

  __declspec(property(get = get_Canvas))::UnityEngine::Canvas* Canvas;

  __declspec(property(get = get_canvasRect))::UnityEngine::Rect canvasRect;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_rootCanvasRect))::UnityEngine::Rect rootCanvasRect;

  /// @brief Convert operator to "::UnityEngine::UI::IClipper"
  constexpr operator ::UnityEngine::UI::IClipper*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::IClipper"
  constexpr ::UnityEngine::UI::IClipper* i___UnityEngine__UI__IClipper() noexcept;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  constexpr ::UnityEngine::UI::RectangularVertexClipper*& __get_m_VertexClipper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectangularVertexClipper*> const& __get_m_VertexClipper() const;

  constexpr void __set_m_VertexClipper(::UnityEngine::UI::RectangularVertexClipper* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>*& __get_m_MaskableTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>*> const& __get_m_MaskableTargets() const;

  constexpr void __set_m_MaskableTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*& __get_m_ClipTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*> const& __get_m_ClipTargets() const;

  constexpr void __set_m_ClipTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* value);

  constexpr bool& __get_m_ShouldRecalculateClipRects();

  constexpr bool const& __get_m_ShouldRecalculateClipRects() const;

  constexpr void __set_m_ShouldRecalculateClipRects(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*& __get_m_Clippers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*> const& __get_m_Clippers() const;

  constexpr void __set_m_Clippers(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* value);

  constexpr ::UnityEngine::Rect& __get_m_LastClipRectCanvasSpace();

  constexpr ::UnityEngine::Rect const& __get_m_LastClipRectCanvasSpace() const;

  constexpr void __set_m_LastClipRectCanvasSpace(::UnityEngine::Rect value);

  constexpr bool& __get_m_ForceClip();

  constexpr bool const& __get_m_ForceClip() const;

  constexpr void __set_m_ForceClip(bool value);

  constexpr ::UnityEngine::Vector4& __get_m_Padding();

  constexpr ::UnityEngine::Vector4 const& __get_m_Padding() const;

  constexpr void __set_m_Padding(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector2Int& __get_m_Softness();

  constexpr ::UnityEngine::Vector2Int const& __get_m_Softness() const;

  constexpr void __set_m_Softness(::UnityEngine::Vector2Int value);

  constexpr ::UnityEngine::Canvas*& __get_m_Canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_m_Canvas() const;

  constexpr void __set_m_Canvas(::UnityEngine::Canvas* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_Corners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_Corners() const;

  constexpr void __set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_padding, addr 0x2d7f8ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_padding();

  /// @brief Method set_padding, addr 0x2d7f8b8, size 0x10, virtual false, abstract: false, final false
  inline void set_padding(::UnityEngine::Vector4 value);

  /// @brief Method get_softness, addr 0x2d7f8c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_softness();

  /// @brief Method set_softness, addr 0x2d7f8d0, size 0x1c, virtual false, abstract: false, final false
  inline void set_softness(::UnityEngine::Vector2Int value);

  /// @brief Method get_Canvas, addr 0x2d7f8ec, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::Canvas* get_Canvas();

  /// @brief Method get_canvasRect, addr 0x2d7fa4c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_canvasRect();

  /// @brief Method get_rectTransform, addr 0x2d7fa90, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  static inline ::UnityEngine::UI::RectMask2D* New_ctor();

  /// @brief Method .ctor, addr 0x2d7fae8, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnEnable, addr 0x2d7fc40, size 0x34, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d7fc74, size 0xd0, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2d7fd44, size 0x20, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IsRaycastLocationValid, addr 0x2d7fd64, size 0xdc, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method get_rootCanvasRect, addr 0x2d7fe40, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rootCanvasRect();

  /// @brief Method PerformClipping, addr 0x2d7ff5c, size 0x724, virtual true, abstract: false, final false
  inline void PerformClipping();

  /// @brief Method UpdateClipSoftness, addr 0x2d80680, size 0x2f4, virtual true, abstract: false, final false
  inline void UpdateClipSoftness();

  /// @brief Method AddClippable, addr 0x2d80974, size 0x114, virtual false, abstract: false, final false
  inline void AddClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method RemoveClippable, addr 0x2d80a88, size 0x1a0, virtual false, abstract: false, final false
  inline void RemoveClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method OnTransformParentChanged, addr 0x2d80c28, size 0x24, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x2d80c4c, size 0x24, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  // Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectMask2D(RectMask2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectMask2D(RectMask2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectMask2D();

public:
  /// @brief Field m_VertexClipper, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::RectangularVertexClipper* ___m_VertexClipper;

  /// @brief Field m_RectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_MaskableTargets, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* ___m_MaskableTargets;

  /// @brief Field m_ClipTargets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* ___m_ClipTargets;

  /// @brief Field m_ShouldRecalculateClipRects, offset: 0x38, size: 0x1, def value: None
  bool ___m_ShouldRecalculateClipRects;

  /// @brief Field m_Clippers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* ___m_Clippers;

  /// @brief Field m_LastClipRectCanvasSpace, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_LastClipRectCanvasSpace;

  /// @brief Field m_ForceClip, offset: 0x58, size: 0x1, def value: None
  bool ___m_ForceClip;

  /// @brief Field m_Padding, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_Padding;

  /// @brief Field m_Softness, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_Softness;

  /// @brief Field m_Canvas, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Canvas* ___m_Canvas;

  /// @brief Field m_Corners, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::RectMask2D, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_VertexClipper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_RectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_MaskableTargets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ClipTargets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ShouldRecalculateClipRects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Clippers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_LastClipRectCanvasSpace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_ForceClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Padding) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Softness) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Canvas) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectMask2D, ___m_Corners) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::RectMask2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RectMask2D*, "UnityEngine.UI", "RectMask2D");
