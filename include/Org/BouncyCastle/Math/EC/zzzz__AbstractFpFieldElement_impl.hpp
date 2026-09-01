#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\AbstractFpFieldElement.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34a7e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement* Org::BouncyCastle::Math::EC::AbstractFpFieldElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::AbstractFpFieldElement() {}
