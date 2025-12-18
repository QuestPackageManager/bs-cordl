#pragma once
// IWYU pragma private; include "System/Net/Sockets/IPPacketInformation.hpp"
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::IPPacketInformation::*)(::System::Object*)>(
    &::System::Net::Sockets::IPPacketInformation::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b54b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::IPPacketInformation::*)()>(
    &::System::Net::Sockets::IPPacketInformation::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61b554c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(), 2));
    return ___internal_method;
  }
};
inline bool System::Net::Sockets::IPPacketInformation::Equals(::System::Object* comparand) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, comparand);
}
inline int32_t System::Net::Sockets::IPPacketInformation::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress*", modifiers: "", def_value: Some("{}") }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::Sockets::IPPacketInformation::IPPacketInformation(::System::Net::IPAddress* address, int32_t networkInterface) noexcept {
  this->address = address;
  this->networkInterface = networkInterface;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::IPPacketInformation::IPPacketInformation() {}
