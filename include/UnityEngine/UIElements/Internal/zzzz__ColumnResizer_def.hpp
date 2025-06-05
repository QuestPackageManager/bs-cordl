#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/ColumnResizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColumnResizer)
namespace UnityEngine::UIElements::Internal {
class MultiColumnCollectionHeader;
}
namespace UnityEngine::UIElements {
class ColumnLayout;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class ColumnResizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::ColumnResizer);
// Dependencies UnityEngine.UIElements.PointerManipulator, UnityEngine.Vector2
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: UnityEngine.UIElements.Internal.ColumnResizer
class CORDL_TYPE ColumnResizer : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field <columnLayout>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__columnLayout_k__BackingField,
                      put = __cordl_internal_set__columnLayout_k__BackingField)) ::UnityEngine::UIElements::ColumnLayout* _columnLayout_k__BackingField;

  /// @brief Field <preview>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__preview_k__BackingField, put = __cordl_internal_set__preview_k__BackingField)) bool _preview_k__BackingField;

  __declspec(property(get = get_columnLayout, put = set_columnLayout)) ::UnityEngine::UIElements::ColumnLayout* columnLayout;

  /// @brief Field m_Active, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_Column, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Column, put = __cordl_internal_set_m_Column)) ::UnityEngine::UIElements::Column* m_Column;

  /// @brief Field m_Header, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header)) ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* m_Header;

  /// @brief Field m_PreviewElement, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviewElement, put = __cordl_internal_set_m_PreviewElement)) ::UnityEngine::UIElements::VisualElement* m_PreviewElement;

  /// @brief Field m_Resizing, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Resizing, put = __cordl_internal_set_m_Resizing)) bool m_Resizing;

  /// @brief Field m_Start, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start)) ::UnityEngine::Vector2 m_Start;

  __declspec(property(get = get_preview, put = set_preview)) bool preview;

  /// @brief Method BeginDragResize, addr 0x49e5c8c, size 0x48, virtual false, abstract: false, final false
  inline void BeginDragResize(float_t pos);

  /// @brief Method DragResize, addr 0x49e5dd0, size 0x40, virtual false, abstract: false, final false
  inline void DragResize(float_t pos);

  /// @brief Method EndDragResize, addr 0x49e5a28, size 0x5c, virtual false, abstract: false, final false
  inline void EndDragResize(float_t pos, bool cancelled);

  static inline ::UnityEngine::UIElements::Internal::ColumnResizer* New_ctor(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnKeyDown, addr 0x49e59b4, size 0x74, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e);

  /// @brief Method OnPointerDown, addr 0x49e5a84, size 0x208, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* e);

  /// @brief Method OnPointerMove, addr 0x49e5cd4, size 0xfc, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* e);

  /// @brief Method OnPointerUp, addr 0x49e5e10, size 0x130, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* e);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x49e552c, size 0x244, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x49e5770, size 0x244, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method UpdatePreviewPosition, addr 0x49e5f40, size 0x108, virtual false, abstract: false, final false
  inline void UpdatePreviewPosition();

  constexpr ::UnityEngine::UIElements::ColumnLayout* const& __cordl_internal_get__columnLayout_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get__columnLayout_k__BackingField();

  constexpr bool const& __cordl_internal_get__preview_k__BackingField() const;

  constexpr bool& __cordl_internal_get__preview_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get_m_Column() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get_m_Column();

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& __cordl_internal_get_m_Header() const;

  constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& __cordl_internal_get_m_Header();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_PreviewElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PreviewElement();

  constexpr bool const& __cordl_internal_get_m_Resizing() const;

  constexpr bool& __cordl_internal_get_m_Resizing();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Start() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Start();

  constexpr void __cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set__preview_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr void __cordl_internal_set_m_Column(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set_m_Header(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value);

  constexpr void __cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Resizing(bool value);

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x49e546c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Column* column);

  /// @brief Method get_columnLayout, addr 0x49e5448, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ColumnLayout* get_columnLayout();

  /// @brief Method get_preview, addr 0x49e5458, size 0x8, virtual false, abstract: false, final false
  inline bool get_preview();

  /// @brief Method set_columnLayout, addr 0x49e5450, size 0x8, virtual false, abstract: false, final false
  inline void set_columnLayout(::UnityEngine::UIElements::ColumnLayout* value);

  /// @brief Method set_preview, addr 0x49e5460, size 0xc, virtual false, abstract: false, final false
  inline void set_preview(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnResizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnResizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnResizer(ColumnResizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnResizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnResizer(ColumnResizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6503 };

  /// @brief Field m_Start, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Start;

  /// @brief Field m_Active, offset: 0x38, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_Resizing, offset: 0x39, size: 0x1, def value: None
  bool ___m_Resizing;

  /// @brief Field m_Header, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* ___m_Header;

  /// @brief Field m_Column, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ___m_Column;

  /// @brief Field m_PreviewElement, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PreviewElement;

  /// @brief Field <columnLayout>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* ____columnLayout_k__BackingField;

  /// @brief Field <preview>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____preview_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_Start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_Active) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_Resizing) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_Header) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_Column) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ___m_PreviewElement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ____columnLayout_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Internal::ColumnResizer, ____preview_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::ColumnResizer, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::ColumnResizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::ColumnResizer*, "UnityEngine.UIElements.Internal", "ColumnResizer");
