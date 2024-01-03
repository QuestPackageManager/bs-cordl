#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__Accuracy_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TstInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__GenTimeAccuracy_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)(::Org::BouncyCastle::Asn1::Tsp::TstInfo*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1152a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_IsOrdered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_IsOrdered)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1153d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_IsOrdered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Accuracy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Tsp::Accuracy* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Accuracy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1153dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_Accuracy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_GenTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_GenTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_GenTimeAccuracy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::GenTimeAccuracy* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTimeAccuracy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1153de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_GenTimeAccuracy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Policy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Policy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1151074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_Policy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_SerialNumber)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1153e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_SerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Tsa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Tsa)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1153e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), "get_Tsa",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Nonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Nonce)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1150fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_Nonce", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1153ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_HashAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_MessageImprintAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_MessageImprintAlgOid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x115101c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_MessageImprintAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.GetMessageImprintDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetMessageImprintDigest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1150ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "GetMessageImprintDigest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1153ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "GetEncoded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_TstInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TstInfo* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_TstInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                               "get_TstInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo*& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__get_tstInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::TstInfo*> const& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__get_tstInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenInfo::__set_tstInfo(::Org::BouncyCastle::Asn1::Tsp::TstInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tstInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__get_genTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr ::System::DateTime const& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__get_genTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenInfo::__set_genTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genTime = value;
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* Org::BouncyCastle::Tsp::TimeStampTokenInfo::New_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(tstInfo));
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenInfo::_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tstInfo);
}
inline bool Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_IsOrdered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_IsOrdered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Accuracy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_Accuracy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::Accuracy*, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_GenTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTimeAccuracy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_GenTimeAccuracy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::GenTimeAccuracy*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), "get_Policy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_SerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Tsa() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), "get_Tsa",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), "get_Nonce",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_HashAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_MessageImprintAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_MessageImprintAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetMessageImprintDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "GetMessageImprintDigest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(), "GetEncoded",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_TstInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>::get(),
                                                                             "get_TstInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TstInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo::TimeStampTokenInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
