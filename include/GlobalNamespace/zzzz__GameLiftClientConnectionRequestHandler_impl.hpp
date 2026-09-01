#pragma once
// IWYU pragma private; include "GlobalNamespace\GameLiftClientConnectionRequestHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.get_playerSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)()>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a9758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { "get_playerSessionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.set_playerSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::StringW)>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { "set_playerSessionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32a9768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(),
                                                                                           { "GetConnectionMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<::StringW>,
                                                                                                                           ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::StringW>)>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32a97ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(),
                                                             { "ValidateConnectionMessage",
                                                               {},
                                                               { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)()>(&::GlobalNamespace::GameLiftClientConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a9864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_get__playerSessionId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_get__playerSessionId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId_k__BackingField;
}
constexpr void GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_set__playerSessionId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerSessionId_k__BackingField = value;
}
inline ::StringW GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { "get_playerSessionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { "set_playerSessionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                          ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(),
                                                                                         { "GetConnectionMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline bool GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<::StringW> userId, ::by_ref<::StringW> userName,
                                                                                               ::by_ref<bool> isConnectionOwner, ::by_ref<::StringW> compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(),
                                                           { "ValidateConnectionMessage",
                                                             {},
                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftClientConnectionRequestHandler* GlobalNamespace::GameLiftClientConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::GameLiftClientConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::GameLiftClientConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler::GameLiftClientConnectionRequestHandler() {}
