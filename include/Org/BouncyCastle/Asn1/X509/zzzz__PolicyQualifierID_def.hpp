#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/PolicyQualifierID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PolicyQualifierID)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID);
// Dependencies Org.BouncyCastle.Asn1.DerObjectIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyQualifierID
class CORDL_TYPE PolicyQualifierID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
  // Declarations
  /// @brief Field IdQtCps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdQtCps, put = setStaticF_IdQtCps)) ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* IdQtCps;

  /// @brief Field IdQtUnotice, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdQtUnotice, put = setStaticF_IdQtUnotice)) ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* IdQtUnotice;

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* New_ctor(::StringW id);

  /// @brief Method .ctor, addr 0x260c3ec, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* getStaticF_IdQtCps();

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* getStaticF_IdQtUnotice();

  static inline void setStaticF_IdQtCps(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value);

  static inline void setStaticF_IdQtUnotice(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolicyQualifierID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolicyQualifierID(PolicyQualifierID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolicyQualifierID(PolicyQualifierID const&) = delete;

  /// @brief Field IdQt offset 0xffffffff size 0x8
  static constexpr ::ConstString IdQt{ u"1.3.6.1.5.5.7.2" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierID");
