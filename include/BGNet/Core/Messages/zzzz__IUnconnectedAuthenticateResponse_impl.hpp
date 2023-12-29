#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::IUnconnectedAuthenticateResponse.get_isAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::IUnconnectedAuthenticateResponse::*)()>(
    &::BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
inline bool BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
