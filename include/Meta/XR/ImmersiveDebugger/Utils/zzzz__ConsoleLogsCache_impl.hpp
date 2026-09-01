#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Utils\ConsoleLogsCache.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a467bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0._EnqueueLogEntry_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::*)(::System::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_EnqueueLogEntry_b__0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a46850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>(),
                                                                                           { "<EnqueueLogEntry>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
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
  this->___logString = value;
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
  this->___stackTrace = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::_EnqueueLogEntry_b__0(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>(),
                                                                                         { "<EnqueueLogEntry>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0::ConsoleLogsCache___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.OnApplicationQuitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnApplicationQuitting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a46150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "OnApplicationQuitting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.OnLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnLoad)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a461f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "OnLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.StartCachingLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::StartCachingLogs)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a46380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "StartCachingLogs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.ConsumeStartupLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsumeStartupLogs)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5a46508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(),
                                                             { "ConsumeStartupLogs", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache.EnqueueLogEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::EnqueueLogEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a466b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(),
                                                             { "EnqueueLogEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF_OnLogReceived(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*, "OnLogReceived", ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(
      std::forward<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>(value));
}
inline ::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF_OnLogReceived() {
  return ::cordl_internals::getStaticField<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*, "OnLogReceived", ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>();
}
inline void
Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF_StartupLogs(::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*, "StartupLogs",
                                    ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(
      std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF_StartupLogs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>*, "StartupLogs",
                                           ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::setStaticF__mainThreadContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_mainThreadContext", ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(
      std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::getStaticF__mainThreadContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_mainThreadContext", ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnApplicationQuitting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "OnApplicationQuitting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::OnLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "OnLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::StartCachingLogs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(), { "StartCachingLogs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsumeStartupLogs(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* logProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(),
                                                           { "ConsumeStartupLogs", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logProcessor);
}
inline void Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::EnqueueLogEntry(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*>(),
                                                           { "EnqueueLogEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logString, stackTrace, type);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache::ConsoleLogsCache() {}
