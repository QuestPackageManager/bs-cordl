#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsaPrivateKeyStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(249))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RsaPrivateKeyStructure*
class CORDL_TYPE RsaPrivateKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field modulus, offset 0x10, size 0x8
  __declspec(property(get = __get_modulus, put = __set_modulus))::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field publicExponent, offset 0x18, size 0x8
  __declspec(property(get = __get_publicExponent, put = __set_publicExponent))::Org::BouncyCastle::Math::BigInteger* publicExponent;

  /// @brief Field privateExponent, offset 0x20, size 0x8
  __declspec(property(get = __get_privateExponent, put = __set_privateExponent))::Org::BouncyCastle::Math::BigInteger* privateExponent;

  /// @brief Field prime1, offset 0x28, size 0x8
  __declspec(property(get = __get_prime1, put = __set_prime1))::Org::BouncyCastle::Math::BigInteger* prime1;

  /// @brief Field prime2, offset 0x30, size 0x8
  __declspec(property(get = __get_prime2, put = __set_prime2))::Org::BouncyCastle::Math::BigInteger* prime2;

  /// @brief Field exponent1, offset 0x38, size 0x8
  __declspec(property(get = __get_exponent1, put = __set_exponent1))::Org::BouncyCastle::Math::BigInteger* exponent1;

  /// @brief Field exponent2, offset 0x40, size 0x8
  __declspec(property(get = __get_exponent2, put = __set_exponent2))::Org::BouncyCastle::Math::BigInteger* exponent2;

  /// @brief Field coefficient, offset 0x48, size 0x8
  __declspec(property(get = __get_coefficient, put = __set_coefficient))::Org::BouncyCastle::Math::BigInteger* coefficient;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  __declspec(property(get = get_PrivateExponent))::Org::BouncyCastle::Math::BigInteger* PrivateExponent;

  __declspec(property(get = get_Prime1))::Org::BouncyCastle::Math::BigInteger* Prime1;

  __declspec(property(get = get_Prime2))::Org::BouncyCastle::Math::BigInteger* Prime2;

  __declspec(property(get = get_Exponent1))::Org::BouncyCastle::Math::BigInteger* Exponent1;

  __declspec(property(get = get_Exponent2))::Org::BouncyCastle::Math::BigInteger* Exponent2;

  __declspec(property(get = get_Coefficient))::Org::BouncyCastle::Math::BigInteger* Coefficient;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_modulus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_modulus() const;

  constexpr void __set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_publicExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_publicExponent() const;

  constexpr void __set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_privateExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_privateExponent() const;

  constexpr void __set_privateExponent(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_prime1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_prime1() const;

  constexpr void __set_prime1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_prime2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_prime2() const;

  constexpr void __set_prime2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_exponent1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_exponent1() const;

  constexpr void __set_exponent1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_exponent2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_exponent2() const;

  constexpr void __set_exponent2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_coefficient();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_coefficient() const;

  constexpr void __set_coefficient(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method GetInstance addr 0xf8e34c size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance addr 0xf8e364 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* prime1,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* prime2, ::Org::BouncyCastle::Math::BigInteger* exponent1,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* exponent2, ::Org::BouncyCastle::Math::BigInteger* coefficient);

  /// @brief Method .ctor addr 0xf8e78c size 0x68 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Math::BigInteger* privateExponent,
                    ::Org::BouncyCastle::Math::BigInteger* prime1, ::Org::BouncyCastle::Math::BigInteger* prime2, ::Org::BouncyCastle::Math::BigInteger* exponent1,
                    ::Org::BouncyCastle::Math::BigInteger* exponent2, ::Org::BouncyCastle::Math::BigInteger* coefficient);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf8e408 size 0x384 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Modulus addr 0xf8e7f4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_PublicExponent addr 0xf8e7fc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

  /// @brief Method get_PrivateExponent addr 0xf8e804 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrivateExponent();

  /// @brief Method get_Prime1 addr 0xf8e80c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime1();

  /// @brief Method get_Prime2 addr 0xf8e814 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime2();

  /// @brief Method get_Exponent1 addr 0xf8e81c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent1();

  /// @brief Method get_Exponent2 addr 0xf8e824 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent2();

  /// @brief Method get_Coefficient addr 0xf8e82c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Coefficient();

  /// @brief Method ToAsn1Object addr 0xf8e834 size 0x318 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPrivateKeyStructure(RsaPrivateKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPrivateKeyStructure(RsaPrivateKeyStructure const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPrivateKeyStructure();

public:
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

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Pkcs", "RsaPrivateKeyStructure");
