#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\TbsCertificateList.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlEntry_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::*)(
    ::System::Collections::IEnumerator*)>(&::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366883c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3668844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36688e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3668990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::System::Collections::IEnumerator* const& Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::__cordl_internal_set_e(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
inline void Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::_ctor(::System::Collections::IEnumerator* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*
Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::New_ctor(::System::Collections::IEnumerator* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator*>(e));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator*
Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator::
    RevokedCertificatesEnumeration_TbsCertificateList_RevokedCertificatesEnumerator() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::GetEnumerator)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3668768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerable*& Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::__cordl_internal_get_en() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___en;
}
constexpr ::System::Collections::IEnumerable* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::__cordl_internal_get_en() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___en;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::__cordl_internal_set_en(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___en = value;
}
inline void Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::_ctor(::System::Collections::IEnumerable* en) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, en);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*
Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::New_ctor(::System::Collections::IEnumerable* en) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration*>(en));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList_RevokedCertificatesEnumeration::TbsCertificateList_RevokedCertificatesEnumeration() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3667ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3667ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::_ctor)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x3668040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x366851c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_VersionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_VersionNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_VersionNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Signature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_ThisUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_NextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_NextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.GetRevokedCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*> (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificates)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3668568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetRevokedCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.GetRevokedCertificateEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificateEnumeration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36686c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetRevokedCertificateEnumeration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::TbsCertificateList::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3668760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thisUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_revokedCertificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revokedCertificates;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_revokedCertificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revokedCertificates;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_revokedCertificates(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revokedCertificates = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_crlExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_get_crlExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlExtensions;
}
constexpr void Org::BouncyCastle::Asn1::X509::TbsCertificateList::__cordl_internal_set_crlExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlExtensions = value;
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::TbsCertificateList::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline int32_t Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_VersionNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_VersionNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Signature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Signature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_ThisUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_NextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*> Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetRevokedCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*>>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificateEnumeration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "GetRevokedCertificateEnumeration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::TbsCertificateList::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::TbsCertificateList::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList::TbsCertificateList() {}
