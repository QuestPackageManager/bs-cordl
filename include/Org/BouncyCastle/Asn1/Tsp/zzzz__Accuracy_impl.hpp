#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Tsp\Accuracy.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__Accuracy_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)(::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerInteger*,
                                                                                                          ::Org::BouncyCastle::Asn1::DerInteger*)>(&::Org::BouncyCastle::Asn1::Tsp::Accuracy::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35501cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Tsp::Accuracy::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x35502a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::Accuracy* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Tsp::Accuracy::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x35505ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy.get_Seconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Seconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Seconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy.get_Millis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)()>(&::Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Millis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3550654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Millis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy.get_Micros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)()>(&::Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Micros)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355065c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Micros", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::Accuracy.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Tsp::Accuracy::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::Accuracy::ToAsn1Object)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3550664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_seconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seconds;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_seconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seconds;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_set_seconds(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seconds = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_millis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___millis;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_millis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___millis;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_set_millis(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___millis = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_micros() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___micros;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_get_micros() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___micros;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::Accuracy::__cordl_internal_set_micros(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___micros = value;
}
inline void Org::BouncyCastle::Asn1::Tsp::Accuracy::_ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis,
                                                          ::Org::BouncyCastle::Asn1::DerInteger* micros) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds, millis, micros);
}
inline void Org::BouncyCastle::Asn1::Tsp::Accuracy::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Asn1::Tsp::Accuracy::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Seconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Seconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Millis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Millis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::Accuracy::get_Micros() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), { "get_Micros", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Tsp::Accuracy::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Asn1::Tsp::Accuracy::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis,
                                                                                                  ::Org::BouncyCastle::Asn1::DerInteger* micros) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(seconds, millis, micros));
}
inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Org::BouncyCastle::Asn1::Tsp::Accuracy::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy::Accuracy() {}
