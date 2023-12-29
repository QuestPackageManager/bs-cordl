#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserResponse_impl.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "GameLift/zzzz__IGameLiftServerToClientMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserResponse_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result::__AuthenticateGameLiftUserResponse__Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result::__AuthenticateGameLiftUserResponse__Result() {}
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result GameLift::__AuthenticateGameLiftUserResponse__Result::Success{ static_cast<int32_t>(0x0) };
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result GameLift::__AuthenticateGameLiftUserResponse__Result::Failed{ static_cast<int32_t>(0x1) };
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result GameLift::__AuthenticateGameLiftUserResponse__Result::UnknownError{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>* (*)()>(
    &::GameLift::AuthenticateGameLiftUserResponse::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd7f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "get_pool",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.get_resultCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GameLift::AuthenticateGameLiftUserResponse::*)()>(
    &::GameLift::AuthenticateGameLiftUserResponse::get_resultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7fc4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.get_resultCodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameLift::AuthenticateGameLiftUserResponse::*)()>(
    &::GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdd7fcc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.get_isAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GameLift::AuthenticateGameLiftUserResponse::*)()>(
    &::GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdd8034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                               "get_isAuthenticated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GameLift::AuthenticateGameLiftUserResponse* (
    ::GameLift::AuthenticateGameLiftUserResponse::*)(::GameLift::__AuthenticateGameLiftUserResponse__Result)>(&::GameLift::AuthenticateGameLiftUserResponse::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd8044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameLift::__AuthenticateGameLiftUserResponse__Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GameLift::AuthenticateGameLiftUserResponse::Serialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xdd804c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GameLift::AuthenticateGameLiftUserResponse::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd8084;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserResponse::*)()>(&::GameLift::AuthenticateGameLiftUserResponse::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd80c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserResponse::*)()>(&::GameLift::AuthenticateGameLiftUserResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd8118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GameLift::IGameLiftServerToClientMessage"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::GameLift::IGameLiftServerToClientMessage*() noexcept {
  return static_cast<::GameLift::IGameLiftServerToClientMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GameLift::IGameLiftMessage"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::GameLift::IGameLiftMessage*() noexcept {
  return static_cast<::GameLift::IGameLiftMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedAuthenticateResponse"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr GameLift::AuthenticateGameLiftUserResponse::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result& GameLift::AuthenticateGameLiftUserResponse::__get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::GameLift::__AuthenticateGameLiftUserResponse__Result const& GameLift::AuthenticateGameLiftUserResponse::__get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void GameLift::AuthenticateGameLiftUserResponse::__set_result(::GameLift::__AuthenticateGameLiftUserResponse__Result value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
inline ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>* GameLift::AuthenticateGameLiftUserResponse::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "get_pool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserResponse*>*, false>(nullptr, ___internal_method);
}
inline uint8_t GameLift::AuthenticateGameLiftUserResponse::get_resultCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                             "get_resultCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::StringW GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                             "get_resultCodeString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(),
                                                                             "get_isAuthenticated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GameLift::AuthenticateGameLiftUserResponse* GameLift::AuthenticateGameLiftUserResponse::Init(::GameLift::__AuthenticateGameLiftUserResponse__Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameLift::__AuthenticateGameLiftUserResponse__Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GameLift::AuthenticateGameLiftUserResponse*, false>(this, ___internal_method, result);
}
inline void GameLift::AuthenticateGameLiftUserResponse::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GameLift::AuthenticateGameLiftUserResponse::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GameLift::AuthenticateGameLiftUserResponse::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GameLift::AuthenticateGameLiftUserResponse* GameLift::AuthenticateGameLiftUserResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GameLift::AuthenticateGameLiftUserResponse*>());
}
inline void GameLift::AuthenticateGameLiftUserResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserResponse*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameLift::AuthenticateGameLiftUserResponse::AuthenticateGameLiftUserResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
