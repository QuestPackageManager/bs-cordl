#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\Controls.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__Controls_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__AttributeTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::Controls._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::Controls::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::Controls::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::Controls.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::Controls* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::Controls::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3365a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::Controls._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::Controls::*)(::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>)>(
    &::Org::BouncyCastle::Asn1::Crmf::Controls::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x336691c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::Controls.ToAttributeTypeAndValueArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> (::Org::BouncyCastle::Asn1::Crmf::Controls::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::Controls::ToAttributeTypeAndValueArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3366984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::Controls.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::Controls::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::Controls::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Crmf::Controls::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Crmf::Controls::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::Controls::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::Controls::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::Controls* Org::BouncyCastle::Asn1::Crmf::Controls::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::Controls*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::Controls::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> atvs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atvs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> Org::BouncyCastle::Asn1::Crmf::Controls::ToAttributeTypeAndValueArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::Controls::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::Controls* Org::BouncyCastle::Asn1::Crmf::Controls::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::Controls*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::Controls* Org::BouncyCastle::Asn1::Crmf::Controls::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> atvs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::Controls*>(atvs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls::Controls() {}
