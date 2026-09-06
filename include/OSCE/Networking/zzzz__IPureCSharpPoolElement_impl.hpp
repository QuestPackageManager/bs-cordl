#pragma once
// IWYU pragma private; include "OSCE/Networking/IPureCSharpPoolElement.hpp"
#include "OSCE/Networking/zzzz__IPureCSharpPoolElement_def.hpp"
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.get_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Networking::IPureCSharpPoolElement::*)()>(&::OSCE::Networking::IPureCSharpPoolElement::get_CreatedByPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.set_CreatedByPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Networking::IPureCSharpPoolElement::*)(bool)>(&::OSCE::Networking::IPureCSharpPoolElement::set_CreatedByPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Networking::IPureCSharpPoolElement::*)()>(&::OSCE::Networking::IPureCSharpPoolElement::ReturnedToPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 2 }));
    return ___internal_method;
  }
};
inline bool OSCE::Networking::IPureCSharpPoolElement::get_CreatedByPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OSCE::Networking::IPureCSharpPoolElement::set_CreatedByPool(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OSCE::Networking::IPureCSharpPoolElement::ReturnedToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Networking::IPureCSharpPoolElement*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
