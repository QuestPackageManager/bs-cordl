#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/KeyPurposeID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyPurposeID)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::KeyPurposeID);
// Dependencies Org.BouncyCastle.Asn1.DerObjectIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.KeyPurposeID
class CORDL_TYPE KeyPurposeID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
  // Declarations
  /// @brief Field AnyExtendedKeyUsage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnyExtendedKeyUsage, put = setStaticF_AnyExtendedKeyUsage)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* AnyExtendedKeyUsage;

  /// @brief Field IdKPClientAuth, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPClientAuth, put = setStaticF_IdKPClientAuth)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPClientAuth;

  /// @brief Field IdKPCodeSigning, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPCodeSigning, put = setStaticF_IdKPCodeSigning)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPCodeSigning;

  /// @brief Field IdKPEmailProtection, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPEmailProtection, put = setStaticF_IdKPEmailProtection)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPEmailProtection;

  /// @brief Field IdKPIpsecEndSystem, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPIpsecEndSystem, put = setStaticF_IdKPIpsecEndSystem)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecEndSystem;

  /// @brief Field IdKPIpsecTunnel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPIpsecTunnel, put = setStaticF_IdKPIpsecTunnel)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecTunnel;

  /// @brief Field IdKPIpsecUser, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPIpsecUser, put = setStaticF_IdKPIpsecUser)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecUser;

  /// @brief Field IdKPMacAddress, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPMacAddress, put = setStaticF_IdKPMacAddress)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPMacAddress;

  /// @brief Field IdKPOcspSigning, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPOcspSigning, put = setStaticF_IdKPOcspSigning)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPOcspSigning;

  /// @brief Field IdKPServerAuth, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPServerAuth, put = setStaticF_IdKPServerAuth)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPServerAuth;

  /// @brief Field IdKPSmartCardLogon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPSmartCardLogon, put = setStaticF_IdKPSmartCardLogon)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPSmartCardLogon;

  /// @brief Field IdKPTimeStamping, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdKPTimeStamping, put = setStaticF_IdKPTimeStamping)) ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPTimeStamping;

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* New_ctor(::StringW id);

  /// @brief Method .ctor, addr 0x2608810, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_AnyExtendedKeyUsage();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPClientAuth();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPCodeSigning();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPEmailProtection();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecEndSystem();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecTunnel();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecUser();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPMacAddress();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPOcspSigning();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPServerAuth();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPSmartCardLogon();

  static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPTimeStamping();

  static inline void setStaticF_AnyExtendedKeyUsage(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPClientAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPCodeSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPEmailProtection(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPIpsecEndSystem(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPIpsecTunnel(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPIpsecUser(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPMacAddress(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPOcspSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPServerAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPSmartCardLogon(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

  static inline void setStaticF_IdKPTimeStamping(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyPurposeID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyPurposeID(KeyPurposeID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyPurposeID(KeyPurposeID const&) = delete;

  /// @brief Field IdKP offset 0xffffffff size 0x8
  static constexpr ::ConstString IdKP{ u"1.3.6.1.5.5.7.3" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::KeyPurposeID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::KeyPurposeID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "Org.BouncyCastle.Asn1.X509", "KeyPurposeID");
