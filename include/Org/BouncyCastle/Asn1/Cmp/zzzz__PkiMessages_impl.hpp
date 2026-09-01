#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiMessages.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessages_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessages._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessages::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessages::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334fb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessages.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessages* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiMessages::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x334c84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessages._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessages::*)(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessages::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x334fb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessages.ToPkiMessageArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> (::Org::BouncyCastle::Asn1::Cmp::PkiMessages::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessages::ToPkiMessageArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x334fbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessages.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PkiMessages::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessages::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::PkiMessages::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::PkiMessages::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiMessages::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessages::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* Org::BouncyCastle::Asn1::Cmp::PkiMessages::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessages::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> msgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msgs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> Org::BouncyCastle::Asn1::Cmp::PkiMessages::ToPkiMessageArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PkiMessages::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* Org::BouncyCastle::Asn1::Cmp::PkiMessages::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* Org::BouncyCastle::Asn1::Cmp::PkiMessages::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> msgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessages*>(msgs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessages::PkiMessages() {}
