#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/AttributeCertificateHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificateHolder)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::AttributeCertificateHolder);
// Dependencies Org.BouncyCastle.X509.Store.IX509Selector, System.ICloneable, System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.AttributeCertificateHolder
class CORDL_TYPE AttributeCertificateHolder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DigestAlgorithm)) ::StringW DigestAlgorithm;

  __declspec(property(get = get_DigestedObjectType)) int32_t DigestedObjectType;

  __declspec(property(get = get_OtherObjectTypeID)) ::StringW OtherObjectTypeID;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  /// @brief Field holder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_holder, put = __cordl_internal_set_holder)) ::Org::BouncyCastle::Asn1::X509::Holder* holder;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x25edb20, size 0xd8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Equals, addr 0x25ee0b8, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GenerateGeneralNames, addr 0x25ed0a0, size 0x90, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GenerateGeneralNames(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method GetEntityNames, addr 0x25eda8c, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetEntityNames();

  /// @brief Method GetHashCode, addr 0x25ee160, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIssuer, addr 0x25edab8, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetIssuer();

  /// @brief Method GetNames, addr 0x25ed75c, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetNames(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method GetObjectDigest, addr 0x25ed564, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetObjectDigest();

  /// @brief Method GetPrincipals, addr 0x25ed8bc, size 0x1d0, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetPrincipals(::Org::BouncyCastle::Asn1::X509::GeneralNames* names);

  /// @brief Method Match, addr 0x25ee17c, size 0x8c, virtual true, abstract: false, final true
  inline bool Match(::System::Object* obj);

  /// @brief Method Match, addr 0x25edbf8, size 0x4c0, virtual false, abstract: false, final false
  inline bool Match(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method MatchesDN, addr 0x25ed5d4, size 0x188, virtual false, abstract: false, final false
  inline bool MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames* targets);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuerName, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  constexpr ::Org::BouncyCastle::Asn1::X509::Holder* const& __cordl_internal_get_holder() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& __cordl_internal_get_holder();

  constexpr void __cordl_internal_set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value);

  /// @brief Method .ctor, addr 0x25ed130, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x25ed38c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  /// @brief Method .ctor, addr 0x25ecfb4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuerName, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor, addr 0x25ed308, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method .ctor, addr 0x25ecf80, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DigestAlgorithm, addr 0x25ed520, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_DigestAlgorithm();

  /// @brief Method get_DigestedObjectType, addr 0x25ed4e8, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_DigestedObjectType();

  /// @brief Method get_OtherObjectTypeID, addr 0x25ed5a0, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_OtherObjectTypeID();

  /// @brief Method get_SerialNumber, addr 0x25edae8, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificateHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificateHolder(AttributeCertificateHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificateHolder(AttributeCertificateHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1852 };

  /// @brief Field holder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Holder* ___holder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::AttributeCertificateHolder, ___holder) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::AttributeCertificateHolder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::AttributeCertificateHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::AttributeCertificateHolder*, "Org.BouncyCastle.X509", "AttributeCertificateHolder");
