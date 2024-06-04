#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TooltipEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooltipEvent)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TooltipEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TooltipEvent);
// Type: UnityEngine.UIElements::TooltipEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TooltipEvent*
class CORDL_TYPE TooltipEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::TooltipEvent*> {
public:
  // Declarations
  /// @brief Field <rect>k__BackingField, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__rect_k__BackingField, put = __cordl_internal_set__rect_k__BackingField))::UnityEngine::Rect _rect_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tooltip_k__BackingField, put = __cordl_internal_set__tooltip_k__BackingField))::StringW _tooltip_k__BackingField;

  __declspec(property(put = set_rect))::UnityEngine::Rect rect;

  __declspec(property(put = set_tooltip))::StringW tooltip;

  /// @brief Method Init, addr 0x35cd394, size 0x90, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35cd424, size 0x5c, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::TooltipEvent* New_ctor();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__rect_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__rect_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__tooltip_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__tooltip_k__BackingField();

  constexpr void __cordl_internal_set__rect_k__BackingField(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__tooltip_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x35cd49c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_rect, addr 0x35cd388, size 0xc, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_tooltip, addr 0x35cd380, size 0x8, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooltipEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TooltipEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooltipEvent(TooltipEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooltipEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooltipEvent(TooltipEvent const&) = delete;

  /// @brief Field <tooltip>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____tooltip_k__BackingField;

  /// @brief Field <rect>k__BackingField, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rect ____rect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TooltipEvent, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TooltipEvent, ____tooltip_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TooltipEvent, ____rect_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TooltipEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TooltipEvent*, "UnityEngine.UIElements", "TooltipEvent");
