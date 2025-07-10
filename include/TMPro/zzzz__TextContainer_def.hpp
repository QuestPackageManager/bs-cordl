#pragma once
// IWYU pragma private; include "TMPro/TextContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextContainerAnchors_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
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
// Dependencies TMPro.TextContainerAnchors, UnityEngine.EventSystems.UIBehaviour, UnityEngine.Rect, UnityEngine.Vector2, UnityEngine.Vector4
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TextContainer
class CORDL_TYPE TextContainer : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_anchorPosition, put = set_anchorPosition)) ::TMPro::TextContainerAnchors anchorPosition;

  __declspec(property(get = get_corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners;

  __declspec(property(get = get_hasChanged, put = set_hasChanged)) bool hasChanged;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_isAutoFitting, put = set_isAutoFitting)) bool isAutoFitting;

  __declspec(property(get = get_isDefaultHeight)) bool isDefaultHeight;

  __declspec(property(get = get_isDefaultWidth)) bool isDefaultWidth;

  /// @brief Field k_defaultSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_defaultSize, put = setStaticF_k_defaultSize)) ::UnityEngine::Vector2 k_defaultSize;

  /// @brief Field m_anchorPosition, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_anchorPosition, put = __cordl_internal_set_m_anchorPosition)) ::TMPro::TextContainerAnchors m_anchorPosition;

  /// @brief Field m_corners, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_corners, put = __cordl_internal_set_m_corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_corners;

  /// @brief Field m_hasChanged, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasChanged, put = __cordl_internal_set_m_hasChanged)) bool m_hasChanged;

  /// @brief Field m_isAutoFitting, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isAutoFitting, put = __cordl_internal_set_m_isAutoFitting)) bool m_isAutoFitting;

  /// @brief Field m_isDefaultHeight, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isDefaultHeight, put = __cordl_internal_set_m_isDefaultHeight)) bool m_isDefaultHeight;

  /// @brief Field m_isDefaultWidth, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isDefaultWidth, put = __cordl_internal_set_m_isDefaultWidth)) bool m_isDefaultWidth;

  /// @brief Field m_margins, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_margins, put = __cordl_internal_set_m_margins)) ::UnityEngine::Vector4 m_margins;

  /// @brief Field m_pivot, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pivot, put = __cordl_internal_set_m_pivot)) ::UnityEngine::Vector2 m_pivot;

  /// @brief Field m_rect, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_rect, put = __cordl_internal_set_m_rect)) ::UnityEngine::Rect m_rect;

  /// @brief Field m_rectTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Field m_textMeshPro, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textMeshPro, put = __cordl_internal_set_m_textMeshPro)) ::UnityW<::TMPro::TextMeshPro> m_textMeshPro;

  /// @brief Field m_worldCorners, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_worldCorners, put = __cordl_internal_set_m_worldCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_worldCorners;

  __declspec(property(get = get_margins, put = set_margins)) ::UnityEngine::Vector4 margins;

  __declspec(property(get = get_pivot, put = set_pivot)) ::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_rect, put = set_rect)) ::UnityEngine::Rect rect;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector2 size;

  __declspec(property(get = get_textMeshPro)) ::UnityW<::TMPro::TextMeshPro> textMeshPro;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  __declspec(property(get = get_worldCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> worldCorners;

  /// @brief Method Awake, addr 0x47b6318, size 0xc8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetAnchorPosition, addr 0x47b5db4, size 0xf8, virtual false, abstract: false, final false
  inline ::TMPro::TextContainerAnchors GetAnchorPosition(::UnityEngine::Vector2 pivot);

  /// @brief Method GetPivot, addr 0x47b6000, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPivot(::TMPro::TextContainerAnchors anchor);

  static inline ::TMPro::TextContainer* New_ctor();

  /// @brief Method OnContainerChanged, addr 0x47b5eac, size 0x110, virtual false, abstract: false, final false
  inline void OnContainerChanged();

  /// @brief Method OnDisable, addr 0x47b63e4, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x47b63e0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x47b653c, size 0x15c, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method SetRect, addr 0x47b6114, size 0x8, virtual false, abstract: false, final false
  inline void SetRect(::UnityEngine::Vector2 size);

  /// @brief Method UpdateCorners, addr 0x47b63e8, size 0x154, virtual false, abstract: false, final false
  inline void UpdateCorners();

  constexpr ::TMPro::TextContainerAnchors const& __cordl_internal_get_m_anchorPosition() const;

  constexpr ::TMPro::TextContainerAnchors& __cordl_internal_get_m_anchorPosition();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_corners();

  constexpr bool const& __cordl_internal_get_m_hasChanged() const;

  constexpr bool& __cordl_internal_get_m_hasChanged();

  constexpr bool const& __cordl_internal_get_m_isAutoFitting() const;

  constexpr bool& __cordl_internal_get_m_isAutoFitting();

  constexpr bool const& __cordl_internal_get_m_isDefaultHeight() const;

  constexpr bool& __cordl_internal_get_m_isDefaultHeight();

  constexpr bool const& __cordl_internal_get_m_isDefaultWidth() const;

  constexpr bool& __cordl_internal_get_m_isDefaultWidth();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_margins() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_margins();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_pivot() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_pivot();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_rect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_rect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_m_textMeshPro() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_m_textMeshPro();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_worldCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_worldCorners();

  constexpr void __cordl_internal_set_m_anchorPosition(::TMPro::TextContainerAnchors value);

  constexpr void __cordl_internal_set_m_corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_hasChanged(bool value);

  constexpr void __cordl_internal_set_m_isAutoFitting(bool value);

  constexpr void __cordl_internal_set_m_isDefaultHeight(bool value);

  constexpr void __cordl_internal_set_m_isDefaultWidth(bool value);

  constexpr void __cordl_internal_set_m_margins(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_pivot(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_rect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_textMeshPro(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set_m_worldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x47b6698, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector2 getStaticF_k_defaultSize();

  /// @brief Method get_anchorPosition, addr 0x47b5fbc, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextContainerAnchors get_anchorPosition();

  /// @brief Method get_corners, addr 0x47b6178, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_corners();

  /// @brief Method get_hasChanged, addr 0x47b5d40, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasChanged();

  /// @brief Method get_height, addr 0x47b6138, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_isAutoFitting, addr 0x47b6164, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAutoFitting();

  /// @brief Method get_isDefaultHeight, addr 0x47b615c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultHeight();

  /// @brief Method get_isDefaultWidth, addr 0x47b6154, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultWidth();

  /// @brief Method get_margins, addr 0x47b6188, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_margins();

  /// @brief Method get_pivot, addr 0x47b5d54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_rect, addr 0x47b6078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rectTransform, addr 0x47b61f0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_size, addr 0x47b60cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method get_textMeshPro, addr 0x47b6284, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TextMeshPro> get_textMeshPro();

  /// @brief Method get_width, addr 0x47b611c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Method get_worldCorners, addr 0x47b6180, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_worldCorners();

  static inline void setStaticF_k_defaultSize(::UnityEngine::Vector2 value);

  /// @brief Method set_anchorPosition, addr 0x47b5fc4, size 0x3c, virtual false, abstract: false, final false
  inline void set_anchorPosition(::TMPro::TextContainerAnchors value);

  /// @brief Method set_hasChanged, addr 0x47b5d48, size 0xc, virtual false, abstract: false, final false
  inline void set_hasChanged(bool value);

  /// @brief Method set_height, addr 0x47b6140, size 0x14, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_isAutoFitting, addr 0x47b616c, size 0xc, virtual false, abstract: false, final false
  inline void set_isAutoFitting(bool value);

  /// @brief Method set_margins, addr 0x47b6194, size 0x5c, virtual false, abstract: false, final false
  inline void set_margins(::UnityEngine::Vector4 value);

  /// @brief Method set_pivot, addr 0x47b5d5c, size 0x58, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector2 value);

  /// @brief Method set_rect, addr 0x47b6084, size 0x48, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_size, addr 0x47b60d4, size 0x40, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method set_width, addr 0x47b6124, size 0x14, virtual false, abstract: false, final false
  inline void set_width(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextContainer(TextContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextContainer(TextContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14428 };

  /// @brief Field m_hasChanged, offset: 0x20, size: 0x1, def value: None
  bool ___m_hasChanged;

  /// @brief Field m_pivot, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_pivot;

  /// @brief Field m_anchorPosition, offset: 0x2c, size: 0x4, def value: None
  ::TMPro::TextContainerAnchors ___m_anchorPosition;

  /// @brief Field m_rect, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_rect;

  /// @brief Field m_isDefaultWidth, offset: 0x40, size: 0x1, def value: None
  bool ___m_isDefaultWidth;

  /// @brief Field m_isDefaultHeight, offset: 0x41, size: 0x1, def value: None
  bool ___m_isDefaultHeight;

  /// @brief Field m_isAutoFitting, offset: 0x42, size: 0x1, def value: None
  bool ___m_isAutoFitting;

  /// @brief Field m_corners, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_corners;

  /// @brief Field m_worldCorners, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_worldCorners;

  /// @brief Field m_margins, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_margins;

  /// @brief Field m_rectTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_rectTransform;

  /// @brief Field m_textMeshPro, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ___m_textMeshPro;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextContainer, ___m_hasChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_pivot) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_anchorPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_rect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isDefaultWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isDefaultHeight) == 0x41, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_isAutoFitting) == 0x42, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_corners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_worldCorners) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_margins) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_rectTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextContainer, ___m_textMeshPro) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextContainer, 0x78>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TextContainer);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextContainer*, "TMPro", "TextContainer");
