#pragma once
// IWYU pragma private; include "LiteNetLib\NetUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetUtils_def.hpp"
#include "LiteNetLib/zzzz__LocalAddrType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetUtils.MakeEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (*)(::StringW, int32_t)>(&::LiteNetLib::NetUtils::MakeEndPoint)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x589c99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "MakeEndPoint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.ResolveAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&::LiteNetLib::NetUtils::ResolveAddress)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58a293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddress", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.ResolveAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::StringW, ::System::Net::Sockets::AddressFamily)>(&::LiteNetLib::NetUtils::ResolveAddress)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58a7374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.ResolveAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)(::StringW)>(&::LiteNetLib::NetUtils::ResolveAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a7438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddresses", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.GetLocalIpList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::LiteNetLib::LocalAddrType)>(&::LiteNetLib::NetUtils::GetLocalIpList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58a7458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "GetLocalIpList", {}, { ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.GetLocalIpList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::StringW>*, ::LiteNetLib::LocalAddrType)>(&::LiteNetLib::NetUtils::GetLocalIpList)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x58a7500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(),
                                                { "GetLocalIpList", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.GetLocalIp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::LiteNetLib::LocalAddrType)>(&::LiteNetLib::NetUtils::GetLocalIp)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x589cb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "GetLocalIp", {}, { ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.PrintInterfaceInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LiteNetLib::NetUtils::PrintInterfaceInfos)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x58a7cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "PrintInterfaceInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetUtils.RelativeSequenceNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::LiteNetLib::NetUtils::RelativeSequenceNumber)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a5fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "RelativeSequenceNumber", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::NetUtils::setStaticF_IpList(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "IpList", ::LiteNetLib::NetUtils*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* LiteNetLib::NetUtils::getStaticF_IpList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "IpList", ::LiteNetLib::NetUtils*>();
}
inline ::System::Net::IPEndPoint* LiteNetLib::NetUtils::MakeEndPoint(::StringW hostStr, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "MakeEndPoint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(nullptr, ___internal_method, hostStr, port);
}
inline ::System::Net::IPAddress* LiteNetLib::NetUtils::ResolveAddress(::StringW hostStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddress", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, hostStr);
}
inline ::System::Net::IPAddress* LiteNetLib::NetUtils::ResolveAddress(::StringW hostStr, ::System::Net::Sockets::AddressFamily addressFamily) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, hostStr, addressFamily);
}
inline ::ArrayW<::System::Net::IPAddress*> LiteNetLib::NetUtils::ResolveAddresses(::StringW hostStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "ResolveAddresses", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*>>(nullptr, ___internal_method, hostStr);
}
inline ::System::Collections::Generic::List_1<::StringW>* LiteNetLib::NetUtils::GetLocalIpList(::LiteNetLib::LocalAddrType addrType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "GetLocalIpList", {}, { ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, addrType);
}
inline void LiteNetLib::NetUtils::GetLocalIpList(::System::Collections::Generic::IList_1<::StringW>* targetList, ::LiteNetLib::LocalAddrType addrType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(),
                                              { "GetLocalIpList", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetList, addrType);
}
inline ::StringW LiteNetLib::NetUtils::GetLocalIp(::LiteNetLib::LocalAddrType addrType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "GetLocalIp", {}, { ::i2c::type_of<::LiteNetLib::LocalAddrType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, addrType);
}
inline void LiteNetLib::NetUtils::PrintInterfaceInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "PrintInterfaceInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t LiteNetLib::NetUtils::RelativeSequenceNumber(int32_t number, int32_t expected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetUtils*>(), { "RelativeSequenceNumber", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, expected);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetUtils::NetUtils() {}
