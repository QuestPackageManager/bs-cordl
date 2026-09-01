#pragma once
// IWYU pragma private; include "LiteNetLib\INetLogger.hpp"
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetLogger.WriteNet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::INetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*>)>(&::LiteNetLib::INetLogger::WriteNet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::INetLogger*>(), { ::i2c::class_of<::LiteNetLib::INetLogger*>(), 0 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::INetLogger::WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::INetLogger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, str, args);
}
