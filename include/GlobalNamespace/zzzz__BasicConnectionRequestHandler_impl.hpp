#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicConnectionRequestHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BasicConnectionRequestHandler::*)()>(&::GlobalNamespace::BasicConnectionRequestHandler::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332a888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { "get_secret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.set_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)(::StringW)>(&::GlobalNamespace::BasicConnectionRequestHandler::set_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { "set_secret", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool, ::StringW)>(
    &::GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x332a898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(),
                                                                                           { "GetConnectionMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::GlobalNamespace::BasicConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::StringW>)>(
        &::GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x332a91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(),
                                                             { "ValidateConnectionMessage",
                                                               {},
                                                               { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)()>(&::GlobalNamespace::BasicConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332aa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_get__secret_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_get__secret_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret_k__BackingField;
}
constexpr void GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_set__secret_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secret_k__BackingField = value;
}
inline ::StringW GlobalNamespace::BasicConnectionRequestHandler::get_secret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { "get_secret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::set_secret(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { "set_secret", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                 ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(),
                                                                                         { "GetConnectionMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline bool GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<::StringW> userId, ::by_ref<::StringW> userName,
                                                                                      ::by_ref<bool> isConnectionOwner, ::by_ref<::StringW> compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(),
                                                           { "ValidateConnectionMessage",
                                                             {},
                                                             { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicConnectionRequestHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicConnectionRequestHandler* GlobalNamespace::BasicConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicConnectionRequestHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::BasicConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::BasicConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicConnectionRequestHandler::BasicConnectionRequestHandler() {}
