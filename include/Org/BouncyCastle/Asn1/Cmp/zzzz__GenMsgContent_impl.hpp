#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\GenMsgContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__GenMsgContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x334a220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::*)(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>)>(
    &::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x334a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent.ToInfoTypeAndValueArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> (::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::ToInfoTypeAndValueArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x334a404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334a680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::GenMsgContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::GenMsgContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::GenMsgContent::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::GenMsgContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent* Org::BouncyCastle::Asn1::Cmp::GenMsgContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::GenMsgContent::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> itv) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itv);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> Org::BouncyCastle::Asn1::Cmp::GenMsgContent::ToInfoTypeAndValueArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::GenMsgContent::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent* Org::BouncyCastle::Asn1::Cmp::GenMsgContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent* Org::BouncyCastle::Asn1::Cmp::GenMsgContent::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> itv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::GenMsgContent*>(itv));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::GenMsgContent::GenMsgContent() {}
