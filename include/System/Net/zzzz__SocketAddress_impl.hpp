#pragma once
// IWYU pragma private; include "System/Net/SocketAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::SocketAddress.get_Family
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::SocketAddress::*)()>(
    &::System::Net::SocketAddress::get_Family)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x625901c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Family",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x625904c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Size",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Net::SocketAddress::*)(int32_t)>(&::System::Net::SocketAddress::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6259054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::Sockets::AddressFamily, int32_t)>(
    &::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62590c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::IPAddress*)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x62591c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6259408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetIPAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetIPAddress)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6259464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "GetIPAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetIPEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetIPEndPoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6259638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "GetIPEndPoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::SocketAddress::*)(::System::Object*)>(&::System::Net::SocketAddress::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62596d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62597bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6259900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::SocketAddress::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr int32_t const& System::Net::SocketAddress::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::SocketAddress::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::SocketAddress::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::SocketAddress::__cordl_internal_get_m_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_changed;
}
constexpr bool const& System::Net::SocketAddress::__cordl_internal_get_m_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_changed;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_changed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_changed = value;
}
constexpr int32_t& System::Net::SocketAddress::__cordl_internal_get_m_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash;
}
constexpr int32_t const& System::Net::SocketAddress::__cordl_internal_get_m_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hash = value;
}
inline ::System::Net::Sockets::AddressFamily System::Net::SocketAddress::get_Family() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Family",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily, false>(this, ___internal_method);
}
inline int32_t System::Net::SocketAddress::get_Size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Size",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint8_t System::Net::SocketAddress::get_Item(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, offset);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::Sockets::AddressFamily family, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, family, size);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::IPAddress* ipAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ipAddress);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::IPAddress* ipaddress, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ipaddress, port);
}
inline ::System::Net::IPAddress* System::Net::SocketAddress::GetIPAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "GetIPAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::SocketAddress::GetIPEndPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), "GetIPEndPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline bool System::Net::SocketAddress::Equals(::System::Object* comparand) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, comparand);
}
inline int32_t System::Net::SocketAddress::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Net::SocketAddress::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SocketAddress*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::Sockets::AddressFamily family, int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::SocketAddress*>(family, size));
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::IPAddress* ipAddress) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::SocketAddress*>(ipAddress));
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::IPAddress* ipaddress, int32_t port) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::SocketAddress*>(ipaddress, port));
}
// Ctor Parameters []
constexpr ::System::Net::SocketAddress::SocketAddress() {}
