#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/CryptoPro/ECGost3410ParamSetParameters.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.ECGost3410ParamSetParameters
class CORDL_TYPE ECGost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_A)) ::Org::BouncyCastle::Math::BigInteger* A;

  __declspec(property(get = get_P)) ::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field a, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::Org::BouncyCastle::Asn1::DerInteger* a;

  /// @brief Field b, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) ::Org::BouncyCastle::Asn1::DerInteger* b;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Org::BouncyCastle::Asn1::DerInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q)) ::Org::BouncyCastle::Asn1::DerInteger* q;

  /// @brief Field x, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Org::BouncyCastle::Asn1::DerInteger* x;

  /// @brief Field y, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Org::BouncyCastle::Asn1::DerInteger* y;

  /// @brief Method GetInstance, addr 0x23164d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x23164f0, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, int32_t x,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* y);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23168f8, size 0x19c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_a() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_a();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_b() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_b();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_p();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_q();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_x() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_x();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_y() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_a(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_b(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23167a4, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, int32_t x,
                    ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method .ctor, addr 0x2316658, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_A, addr 0x23168e0, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method get_P, addr 0x23168b0, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0x23168c8, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECGost3410ParamSetParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECGost3410ParamSetParameters(ECGost3410ParamSetParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECGost3410ParamSetParameters(ECGost3410ParamSetParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 127 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___b) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___x) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, ___y) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "ECGost3410ParamSetParameters");
