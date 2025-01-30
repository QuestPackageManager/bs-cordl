#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TooltipEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooltipEvent)
namespace UnityEngine::UIElements {
class TooltipEvent___c;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TooltipEvent;
}
namespace UnityEngine::UIElements {
class TooltipEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TooltipEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::TooltipEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TooltipEvent/<>c
class CORDL_TYPE TooltipEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::TooltipEvent___c* __9;

  static inline ::UnityEngine::UIElements::TooltipEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a35ba4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TooltipEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a35b9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TooltipEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::TooltipEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooltipEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TooltipEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooltipEvent___c(TooltipEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooltipEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooltipEvent___c(TooltipEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TooltipEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Rect, UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TooltipEvent
class CORDL_TYPE TooltipEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::TooltipEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::TooltipEvent___c;

  /// @brief Field <rect>k__BackingField, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get__rect_k__BackingField, put = __cordl_internal_set__rect_k__BackingField)) ::UnityEngine::Rect _rect_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tooltip_k__BackingField, put = __cordl_internal_set__tooltip_k__BackingField)) ::StringW _tooltip_k__BackingField;

  __declspec(property(put = set_rect)) ::UnityEngine::Rect rect;

  __declspec(property(put = set_tooltip)) ::StringW tooltip;

  /// @brief Method Init, addr 0x4a359a0, size 0x90, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a35a30, size 0x5c, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::TooltipEvent* New_ctor();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__rect_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__rect_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__tooltip_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__tooltip_k__BackingField();

  constexpr void __cordl_internal_set__rect_k__BackingField(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__tooltip_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4a35a8c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_rect, addr 0x4a35994, size 0xc, virtual false, abstract: false, final false
  inline void set_rect(::UnityEngine::Rect value);

  /// @brief Method set_tooltip, addr 0x4a3598c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5934 };

  /// @brief Field <tooltip>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____tooltip_k__BackingField;

  /// @brief Field <rect>k__BackingField, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Rect ____rect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TooltipEvent, ____tooltip_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TooltipEvent, ____rect_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TooltipEvent, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TooltipEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TooltipEvent*, "UnityEngine.UIElements", "TooltipEvent");
NEED_NO_BOX(::UnityEngine::UIElements::TooltipEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TooltipEvent___c*, "UnityEngine.UIElements", "TooltipEvent/<>c");
