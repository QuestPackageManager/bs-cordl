#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__ServicePointManager_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Net/zzzz__BindIPEndPoint_def.hpp"
//  Writing Method size for method: ::System::Net::ServicePoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::ServicePoint::*)(::System::Net::__ServicePointManager__SPKey*, ::System::Uri*, int32_t, int32_t)>(&::System::Net::ServicePoint::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x285a9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointManager__SPKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__ServicePointManager__SPKey* (::System::Net::ServicePoint::*)()>(
    &::System::Net::ServicePoint::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285ac88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Key",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler* (::System::Net::ServicePoint::*)()>(
    &::System::Net::ServicePoint::get_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285ac90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Scheduler",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_Scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::ServicePointScheduler*)>(
    &::System::Net::ServicePoint::set_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285ac98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_Scheduler", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_Address
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285aca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Address",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_ConnectionLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_ConnectionLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285aca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_ConnectionLimit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_ProtocolVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285acb0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_Expect100Continue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_Expect100Continue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285acb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_Expect100Continue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UseNagleAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285acc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UseNagleAlgorithm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UseNagleAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285accc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UseNagleAlgorithm", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_SendContinue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_SendContinue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x285acd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_SendContinue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_SendContinue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_SendContinue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285ad74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_SendContinue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SetTcpKeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool, int32_t, int32_t)>(&::System::Net::ServicePoint::SetTcpKeepAlive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x285ad80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SetTcpKeepAlive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.KeepAliveSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::ServicePoint::KeepAliveSetup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x285ae38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "KeepAliveSetup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.PutBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint32_t, int32_t)>(&::System::Net::ServicePoint::PutBytes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x285aeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "PutBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UsesProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UsesProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285b030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UsesProxy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UsesProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UsesProxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285b038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UsesProxy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_UseConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_UseConnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285b044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UseConnect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.set_UseConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(bool)>(&::System::Net::ServicePoint::set_UseConnect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UseConnect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_HasTimedOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_HasTimedOut)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x285b058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_HasTimedOut",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.get_HostEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::get_HostEntry)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x285b184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_HostEntry",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Version*)>(&::System::Net::ServicePoint::SetVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285b50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SetVersion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.SendRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Net::WebOperation*, ::StringW)>(
    &::System::Net::ServicePoint::SendRequest)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x285b514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SendRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.CloseConnectionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)(::StringW)>(&::System::Net::ServicePoint::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x285b778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "CloseConnectionGroup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.FreeServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)()>(&::System::Net::ServicePoint::FreeServicePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x285b974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "FreeServicePoint",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.UpdateServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::System::Net::ServicePoint::UpdateServerCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x285b984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "UpdateServerCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.UpdateClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::System::Net::ServicePoint::UpdateClientCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x285b9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "UpdateClientCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePoint.CallEndPointDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*)>(
    &::System::Net::ServicePoint::CallEndPointDelegate)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x285b9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "CallEndPointDelegate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::ServicePoint::__get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::ServicePoint::__get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::ServicePoint::__set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& System::Net::ServicePoint::__get_lastDnsResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDnsResolve;
}
constexpr ::System::DateTime const& System::Net::ServicePoint::__get_lastDnsResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDnsResolve;
}
constexpr void System::Net::ServicePoint::__set_lastDnsResolve(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastDnsResolve = value;
}
constexpr ::System::Version*& System::Net::ServicePoint::__get_protocolVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::ServicePoint::__get_protocolVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr void System::Net::ServicePoint::__set_protocolVersion(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___protocolVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPHostEntry*& System::Net::ServicePoint::__get_host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPHostEntry*> const& System::Net::ServicePoint::__get_host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___host;
}
constexpr void System::Net::ServicePoint::__set_host(::System::Net::IPHostEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::ServicePoint::__get_usesProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesProxy;
}
constexpr bool const& System::Net::ServicePoint::__get_usesProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesProxy;
}
constexpr void System::Net::ServicePoint::__set_usesProxy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usesProxy = value;
}
constexpr bool& System::Net::ServicePoint::__get_sendContinue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendContinue;
}
constexpr bool const& System::Net::ServicePoint::__get_sendContinue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendContinue;
}
constexpr void System::Net::ServicePoint::__set_sendContinue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendContinue = value;
}
constexpr bool& System::Net::ServicePoint::__get_useConnect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useConnect;
}
constexpr bool const& System::Net::ServicePoint::__get_useConnect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useConnect;
}
constexpr void System::Net::ServicePoint::__set_useConnect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useConnect = value;
}
constexpr ::System::Object*& System::Net::ServicePoint::__get_hostE() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostE;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::ServicePoint::__get_hostE() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostE;
}
constexpr void System::Net::ServicePoint::__set_hostE(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hostE)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::ServicePoint::__get_useNagle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNagle;
}
constexpr bool const& System::Net::ServicePoint::__get_useNagle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNagle;
}
constexpr void System::Net::ServicePoint::__set_useNagle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNagle = value;
}
constexpr ::System::Net::BindIPEndPoint*& System::Net::ServicePoint::__get_endPointCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPointCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::BindIPEndPoint*> const& System::Net::ServicePoint::__get_endPointCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPointCallback;
}
constexpr void System::Net::ServicePoint::__set_endPointCallback(::System::Net::BindIPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPointCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::ServicePoint::__get_tcp_keepalive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive;
}
constexpr bool const& System::Net::ServicePoint::__get_tcp_keepalive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive;
}
constexpr void System::Net::ServicePoint::__set_tcp_keepalive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive = value;
}
constexpr int32_t& System::Net::ServicePoint::__get_tcp_keepalive_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_time;
}
constexpr int32_t const& System::Net::ServicePoint::__get_tcp_keepalive_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_time;
}
constexpr void System::Net::ServicePoint::__set_tcp_keepalive_time(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive_time = value;
}
constexpr int32_t& System::Net::ServicePoint::__get_tcp_keepalive_interval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_interval;
}
constexpr int32_t const& System::Net::ServicePoint::__get_tcp_keepalive_interval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcp_keepalive_interval;
}
constexpr void System::Net::ServicePoint::__set_tcp_keepalive_interval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tcp_keepalive_interval = value;
}
constexpr bool& System::Net::ServicePoint::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::ServicePoint::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::ServicePoint::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr int32_t& System::Net::ServicePoint::__get_connectionLeaseTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLeaseTimeout;
}
constexpr int32_t const& System::Net::ServicePoint::__get_connectionLeaseTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLeaseTimeout;
}
constexpr void System::Net::ServicePoint::__set_connectionLeaseTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionLeaseTimeout = value;
}
constexpr int32_t& System::Net::ServicePoint::__get_receiveBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveBufferSize;
}
constexpr int32_t const& System::Net::ServicePoint::__get_receiveBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveBufferSize;
}
constexpr void System::Net::ServicePoint::__set_receiveBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receiveBufferSize = value;
}
constexpr ::System::Net::__ServicePointManager__SPKey*& System::Net::ServicePoint::__get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointManager__SPKey*> const& System::Net::ServicePoint::__get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void System::Net::ServicePoint::__set__Key_k__BackingField(::System::Net::__ServicePointManager__SPKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ServicePointScheduler*& System::Net::ServicePoint::__get__Scheduler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePointScheduler*> const& System::Net::ServicePoint::__get__Scheduler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr void System::Net::ServicePoint::__set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Scheduler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::ServicePoint::__get_connectionLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr int32_t const& System::Net::ServicePoint::__get_connectionLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr void System::Net::ServicePoint::__set_connectionLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionLimit = value;
}
constexpr int32_t& System::Net::ServicePoint::__get_maxIdleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr int32_t const& System::Net::ServicePoint::__get_maxIdleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr void System::Net::ServicePoint::__set_maxIdleTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxIdleTime = value;
}
constexpr ::System::Object*& System::Net::ServicePoint::__get_m_ServerCertificateOrBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerCertificateOrBytes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::ServicePoint::__get_m_ServerCertificateOrBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ServerCertificateOrBytes;
}
constexpr void System::Net::ServicePoint::__set_m_ServerCertificateOrBytes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ServerCertificateOrBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::ServicePoint::__get_m_ClientCertificateOrBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientCertificateOrBytes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::ServicePoint::__get_m_ClientCertificateOrBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClientCertificateOrBytes;
}
constexpr void System::Net::ServicePoint::__set_m_ClientCertificateOrBytes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClientCertificateOrBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::ServicePoint* System::Net::ServicePoint::New_ctor(::System::Net::__ServicePointManager__SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::ServicePoint*>(key, uri, connectionLimit, maxIdleTime));
}
inline void System::Net::ServicePoint::_ctor(::System::Net::__ServicePointManager__SPKey* key, ::System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointManager__SPKey*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, uri, connectionLimit, maxIdleTime);
}
inline ::System::Net::__ServicePointManager__SPKey* System::Net::ServicePoint::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Key",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__ServicePointManager__SPKey*, false>(this, ___internal_method);
}
inline ::System::Net::ServicePointScheduler* System::Net::ServicePoint::get_Scheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Scheduler",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointScheduler*, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_Scheduler(::System::Net::ServicePointScheduler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_Scheduler", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::ServicePoint::get_Address() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_Address",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline int32_t System::Net::ServicePoint::get_ConnectionLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_ConnectionLimit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Version* System::Net::ServicePoint::get_ProtocolVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_ProtocolVersion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_Expect100Continue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_Expect100Continue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_UseNagleAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UseNagleAlgorithm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UseNagleAlgorithm(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UseNagleAlgorithm", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_SendContinue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_SendContinue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_SendContinue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_SendContinue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::ServicePoint::SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SetTcpKeepAlive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled, keepAliveTime, keepAliveInterval);
}
inline void System::Net::ServicePoint::KeepAliveSetup(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "KeepAliveSetup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket);
}
inline void System::Net::ServicePoint::PutBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, uint32_t v, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "PutBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, v, offset);
}
inline bool System::Net::ServicePoint::get_UsesProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UsesProxy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UsesProxy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UsesProxy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_UseConnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_UseConnect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::set_UseConnect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "set_UseConnect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::ServicePoint::get_HasTimedOut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_HasTimedOut",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::IPHostEntry* System::Net::ServicePoint::get_HostEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "get_HostEntry",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry*, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::SetVersion(::System::Version* version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SetVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version);
}
inline void System::Net::ServicePoint::SendRequest(::System::Net::WebOperation* operation, ::StringW groupName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "SendRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, groupName);
}
inline bool System::Net::ServicePoint::CloseConnectionGroup(::StringW connectionGroupName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "CloseConnectionGroup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, connectionGroupName);
}
inline void System::Net::ServicePoint::FreeServicePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "FreeServicePoint",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePoint::UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "UpdateServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificate);
}
inline void System::Net::ServicePoint::UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "UpdateClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificate);
}
inline bool System::Net::ServicePoint::CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePoint*>::get(), "CallEndPointDelegate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sock, remote);
}
// Ctor Parameters []
constexpr ::System::Net::ServicePoint::ServicePoint() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
