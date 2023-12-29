#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GameLift/zzzz__IGameLiftClientToServerMessage_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>* (*)()>(
    &::GameLift::AuthenticateGameLiftUserRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd7e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "get_pool",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameLift::AuthenticateGameLiftUserRequest::*)()>(
    &::GameLift::AuthenticateGameLiftUserRequest::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                               "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.set_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(
    &::GameLift::AuthenticateGameLiftUserRequest::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "set_userId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameLift::AuthenticateGameLiftUserRequest::*)()>(
    &::GameLift::AuthenticateGameLiftUserRequest::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.set_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(
    &::GameLift::AuthenticateGameLiftUserRequest::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "set_userName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GameLift::AuthenticateGameLiftUserRequest* (::GameLift::AuthenticateGameLiftUserRequest::*)(::StringW, ::StringW, ::StringW)>(&::GameLift::AuthenticateGameLiftUserRequest::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdd7e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GameLift::AuthenticateGameLiftUserRequest::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd7e74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GameLift::AuthenticateGameLiftUserRequest::Deserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdd7ecc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)()>(&::GameLift::AuthenticateGameLiftUserRequest::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd7f28;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameLift::AuthenticateGameLiftUserRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameLift::AuthenticateGameLiftUserRequest::*)()>(&::GameLift::AuthenticateGameLiftUserRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GameLift::IGameLiftClientToServerMessage"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::GameLift::IGameLiftClientToServerMessage*() noexcept {
  return static_cast<::GameLift::IGameLiftClientToServerMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GameLift::IGameLiftMessage"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::GameLift::IGameLiftMessage*() noexcept {
  return static_cast<::GameLift::IGameLiftMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedAuthenticateRequest"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr GameLift::AuthenticateGameLiftUserRequest::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
constexpr ::StringW& GameLift::AuthenticateGameLiftUserRequest::__get__userId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr ::StringW const& GameLift::AuthenticateGameLiftUserRequest::__get__userId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set__userId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameLift::AuthenticateGameLiftUserRequest::__get__userName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr ::StringW const& GameLift::AuthenticateGameLiftUserRequest::__get__userName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set__userName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameLift::AuthenticateGameLiftUserRequest::__get_playerSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSessionId;
}
constexpr ::StringW const& GameLift::AuthenticateGameLiftUserRequest::__get_playerSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSessionId;
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set_playerSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>* GameLift::AuthenticateGameLiftUserRequest::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "get_pool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>*, false>(nullptr, ___internal_method);
}
inline ::StringW GameLift::AuthenticateGameLiftUserRequest::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "get_userId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GameLift::AuthenticateGameLiftUserRequest::set_userId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "set_userId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GameLift::AuthenticateGameLiftUserRequest::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GameLift::AuthenticateGameLiftUserRequest::set_userName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "set_userName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GameLift::AuthenticateGameLiftUserRequest* GameLift::AuthenticateGameLiftUserRequest::Init(::StringW userId, ::StringW userName, ::StringW playerSessionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GameLift::AuthenticateGameLiftUserRequest*, false>(this, ___internal_method, userId, userName, playerSessionId);
}
inline void GameLift::AuthenticateGameLiftUserRequest::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GameLift::AuthenticateGameLiftUserRequest::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GameLift::AuthenticateGameLiftUserRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GameLift::AuthenticateGameLiftUserRequest* GameLift::AuthenticateGameLiftUserRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GameLift::AuthenticateGameLiftUserRequest*>());
}
inline void GameLift::AuthenticateGameLiftUserRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameLift::AuthenticateGameLiftUserRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameLift::AuthenticateGameLiftUserRequest::AuthenticateGameLiftUserRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
