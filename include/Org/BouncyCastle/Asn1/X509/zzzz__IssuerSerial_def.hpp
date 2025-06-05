#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/IssuerSerial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(IssuerSerial)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
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
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::IssuerSerial);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.IssuerSerial
class CORDL_TYPE IssuerSerial : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* Issuer;

  __declspec(property(get = get_IssuerUid)) ::Org::BouncyCastle::Asn1::DerBitString* IssuerUid;

  __declspec(property(get = get_Serial)) ::Org::BouncyCastle::Asn1::DerInteger* Serial;

  /// @brief Field issuer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer;

  /// @brief Field issuerUid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerUid, put = __cordl_internal_set_issuerUid)) ::Org::BouncyCastle::Asn1::DerBitString* issuerUid;

  /// @brief Field serial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serial, put = __cordl_internal_set_serial)) ::Org::BouncyCastle::Asn1::DerInteger* serial;

  /// @brief Method GetInstance, addr 0x2608e04, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2609b1c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer, ::Org::BouncyCastle::Asn1::DerInteger* serial);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2609e94, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_issuerUid() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_issuerUid();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serial() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serial();

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_issuerUid(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_serial(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2609e50, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer, ::Org::BouncyCastle::Asn1::DerInteger* serial);

  /// @brief Method .ctor, addr 0x2609c98, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Issuer, addr 0x2609e7c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_Issuer();

  /// @brief Method get_IssuerUid, addr 0x2609e8c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUid();

  /// @brief Method get_Serial, addr 0x2609e84, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Serial();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuerSerial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuerSerial(IssuerSerial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuerSerial(IssuerSerial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 366 };

  /// @brief Field issuer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___issuer;

  /// @brief Field serial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serial;

  /// @brief Field issuerUid, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuerSerial, ___issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuerSerial, ___serial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuerSerial, ___issuerUid) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IssuerSerial, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuerSerial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuerSerial*, "Org.BouncyCastle.Asn1.X509", "IssuerSerial");
