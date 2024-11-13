#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerMoveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerMoveEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __PointerMoveEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class __PointerMoveEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerMoveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerMoveEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerMoveEvent::<>c*
class CORDL_TYPE __PointerMoveEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerMoveEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerMoveEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49cbc7c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerMoveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49cbc74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerMoveEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerMoveEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerMoveEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerMoveEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerMoveEvent____c(__PointerMoveEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerMoveEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerMoveEvent____c(__PointerMoveEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5883 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerMoveEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerMoveEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 263, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerMoveEvent*
class CORDL_TYPE PointerMoveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerMoveEvent____c;

  /// @brief Field <isHandledByDraggable>k__BackingField, offset 0x106, size 0x1
  __declspec(property(get = __cordl_internal_get__isHandledByDraggable_k__BackingField, put = __cordl_internal_set__isHandledByDraggable_k__BackingField)) bool _isHandledByDraggable_k__BackingField;

  __declspec(property(get = get_isHandledByDraggable, put = set_isHandledByDraggable)) bool isHandledByDraggable;

  /// @brief Method Init, addr 0x49cb3cc, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49cb41c, size 0x10c, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerMoveEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x49cb578, size 0x6a0, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  constexpr bool const& __cordl_internal_get__isHandledByDraggable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isHandledByDraggable_k__BackingField();

  constexpr void __cordl_internal_set__isHandledByDraggable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x49cb528, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isHandledByDraggable, addr 0x49cb3b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isHandledByDraggable();

  /// @brief Method set_isHandledByDraggable, addr 0x49cb3c0, size 0xc, virtual false, abstract: false, final false
  inline void set_isHandledByDraggable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerMoveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerMoveEvent(PointerMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerMoveEvent(PointerMoveEvent const&) = delete;

  /// @brief Field <isHandledByDraggable>k__BackingField, offset: 0x106, size: 0x1, def value: None
  bool ____isHandledByDraggable_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerMoveEvent, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerMoveEvent, ____isHandledByDraggable_k__BackingField) == 0x106, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerMoveEvent*, "UnityEngine.UIElements", "PointerMoveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerMoveEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerMoveEvent____c*, "UnityEngine.UIElements", "PointerMoveEvent/<>c");
