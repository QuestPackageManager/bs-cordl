#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\OtherRecipientInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OtherRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335df28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x335df30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x335dfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x335dff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo.get_OriType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::get_OriType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335e090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo.get_OriValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::get_OriValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335e098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x335e0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_get_oriType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oriType;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_get_oriType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oriType;
}
constexpr void Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_set_oriType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oriType = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_get_oriValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oriValue;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_get_oriValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oriValue;
}
constexpr void Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::__cordl_internal_set_oriValue(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oriValue = value;
}
inline void Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType, ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oriType, oriValue);
}
inline void Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::get_OriType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::get_OriValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oriType,
                                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Encodable* oriValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(oriType, oriValue));
}
inline ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo::OtherRecipientInfo() {}
