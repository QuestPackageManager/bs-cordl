#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerConnectionRequestHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::LocalServerConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3338790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(),
                                                                                           { "GetConnectionMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::GlobalNamespace::LocalServerConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::StringW>)>(
        &::GlobalNamespace::LocalServerConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3338998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(),
                                                             { "ValidateConnectionMessage",
                                                               {},
                                                               { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionRequestHandler::*)()>(&::GlobalNamespace::LocalServerConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3338c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalServerConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                       ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(),
                                                                                         { "GetConnectionMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline bool GlobalNamespace::LocalServerConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<::StringW> userId, ::by_ref<::StringW> userName,
                                                                                            ::by_ref<bool> isConnectionOwner, ::by_ref<::StringW> compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(),
                                                           { "ValidateConnectionMessage",
                                                             {},
                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::LocalServerConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionRequestHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerConnectionRequestHandler* GlobalNamespace::LocalServerConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionRequestHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::LocalServerConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::LocalServerConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler::LocalServerConnectionRequestHandler() {}
