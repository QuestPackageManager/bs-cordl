#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextContainerAnchors_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextContainer)
namespace TMPro {
struct TextContainerAnchors;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
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
namespace TMPro {
class TextContainer;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TextContainer);
// Type: TMPro::TextContainer
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10246)),
// TypeDefinitionIndex(TypeDefinitionIndex(12305)), TypeDefinitionIndex(TypeDefinitionIndex(10165))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12306)) CS Name: ::TMPro::TextContainer*
class CORDL_TYPE TextContainer : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_hasChanged, offset 0x18, size 0x1
  __declspec(property(get = __get_m_hasChanged, put = __set_m_hasChanged)) bool m_hasChanged;

  /// @brief Field m_pivot, offset 0x1c, size 0x8
  __declspec(property(get = __get_m_pivot, put = __set_m_pivot))::UnityEngine::Vector2 m_pivot;

  /// @brief Field m_anchorPosition, offset 0x24, size 0x4
  __declspec(property(get = __get_m_anchorPosition, put = __set_m_anchorPosition))::TMPro::TextContainerAnchors m_anchorPosition;

  /// @brief Field m_rect, offset 0x28, size 0x10
  __declspec(property(get = __get_m_rect, put = __set_m_rect))::UnityEngine::Rect m_rect;

  /// @brief Field m_isDefaultWidth, offset 0x38, size 0x1
  __declspec(property(get = __get_m_isDefaultWidth, put = __set_m_isDefaultWidth)) bool m_isDefaultWidth;

  /// @brief Field m_isDefaultHeight, offset 0x39, size 0x1
  __declspec(property(get = __get_m_isDefaultHeight, put = __set_m_isDefaultHeight)) bool m_isDefaultHeight;

  /// @brief Field m_isAutoFitting, offset 0x3a, size 0x1
  __declspec(property(get = __get_m_isAutoFitting, put = __set_m_isAutoFitting)) bool m_isAutoFitting;

  /// @brief Field m_corners, offset 0x40, size 0x8
  __declspec(property(get = __get_m_corners, put = __set_m_corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_corners;

  /// @brief Field m_worldCorners, offset 0x48, size 0x8
  __declspec(property(get = __get_m_worldCorners, put = __set_m_worldCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_worldCorners;

  /// @brief Field m_margins, offset 0x50, size 0x10
  __declspec(property(get = __get_m_margins, put = __set_m_margins))::UnityEngine::Vector4 m_margins;

  /// @brief Field m_rectTransform, offset 0x60, size 0x8
  __declspec(property(get = __get_m_rectTransform, put = __set_m_rectTransform))::UnityEngine::RectTransform* m_rectTransform;

  /// @brief Field m_textMeshPro, offset 0x68, size 0x8
  __declspec(property(get = __get_m_textMeshPro, put = __set_m_textMeshPro))::TMPro::TextMeshPro* m_textMeshPro;

  /// @brief Field k_defaultSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_defaultSize, put = setStaticF_k_defaultSize))::UnityEngine::Vector2 k_defaultSize;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_pivot, put = set_pivot))::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_anchorPosition, put = set_anchorPosition))::TMPro::TextContainerAnchors anchorPosition;

  __declspec(property(get = get_rect, put = set_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector2 size;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_isDefaultWidth)) bool isDefaultWidth;

  __declspec(property(get = get_isDefaultHeight)) bool isDefaultHeight;

  __declspec(property(get = get_isAutoFitting, put = set_isAutoFitting)) bool isAutoFitting;

  __declspec(property(get = get_corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners;

  __declspec(property(get = get_worldCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> worldCorners;

  __declspec(property(get = get_margins, put = set_margins))::UnityEngine::Vector4 margins;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_textMeshPro))::TMPro::TextMeshPro* textMeshPro;

  constexpr bool& __get_m_hasChanged();

  constexpr bool const& __get_m_hasChanged() const;

  constexpr void __set_m_hasChanged(bool value);

  constexpr ::UnityEngine::Vector2& __get_m_pivot();

  constexpr ::UnityEngine::Vector2 const& __get_m_pivot() const;

  constexpr void __set_m_pivot(::UnityEngine::Vector2 value);

  constexpr ::TMPro::TextContainerAnchors& __get_m_anchorPosition();

  constexpr ::TMPro::TextContainerAnchors const& __get_m_anchorPosition() const;

  constexpr void __set_m_anchorPosition(::TMPro::TextContainerAnchors value);

  constexpr ::UnityEngine::Rect& __get_m_rect();

  constexpr ::UnityEngine::Rect const& __get_m_rect() const;

  constexpr void __set_m_rect(::UnityEngine::Rect value);

  constexpr bool& __get_m_isDefaultWidth();

  constexpr bool const& __get_m_isDefaultWidth() const;

  constexpr void __set_m_isDefaultWidth(bool value);

  constexpr bool& __get_m_isDefaultHeight();

  constexpr bool const& __get_m_isDefaultHeight() const;

  constexpr void __set_m_isDefaultHeight(bool value);

  constexpr bool& __get_m_isAutoFitting();

  constexpr bool const& __get_m_isAutoFitting() const;

  constexpr void __set_m_isAutoFitting(bool value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_corners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_corners() const;

  constexpr void __set_m_corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_worldCorners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_worldCorners() const;

  constexpr void __set_m_worldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::UnityEngine::Vector4& __get_m_margins();

  constexpr ::UnityEngine::Vector4 const& __get_m_margins() const;

  constexpr void __set_m_margins(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::RectTransform*& __get_m_rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_rectTransform() const;

  constexpr void __set_m_rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::TMPro::TextMeshPro*& __get_m_textMeshPro();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get_m_textMeshPro() const;

  constexpr void __set_m_textMeshPro(::TMPro::TextMeshPro* value);

  static inline void setStaticF_k_defaultSize(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_k_defaultSize();

  /// @brief Method get_hasChanged, addr 0x2bf0238, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method set_hasChanged, addr 0x2bf0240, size 0xc, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method get_pivot, addr 0x2bf024c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method set_pivot, addr 0x2bf0254, size 0x58, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector2 value);

  /// @brief Method get_anchorPosition, addr 0x2bf04ec, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextContainerAnchors get_anchorPosition();

  /// @brief Method set_anchorPosition, addr 0x2bf04f4, size 0x3c, virtual false, abstract: false, final false
  inline void set_anchorPosition(::TMPro::TextContainerAnchors value);

  /// @brief Method get_rect, addr 0x2bf05a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method set_rect, addr 0x2bf05b4, size 0x7c, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method get_size, addr 0x2bf0630, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method set_size, addr 0x2bf066c, size 0xa8, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method get_width, addr 0x2bf0794, size 0xc, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Method set_width, addr 0x2bf07a0, size 0x48, virtual false, abstract: false, final false
  inline void set_width(float_t value);

  /// @brief Method get_height, addr 0x2bf07e8, size 0xc, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method set_height, addr 0x2bf07f4, size 0x44, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method get_isDefaultWidth, addr 0x2bf0838, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultWidth();

  /// @brief Method get_isDefaultHeight, addr 0x2bf0840, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultHeight();

  /// @brief Method get_isAutoFitting, addr 0x2bf0848, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAutoFitting();

  /// @brief Method set_isAutoFitting, addr 0x2bf0850, size 0xc, virtual false, abstract: false, final false
  inline void set_isAutoFitting(bool value);

  /// @brief Method get_corners, addr 0x2bf085c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_corners();

  /// @brief Method get_worldCorners, addr 0x2bf0864, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_worldCorners();

  /// @brief Method get_margins, addr 0x2bf086c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_margins();

  /// @brief Method set_margins, addr 0x2bf0878, size 0x5c, virtual false, abstract: false, final false
  inline void set_margins(::UnityEngine::Vector4 value);

  /// @brief Method get_rectTransform, addr 0x2bf08d4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method get_textMeshPro, addr 0x2bf0968, size 0x94, virtual false, abstract: false, final false
  inline ::TMPro::TextMeshPro* get_textMeshPro();

  /// @brief Method Awake, addr 0x2bf09fc, size 0xc8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2bf0ac4, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2bf0ac8, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnContainerChanged, addr 0x2bf039c, size 0x150, virtual false, abstract: false, final false
  inline void OnContainerChanged();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2bf0ca4, size 0x160, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method SetRect, addr 0x2bf0714, size 0x80, virtual false, abstract: false, final false
  inline void SetRect(::UnityEngine::Vector2 size);

  /// @brief Method UpdateCorners, addr 0x2bf0acc, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdateCorners();

  /// @brief Method GetPivot, addr 0x2bf0530, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPivot(::TMPro::TextContainerAnchors anchor);

  /// @brief Method GetAnchorPosition, addr 0x2bf02ac, size 0xf0, virtual false, abstract: false, final false
  inline ::TMPro::TextContainerAnchors GetAnchorPosition(::UnityEngine::Vector2 pivot);

  static inline ::TMPro::TextContainer* New_ctor();

  /// @brief Method .ctor, addr 0x2bf0e04, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextContainer(TextContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextContainer(TextContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextContainer();

public:
  /// @brief Field m_hasChanged, offset: 0x18, size: 0x1, def value: None
  bool ___m_hasChanged;

  /// @brief Field m_pivot, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_pivot;

  /// @brief Field m_anchorPosition, offset: 0x24, size: 0x4, def value: None
  ::TMPro::TextContainerAnchors ___m_anchorPosition;

  /// @brief Field m_rect, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_rect;

  /// @brief Field m_isDefaultWidth, offset: 0x38, size: 0x1, def value: None
  bool ___m_isDefaultWidth;

  /// @brief Field m_isDefaultHeight, offset: 0x39, size: 0x1, def value: None
  bool ___m_isDefaultHeight;

  /// @brief Field m_isAutoFitting, offset: 0x3a, size: 0x1, def value: None
  bool ___m_isAutoFitting;

  /// @brief Field m_corners, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_corners;

  /// @brief Field m_worldCorners, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_worldCorners;

  /// @brief Field m_margins, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_margins;

  /// @brief Field m_rectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_rectTransform;

  /// @brief Field m_textMeshPro, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ___m_textMeshPro;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextContainer, 0x70>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_hasChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_pivot) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_anchorPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isDefaultWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isDefaultHeight) == 0x39, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isAutoFitting) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_corners) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_worldCorners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_margins) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_rectTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_textMeshPro) == 0x68, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TextContainer);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextContainer*, "TMPro", "TextContainer");
