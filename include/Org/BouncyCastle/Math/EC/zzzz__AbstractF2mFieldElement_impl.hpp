#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\AbstractF2mFieldElement.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement.HalfTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::HalfTrace)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x34d9e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement.get_HasFastTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::get_HasFastTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34d9fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::Trace)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x34d9fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34da120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::HalfTrace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::get_HasFastTrace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::Trace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement* Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement::AbstractF2mFieldElement() {}
