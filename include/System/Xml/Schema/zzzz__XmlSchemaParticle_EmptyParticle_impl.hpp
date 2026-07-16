#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle_EmptyParticle.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_EmptyParticle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlSchemaParticle_EmptyParticle.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlSchemaParticle_EmptyParticle::*)()>(&::GlobalNamespace::XmlSchemaParticle_EmptyParticle::get_IsEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622ea20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>(), { ::i2c::class_of<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlSchemaParticle_EmptyParticle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSchemaParticle_EmptyParticle::*)()>(&::GlobalNamespace::XmlSchemaParticle_EmptyParticle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x622e9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::XmlSchemaParticle_EmptyParticle::get_IsEmpty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::XmlSchemaParticle_EmptyParticle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XmlSchemaParticle_EmptyParticle* GlobalNamespace::XmlSchemaParticle_EmptyParticle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XmlSchemaParticle_EmptyParticle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSchemaParticle_EmptyParticle::XmlSchemaParticle_EmptyParticle() {}
