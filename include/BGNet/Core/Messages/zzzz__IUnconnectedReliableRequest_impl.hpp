#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::IUnconnectedReliableRequest.get_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::IUnconnectedReliableRequest::*)()>(
    &::BGNet::Core::Messages::IUnconnectedReliableRequest::get_requestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::IUnconnectedReliableRequest.WithRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest* (
    ::BGNet::Core::Messages::IUnconnectedReliableRequest::*)(uint32_t)>(&::BGNet::Core::Messages::IUnconnectedReliableRequest::WithRequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
inline uint32_t BGNet::Core::Messages::IUnconnectedReliableRequest::get_requestId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet::Core::Messages::IUnconnectedReliableRequest::WithRequestId(uint32_t requestId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::IUnconnectedReliableRequest*, false>(this, ___internal_method, requestId);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
