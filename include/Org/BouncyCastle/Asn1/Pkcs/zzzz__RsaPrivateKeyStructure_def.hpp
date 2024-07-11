#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/RsaPrivateKeyStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsaPrivateKeyStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure);
// Type: Org.BouncyCastle.Asn1.Pkcs::RsaPrivateKeyStructure
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RsaPrivateKeyStructure*
class CORDL_TYPE RsaPrivateKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Coefficient))::Org::BouncyCastle::Math::BigInteger* Coefficient;

  __declspec(property(get = get_Exponent1))::Org::BouncyCastle::Math::BigInteger* Exponent1;

  __declspec(property(get = get_Exponent2))::Org::BouncyCastle::Math::BigInteger* Exponent2;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_Prime1))::Org::BouncyCastle::Math::BigInteger* Prime1;

  __declspec(property(get = get_Prime2))::Org::BouncyCastle::Math::BigInteger* Prime2;

  __declspec(property(get = get_PrivateExponent))::Org::BouncyCastle::Math::BigInteger* PrivateExponent;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  /// @brief Field coefficient, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_coefficient, put = __cordl_internal_set_coefficient))::Org::BouncyCastle::Math::BigInteger* coefficient;

  /// @brief Field exponent1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_exponent1, put = __cordl_internal_set_exponent1))::Org::BouncyCastle::Math::BigInteger* exponent1;

  /// @brief Field exponent2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_exponent2, put = __cordl_internal_set_exponent2))::Org::BouncyCastle::Math::BigInteger* exponent2;

  /// @brief Field modulus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modulus, put = __cordl_internal_set_modulus))::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field prime1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prime1, put = __cordl_internal_set_prime1))::Org::BouncyCastle::Math::BigInteger* prime1;

  /// @brief Field prime2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_prime2, put = __cordl_internal_set_prime2))::Org::BouncyCastle::Math::BigInteger* prime2;

  /// @brief Field privateExponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privateExponent, put = __cordl_internal_set_privateExponent))::Org::BouncyCastle::Math::BigInteger* privateExponent;

  /// @brief Field publicExponent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicExponent, put = __cordl_internal_set_publicExponent))::Org::BouncyCastle::Math::BigInteger* publicExponent;

  /// @brief Method GetInstance, addr 0x11fe6c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x11fe6d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* prime1,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* prime2, ::Org::BouncyCastle::Math::BigInteger* exponent1,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* exponent2, ::Org::BouncyCastle::Math::BigInteger* coefficient);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11feba8, size 0x318, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_coefficient();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_coefficient() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_exponent1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_exponent1() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_exponent2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_exponent2() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_modulus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_modulus() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_prime1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_prime1() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_prime2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_prime2() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_privateExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_privateExponent() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_publicExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_publicExponent() const;

  constexpr void __cordl_internal_set_coefficient(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_exponent1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_exponent2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_prime1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_prime2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_privateExponent(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x11feb00, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Math::BigInteger* privateExponent,
                    ::Org::BouncyCastle::Math::BigInteger* prime1, ::Org::BouncyCastle::Math::BigInteger* prime2, ::Org::BouncyCastle::Math::BigInteger* exponent1,
                    ::Org::BouncyCastle::Math::BigInteger* exponent2, ::Org::BouncyCastle::Math::BigInteger* coefficient);

  /// @brief Method .ctor, addr 0x11fe77c, size 0x384, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Coefficient, addr 0x11feba0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Coefficient();

  /// @brief Method get_Exponent1, addr 0x11feb90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent1();

  /// @brief Method get_Exponent2, addr 0x11feb98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent2();

  /// @brief Method get_Modulus, addr 0x11feb68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_Prime1, addr 0x11feb80, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime1();

  /// @brief Method get_Prime2, addr 0x11feb88, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime2();

  /// @brief Method get_PrivateExponent, addr 0x11feb78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrivateExponent();

  /// @brief Method get_PublicExponent, addr 0x11feb70, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPrivateKeyStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPrivateKeyStructure(RsaPrivateKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPrivateKeyStructure(RsaPrivateKeyStructure const&) = delete;

  /// @brief Field modulus, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  /// @brief Field publicExponent, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___publicExponent;

  /// @brief Field privateExponent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___privateExponent;

  /// @brief Field prime1, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___prime1;

  /// @brief Field prime2, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___prime2;

  /// @brief Field exponent1, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___exponent1;

  /// @brief Field exponent2, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___exponent2;

  /// @brief Field coefficient, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___coefficient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___modulus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___publicExponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___privateExponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___prime1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___prime2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___exponent1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___exponent2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ___coefficient) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Pkcs", "RsaPrivateKeyStructure");
