#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECGost3410ParamSetParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class ECGost3410ParamSetParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::ECGost3410ParamSetParameters
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(127))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::ECGost3410ParamSetParameters*
class CORDL_TYPE ECGost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Asn1::DerInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Asn1::DerInteger* q;

  /// @brief Field a, offset 0x20, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::Org::BouncyCastle::Asn1::DerInteger* a;

  /// @brief Field b, offset 0x28, size 0x8
  __declspec(property(get = __get_b, put = __set_b))::Org::BouncyCastle::Asn1::DerInteger* b;

  /// @brief Field x, offset 0x30, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Asn1::DerInteger* x;

  /// @brief Field y, offset 0x38, size 0x8
  __declspec(property(get = __get_y, put = __set_y))::Org::BouncyCastle::Asn1::DerInteger* y;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::BigInteger* A;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_a() const;

  constexpr void __set_a(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_b();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_b() const;

  constexpr void __set_b(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_y();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_y() const;

  constexpr void __set_y(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance, addr 0xe8c370, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xe8c388, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, int32_t x,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method .ctor, addr 0xe8c650, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, int32_t x,
                    ::Org::BouncyCastle::Math::BigInteger* y);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8c500, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_P, addr 0xe8c778, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0xe8c790, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_A, addr 0xe8c7a8, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method ToAsn1Object, addr 0xe8c7c0, size 0x1a0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECGost3410ParamSetParameters(ECGost3410ParamSetParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECGost3410ParamSetParameters(ECGost3410ParamSetParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECGost3410ParamSetParameters();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___q;

  /// @brief Field a, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___a;

  /// @brief Field b, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___b;

  /// @brief Field x, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___x;

  /// @brief Field y, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___b) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___x) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___y) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "ECGost3410ParamSetParameters");
