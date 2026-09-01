#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\NoticeReference.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__NoticeReference_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DisplayText_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference.ConvertVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1EncodableVector* (*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::ConvertVector)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x3661d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { "ConvertVector", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)(::StringW, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3662138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3662168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)(
    ::Org::BouncyCastle::Asn1::X509::DisplayText*, ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&::Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36621dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x366224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::NoticeReference* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::NoticeReference::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x366235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference.get_Organization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DisplayText* (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::get_Organization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36623fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference.GetNoticeNumbers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*> (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::GetNoticeNumbers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3662404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NoticeReference.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::NoticeReference::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NoticeReference::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x366251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_get_organization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___organization;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText* const& Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_get_organization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___organization;
}
constexpr void Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_set_organization(::Org::BouncyCastle::Asn1::X509::DisplayText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___organization = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_get_noticeNumbers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noticeNumbers;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_get_noticeNumbers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noticeNumbers;
}
constexpr void Org::BouncyCastle::Asn1::X509::NoticeReference::__cordl_internal_set_noticeNumbers(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noticeNumbers = value;
}
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::X509::NoticeReference::ConvertVector(::System::Collections::IList* numbers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { "ConvertVector", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(nullptr, ___internal_method, numbers);
}
inline void Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor(::StringW organization, ::System::Collections::IList* numbers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, organization, numbers);
}
inline void Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor(::StringW organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, organization, noticeNumbers);
}
inline void Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, organization, noticeNumbers);
}
inline void Org::BouncyCastle::Asn1::X509::NoticeReference::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::NoticeReference::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::NoticeReference::get_Organization() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DisplayText*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*> Org::BouncyCastle::Asn1::X509::NoticeReference::GetNoticeNumbers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::NoticeReference::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::NoticeReference::New_ctor(::StringW organization, ::System::Collections::IList* numbers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(organization, numbers));
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::NoticeReference::New_ctor(::StringW organization,
                                                                                                                  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(organization, noticeNumbers));
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::NoticeReference::New_ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization,
                                                                                                                  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(organization, noticeNumbers));
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::NoticeReference::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference::NoticeReference() {}
