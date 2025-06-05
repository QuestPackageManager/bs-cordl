#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/MonetaryLimit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonetaryLimit)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class MonetaryLimit;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.MonetaryLimit
class CORDL_TYPE MonetaryLimit : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Amount)) ::Org::BouncyCastle::Math::BigInteger* Amount;

  __declspec(property(get = get_Currency)) ::StringW Currency;

  __declspec(property(get = get_Exponent)) ::Org::BouncyCastle::Math::BigInteger* Exponent;

  /// @brief Field amount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_amount, put = __cordl_internal_set_amount)) ::Org::BouncyCastle::Asn1::DerInteger* amount;

  /// @brief Field currency, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currency, put = __cordl_internal_set_currency)) ::Org::BouncyCastle::Asn1::DerPrintableString* currency;

  /// @brief Field exponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_exponent, put = __cordl_internal_set_exponent)) ::Org::BouncyCastle::Asn1::DerInteger* exponent;

  /// @brief Method GetInstance, addr 0x23fe410, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* New_ctor(::StringW currency, int32_t amount, int32_t exponent);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23fe7c8, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_amount() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_amount();

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& __cordl_internal_get_currency() const;

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& __cordl_internal_get_currency();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_exponent() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_exponent();

  constexpr void __cordl_internal_set_amount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_currency(::Org::BouncyCastle::Asn1::DerPrintableString* value);

  constexpr void __cordl_internal_set_exponent(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x23fe69c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::StringW currency, int32_t amount, int32_t exponent);

  /// @brief Method .ctor, addr 0x23fe574, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Amount, addr 0x23fe790, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Amount();

  /// @brief Method get_Currency, addr 0x23fe770, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Currency();

  /// @brief Method get_Exponent, addr 0x23fe7ac, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Exponent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonetaryLimit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonetaryLimit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonetaryLimit(MonetaryLimit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonetaryLimit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonetaryLimit(MonetaryLimit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 187 };

  /// @brief Field currency, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerPrintableString* ___currency;

  /// @brief Field amount, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___amount;

  /// @brief Field exponent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___exponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit, ___currency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit, ___amount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit, ___exponent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "MonetaryLimit");
