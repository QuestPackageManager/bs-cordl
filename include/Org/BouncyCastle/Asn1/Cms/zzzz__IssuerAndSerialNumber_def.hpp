#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/IssuerAndSerialNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(IssuerAndSerialNumber)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
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
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.IssuerAndSerialNumber
class CORDL_TYPE IssuerAndSerialNumber : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::Org::BouncyCastle::Asn1::X509::X509Name* Name;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::Org::BouncyCastle::Asn1::X509::X509Name* name;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Method GetInstance, addr 0x2307bb4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2307e28, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_name() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_name();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr void __cordl_internal_set_name(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2307dec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  /// @brief Method .ctor, addr 0x2307d70, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor, addr 0x2307c58, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Name, addr 0x2307e18, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Name();

  /// @brief Method get_SerialNumber, addr 0x2307e20, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuerAndSerialNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuerAndSerialNumber(IssuerAndSerialNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuerAndSerialNumber(IssuerAndSerialNumber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 74 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___name;

  /// @brief Field serialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber, ___serialNumber) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*, "Org.BouncyCastle.Asn1.Cms", "IssuerAndSerialNumber");
