#pragma once
// IWYU pragma private; include "UnityEngine/UI/Button.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Button)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Button_ButtonClickedEvent;
}
namespace UnityEngine::UI {
class Button__OnFinishSubmit_d__9;
}
// Forward declare root types
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Button_ButtonClickedEvent;
}
namespace UnityEngine::UI {
class Button__OnFinishSubmit_d__9;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Button);
MARK_REF_PTR_T(::UnityEngine::UI::Button_ButtonClickedEvent);
MARK_REF_PTR_T(::UnityEngine::UI::Button__OnFinishSubmit_d__9);
// Dependencies UnityEngine.Events.UnityEvent
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Button/ButtonClickedEvent
class CORDL_TYPE Button_ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent {
public:
  // Declarations
  static inline ::UnityEngine::UI::Button_ButtonClickedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4957430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button_ButtonClickedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button_ButtonClickedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button_ButtonClickedEvent(Button_ButtonClickedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button_ButtonClickedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button_ButtonClickedEvent(Button_ButtonClickedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15033 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Button_ButtonClickedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Button/<OnFinishSubmit>d__9
class CORDL_TYPE Button__OnFinishSubmit_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::Button> __4__this;

  /// @brief Field <elapsedTime>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__3, put = __cordl_internal_set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  /// @brief Field <fadeTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeTime_5__2, put = __cordl_internal_set__fadeTime_5__2)) float_t _fadeTime_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4957608, size 0xf4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::Button__OnFinishSubmit_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x49576fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4957704, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x495773c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4957604, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__3() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__3();

  constexpr float_t const& __cordl_internal_get__fadeTime_5__2() const;

  constexpr float_t& __cordl_internal_get__fadeTime_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__elapsedTime_5__3(float_t value);

  constexpr void __cordl_internal_set__fadeTime_5__2(float_t value);

  /// @brief Method .ctor, addr 0x49575dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button__OnFinishSubmit_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button__OnFinishSubmit_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button__OnFinishSubmit_d__9(Button__OnFinishSubmit_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button__OnFinishSubmit_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button__OnFinishSubmit_d__9(Button__OnFinishSubmit_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15034 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> _____4__this;

  /// @brief Field <fadeTime>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____fadeTime_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Button__OnFinishSubmit_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Button__OnFinishSubmit_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Button__OnFinishSubmit_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Button__OnFinishSubmit_d__9, ____fadeTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Button__OnFinishSubmit_d__9, ____elapsedTime_5__3) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Button__OnFinishSubmit_d__9, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.ISubmitHandler, UnityEngine.UI.Selectable
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Button
class CORDL_TYPE Button : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using ButtonClickedEvent = ::UnityEngine::UI::Button_ButtonClickedEvent;

  using _OnFinishSubmit_d__9 = ::UnityEngine::UI::Button__OnFinishSubmit_d__9;

  /// @brief Field m_OnClick, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnClick, put = __cordl_internal_set_m_OnClick)) ::UnityEngine::UI::Button_ButtonClickedEvent* m_OnClick;

  __declspec(property(get = get_onClick, put = set_onClick)) ::UnityEngine::UI::Button_ButtonClickedEvent* onClick;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  static inline ::UnityEngine::UI::Button* New_ctor();

  /// @brief Method OnFinishSubmit, addr 0x495757c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* OnFinishSubmit();

  /// @brief Method OnPointerClick, addr 0x49574e0, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x4957504, size 0x78, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Press, addr 0x4957448, size 0x98, virtual false, abstract: false, final false
  inline void Press();

  constexpr ::UnityEngine::UI::Button_ButtonClickedEvent* const& __cordl_internal_get_m_OnClick() const;

  constexpr ::UnityEngine::UI::Button_ButtonClickedEvent*& __cordl_internal_get_m_OnClick();

  constexpr void __cordl_internal_set_m_OnClick(::UnityEngine::UI::Button_ButtonClickedEvent* value);

  /// @brief Method .ctor, addr 0x49573a4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_onClick, addr 0x4957438, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button_ButtonClickedEvent* get_onClick();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Method set_onClick, addr 0x4957440, size 0x8, virtual false, abstract: false, final false
  inline void set_onClick(::UnityEngine::UI::Button_ButtonClickedEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button(Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button(Button const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15035 };

  /// @brief Field m_OnClick, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UI::Button_ButtonClickedEvent* ___m_OnClick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Button, ___m_OnClick) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Button, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
NEED_NO_BOX(::UnityEngine::UI::Button_ButtonClickedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button_ButtonClickedEvent*, "UnityEngine.UI", "Button/ButtonClickedEvent");
NEED_NO_BOX(::UnityEngine::UI::Button__OnFinishSubmit_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button__OnFinishSubmit_d__9*, "UnityEngine.UI", "Button/<OnFinishSubmit>d__9");
