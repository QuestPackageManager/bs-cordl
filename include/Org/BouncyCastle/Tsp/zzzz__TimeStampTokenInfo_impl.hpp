#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampTokenInfo.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)(::Org::BouncyCastle::Asn1::Tsp::TstInfo*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x362089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_IsOrdered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_IsOrdered)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3621b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_IsOrdered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Accuracy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::Accuracy* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Accuracy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3621bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Accuracy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_GenTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_GenTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_GenTimeAccuracy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::GenTimeAccuracy* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTimeAccuracy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3621be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_GenTimeAccuracy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Policy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Policy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361ef60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Policy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_SerialNumber)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3621c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Tsa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Tsa)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3621c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Tsa", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Nonce)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3621c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_MessageImprintAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_MessageImprintAlgOid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x361ef0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_MessageImprintAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.GetMessageImprintDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetMessageImprintDigest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361eee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "GetMessageImprintDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(&::Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3621cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenInfo.get_TstInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TstInfo* (::Org::BouncyCastle::Tsp::TimeStampTokenInfo::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_TstInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_TstInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo*& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_get_tstInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo* const& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_get_tstInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_set_tstInfo(::Org::BouncyCastle::Asn1::Tsp::TstInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tstInfo = value;
}
constexpr ::System::DateTime& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_get_genTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr ::System::DateTime const& Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_get_genTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genTime;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenInfo::__cordl_internal_set_genTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genTime = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenInfo::_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tstInfo);
}
inline bool Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_IsOrdered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_IsOrdered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Accuracy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Accuracy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_GenTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_GenTimeAccuracy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_GenTimeAccuracy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Policy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Tsa() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Tsa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_MessageImprintAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_MessageImprintAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetMessageImprintDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "GetMessageImprintDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampTokenInfo::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* Org::BouncyCastle::Tsp::TimeStampTokenInfo::get_TstInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(), { "get_TstInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TstInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* Org::BouncyCastle::Tsp::TimeStampTokenInfo::New_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(tstInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo::TimeStampTokenInfo() {}
