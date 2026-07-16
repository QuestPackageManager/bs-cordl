#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/UserNotice.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__UserNotice_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DisplayText_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__NoticeReference_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::UserNotice::*)(
    ::Org::BouncyCastle::Asn1::X509::NoticeReference*, ::Org::BouncyCastle::Asn1::X509::DisplayText*)>(&::Org::BouncyCastle::Asn1::X509::UserNotice::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3666c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::UserNotice::*)(::Org::BouncyCastle::Asn1::X509::NoticeReference*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::UserNotice::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3666c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::UserNotice::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::UserNotice::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3666d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::UserNotice* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::UserNotice::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3666ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice.get_NoticeRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::NoticeReference* (::Org::BouncyCastle::Asn1::X509::UserNotice::*)()>(
    &::Org::BouncyCastle::Asn1::X509::UserNotice::get_NoticeRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3666f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice.get_ExplicitText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DisplayText* (::Org::BouncyCastle::Asn1::X509::UserNotice::*)()>(
    &::Org::BouncyCastle::Asn1::X509::UserNotice::get_ExplicitText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3666f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::UserNotice.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::UserNotice::*)()>(
    &::Org::BouncyCastle::Asn1::X509::UserNotice::ToAsn1Object)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3666f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference*& Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_get_noticeRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noticeRef;
}
constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference* const& Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_get_noticeRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noticeRef;
}
constexpr void Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_set_noticeRef(::Org::BouncyCastle::Asn1::X509::NoticeReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noticeRef = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_get_explicitText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explicitText;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText* const& Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_get_explicitText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explicitText;
}
constexpr void Org::BouncyCastle::Asn1::X509::UserNotice::__cordl_internal_set_explicitText(::Org::BouncyCastle::Asn1::X509::DisplayText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explicitText = value;
}
inline void Org::BouncyCastle::Asn1::X509::UserNotice::_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DisplayText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noticeRef, explicitText);
}
inline void Org::BouncyCastle::Asn1::X509::UserNotice::_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noticeRef, str);
}
inline void Org::BouncyCastle::Asn1::X509::UserNotice::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::UserNotice* Org::BouncyCastle::Asn1::X509::UserNotice::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::UserNotice*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* Org::BouncyCastle::Asn1::X509::UserNotice::get_NoticeRef() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::NoticeReference*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::DisplayText* Org::BouncyCastle::Asn1::X509::UserNotice::get_ExplicitText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DisplayText*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::UserNotice::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::UserNotice*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::UserNotice* Org::BouncyCastle::Asn1::X509::UserNotice::New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef,
                                                                                                        ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::UserNotice*>(noticeRef, explicitText));
}
inline ::Org::BouncyCastle::Asn1::X509::UserNotice* Org::BouncyCastle::Asn1::X509::UserNotice::New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::UserNotice*>(noticeRef, str));
}
inline ::Org::BouncyCastle::Asn1::X509::UserNotice* Org::BouncyCastle::Asn1::X509::UserNotice::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::UserNotice*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::UserNotice::UserNotice() {}
