#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceEventCache.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_Callstack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::get_Callstack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x639297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_Callstack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_LogicalOperationStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Stack* (::System::Diagnostics::TraceEventCache::*)()>(
    &::System::Diagnostics::TraceEventCache::get_LogicalOperationStack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x639299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_LogicalOperationStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_DateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::get_DateTime)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63929b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_DateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_ProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::get_ProcessId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6392a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_ProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_ThreadId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::get_ThreadId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6392aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_ThreadId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.get_Timestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::get_Timestamp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6392b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_Timestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.InitProcessInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::TraceEventCache::InitProcessInfo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6392ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "InitProcessInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.GetProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceEventCache::GetProcessId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6392a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "GetProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache.GetThreadId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceEventCache::GetThreadId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6392b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "GetThreadId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceEventCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceEventCache::*)()>(&::System::Diagnostics::TraceEventCache::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6392fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Diagnostics::TraceEventCache::__cordl_internal_get_timeStamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStamp;
}
constexpr int64_t const& System::Diagnostics::TraceEventCache::__cordl_internal_get_timeStamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStamp;
}
constexpr void System::Diagnostics::TraceEventCache::__cordl_internal_set_timeStamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeStamp = value;
}
constexpr ::System::DateTime& System::Diagnostics::TraceEventCache::__cordl_internal_get_dateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateTime;
}
constexpr ::System::DateTime const& System::Diagnostics::TraceEventCache::__cordl_internal_get_dateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateTime;
}
constexpr void System::Diagnostics::TraceEventCache::__cordl_internal_set_dateTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dateTime = value;
}
constexpr ::StringW& System::Diagnostics::TraceEventCache::__cordl_internal_get_stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackTrace;
}
constexpr ::StringW const& System::Diagnostics::TraceEventCache::__cordl_internal_get_stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackTrace;
}
constexpr void System::Diagnostics::TraceEventCache::__cordl_internal_set_stackTrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackTrace = value;
}
inline void System::Diagnostics::TraceEventCache::setStaticF_processId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "processId", ::System::Diagnostics::TraceEventCache*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceEventCache::getStaticF_processId() {
  return ::cordl_internals::getStaticField<int32_t, "processId", ::System::Diagnostics::TraceEventCache*>();
}
inline void System::Diagnostics::TraceEventCache::setStaticF_processName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "processName", ::System::Diagnostics::TraceEventCache*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::TraceEventCache::getStaticF_processName() {
  return ::cordl_internals::getStaticField<::StringW, "processName", ::System::Diagnostics::TraceEventCache*>();
}
inline ::StringW System::Diagnostics::TraceEventCache::get_Callstack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_Callstack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Stack* System::Diagnostics::TraceEventCache::get_LogicalOperationStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_LogicalOperationStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Stack*>(this, ___internal_method);
}
inline ::System::DateTime System::Diagnostics::TraceEventCache::get_DateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_DateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int32_t System::Diagnostics::TraceEventCache::get_ProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_ProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::TraceEventCache::get_ThreadId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_ThreadId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t System::Diagnostics::TraceEventCache::get_Timestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "get_Timestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Diagnostics::TraceEventCache::InitProcessInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "InitProcessInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceEventCache::GetProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "GetProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceEventCache::GetThreadId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { "GetThreadId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Diagnostics::TraceEventCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceEventCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceEventCache* System::Diagnostics::TraceEventCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceEventCache*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceEventCache::TraceEventCache() {}
