#pragma once
// IWYU pragma private; include "GlobalNamespace/NetLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetLogger_def.hpp"
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetLogger.WriteNet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*>)>(
    &::GlobalNamespace::NetLogger::WriteNet)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3339040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetLogger*>(),
                                                { "WriteNet", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetLogger::*)()>(&::GlobalNamespace::NetLogger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3335004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetLogger::WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetLogger*>(),
                                              { "WriteNet", {}, { ::i2c::type_of<::LiteNetLib::NetLogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, str, args);
}
inline void GlobalNamespace::NetLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetLogger* GlobalNamespace::NetLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetLogger*>());
}
/// @brief Convert operator to "::LiteNetLib::INetLogger"
constexpr GlobalNamespace::NetLogger::operator ::LiteNetLib::INetLogger*() noexcept {
  return static_cast<::LiteNetLib::INetLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetLogger"
constexpr ::LiteNetLib::INetLogger* GlobalNamespace::NetLogger::i___LiteNetLib__INetLogger() noexcept {
  return static_cast<::LiteNetLib::INetLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetLogger::NetLogger() {}
