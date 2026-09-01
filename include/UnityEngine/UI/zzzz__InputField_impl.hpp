#pragma once
// IWYU pragma private; include "UnityEngine\UI\InputField.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_impl.hpp"
#include "UnityEngine/zzzz__UIVertex_impl.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::InputField_ContentType::InputField_ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_ContentType::InputField_ContentType() {}
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Standard{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Autocorrected{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::IntegerNumber{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::DecimalNumber{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Alphanumeric{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Name{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::EmailAddress{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Password{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Pin{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField_ContentType::Custom{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::InputField_InputType::InputField_InputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_InputType::InputField_InputType() {}
constexpr ::UnityEngine::UI::InputField_InputType UnityEngine::UI::InputField_InputType::Standard{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::InputField_InputType UnityEngine::UI::InputField_InputType::AutoCorrect{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::InputField_InputType UnityEngine::UI::InputField_InputType::Password{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::InputField_CharacterValidation::InputField_CharacterValidation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_CharacterValidation::InputField_CharacterValidation() {}
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::Integer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::Decimal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::Alphanumeric{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::Name{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField_CharacterValidation::EmailAddress{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::InputField_LineType::InputField_LineType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_LineType::InputField_LineType() {}
constexpr ::UnityEngine::UI::InputField_LineType UnityEngine::UI::InputField_LineType::SingleLine{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::InputField_LineType UnityEngine::UI::InputField_LineType::MultiLineSubmit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::InputField_LineType UnityEngine::UI::InputField_LineType::MultiLineNewline{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::InputField_OnValidateInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField_OnValidateInput::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UI::InputField_OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dee524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField_OnValidateInput.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::UI::InputField_OnValidateInput::*)(::StringW, int32_t, char16_t)>(
    &::UnityEngine::UI::InputField_OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6df78c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField_OnValidateInput.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::UI::InputField_OnValidateInput::*)(::StringW, int32_t, char16_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::UI::InputField_OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6df78d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField_OnValidateInput.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::UI::InputField_OnValidateInput::*)(::System::IAsyncResult*)>(
    &::UnityEngine::UI::InputField_OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6df7950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::InputField_OnValidateInput::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline char16_t UnityEngine::UI::InputField_OnValidateInput::Invoke(::StringW text, int32_t charIndex, char16_t addedChar) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, text, charIndex, addedChar);
}
inline ::System::IAsyncResult* UnityEngine::UI::InputField_OnValidateInput::BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, text, charIndex, addedChar, callback, object);
}
inline char16_t UnityEngine::UI::InputField_OnValidateInput::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField_OnValidateInput*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, result);
}
inline ::UnityEngine::UI::InputField_OnValidateInput* UnityEngine::UI::InputField_OnValidateInput::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField_OnValidateInput*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_OnValidateInput::InputField_OnValidateInput() {}
//  Writing Method size for method: ::UnityEngine::UI::InputField_SubmitEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField_SubmitEvent::*)()>(&::UnityEngine::UI::InputField_SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6dedda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_SubmitEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::InputField_SubmitEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_SubmitEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField_SubmitEvent* UnityEngine::UI::InputField_SubmitEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField_SubmitEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_SubmitEvent::InputField_SubmitEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::InputField_EndEditEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField_EndEditEvent::*)()>(&::UnityEngine::UI::InputField_EndEditEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6deddf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_EndEditEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::InputField_EndEditEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_EndEditEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField_EndEditEvent* UnityEngine::UI::InputField_EndEditEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField_EndEditEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_EndEditEvent::InputField_EndEditEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::InputField_OnChangeEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField_OnChangeEvent::*)()>(&::UnityEngine::UI::InputField_OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6dede40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnChangeEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::InputField_OnChangeEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField_OnChangeEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField_OnChangeEvent* UnityEngine::UI::InputField_OnChangeEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField_OnChangeEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_OnChangeEvent::InputField_OnChangeEvent() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::InputField_EditState::InputField_EditState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField_EditState::InputField_EditState() {}
constexpr ::UnityEngine::UI::InputField_EditState UnityEngine::UI::InputField_EditState::Continue{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::InputField_EditState UnityEngine::UI::InputField_EditState::Finish{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__CaretBlink_d__172::*)(int32_t)>(&::UnityEngine::UI::InputField__CaretBlink_d__172::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df0440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__CaretBlink_d__172::*)()>(&::UnityEngine::UI::InputField__CaretBlink_d__172::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df7974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField__CaretBlink_d__172::*)()>(&::UnityEngine::UI::InputField__CaretBlink_d__172::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6df7978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::InputField__CaretBlink_d__172::*)()>(
    &::UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__CaretBlink_d__172::*)()>(
    &::UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6df7a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__CaretBlink_d__172.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::InputField__CaretBlink_d__172::*)()>(
    &::UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UI::InputField__CaretBlink_d__172::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::UI::InputField__CaretBlink_d__172::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::InputField__CaretBlink_d__172::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::InputField__CaretBlink_d__172::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::InputField__CaretBlink_d__172::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__CaretBlink_d__172*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField__CaretBlink_d__172* UnityEngine::UI::InputField__CaretBlink_d__172::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField__CaretBlink_d__172*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::UI::InputField__CaretBlink_d__172::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
UnityEngine::UI::InputField__CaretBlink_d__172::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UI::InputField__CaretBlink_d__172::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UI::InputField__CaretBlink_d__172::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UI::InputField__CaretBlink_d__172::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UI::InputField__CaretBlink_d__172::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField__CaretBlink_d__172::InputField__CaretBlink_d__172() {}
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)(int32_t)>(
    &::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df2e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)()>(
    &::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df7adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)()>(&::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6df7ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)()>(
    &::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)()>(
    &::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6df7d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::*)()>(
    &::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get_eventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get_eventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventData;
}
constexpr void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_set_eventData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventData = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196* UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField__MouseDragOutsideRect_d__196::InputField__MouseDragOutsideRect_d__196() {}
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_input
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInput> (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_input)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6deda44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_input", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_compositionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6dedb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_compositionString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6dedbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6dedf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_cachedInputTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerator* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_cachedInputTextGenerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dedfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_cachedInputTextGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_shouldHideMobileInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dee044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_shouldHideMobileInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_shouldHideMobileInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6dee0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_shouldHideMobileInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_shouldActivateOnSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dee144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_shouldActivateOnSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6dee14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dee1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dee1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetTextWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dee51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW, bool)>(&::UnityEngine::UI::InputField::SetText)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6dee1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_isFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6deea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_isFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretBlinkRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6deea40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretBlinkRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretBlinkRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(float_t)>(&::UnityEngine::UI::InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6deea48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretBlinkRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6deeb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6deeb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretWidth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_textComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6deebf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_textComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_textComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6deec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_textComponent", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_placeholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6deefc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_placeholder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_placeholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6deefc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_placeholder", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6def03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Color)>(&::UnityEngine::UI::InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6def080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_customCaretColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_customCaretColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_customCaretColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6def0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_customCaretColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6def0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Color)>(&::UnityEngine::UI::InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6def100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onEndEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_EndEditEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onEndEdit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onEndEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_EndEditEvent*)>(&::UnityEngine::UI::InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6def150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onEndEdit", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_EndEditEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_SubmitEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onSubmit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_SubmitEvent*)>(&::UnityEngine::UI::InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6def1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onSubmit", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_SubmitEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValueChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_OnChangeEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValueChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValueChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValueChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_OnChangeEvent*)>(&::UnityEngine::UI::InputField::set_onValueChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6def248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValueChange", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnChangeEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_OnChangeEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_OnChangeEvent*)>(&::UnityEngine::UI::InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6def24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnChangeEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValidateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_OnValidateInput* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValidateInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValidateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_OnValidateInput*)>(&::UnityEngine::UI::InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6def2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValidateInput", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnValidateInput*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_characterLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_characterLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_characterLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6def34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_characterLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_contentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_ContentType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_contentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_contentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_ContentType)>(&::UnityEngine::UI::InputField::set_contentType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6def408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_contentType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_ContentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_lineType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_LineType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_lineType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_lineType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_LineType)>(&::UnityEngine::UI::InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6def590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_lineType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_LineType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_inputType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_InputType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_inputType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_inputType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_InputType)>(&::UnityEngine::UI::InputField::set_inputType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6def6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_inputType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_InputType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_touchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboard* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_touchScreenKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_touchScreenKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_keyboardType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchScreenKeyboardType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_keyboardType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_keyboardType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::TouchScreenKeyboardType)>(&::UnityEngine::UI::InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6def76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_keyboardType", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_characterValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_CharacterValidation (::UnityEngine::UI::InputField::*)()>(
    &::UnityEngine::UI::InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_characterValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_characterValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::InputField_CharacterValidation)>(
    &::UnityEngine::UI::InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6def7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_characterValidation", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_CharacterValidation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_readOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_readOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_readOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_readOnly", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_multiLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6def894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_multiLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_asteriskChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_asteriskChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_asteriskChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6def8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_asteriskChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_wasCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6def928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_wasCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ClampPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::by_ref<int32_t>)>(&::UnityEngine::UI::InputField::ClampPos)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6def930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ClampPos", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6def964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretPositionInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6def988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretPositionInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretSelectPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6def9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretSelectPositionInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretSelectPositionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6def9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretSelectPositionInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_hasSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6defa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_hasSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6defa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6defa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionAnchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6defb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionAnchorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionAnchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6defa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionAnchorPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionFocusPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6defb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionFocusPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionFocusPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6defae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionFocusPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6defb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnEnable)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6defc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnDisable)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6deff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6df0390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CaretBlink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6df03ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "CaretBlink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetCaretVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6df0448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetCaretVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetCaretActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6deeac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetCaretActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateCaretMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateCaretMaterial)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6df049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateCaretMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df05b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "OnFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SelectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SelectAll)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6df05b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SelectAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveTextEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6df05f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveTextEnd", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveTextStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6df0650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveTextStart", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_clipboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::UI::InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6df06cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_clipboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_clipboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::UI::InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6df0720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_clipboard", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.TouchScreenKeyboardShouldBeUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6df077c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "TouchScreenKeyboardShouldBeUsed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.InPlaceEditing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6df0854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "InPlaceEditing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.InPlaceEditingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::InPlaceEditingChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6df0884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "InPlaceEditingChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetInternalSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RangeInt (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::GetInternalSelection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6df0908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetInternalSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateKeyboardCaret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateKeyboardCaret)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6df09b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateKeyboardCaret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateCaretFromKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateCaretFromKeyboard)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6df0aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateCaretFromKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x6df0bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ScreenToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::ScreenToLocal)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6df2098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ScreenToLocal", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetUnclampedCharacterLineFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2, ::UnityEngine::TextGenerator*)>(
    &::UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6df2438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                                { "GetUnclampedCharacterLineFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetCharacterIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::GetCharacterIndexFromPosition)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6df2674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetCharacterIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MayDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::MayDrag)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6df2aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnBeginDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6df2b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnDrag)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6df2bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MouseDragOutsideRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6df2dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MouseDragOutsideRect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnEndDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6df2e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6df2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.KeyPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::InputField_EditState (::UnityEngine::UI::InputField::*)(::UnityEngine::Event*)>(&::UnityEngine::UI::InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x6df305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "KeyPressed", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.IsValidChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6df3b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "IsValidChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Event*)>(&::UnityEngine::UI::InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df3bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ProcessEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnUpdateSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6df3bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetSelectedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6df3628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetSelectedString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.FindtNextWordBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::FindtNextWordBegin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6df3d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "FindtNextWordBegin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveRight)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6df39fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveRight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.FindtPrevWordBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::FindtPrevWordBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6df3df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "FindtPrevWordBegin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6df38c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveLeft", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DetermineCharacterLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, ::UnityEngine::TextGenerator*)>(&::UnityEngine::UI::InputField::DetermineCharacterLine)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6df3e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "DetermineCharacterLine", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LineUpCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, bool)>(&::UnityEngine::UI::InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6df3fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LineDownCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, bool)>(&::UnityEngine::UI::InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x6df439c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df3b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveDown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6df46ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveDown", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df3b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveUp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6df47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveUp", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Delete)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6df36d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Delete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ForwardSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ForwardSpace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6df3584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ForwardSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Backspace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Backspace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6df347c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Backspace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::Insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6df4964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Insert", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateTouchKeyboardFromEditChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6df3880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateTouchKeyboardFromEditChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnValueChangedAndUpdateLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6df2080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnValueChangedAndUpdateLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6dee5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnEndEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6df4a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnEndEdit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6df19fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnSubmit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6df4aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6df4bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x6dee62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.IsSelectionVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::IsSelectionVisible)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6df5974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "IsSelectionVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetLineStartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TextGenerator*, int32_t)>(&::UnityEngine::UI::InputField::GetLineStartPosition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6df59e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetLineStartPosition", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetLineEndPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TextGenerator*, int32_t)>(&::UnityEngine::UI::InputField::GetLineEndPosition)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6df2920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetLineEndPosition", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetDrawRangeToContainCaretPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition)> {
  constexpr static std::size_t size = 0xb70;
  constexpr static std::size_t addrs = 0x6df4e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetDrawRangeToContainCaretPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ForceLabelUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df5b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ForceLabelUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MarkGeometryAsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6deeb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MarkGeometryAsDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6df5b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LayoutComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df5fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df5fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x6df5b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateGeometry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.AssignPositioningIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6df14f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "AssignPositioningIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnFillVBO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6df5fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "OnFillVBO", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GenerateCaret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UI::InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x6df61dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                                             { "GenerateCaret", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CreateCursorVerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6df70d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "CreateCursorVerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GenerateHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UI::InputField::GenerateHighlight)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x6df6968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                                             { "GenerateHighlight", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::UI::InputField::*)(::StringW, int32_t, char16_t)>(&::UnityEngine::UI::InputField::Validate)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x6df1a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Validate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ActivateInputField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6df721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ActivateInputField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ActivateInputFieldInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6df1198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ActivateInputFieldInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnSelect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6df733c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6df737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DeactivateInputField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6df0208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "DeactivateInputField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDeselect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6df7398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6df73b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.EnforceContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6def480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "EnforceContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.EnforceTextHOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::EnforceTextHOverflow)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6dede8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "EnforceTextHOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetToCustomIfContentTypeIsNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::ArrayW<::UnityEngine::UI::InputField_ContentType>)>(
    &::UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6def658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetToCustomIfContentTypeIsNot", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UI::InputField_ContentType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetToCustom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6def744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetToCustom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(
    &::UnityEngine::UI::InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6df73fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df7428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df742c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_preferredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6df7438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_flexibleWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_preferredHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6df7648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_flexibleHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df7804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_layoutPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df780c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::UI::InputField::*)()>(
    &::UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df78b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TouchScreenKeyboard*& UnityEngine::UI::InputField::__cordl_internal_get_m_Keyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keyboard;
}
constexpr ::UnityEngine::TouchScreenKeyboard* const& UnityEngine::UI::InputField::__cordl_internal_get_m_Keyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keyboard;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_Keyboard(::UnityEngine::TouchScreenKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Keyboard = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::UI::InputField::__cordl_internal_get_m_TextComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::UI::InputField::__cordl_internal_get_m_TextComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextComponent;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_TextComponent(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextComponent = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::UI::InputField::__cordl_internal_get_m_Placeholder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Placeholder;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::UI::InputField::__cordl_internal_get_m_Placeholder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Placeholder;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Placeholder = value;
}
constexpr ::UnityEngine::UI::InputField_ContentType& UnityEngine::UI::InputField::__cordl_internal_get_m_ContentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentType;
}
constexpr ::UnityEngine::UI::InputField_ContentType const& UnityEngine::UI::InputField::__cordl_internal_get_m_ContentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentType;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_ContentType(::UnityEngine::UI::InputField_ContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentType = value;
}
constexpr ::UnityEngine::UI::InputField_InputType& UnityEngine::UI::InputField::__cordl_internal_get_m_InputType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputType;
}
constexpr ::UnityEngine::UI::InputField_InputType const& UnityEngine::UI::InputField::__cordl_internal_get_m_InputType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputType;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_InputType(::UnityEngine::UI::InputField_InputType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputType = value;
}
constexpr char16_t& UnityEngine::UI::InputField::__cordl_internal_get_m_AsteriskChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsteriskChar;
}
constexpr char16_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_AsteriskChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsteriskChar;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_AsteriskChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsteriskChar = value;
}
constexpr ::UnityEngine::TouchScreenKeyboardType& UnityEngine::UI::InputField::__cordl_internal_get_m_KeyboardType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
constexpr ::UnityEngine::TouchScreenKeyboardType const& UnityEngine::UI::InputField::__cordl_internal_get_m_KeyboardType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardType = value;
}
constexpr ::UnityEngine::UI::InputField_LineType& UnityEngine::UI::InputField::__cordl_internal_get_m_LineType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr ::UnityEngine::UI::InputField_LineType const& UnityEngine::UI::InputField::__cordl_internal_get_m_LineType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineType;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_LineType(::UnityEngine::UI::InputField_LineType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineType = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_HideMobileInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_HideMobileInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_HideMobileInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideMobileInput = value;
}
constexpr ::UnityEngine::UI::InputField_CharacterValidation& UnityEngine::UI::InputField::__cordl_internal_get_m_CharacterValidation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterValidation;
}
constexpr ::UnityEngine::UI::InputField_CharacterValidation const& UnityEngine::UI::InputField::__cordl_internal_get_m_CharacterValidation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterValidation;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CharacterValidation(::UnityEngine::UI::InputField_CharacterValidation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterValidation = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_CharacterLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLimit;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_CharacterLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLimit;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CharacterLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterLimit = value;
}
constexpr ::UnityEngine::UI::InputField_SubmitEvent*& UnityEngine::UI::InputField::__cordl_internal_get_m_OnSubmit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmit;
}
constexpr ::UnityEngine::UI::InputField_SubmitEvent* const& UnityEngine::UI::InputField::__cordl_internal_get_m_OnSubmit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmit;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_OnSubmit(::UnityEngine::UI::InputField_SubmitEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnSubmit = value;
}
constexpr ::UnityEngine::UI::InputField_EndEditEvent*& UnityEngine::UI::InputField::__cordl_internal_get_m_OnDidEndEdit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDidEndEdit;
}
constexpr ::UnityEngine::UI::InputField_EndEditEvent* const& UnityEngine::UI::InputField::__cordl_internal_get_m_OnDidEndEdit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDidEndEdit;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_OnDidEndEdit(::UnityEngine::UI::InputField_EndEditEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDidEndEdit = value;
}
constexpr ::UnityEngine::UI::InputField_OnChangeEvent*& UnityEngine::UI::InputField::__cordl_internal_get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::UnityEngine::UI::InputField_OnChangeEvent* const& UnityEngine::UI::InputField::__cordl_internal_get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::InputField_OnChangeEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnValueChanged = value;
}
constexpr ::UnityEngine::UI::InputField_OnValidateInput*& UnityEngine::UI::InputField::__cordl_internal_get_m_OnValidateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValidateInput;
}
constexpr ::UnityEngine::UI::InputField_OnValidateInput* const& UnityEngine::UI::InputField::__cordl_internal_get_m_OnValidateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValidateInput;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_OnValidateInput(::UnityEngine::UI::InputField_OnValidateInput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnValidateInput = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretColor;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretColor = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_CustomCaretColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomCaretColor;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_CustomCaretColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomCaretColor;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CustomCaretColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomCaretColor = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UI::InputField::__cordl_internal_get_m_SelectionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::InputField::__cordl_internal_get_m_SelectionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_SelectionColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionColor = value;
}
constexpr ::StringW& UnityEngine::UI::InputField::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::UI::InputField::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr float_t& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretBlinkRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretBlinkRate;
}
constexpr float_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretBlinkRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretBlinkRate;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretBlinkRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretBlinkRate = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretWidth;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretWidth;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretWidth = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_ReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_ReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_ReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadOnly = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_ShouldActivateOnSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateOnSelect;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_ShouldActivateOnSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateOnSelect;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_ShouldActivateOnSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldActivateOnSelect = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretPosition;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretPosition;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretPosition = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretSelectPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretSelectPosition;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretSelectPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretSelectPosition;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretSelectPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretSelectPosition = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::InputField::__cordl_internal_get_caretRectTrans() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caretRectTrans;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::InputField::__cordl_internal_get_caretRectTrans() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caretRectTrans;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_caretRectTrans(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caretRectTrans = value;
}
constexpr ::ArrayW<::UnityEngine::UIVertex>& UnityEngine::UI::InputField::__cordl_internal_get_m_CursorVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorVerts;
}
constexpr ::ArrayW<::UnityEngine::UIVertex> const& UnityEngine::UI::InputField::__cordl_internal_get_m_CursorVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorVerts;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorVerts = value;
}
constexpr ::UnityEngine::TextGenerator*& UnityEngine::UI::InputField::__cordl_internal_get_m_InputTextCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputTextCache;
}
constexpr ::UnityEngine::TextGenerator* const& UnityEngine::UI::InputField::__cordl_internal_get_m_InputTextCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputTextCache;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_InputTextCache(::UnityEngine::TextGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputTextCache = value;
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer>& UnityEngine::UI::InputField::__cordl_internal_get_m_CachedInputRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInputRenderer;
}
constexpr ::UnityW<::UnityEngine::CanvasRenderer> const& UnityEngine::UI::InputField::__cordl_internal_get_m_CachedInputRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInputRenderer;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CachedInputRenderer(::UnityW<::UnityEngine::CanvasRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedInputRenderer = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_PreventFontCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreventFontCallback;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_PreventFontCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreventFontCallback;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_PreventFontCallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreventFontCallback = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::UI::InputField::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::UI::InputField::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_AllowInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowInput;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_AllowInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowInput;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_AllowInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowInput = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_ShouldActivateNextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateNextUpdate;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_ShouldActivateNextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldActivateNextUpdate;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_ShouldActivateNextUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldActivateNextUpdate = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_UpdateDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateDrag;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_UpdateDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateDrag;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_UpdateDrag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateDrag = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_DragPositionOutOfBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragPositionOutOfBounds;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_DragPositionOutOfBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragPositionOutOfBounds;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_DragPositionOutOfBounds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragPositionOutOfBounds = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretVisible;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_CaretVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaretVisible;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_CaretVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaretVisible = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::UI::InputField::__cordl_internal_get_m_BlinkCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::UI::InputField::__cordl_internal_get_m_BlinkCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkCoroutine;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_BlinkCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlinkCoroutine = value;
}
constexpr float_t& UnityEngine::UI::InputField::__cordl_internal_get_m_BlinkStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkStartTime;
}
constexpr float_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_BlinkStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlinkStartTime;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_BlinkStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlinkStartTime = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_DrawStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawStart;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_DrawStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawStart;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_DrawStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawStart = value;
}
constexpr int32_t& UnityEngine::UI::InputField::__cordl_internal_get_m_DrawEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawEnd;
}
constexpr int32_t const& UnityEngine::UI::InputField::__cordl_internal_get_m_DrawEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawEnd;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_DrawEnd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawEnd = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::UI::InputField::__cordl_internal_get_m_DragCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::UI::InputField::__cordl_internal_get_m_DragCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragCoroutine;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_DragCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragCoroutine = value;
}
constexpr ::StringW& UnityEngine::UI::InputField::__cordl_internal_get_m_OriginalText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalText;
}
constexpr ::StringW const& UnityEngine::UI::InputField::__cordl_internal_get_m_OriginalText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginalText;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_OriginalText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginalText = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_WasCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasCanceled;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_WasCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasCanceled;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_WasCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WasCanceled = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_HasDoneFocusTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDoneFocusTransition;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_HasDoneFocusTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDoneFocusTransition;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_HasDoneFocusTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasDoneFocusTransition = value;
}
constexpr ::UnityEngine::WaitForSecondsRealtime*& UnityEngine::UI::InputField::__cordl_internal_get_m_WaitForSecondsRealtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForSecondsRealtime;
}
constexpr ::UnityEngine::WaitForSecondsRealtime* const& UnityEngine::UI::InputField::__cordl_internal_get_m_WaitForSecondsRealtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitForSecondsRealtime;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitForSecondsRealtime = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardAllowsInPlaceEditing;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardAllowsInPlaceEditing;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchKeyboardAllowsInPlaceEditing = value;
}
constexpr bool& UnityEngine::UI::InputField::__cordl_internal_get_m_IsCompositionActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCompositionActive;
}
constexpr bool const& UnityEngine::UI::InputField::__cordl_internal_get_m_IsCompositionActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCompositionActive;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_IsCompositionActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsCompositionActive = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UI::InputField::__cordl_internal_get_m_ProcessingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessingEvent;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UI::InputField::__cordl_internal_get_m_ProcessingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessingEvent;
}
constexpr void UnityEngine::UI::InputField::__cordl_internal_set_m_ProcessingEvent(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessingEvent = value;
}
inline void UnityEngine::UI::InputField::setStaticF_kSeparators(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "kSeparators", ::UnityEngine::UI::InputField*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> UnityEngine::UI::InputField::getStaticF_kSeparators() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "kSeparators", ::UnityEngine::UI::InputField*>();
}
inline void UnityEngine::UI::InputField::setStaticF_s_IsQuestDeviceEvaluated(bool value) {
  ::cordl_internals::setStaticField<bool, "s_IsQuestDeviceEvaluated", ::UnityEngine::UI::InputField*>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::InputField::getStaticF_s_IsQuestDeviceEvaluated() {
  return ::cordl_internals::getStaticField<bool, "s_IsQuestDeviceEvaluated", ::UnityEngine::UI::InputField*>();
}
inline void UnityEngine::UI::InputField::setStaticF_s_IsQuestDevice(bool value) {
  ::cordl_internals::setStaticField<bool, "s_IsQuestDevice", ::UnityEngine::UI::InputField*>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::InputField::getStaticF_s_IsQuestDevice() {
  return ::cordl_internals::getStaticField<bool, "s_IsQuestDevice", ::UnityEngine::UI::InputField*>();
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInput> UnityEngine::UI::InputField::get_input() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_input", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInput>>(this, ___internal_method);
}
inline ::StringW UnityEngine::UI::InputField::get_compositionString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_compositionString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::UI::InputField::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityEngine::TextGenerator* UnityEngine::UI::InputField::get_cachedInputTextGenerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_cachedInputTextGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerator*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_shouldHideMobileInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_shouldHideMobileInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_shouldHideMobileInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_shouldHideMobileInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_shouldActivateOnSelect(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_shouldActivateOnSelect() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::UI::InputField::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::InputField::SetTextWithoutNotify(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetTextWithoutNotify", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::UI::InputField::SetText(::StringW value, bool sendCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, sendCallback);
}
inline bool UnityEngine::UI::InputField::get_isFocused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_isFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_caretBlinkRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretBlinkRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretBlinkRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretBlinkRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_caretWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretWidth(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretWidth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Text> UnityEngine::UI::InputField::get_textComponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_textComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_textComponent(::UnityEngine::UI::Text* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_textComponent", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::UI::InputField::get_placeholder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_placeholder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_placeholder(::UnityEngine::UI::Graphic* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_placeholder", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::InputField::get_caretColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_customCaretColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_customCaretColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_customCaretColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_customCaretColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::InputField::get_selectionColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_EndEditEvent* UnityEngine::UI::InputField::get_onEndEdit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onEndEdit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_EndEditEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onEndEdit(::UnityEngine::UI::InputField_EndEditEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onEndEdit", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_EndEditEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_SubmitEvent* UnityEngine::UI::InputField::get_onSubmit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onSubmit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_SubmitEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onSubmit(::UnityEngine::UI::InputField_SubmitEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onSubmit", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_SubmitEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_OnChangeEvent* UnityEngine::UI::InputField::get_onValueChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValueChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_OnChangeEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValueChange(::UnityEngine::UI::InputField_OnChangeEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValueChange", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnChangeEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_OnChangeEvent* UnityEngine::UI::InputField::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_OnChangeEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValueChanged(::UnityEngine::UI::InputField_OnChangeEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnChangeEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_OnValidateInput* UnityEngine::UI::InputField::get_onValidateInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_onValidateInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_OnValidateInput*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValidateInput(::UnityEngine::UI::InputField_OnValidateInput* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_onValidateInput", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_OnValidateInput*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_characterLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_characterLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_characterLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_characterLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_ContentType UnityEngine::UI::InputField::get_contentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_contentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_ContentType>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_contentType(::UnityEngine::UI::InputField_ContentType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_contentType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_ContentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_LineType UnityEngine::UI::InputField::get_lineType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_lineType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_LineType>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_lineType(::UnityEngine::UI::InputField_LineType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_lineType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_LineType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_InputType UnityEngine::UI::InputField::get_inputType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_inputType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_InputType>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_inputType(::UnityEngine::UI::InputField_InputType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_inputType", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_InputType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::UI::InputField::get_touchScreenKeyboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_touchScreenKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard*>(this, ___internal_method);
}
inline ::UnityEngine::TouchScreenKeyboardType UnityEngine::UI::InputField::get_keyboardType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_keyboardType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_keyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_keyboardType", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::InputField_CharacterValidation UnityEngine::UI::InputField::get_characterValidation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_characterValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_CharacterValidation>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_characterValidation(::UnityEngine::UI::InputField_CharacterValidation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_characterValidation", {}, { ::i2c::type_of<::UnityEngine::UI::InputField_CharacterValidation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_readOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_readOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_readOnly(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_readOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_multiLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_multiLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline char16_t UnityEngine::UI::InputField::get_asteriskChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_asteriskChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_asteriskChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_asteriskChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_wasCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_wasCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ClampPos(::by_ref<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ClampPos", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline int32_t UnityEngine::UI::InputField::get_caretPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretPositionInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretPositionInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_caretSelectPositionInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretSelectPositionInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretSelectPositionInternal(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretSelectPositionInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_hasSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_hasSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::get_caretPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_caretPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_caretPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_selectionAnchorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionAnchorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionAnchorPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionAnchorPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_selectionFocusPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_selectionFocusPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionFocusPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_selectionFocusPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::InputField::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::InputField::CaretBlink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "CaretBlink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetCaretVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetCaretVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetCaretActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetCaretActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateCaretMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateCaretMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "OnFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SelectAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SelectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveTextEnd(bool shift) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveTextEnd", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveTextStart(bool shift) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveTextStart", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift);
}
inline ::StringW UnityEngine::UI::InputField::get_clipboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "get_clipboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_clipboard(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "set_clipboard", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "TouchScreenKeyboardShouldBeUsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::InPlaceEditing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "InPlaceEditing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::InPlaceEditingChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "InPlaceEditingChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RangeInt UnityEngine::UI::InputField::GetInternalSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetInternalSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RangeInt>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateKeyboardCaret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateKeyboardCaret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateCaretFromKeyboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateCaretFromKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::LateUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::InputField::ScreenToLocal(::UnityEngine::Vector2 screen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ScreenToLocal", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, screen);
}
inline int32_t UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2 pos, ::UnityEngine::TextGenerator* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                              { "GetUnclampedCharacterLineFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pos, generator);
}
inline int32_t UnityEngine::UI::InputField::GetCharacterIndexFromPosition(::UnityEngine::Vector2 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetCharacterIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pos);
}
inline bool UnityEngine::UI::InputField::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::InputField::MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MouseDragOutsideRect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::UnityEngine::UI::InputField_EditState UnityEngine::UI::InputField::KeyPressed(::UnityEngine::Event* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "KeyPressed", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::InputField_EditState>(this, ___internal_method, evt);
}
inline bool UnityEngine::UI::InputField::IsValidChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "IsValidChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void UnityEngine::UI::InputField::ProcessEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ProcessEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UI::InputField::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::StringW UnityEngine::UI::InputField::GetSelectedString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetSelectedString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::FindtNextWordBegin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "FindtNextWordBegin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveRight(bool shift, bool ctrl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveRight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift, ctrl);
}
inline int32_t UnityEngine::UI::InputField::FindtPrevWordBegin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "FindtPrevWordBegin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveLeft(bool shift, bool ctrl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveLeft", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift, ctrl);
}
inline int32_t UnityEngine::UI::InputField::DetermineCharacterLine(int32_t charPos, ::UnityEngine::TextGenerator* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "DetermineCharacterLine", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charPos, generator);
}
inline int32_t UnityEngine::UI::InputField::LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t UnityEngine::UI::InputField::LineDownCharacterPosition(int32_t originalPos, bool goToLastChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalPos, goToLastChar);
}
inline void UnityEngine::UI::InputField::MoveDown(bool shift) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveDown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveDown(bool shift, bool goToLastChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveDown", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift, goToLastChar);
}
inline void UnityEngine::UI::InputField::MoveUp(bool shift) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveUp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveUp(bool shift, bool goToFirstChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MoveUp", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shift, goToFirstChar);
}
inline void UnityEngine::UI::InputField::Delete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Delete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ForwardSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ForwardSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Backspace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Backspace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Insert(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Insert", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateTouchKeyboardFromEditChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnValueChangedAndUpdateLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnEndEdit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnEndEdit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnSubmit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SendOnSubmit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Append(::StringW input) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::UI::InputField::Append(char16_t input) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::UI::InputField::UpdateLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::IsSelectionVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "IsSelectionVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::GetLineStartPosition(::UnityEngine::TextGenerator* gen, int32_t line) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetLineStartPosition", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gen, line);
}
inline int32_t UnityEngine::UI::InputField::GetLineEndPosition(::UnityEngine::TextGenerator* gen, int32_t line) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "GetLineEndPosition", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gen, line);
}
inline void UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition(int32_t caretPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetDrawRangeToContainCaretPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caretPos);
}
inline void UnityEngine::UI::InputField::ForceLabelUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ForceLabelUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MarkGeometryAsDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "MarkGeometryAsDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Rebuild(::UnityEngine::UI::CanvasUpdate update) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update);
}
inline void UnityEngine::UI::InputField::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateGeometry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UpdateGeometry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::AssignPositioningIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "AssignPositioningIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnFillVBO(::UnityEngine::Mesh* vbo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "OnFillVBO", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vbo);
}
inline void UnityEngine::UI::InputField::GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                                           { "GenerateCaret", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vbo, roundingOffset);
}
inline void UnityEngine::UI::InputField::CreateCursorVerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "CreateCursorVerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::GenerateHighlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(),
                                                           { "GenerateHighlight", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vbo, roundingOffset);
}
inline char16_t UnityEngine::UI::InputField::Validate(::StringW text, int32_t pos, char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "Validate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, text, pos, ch);
}
inline void UnityEngine::UI::InputField::ActivateInputField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ActivateInputField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ActivateInputFieldInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "ActivateInputFieldInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::DeactivateInputField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "DeactivateInputField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::EnforceContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "EnforceContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::EnforceTextHOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "EnforceTextHOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot(::ArrayW<::UnityEngine::UI::InputField_ContentType> allowedContentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetToCustomIfContentTypeIsNot", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UI::InputField_ContentType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowedContentTypes);
}
inline void UnityEngine::UI::InputField::SetToCustom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "SetToCustom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void UnityEngine::UI::InputField::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::InputField::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_minWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_preferredWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_flexibleWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_minHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_preferredHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_flexibleHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::get_layoutPriority() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::InputField*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::InputField*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::UI::InputField* UnityEngine::UI::InputField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::InputField*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* UnityEngine::UI::InputField::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* UnityEngine::UI::InputField::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr UnityEngine::UI::InputField::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* UnityEngine::UI::InputField::i___UnityEngine__UI__ILayoutElement() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::InputField::InputField() {}
