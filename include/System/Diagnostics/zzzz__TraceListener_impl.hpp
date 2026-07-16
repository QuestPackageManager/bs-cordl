#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceListener.hpp"
#include "System/Diagnostics/zzzz__TraceOptions_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Diagnostics/zzzz__TraceFilter_def.hpp"
#include "System/Diagnostics/zzzz__TraceOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63934c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_Name)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63934d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_IsThreadSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_IsThreadSafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6393534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63935a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63935a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6393120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_IndentLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6393138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_IndentSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_Filter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceFilter* (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63935ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_Filter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_NeedIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_NeedIndent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63935b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_NeedIndent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_NeedIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::set_NeedIndent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63935bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_NeedIndent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_TraceOutputOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceOptions (::System::Diagnostics::TraceListener::*)()>(
    &::System::Diagnostics::TraceListener::get_TraceOutputOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63935c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_TraceOutputOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteIndent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::WriteIndent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63935cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::WriteLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.TraceEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType,
                                                                                                      int32_t, ::StringW)>(&::System::Diagnostics::TraceListener::TraceEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63936a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW, ::System::Diagnostics::TraceEventType, int32_t)>(
    &::System::Diagnostics::TraceListener::WriteHeader)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6393770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                                                { "WriteHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceEventCache*)>(&::System::Diagnostics::TraceListener::WriteFooter)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x63938a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "WriteFooter", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceOptions)>(&::System::Diagnostics::TraceListener::IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6393e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "IsEnabled", {}, { ::i2c::type_of<::System::Diagnostics::TraceOptions>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentLevel = value;
}
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentSize;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentSize;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentSize = value;
}
constexpr ::System::Diagnostics::TraceOptions& System::Diagnostics::TraceListener::__cordl_internal_get_traceOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceOptions;
}
constexpr ::System::Diagnostics::TraceOptions const& System::Diagnostics::TraceListener::__cordl_internal_get_traceOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceOptions;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_traceOptions(::System::Diagnostics::TraceOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___traceOptions = value;
}
constexpr bool& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needIndent;
}
constexpr bool const& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needIndent;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_needIndent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needIndent = value;
}
constexpr ::StringW& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listenerName;
}
constexpr ::StringW const& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listenerName;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_listenerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listenerName = value;
}
constexpr ::System::Diagnostics::TraceFilter*& System::Diagnostics::TraceListener::__cordl_internal_get_filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr ::System::Diagnostics::TraceFilter* const& System::Diagnostics::TraceListener::__cordl_internal_get_filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_filter(::System::Diagnostics::TraceFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filter = value;
}
inline void System::Diagnostics::TraceListener::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Diagnostics::TraceListener::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListener::get_IsThreadSafe() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::TraceListener::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_IndentLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_IndentLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::TraceListener::set_IndentSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_IndentSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceFilter* System::Diagnostics::TraceListener::get_Filter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_Filter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceFilter*>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListener::get_NeedIndent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_NeedIndent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_NeedIndent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "set_NeedIndent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceOptions System::Diagnostics::TraceListener::get_TraceOutputOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "get_TraceOutputOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceOptions>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Write(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::TraceListener::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::WriteLine(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::TraceListener::TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                           ::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceListener*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCache, source, eventType, id, message);
}
inline void System::Diagnostics::TraceListener::WriteHeader(::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                                              { "WriteHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, eventType, id);
}
inline void System::Diagnostics::TraceListener::WriteFooter(::System::Diagnostics::TraceEventCache* eventCache) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "WriteFooter", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCache);
}
inline bool System::Diagnostics::TraceListener::IsEnabled(::System::Diagnostics::TraceOptions opts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceListener*>(), { "IsEnabled", {}, { ::i2c::type_of<::System::Diagnostics::TraceOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opts);
}
inline ::System::Diagnostics::TraceListener* System::Diagnostics::TraceListener::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceListener*>(name));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Diagnostics::TraceListener::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Diagnostics::TraceListener::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceListener::TraceListener() {}
