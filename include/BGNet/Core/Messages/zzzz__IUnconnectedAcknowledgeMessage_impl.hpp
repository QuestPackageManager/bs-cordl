#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedAcknowledgeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage.get_messageHandled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::*)()>(
    &::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::get_messageHandled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
inline bool BGNet::Core::Messages::IUnconnectedAcknowledgeMessage::get_messageHandled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
