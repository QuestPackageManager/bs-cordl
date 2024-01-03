#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaPrivateCrtKeyParameters)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RsaPrivateCrtKeyParameters
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1081))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RsaPrivateCrtKeyParameters*
class CORDL_TYPE RsaPrivateCrtKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters {
public:
  // Declarations
  /// @brief Field e, offset 0x28, size 0x8
  __declspec(property(get = __get_e, put = __set_e))::Org::BouncyCastle::Math::BigInteger* e;

  /// @brief Field p, offset 0x30, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x38, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field dP, offset 0x40, size 0x8
  __declspec(property(get = __get_dP, put = __set_dP))::Org::BouncyCastle::Math::BigInteger* dP;

  /// @brief Field dQ, offset 0x48, size 0x8
  __declspec(property(get = __get_dQ, put = __set_dQ))::Org::BouncyCastle::Math::BigInteger* dQ;

  /// @brief Field qInv, offset 0x50, size 0x8
  __declspec(property(get = __get_qInv, put = __set_qInv))::Org::BouncyCastle::Math::BigInteger* qInv;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_DP))::Org::BouncyCastle::Math::BigInteger* DP;

  __declspec(property(get = get_DQ))::Org::BouncyCastle::Math::BigInteger* DQ;

  __declspec(property(get = get_QInv))::Org::BouncyCastle::Math::BigInteger* QInv;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_e();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_e() const;

  constexpr void __set_e(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_dP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_dP() const;

  constexpr void __set_dP(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_dQ();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_dQ() const;

  constexpr void __set_dQ(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_qInv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_qInv() const;

  constexpr void __set_qInv(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* dP,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* dQ, ::Org::BouncyCastle::Math::BigInteger* qInv);

  /// @brief Method .ctor, addr 0xf39c20, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Math::BigInteger* privateExponent,
                    ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* dP, ::Org::BouncyCastle::Math::BigInteger* dQ,
                    ::Org::BouncyCastle::Math::BigInteger* qInv);

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* rsaPrivateKey);

  /// @brief Method .ctor, addr 0xf39f1c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* rsaPrivateKey);

  /// @brief Method get_PublicExponent, addr 0xf39f54, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

  /// @brief Method get_P, addr 0xf39f5c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0xf39f64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_DP, addr 0xf39f6c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_DP();

  /// @brief Method get_DQ, addr 0xf39f74, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_DQ();

  /// @brief Method get_QInv, addr 0xf39f7c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_QInv();

  /// @brief Method Equals, addr 0xf39f84, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0xf3a0fc, size 0x120, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ValidateValue, addr 0xf39e4c, size 0xd0, virtual false, abstract: false, final false
  static inline void ValidateValue(::Org::BouncyCastle::Math::BigInteger* x, ::StringW name, ::StringW desc);

  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateCrtKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPrivateCrtKeyParameters(RsaPrivateCrtKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPrivateCrtKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPrivateCrtKeyParameters(RsaPrivateCrtKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPrivateCrtKeyParameters();

public:
  /// @brief Field e, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___e;

  /// @brief Field p, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field dP, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___dP;

  /// @brief Field dQ, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___dQ;

  /// @brief Field qInv, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___qInv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___e) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___p) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___q) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___dP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___dQ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ___qInv) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaPrivateCrtKeyParameters");
