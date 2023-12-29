#pragma once
#include "GlobalNamespace/zzzz__IUnconnectedMessageReceiver_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IUnconnectedMessageReceiver.ReceiveUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IUnconnectedMessageReceiver::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IUnconnectedMessageReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IUnconnectedMessageReceiver*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::IUnconnectedMessageReceiver::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
inline void GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage(::System::Net::IPEndPoint* endPoint, ::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IUnconnectedMessageReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, reader);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
