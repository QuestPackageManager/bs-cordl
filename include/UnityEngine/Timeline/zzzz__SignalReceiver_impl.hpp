#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalReceiver_def.hpp"
#include "UnityEngine/Timeline/zzzz__SignalReceiver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Timeline/zzzz__SignalAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.TryGetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)(
    ::UnityEngine::Timeline::SignalAsset*, ByRef<::UnityEngine::Events::UnityEvent*>)>(&::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::TryGetValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c691c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "TryGetValue", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Events::UnityEvent*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)(
    ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*)>(&::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Append)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c693b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Append", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)(int32_t)>(
    &::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Remove)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c69a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Remove",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)(::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c69608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.get_signals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* (
    ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)()>(&::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::get_signals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c69e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                               "get_signals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue.get_events
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* (
    ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)()>(&::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::get_events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c69e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                               "get_events", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::*)()>(
    &::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c69da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*& UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__get_m_Signals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Signals;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*> const&
UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__get_m_Signals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Signals;
}
constexpr void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__set_m_Signals(::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Signals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__get_m_Events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*> const&
UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__get_m_Events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Timeline::__SignalReceiver__EventKeyValue::TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ByRef<::UnityEngine::Events::UnityEvent*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "TryGetValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Events::UnityEvent*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
inline void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Append", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Remove(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::Remove(::UnityEngine::Timeline::SignalAsset* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* UnityEngine::Timeline::__SignalReceiver__EventKeyValue::get_signals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                             "get_signals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* UnityEngine::Timeline::__SignalReceiver__EventKeyValue::get_events() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                             "get_events", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* UnityEngine::Timeline::__SignalReceiver__EventKeyValue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>());
}
inline void UnityEngine::Timeline::__SignalReceiver__EventKeyValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue::__SignalReceiver__EventKeyValue() {}
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::UnityEngine::Timeline::SignalReceiver::OnNotify)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2c690ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "OnNotify", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.AddReaction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*)>(&::UnityEngine::Timeline::SignalReceiver::AddReaction)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c69274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "AddReaction", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.AddEmptyReaction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver::AddEmptyReaction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c694dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "AddEmptyReaction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::SignalReceiver::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c69548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetRegisteredSignals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>* (
    ::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c696c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(),
                                                                               "GetRegisteredSignals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetReaction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent* (::UnityEngine::Timeline::SignalReceiver::*)(::UnityEngine::Timeline::SignalAsset*)>(&::UnityEngine::Timeline::SignalReceiver::GetReaction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c696e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetReaction", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c69714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "Count",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.ChangeSignalAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t, ::UnityEngine::Timeline::SignalAsset*)>(
    &::UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2c69764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "ChangeSignalAtIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.RemoveAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(
    &::UnityEngine::Timeline::SignalReceiver::RemoveAtIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c699bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "RemoveAtIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.ChangeReactionAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)(int32_t, ::UnityEngine::Events::UnityEvent*)>(
    &::UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c69af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "ChangeReactionAtIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetReactionAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(
    &::UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c69bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetReactionAtIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.GetSignalAssetAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::SignalAsset* (::UnityEngine::Timeline::SignalReceiver::*)(int32_t)>(
    &::UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c69c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetSignalAssetAtIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c69d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalReceiver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalReceiver::*)()>(&::UnityEngine::Timeline::SignalReceiver::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c69d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr UnityEngine::Timeline::SignalReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*& UnityEngine::Timeline::SignalReceiver::__get_m_Events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*> const& UnityEngine::Timeline::SignalReceiver::__get_m_Events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr void UnityEngine::Timeline::SignalReceiver::__set_m_Events(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Timeline::SignalReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "OnNotify", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, origin, notification, context);
}
inline void UnityEngine::Timeline::SignalReceiver::AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "AddReaction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, reaction);
}
inline int32_t UnityEngine::Timeline::SignalReceiver::AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "AddEmptyReaction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reaction);
}
inline void UnityEngine::Timeline::SignalReceiver::Remove(::UnityEngine::Timeline::SignalAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>* UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(),
                                                                             "GetRegisteredSignals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReaction(::UnityEngine::Timeline::SignalAsset* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetReaction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*, false>(this, ___internal_method, key);
}
inline int32_t UnityEngine::Timeline::SignalReceiver::Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "ChangeSignalAtIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::SignalAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, newKey);
}
inline void UnityEngine::Timeline::SignalReceiver::RemoveAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "RemoveAtIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "ChangeReactionAtIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, reaction);
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetReactionAtIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*, false>(this, ___internal_method, idx);
}
inline ::UnityEngine::Timeline::SignalAsset* UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "GetSignalAssetAtIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::SignalAsset*, false>(this, ___internal_method, idx);
}
inline void UnityEngine::Timeline::SignalReceiver::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalReceiver* UnityEngine::Timeline::SignalReceiver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::SignalReceiver*>());
}
inline void UnityEngine::Timeline::SignalReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalReceiver*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalReceiver::SignalReceiver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
