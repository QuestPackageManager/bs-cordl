#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDomainParameters)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
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
// Type: Org.BouncyCastle.Crypto.Parameters::ECDomainParameters
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1033))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECDomainParameters*
class CORDL_TYPE ECDomainParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field curve, offset 0x10, size 0x8
  __declspec(property(get = __get_curve, put = __set_curve))::Org::BouncyCastle::Math::EC::ECCurve* curve;

  /// @brief Field seed, offset 0x18, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::EC::ECPoint* g;

  /// @brief Field n, offset 0x28, size 0x8
  __declspec(property(get = __get_n, put = __set_n))::Org::BouncyCastle::Math::BigInteger* n;

  /// @brief Field h, offset 0x30, size 0x8
  __declspec(property(get = __get_h, put = __set_h))::Org::BouncyCastle::Math::BigInteger* h;

  /// @brief Field hInv, offset 0x38, size 0x8
  __declspec(property(get = __get_hInv, put = __set_hInv))::Org::BouncyCastle::Math::BigInteger* hInv;

  __declspec(property(get = get_Curve))::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::EC::ECPoint* G;

  __declspec(property(get = get_N))::Org::BouncyCastle::Math::BigInteger* N;

  __declspec(property(get = get_H))::Org::BouncyCastle::Math::BigInteger* H;

  __declspec(property(get = get_HInv))::Org::BouncyCastle::Math::BigInteger* HInv;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __get_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __get_curve() const;

  constexpr void __set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_n();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_n() const;

  constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_h();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_h() const;

  constexpr void __set_h(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_hInv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_hInv() const;

  constexpr void __set_hInv(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  /// @brief Method .ctor, addr 0xf32624, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method .ctor, addr 0xf327b4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method .ctor, addr 0xf32840, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0xf3266c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method get_Curve, addr 0xf32978, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

  /// @brief Method get_G, addr 0xf32980, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_G();

  /// @brief Method get_N, addr 0xf32988, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_N();

  /// @brief Method get_H, addr 0xf32990, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_H();

  /// @brief Method get_HInv, addr 0xf32998, size 0xc4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_HInv();

  /// @brief Method GetSeed, addr 0xf32a5c, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  /// @brief Method Equals, addr 0xf32ab8, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xf32b5c, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* other);

  /// @brief Method GetHashCode, addr 0xf32be4, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ValidatePrivateScalar, addr 0xf32c60, size 0x138, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ValidatePrivateScalar(::Org::BouncyCastle::Math::BigInteger* d);

  /// @brief Method ValidatePublicPoint, addr 0xf32d98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* q);

  /// @brief Method ValidatePublicPoint, addr 0xf32848, size 0x130, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* q);

  // Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDomainParameters(ECDomainParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDomainParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDomainParameters(ECDomainParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDomainParameters();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___seed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___g) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___n) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___h) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, ___hInv) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
