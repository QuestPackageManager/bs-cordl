#pragma once
// IWYU pragma private; include "UnityEngine\InputForUI\InputEventPartialProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_impl.hpp"
#include "UnityEngine/zzzz__OperatingSystemFamily_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__InputEventPartialProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProviderImpl_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(&::UnityEngine::InputForUI::InputEventPartialProvider::Initialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6b5c410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(&::UnityEngine::InputForUI::InputEventPartialProvider::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b5c5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(&::UnityEngine::InputForUI::InputEventPartialProvider::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6b5c5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(bool)>(&::UnityEngine::InputForUI::InputEventPartialProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b5d090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.RequestCurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::UnityEngine::InputForUI::Event_Type)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::RequestCurrentState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b5d208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                                                           { "RequestCurrentState", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.GetTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::GetTimestamp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b5d350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "GetTimestamp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.UpdateEventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::UpdateEventModifiers)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6b5c8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                                                           { "UpdateEventModifiers", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::KeyEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::ToKeyEvent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b5cb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToKeyEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToTextInputEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::TextInputEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::ToTextInputEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b5ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToTextInputEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.SendNextOrPreviousNavigationEventOnTabKeyDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::SendNextOrPreviousNavigationEventOnTabKeyDownEvent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6b5cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                             { "SendNextOrPreviousNavigationEventOnTabKeyDownEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::CommandEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::by_ref<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::ToCommandEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6b5ced4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToCommandEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(&::UnityEngine::InputForUI::InputEventPartialProvider::_ctor)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x6b5d368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Event*& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__ev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ev;
}
constexpr ::UnityEngine::Event* const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__ev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ev;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__ev(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ev = value;
}
constexpr ::UnityEngine::OperatingSystemFamily& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__operatingSystemFamily() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operatingSystemFamily;
}
constexpr ::UnityEngine::OperatingSystemFamily const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__operatingSystemFamily() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operatingSystemFamily;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__operatingSystemFamily(::UnityEngine::OperatingSystemFamily value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operatingSystemFamily = value;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__keyboardButtonsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardButtonsState;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__keyboardButtonsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardButtonsState;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__keyboardButtonsState(::UnityEngine::InputForUI::KeyEvent_ButtonsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardButtonsState = value;
}
constexpr ::UnityEngine::InputForUI::EventModifiers& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__eventModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventModifiers;
}
constexpr ::UnityEngine::InputForUI::EventModifiers const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__eventModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventModifiers;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventModifiers = value;
}
constexpr bool& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__sendNavigationEventOnTabKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendNavigationEventOnTabKey;
}
constexpr bool const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__sendNavigationEventOnTabKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendNavigationEventOnTabKey;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__sendNavigationEventOnTabKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendNavigationEventOnTabKey = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>*&
UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__IMGUICommandToInputForUICommandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUICommandToInputForUICommandType;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* const&
UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__IMGUICommandToInputForUICommandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUICommandToInputForUICommandType;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__IMGUICommandToInputForUICommandType(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IMGUICommandToInputForUICommandType = value;
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputForUI::InputEventPartialProvider::RequestCurrentState(::UnityEngine::InputForUI::Event_Type type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                                                         { "RequestCurrentState", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::InputEventPartialProvider::GetTimestamp(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "GetTimestamp", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::UpdateEventModifiers(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                                                         { "UpdateEventModifiers", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::KeyEvent UnityEngine::InputForUI::InputEventPartialProvider::ToKeyEvent(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToKeyEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::KeyEvent>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::TextInputEvent UnityEngine::InputForUI::InputEventPartialProvider::ToTextInputEvent(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToTextInputEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::TextInputEvent>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::SendNextOrPreviousNavigationEventOnTabKeyDownEvent(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(),
                                                           { "SendNextOrPreviousNavigationEventOnTabKeyDownEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::CommandEvent UnityEngine::InputForUI::InputEventPartialProvider::ToCommandEvent(::by_ref<::UnityEngine::Event*> ev) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { "ToCommandEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Event*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::CommandEvent>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::InputEventPartialProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::InputEventPartialProvider* UnityEngine::InputForUI::InputEventPartialProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::InputEventPartialProvider*>());
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr UnityEngine::InputForUI::InputEventPartialProvider::operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::InputEventPartialProvider::i___UnityEngine__InputForUI__IEventProviderImpl() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::InputEventPartialProvider::InputEventPartialProvider() {}
