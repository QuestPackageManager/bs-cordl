#pragma once
// IWYU pragma private; include "UnityEngine\InputForUI\KeyEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::KeyEvent_Type::KeyEvent_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::KeyEvent_Type::KeyEvent_Type() {}
constexpr ::UnityEngine::InputForUI::KeyEvent_Type UnityEngine::InputForUI::KeyEvent_Type::KeyPressed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::KeyEvent_Type UnityEngine::InputForUI::KeyEvent_Type::KeyRepeated{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::KeyEvent_Type UnityEngine::InputForUI::KeyEvent_Type::KeyReleased{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::KeyEvent_Type UnityEngine::InputForUI::KeyEvent_Type::State{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer::ButtonsState_KeyEvent__buttons_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer::ButtonsState_KeyEvent__buttons_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.ShouldBeProcessed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::ShouldBeProcessed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b59908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "ShouldBeProcessed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.GetUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)(uint32_t)>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::GetUnchecked)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b59914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "GetUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.SetUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)(uint32_t)>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::SetUnchecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b59930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "SetUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.ClearUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)(uint32_t)>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::ClearUnchecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b59954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "ClearUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)(::UnityEngine::KeyCode)>(
    &::UnityEngine::InputForUI::KeyEvent_ButtonsState::IsPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b59978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.GetAllPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)()>(
    &::UnityEngine::InputForUI::KeyEvent_ButtonsState::GetAllPressed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b599a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "GetAllPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.SetPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)(::UnityEngine::KeyCode, bool)>(
    &::UnityEngine::InputForUI::KeyEvent_ButtonsState::SetPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b59a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(),
                                                                                           { "SetPressed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)()>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::Reset)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6b59a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent_ButtonsState.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::KeyEvent_ButtonsState::*)()>(&::UnityEngine::InputForUI::KeyEvent_ButtonsState::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b59be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { ::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputForUI::KeyEvent_ButtonsState::ShouldBeProcessed(::UnityEngine::KeyCode keyCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "ShouldBeProcessed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyCode);
}
inline bool UnityEngine::InputForUI::KeyEvent_ButtonsState::GetUnchecked(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "GetUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::InputForUI::KeyEvent_ButtonsState::SetUnchecked(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "SetUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void UnityEngine::InputForUI::KeyEvent_ButtonsState::ClearUnchecked(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "ClearUnchecked", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool UnityEngine::InputForUI::KeyEvent_ButtonsState::IsPressed(::UnityEngine::KeyCode keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, keyCode);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* UnityEngine::InputForUI::KeyEvent_ButtonsState::GetAllPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "GetAllPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::KeyEvent_ButtonsState::SetPressed(::UnityEngine::KeyCode keyCode, bool pressed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(),
                                                                                         { "SetPressed", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyCode, pressed);
}
inline void UnityEngine::InputForUI::KeyEvent_ButtonsState::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputForUI::KeyEvent_ButtonsState::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::KeyEvent_ButtonsState>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState::KeyEvent_ButtonsState(::UnityEngine::InputForUI::ButtonsState_KeyEvent__buttons_e__FixedBuffer buttons) noexcept {
  this->buttons = buttons;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState::KeyEvent_ButtonsState() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)(int32_t)>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b59a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b59c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b59c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b59cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.KeyCode>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b59cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b59d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_Collections_Generic_IEnumerable_UnityEngine_KeyCode__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>* (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
        &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_Generic_IEnumerable_UnityEngine_KeyCode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b59d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.KeyCode>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::*)()>(
    &::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b59e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::KeyCode& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::KeyCode const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set___2__current(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set___4__this(::UnityEngine::InputForUI::KeyEvent_ButtonsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set___3____4__this(::UnityEngine::InputForUI::KeyEvent_ButtonsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
constexpr uint32_t& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get__index_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__1;
}
constexpr uint32_t const& UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_get__index_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__1;
}
constexpr void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::__cordl_internal_set__index_5__1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_5__1 = value;
}
inline void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::KeyCode UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_Generic_IEnumerator_UnityEngine_KeyCode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.KeyCode>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*
UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_Generic_IEnumerable_UnityEngine_KeyCode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.KeyCode>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
constexpr UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*
UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::i___System__Collections__Generic__IEnumerable_1___UnityEngine__KeyCode_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
constexpr UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*
UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::i___System__Collections__Generic__IEnumerator_1___UnityEngine__KeyCode_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::KeyCode>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8::ButtonsState_KeyEvent__GetAllPressed_d__8() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.set_timestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent::*)(::Unity::IntegerTime::DiscreteTime)>(&::UnityEngine::InputForUI::KeyEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b596dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_timestamp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.get_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::KeyEvent::*)()>(&::UnityEngine::InputForUI::KeyEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b596e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "get_eventSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.set_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent::*)(::UnityEngine::InputForUI::EventSource)>(&::UnityEngine::InputForUI::KeyEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b596ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_eventSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.set_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent::*)(uint32_t)>(&::UnityEngine::InputForUI::KeyEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b596f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_playerId", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.get_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::KeyEvent::*)()>(
    &::UnityEngine::InputForUI::KeyEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b596fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "get_eventModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.set_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::KeyEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(
    &::UnityEngine::InputForUI::KeyEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b59704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_eventModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::KeyEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::KeyEvent::*)()>(&::UnityEngine::InputForUI::KeyEvent::ToString)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6b5970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { ::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::KeyEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_timestamp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::KeyEvent::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "get_eventSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::KeyEvent::set_eventSource(::UnityEngine::InputForUI::EventSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_eventSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::KeyEvent::set_playerId(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_playerId", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::KeyEvent::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "get_eventModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::KeyEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), { "set_eventModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::KeyEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::KeyEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::KeyEvent::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::KeyEvent::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::KeyEvent_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyCode", ty: "::UnityEngine::KeyCode",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buttonsState", ty: "::UnityEngine::InputForUI::KeyEvent_ButtonsState", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventSource_k__BackingField", ty:
// "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::KeyEvent::KeyEvent(::UnityEngine::InputForUI::KeyEvent_Type type, ::UnityEngine::KeyCode keyCode, ::UnityEngine::InputForUI::KeyEvent_ButtonsState buttonsState,
                                                        ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField,
                                                        uint32_t _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept {
  this->type = type;
  this->keyCode = keyCode;
  this->buttonsState = buttonsState;
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_eventSource_k__BackingField = _eventSource_k__BackingField;
  this->_playerId_k__BackingField = _playerId_k__BackingField;
  this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::KeyEvent::KeyEvent() {}
