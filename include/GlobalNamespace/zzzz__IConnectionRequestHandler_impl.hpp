#pragma once
// IWYU pragma private; include "GlobalNamespace\IConnectionRequestHandler.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), { ::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataReader*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::StringW>)>(&::GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), { ::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                             ::StringW compatibilityVersion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline bool GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<::StringW> userId, ::by_ref<::StringW> userName,
                                                                                  ::by_ref<bool> isConnectionOwner, ::by_ref<::StringW> compatibilityVersion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IConnectionRequestHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, userId, userName, isConnectionOwner, compatibilityVersion);
}
