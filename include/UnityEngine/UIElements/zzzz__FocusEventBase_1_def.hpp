#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusEventBase_1)
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class FocusEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::FocusEventBase_1);
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusEventBase`1<T>
class CORDL_TYPE FocusEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  __declspec(property(get = get_IsFocusDelegated, put = set_IsFocusDelegated)) bool IsFocusDelegated;

  /// @brief Field <IsFocusDelegated>k__BackingField, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsFocusDelegated_k__BackingField, put = __cordl_internal_set__IsFocusDelegated_k__BackingField)) bool _IsFocusDelegated_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__direction_k__BackingField,
                      put = __cordl_internal_set__direction_k__BackingField)) ::UnityEngine::UIElements::FocusChangeDirection* _direction_k__BackingField;

  /// @brief Field <focusController>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__focusController_k__BackingField,
                      put = __cordl_internal_set__focusController_k__BackingField)) ::UnityEngine::UIElements::FocusController* _focusController_k__BackingField;

  /// @brief Field <relatedTarget>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__relatedTarget_k__BackingField,
                      put = __cordl_internal_set__relatedTarget_k__BackingField)) ::UnityEngine::UIElements::Focusable* _relatedTarget_k__BackingField;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::FocusChangeDirection* direction;

  __declspec(property(get = get_focusController, put = set_focusController)) ::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_relatedTarget, put = set_relatedTarget)) ::UnityEngine::UIElements::Focusable* relatedTarget;

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::Focusable* relatedTarget, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                            ::UnityEngine::UIElements::FocusController* focusController, bool bIsFocusDelegated);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::FocusEventBase_1<T>* New_ctor();

  constexpr bool const& __cordl_internal_get__IsFocusDelegated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsFocusDelegated_k__BackingField();

  constexpr ::UnityEngine::UIElements::FocusChangeDirection* const& __cordl_internal_get__direction_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::FocusChangeDirection*& __cordl_internal_get__direction_k__BackingField();

  constexpr ::UnityEngine::UIElements::FocusController* const& __cordl_internal_get__focusController_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::FocusController*& __cordl_internal_get__focusController_k__BackingField();

  constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get__relatedTarget_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get__relatedTarget_k__BackingField();

  constexpr void __cordl_internal_set__IsFocusDelegated_k__BackingField(bool value);

  constexpr void __cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  constexpr void __cordl_internal_set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value);

  constexpr void __cordl_internal_set__relatedTarget_k__BackingField(::UnityEngine::UIElements::Focusable* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsFocusDelegated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsFocusDelegated();

  /// @brief Method get_direction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FocusChangeDirection* get_direction();

  /// @brief Method get_focusController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_relatedTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Focusable* get_relatedTarget();

  /// @brief Method set_IsFocusDelegated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_IsFocusDelegated(bool value);

  /// @brief Method set_direction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::FocusChangeDirection* value);

  /// @brief Method set_focusController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_focusController(::UnityEngine::UIElements::FocusController* value);

  /// @brief Method set_relatedTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_relatedTarget(::UnityEngine::UIElements::Focusable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusEventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusEventBase_1(FocusEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusEventBase_1(FocusEventBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5827 };

  /// @brief Field <relatedTarget>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ____relatedTarget_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusChangeDirection* ____direction_k__BackingField;

  /// @brief Field <focusController>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::FocusController* ____focusController_k__BackingField;

  /// @brief Field <IsFocusDelegated>k__BackingField, offset: 0xa0, size: 0x1, def value: None
  bool ____IsFocusDelegated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FocusEventBase_1, "UnityEngine.UIElements", "FocusEventBase`1");
