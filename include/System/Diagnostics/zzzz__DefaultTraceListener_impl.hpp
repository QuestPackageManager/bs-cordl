#pragma once
// IWYU pragma private; include "System/Diagnostics/DefaultTraceListener.hpp"
#include "System/Diagnostics/zzzz__TraceListener_impl.hpp"
#include "System/Diagnostics/zzzz__DefaultTraceListener_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.GetPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Diagnostics::DefaultTraceListener::GetPrefix)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x639a3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)()>(&::System::Diagnostics::DefaultTraceListener::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63930c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.get_LogFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::DefaultTraceListener::*)()>(&::System::Diagnostics::DefaultTraceListener::get_LogFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639a47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "get_LogFileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteWindowsDebugString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*)>(&::System::Diagnostics::DefaultTraceListener::WriteWindowsDebugString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639a484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteWindowsDebugString", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteDebugString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW)>(&::System::Diagnostics::DefaultTraceListener::WriteDebugString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x639a488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteDebugString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteMonoTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW)>(&::System::Diagnostics::DefaultTraceListener::WriteMonoTrace)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x639a518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteMonoTrace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WritePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)()>(&::System::Diagnostics::DefaultTraceListener::WritePrefix)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x639a92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WritePrefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW)>(&::System::Diagnostics::DefaultTraceListener::WriteImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x639a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteImpl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteLogFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW, ::StringW)>(&::System::Diagnostics::DefaultTraceListener::WriteLogFile)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x639a6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteLogFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW)>(&::System::Diagnostics::DefaultTraceListener::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639aa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { ::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DefaultTraceListener.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DefaultTraceListener::*)(::StringW)>(&::System::Diagnostics::DefaultTraceListener::WriteLine)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x639aa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { ::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::DefaultTraceListener::__cordl_internal_get_logFileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logFileName;
}
constexpr ::StringW const& System::Diagnostics::DefaultTraceListener::__cordl_internal_get_logFileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logFileName;
}
constexpr void System::Diagnostics::DefaultTraceListener::__cordl_internal_set_logFileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logFileName = value;
}
inline void System::Diagnostics::DefaultTraceListener::setStaticF_OnWin32(bool value) {
  ::cordl_internals::setStaticField<bool, "OnWin32", ::System::Diagnostics::DefaultTraceListener*>(std::forward<bool>(value));
}
inline bool System::Diagnostics::DefaultTraceListener::getStaticF_OnWin32() {
  return ::cordl_internals::getStaticField<bool, "OnWin32", ::System::Diagnostics::DefaultTraceListener*>();
}
inline void System::Diagnostics::DefaultTraceListener::setStaticF_MonoTracePrefix(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MonoTracePrefix", ::System::Diagnostics::DefaultTraceListener*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::DefaultTraceListener::getStaticF_MonoTracePrefix() {
  return ::cordl_internals::getStaticField<::StringW, "MonoTracePrefix", ::System::Diagnostics::DefaultTraceListener*>();
}
inline void System::Diagnostics::DefaultTraceListener::setStaticF_MonoTraceFile(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MonoTraceFile", ::System::Diagnostics::DefaultTraceListener*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::DefaultTraceListener::getStaticF_MonoTraceFile() {
  return ::cordl_internals::getStaticField<::StringW, "MonoTraceFile", ::System::Diagnostics::DefaultTraceListener*>();
}
inline ::StringW System::Diagnostics::DefaultTraceListener::GetPrefix(::StringW var, ::StringW target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "GetPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, var, target);
}
inline void System::Diagnostics::DefaultTraceListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::DefaultTraceListener::get_LogFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "get_LogFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Diagnostics::DefaultTraceListener::WriteWindowsDebugString(char16_t* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteWindowsDebugString", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void System::Diagnostics::DefaultTraceListener::WriteDebugString(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteDebugString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::DefaultTraceListener::WriteMonoTrace(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteMonoTrace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::DefaultTraceListener::WritePrefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WritePrefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::DefaultTraceListener::WriteImpl(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteImpl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::DefaultTraceListener::WriteLogFile(::StringW message, ::StringW logFile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), { "WriteLogFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, logFile);
}
inline void System::Diagnostics::DefaultTraceListener::Write(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::DefaultTraceListener::WriteLine(::StringW message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::DefaultTraceListener*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Diagnostics::DefaultTraceListener* System::Diagnostics::DefaultTraceListener::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DefaultTraceListener*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DefaultTraceListener::DefaultTraceListener() {}
