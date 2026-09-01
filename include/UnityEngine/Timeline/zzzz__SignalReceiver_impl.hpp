#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\SignalReceiver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__SignalAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__SignalReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)(
    ::UnityEngine::Timeline::SignalAsset*, ::by_ref<::UnityEngine::Events::UnityEvent*>)>(&::UnityEngine::Timeline::SignalReceiver_EventKeyValue::TryGetValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69c6c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(),
                                                { "TryGetValue", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Events::UnityEvent*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver_EventKeyValue::Append)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69c6e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(),
                                                             { "Append", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)(int32_t)>(&::UnityEngine::Timeline::SignalReceiver_EventKeyValue::Remove)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69c7588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)(::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::SignalReceiver_EventKeyValue::Remove)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69c70ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.get_signals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* (
    ::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)()>(&::UnityEngine::Timeline::SignalReceiver_EventKeyValue::get_signals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c79ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "get_signals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue.get_events
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)()>(
    &::UnityEngine::Timeline::SignalReceiver_EventKeyValue::get_events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c79b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "get_events", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver_EventKeyValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver_EventKeyValue::*)()>(&::UnityEngine::Timeline::SignalReceiver_EventKeyValue::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69c78f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*& UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_get_m_Signals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Signals;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* const& UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_get_m_Signals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Signals;
}
constexpr void UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_set_m_Signals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Signals = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_get_m_Events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* const& UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_get_m_Events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr void UnityEngine::Timeline::SignalReceiver_EventKeyValue::__cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Events = value;
}
inline bool UnityEngine::Timeline::SignalReceiver_EventKeyValue::TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ::by_ref<::UnityEngine::Events::UnityEvent*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(),
                                              { "TryGetValue", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Events::UnityEvent*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline void UnityEngine::Timeline::SignalReceiver_EventKeyValue::Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(),
                                                           { "Append", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Timeline::SignalReceiver_EventKeyValue::Remove(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::SignalReceiver_EventKeyValue::Remove(::UnityEngine::Timeline::SignalAsset* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* UnityEngine::Timeline::SignalReceiver_EventKeyValue::get_signals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "get_signals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* UnityEngine::Timeline::SignalReceiver_EventKeyValue::get_events() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { "get_events", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalReceiver_EventKeyValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* UnityEngine::Timeline::SignalReceiver_EventKeyValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SignalReceiver_EventKeyValue*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue::SignalReceiver_EventKeyValue() {}
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*,
                                                                                                         ::System::Object*)>(&::UnityEngine::Timeline::SignalReceiver::OnNotify)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x69c6b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
            { "OnNotify", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.AddReaction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver::AddReaction)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x69c6d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                { "AddReaction", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.AddEmptyReaction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver::AddEmptyReaction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69c6fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "AddEmptyReaction", {}, { ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*)>(&::UnityEngine::Timeline::SignalReceiver::Remove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69c7024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetRegisteredSignals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* (::UnityEngine::Timeline::SignalReceiver::*)()>(
    &::UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c71dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetRegisteredSignals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetReaction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::SignalReceiver::GetReaction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69c71f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetReaction", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69c7220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.ChangeSignalAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t, ::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x69c7278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                             { "ChangeSignalAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.RemoveAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(&::UnityEngine::Timeline::SignalReceiver::RemoveAtIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69c74dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "RemoveAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.ChangeReactionAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t, ::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69c7630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                             { "ChangeReactionAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetReactionAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(
    &::UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69c7700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetReactionAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetSignalAssetAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::SignalAsset> (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(
    &::UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69c77c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetSignalAssetAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c7890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c7894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue*& UnityEngine::Timeline::SignalReceiver::__cordl_internal_get_m_Events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* const& UnityEngine::Timeline::SignalReceiver::__cordl_internal_get_m_Events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr void UnityEngine::Timeline::SignalReceiver::__cordl_internal_set_m_Events(::UnityEngine::Timeline::SignalReceiver_EventKeyValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Events = value;
}
inline void UnityEngine::Timeline::SignalReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                       { "OnNotify", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, notification, context);
}
inline void UnityEngine::Timeline::SignalReceiver::AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                           { "AddReaction", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, reaction);
}
inline int32_t UnityEngine::Timeline::SignalReceiver::AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "AddEmptyReaction", {}, { ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reaction);
}
inline void UnityEngine::Timeline::SignalReceiver::Remove(::UnityEngine::Timeline::SignalAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetRegisteredSignals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReaction(::UnityEngine::Timeline::SignalAsset* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetReaction", {}, { ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method, key);
}
inline int32_t UnityEngine::Timeline::SignalReceiver::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                           { "ChangeSignalAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Timeline::SignalAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, newKey);
}
inline void UnityEngine::Timeline::SignalReceiver::RemoveAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "RemoveAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(),
                                                           { "ChangeReactionAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Events::UnityEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, reaction);
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetReactionAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method, idx);
}
inline ::UnityW<::UnityEngine::Timeline::SignalAsset> UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "GetSignalAssetAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::SignalAsset>>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::SignalReceiver::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalReceiver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalReceiver* UnityEngine::Timeline::SignalReceiver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SignalReceiver*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr UnityEngine::Timeline::SignalReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
constexpr ::UnityEngine::Playables::INotificationReceiver* UnityEngine::Timeline::SignalReceiver::i___UnityEngine__Playables__INotificationReceiver() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalReceiver::SignalReceiver() {}
