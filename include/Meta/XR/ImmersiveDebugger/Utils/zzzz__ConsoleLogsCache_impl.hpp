#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ConsoleLogsCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ConsoleLogsCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ConsoleLogsCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5896f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0._EnqueueLogEntry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::*)(::System::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_EnqueueLogEntry_b__0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5897004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>::get(), "<EnqueueLogEntry>b__0",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_logString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logString;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_logString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logString;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_set_logString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackTrace;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackTrace;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_set_stackTrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stackTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LogType& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::LogType const& Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::__cordl_internal_set_type(::UnityEngine::LogType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_EnqueueLogEntry_b__0(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>::get(), "<EnqueueLogEntry>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::ConsoleLogsCache___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.OnApplicationQuitting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnApplicationQuitting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5896904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                               "OnApplicationQuitting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.OnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnLoad)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58969a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                               "OnLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.StartCachingLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::StartCachingLogs)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5896b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                               "StartCachingLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.ConsumeStartupLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsumeStartupLogs)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5896cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(), "ConsumeStartupLogs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.EnqueueLogEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::EnqueueLogEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5896e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(), "EnqueueLogEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF_OnLogReceived(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*, "OnLogReceived",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>(
      std::forward<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>(value));
}
inline ::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF_OnLogReceived() {
  return ::cordl_internals::getStaticField<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*, "OnLogReceived",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>();
}
inline void
Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF_StartupLogs(::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*, "StartupLogs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF_StartupLogs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*, "StartupLogs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF__mainThreadContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_mainThreadContext",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>(
      std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF__mainThreadContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_mainThreadContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnApplicationQuitting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                             "OnApplicationQuitting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                             "OnLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::StartCachingLogs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(),
                                                                             "StartCachingLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsumeStartupLogs(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* logProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(), "ConsumeStartupLogs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logProcessor);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::EnqueueLogEntry(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>::get(), "EnqueueLogEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logString, stackTrace, type);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsoleLogsCache() {}
