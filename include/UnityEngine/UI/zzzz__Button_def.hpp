#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Button)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class __Button__ButtonClickedEvent;
}
namespace UnityEngine::UI {
class __Button___OnFinishSubmit_d__9;
}
// Forward declare root types
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class __Button__ButtonClickedEvent;
}
namespace UnityEngine::UI {
class __Button___OnFinishSubmit_d__9;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Button);
MARK_REF_PTR_T(::UnityEngine::UI::__Button__ButtonClickedEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__Button___OnFinishSubmit_d__9);
// Type: ::ButtonClickedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9240))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12915))
// CS Name: ::Button::ButtonClickedEvent*
class CORDL_TYPE __Button__ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent {
public:
  // Declarations
  static inline ::UnityEngine::UI::__Button__ButtonClickedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2d6f3cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Button__ButtonClickedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Button__ButtonClickedEvent(__Button__ButtonClickedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Button__ButtonClickedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Button__ButtonClickedEvent(__Button__ButtonClickedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Button__ButtonClickedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Button__ButtonClickedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::<OnFinishSubmit>d__9
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12916))
// CS Name: ::Button::<OnFinishSubmit>d__9*
class CORDL_TYPE __Button___OnFinishSubmit_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::Button> __4__this;

  /// @brief Field <fadeTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeTime_5__2, put = __cordl_internal_set__fadeTime_5__2)) float_t _fadeTime_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__3, put = __cordl_internal_set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Button> value);

  constexpr float_t& __cordl_internal_get__fadeTime_5__2();

  constexpr float_t const& __cordl_internal_get__fadeTime_5__2() const;

  constexpr void __cordl_internal_set__fadeTime_5__2(float_t value);

  constexpr float_t& __cordl_internal_get__elapsedTime_5__3();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__3() const;

  constexpr void __cordl_internal_set__elapsedTime_5__3(float_t value);

  static inline ::UnityEngine::UI::__Button___OnFinishSubmit_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2d6f580, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2d6f5a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2d6f5ac, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2d6f668, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2d6f670, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2d6f6b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Button___OnFinishSubmit_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Button___OnFinishSubmit_d__9(__Button___OnFinishSubmit_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Button___OnFinishSubmit_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Button___OnFinishSubmit_d__9(__Button___OnFinishSubmit_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Button___OnFinishSubmit_d__9();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Button___OnFinishSubmit_d__9, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Button___OnFinishSubmit_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Button___OnFinishSubmit_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Button___OnFinishSubmit_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Button___OnFinishSubmit_d__9, ____fadeTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Button___OnFinishSubmit_d__9, ____elapsedTime_5__3) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Button
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13017))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12917))
// CS Name: ::UnityEngine.UI::Button*
class CORDL_TYPE Button : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using _OnFinishSubmit_d__9 = ::UnityEngine::UI::__Button___OnFinishSubmit_d__9;

  using ButtonClickedEvent = ::UnityEngine::UI::__Button__ButtonClickedEvent;

  /// @brief Field m_OnClick, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnClick, put = __cordl_internal_set_m_OnClick))::UnityEngine::UI::__Button__ButtonClickedEvent* m_OnClick;

  __declspec(property(get = get_onClick, put = set_onClick))::UnityEngine::UI::__Button__ButtonClickedEvent* onClick;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  constexpr ::UnityEngine::UI::__Button__ButtonClickedEvent*& __cordl_internal_get_m_OnClick();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Button__ButtonClickedEvent*> const& __cordl_internal_get_m_OnClick() const;

  constexpr void __cordl_internal_set_m_OnClick(::UnityEngine::UI::__Button__ButtonClickedEvent* value);

  static inline ::UnityEngine::UI::Button* New_ctor();

  /// @brief Method .ctor, addr 0x2d6f340, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_onClick, addr 0x2d6f3d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Button__ButtonClickedEvent* get_onClick();

  /// @brief Method set_onClick, addr 0x2d6f3dc, size 0x8, virtual false, abstract: false, final false
  inline void set_onClick(::UnityEngine::UI::__Button__ButtonClickedEvent* value);

  /// @brief Method Press, addr 0x2d6f3e4, size 0x98, virtual false, abstract: false, final false
  inline void Press();

  /// @brief Method OnPointerClick, addr 0x2d6f47c, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x2d6f4a0, size 0x78, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnFinishSubmit, addr 0x2d6f518, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* OnFinishSubmit();

  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button(Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button(Button const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button();

public:
  /// @brief Field m_OnClick, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UI::__Button__ButtonClickedEvent* ___m_OnClick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Button, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Button, ___m_OnClick) == 0xf8, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
NEED_NO_BOX(::UnityEngine::UI::__Button__ButtonClickedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Button__ButtonClickedEvent*, "UnityEngine.UI", "Button/ButtonClickedEvent");
NEED_NO_BOX(::UnityEngine::UI::__Button___OnFinishSubmit_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Button___OnFinishSubmit_d__9*, "UnityEngine.UI", "Button/<OnFinishSubmit>d__9");
