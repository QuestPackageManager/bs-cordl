#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ECDomainParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDomainParameters)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
class CORDL_TYPE ECDomainParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  __declspec(property(get = get_G)) ::Org::BouncyCastle::Math::EC::ECPoint* G;

  __declspec(property(get = get_H)) ::Org::BouncyCastle::Math::BigInteger* H;

  __declspec(property(get = get_HInv)) ::Org::BouncyCastle::Math::BigInteger* HInv;

  __declspec(property(get = get_N)) ::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve)) ::Org::BouncyCastle::Math::EC::ECCurve* curve;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Org::BouncyCastle::Math::EC::ECPoint* g;

  /// @brief Field h, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h)) ::Org::BouncyCastle::Math::BigInteger* h;

  /// @brief Field hInv, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hInv, put = __cordl_internal_set_hInv)) ::Org::BouncyCastle::Math::BigInteger* hInv;

  /// @brief Field n, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) ::Org::BouncyCastle::Math::BigInteger* n;

  /// @brief Field seed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Method Equals, addr 0x23bb914, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x23bb9b8, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* other);

  /// @brief Method GetHashCode, addr 0x23bba40, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSeed, addr 0x23bb8b8, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  /// @brief Method ValidatePrivateScalar, addr 0x23bbabc, size 0x130, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ValidatePrivateScalar(::Org::BouncyCastle::Math::BigInteger* d);

  /// @brief Method ValidatePublicPoint, addr 0x23bb6b0, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* q);

  /// @brief Method ValidatePublicPoint, addr 0x23bbbec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* q);

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_curve() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_curve();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_g();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_h() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_h();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_hInv() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_hInv();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_n() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_n();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_h(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_hInv(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23bb61c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method .ctor, addr 0x23bb6a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method .ctor, addr 0x23bb4e0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0x23bb498, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  /// @brief Method get_Curve, addr 0x23bb7d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

  /// @brief Method get_G, addr 0x23bb7dc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_G();

  /// @brief Method get_H, addr 0x23bb7ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_H();

  /// @brief Method get_HInv, addr 0x23bb7f4, size 0xc4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_HInv();

  /// @brief Method get_N, addr 0x23bb7e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_N();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDomainParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDomainParameters(ECDomainParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDomainParameters(ECDomainParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1033 };

  /// @brief Field curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___curve;

  /// @brief Field seed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___g;

  /// @brief Field n, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___n;

  /// @brief Field h, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___h;

  /// @brief Field hInv, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___hInv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___seed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___g) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___n) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___h) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___hInv) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
