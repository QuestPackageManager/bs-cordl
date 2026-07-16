#pragma once
// IWYU pragma private; include "LiteNetLib/NetDebug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetDebug_def.hpp"
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetDebug.WriteLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::WriteLogic)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x589f6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                                { "WriteLogic", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetDebug.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::Write)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x589f900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "Write", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetDebug.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x589f96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                                { "Write", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetDebug.WriteForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::WriteForce)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x589f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "WriteForce", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetDebug.WriteForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::WriteForce)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x589fa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                                { "WriteForce", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetDebug.WriteError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::NetDebug::WriteError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x589bb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "WriteError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::NetDebug::setStaticF_Logger(::LiteNetLib::INetLogger* value) {
  ::cordl_internals::setStaticField<::LiteNetLib::INetLogger*, "Logger", ::LiteNetLib::NetDebug*>(std::forward<::LiteNetLib::INetLogger*>(value));
}
inline ::LiteNetLib::INetLogger* LiteNetLib::NetDebug::getStaticF_Logger() {
  return ::cordl_internals::getStaticField<::LiteNetLib::INetLogger*, "Logger", ::LiteNetLib::NetDebug*>();
}
inline void LiteNetLib::NetDebug::setStaticF_DebugLogLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "DebugLogLock", ::LiteNetLib::NetDebug*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LiteNetLib::NetDebug::getStaticF_DebugLogLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "DebugLogLock", ::LiteNetLib::NetDebug*>();
}
inline void LiteNetLib::NetDebug::WriteLogic(::LiteNetLib::NetLogLevel logLevel, ::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                              { "WriteLogic", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel, str, args);
}
inline void LiteNetLib::NetDebug::Write(::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "Write", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, args);
}
inline void LiteNetLib::NetDebug::Write(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                              { "Write", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, str, args);
}
inline void LiteNetLib::NetDebug::WriteForce(::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "WriteForce", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, args);
}
inline void LiteNetLib::NetDebug::WriteForce(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(),
                                              { "WriteForce", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, str, args);
}
inline void LiteNetLib::NetDebug::WriteError(::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetDebug*>(), { "WriteError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, args);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetDebug::NetDebug() {}
