#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\RecipientInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyAgreeRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyTransRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OtherRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__PasswordRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335efb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x335efb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x335f028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x335f098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x335f108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::RecipientInfo::GetInstance)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3359da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_Version)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3359f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.get_IsTagged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)()>(&::Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_IsTagged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x335f1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_IsTagged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.get_Info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_Info)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x335f228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_Info", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.GetKekInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* (
    ::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(&::Org::BouncyCastle::Asn1::Cms::RecipientInfo::GetKekInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x335f180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "GetKekInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::RecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x335f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Cms::RecipientInfo::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Cms::RecipientInfo::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Asn1::Cms::RecipientInfo::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Object* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(nullptr, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_IsTagged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_IsTagged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Cms::RecipientInfo::get_Info() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "get_Info", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::GetKekInfo(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), { "GetKekInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::RecipientInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Asn1::Cms::RecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(info));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Cms::RecipientInfo::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Cms::RecipientInfo::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientInfo::RecipientInfo() {}
