#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IX509AttributeCertificate)
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::IX509AttributeCertificate);
// Type: Org.BouncyCastle.X509::IX509AttributeCertificate
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1854))
// CS Name: ::Org.BouncyCastle.X509::IX509AttributeCertificate*
class CORDL_TYPE IX509AttributeCertificate {
public:
  // Declarations
  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_Holder))::Org::BouncyCastle::X509::AttributeCertificateHolder* Holder;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::X509::AttributeCertificateIssuer* Issuer;

  __declspec(property(get = get_IsValidNow)) bool IsValidNow;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept;

  /// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Version();

  /// @brief Method get_SerialNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_NotBefore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_NotAfter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_Holder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();

  /// @brief Method get_Issuer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();

  /// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes();

  /// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*, ::Array<::Org::BouncyCastle::X509::X509Attribute*>*> GetAttributes(::StringW oid);

  /// @brief Method GetIssuerUniqueID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetIssuerUniqueID();

  /// @brief Method get_IsValidNow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsValidNow();

  /// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsValid(::System::DateTime date);

  /// @brief Method CheckValidity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CheckValidity();

  /// @brief Method CheckValidity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CheckValidity(::System::DateTime date);

  /// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method Verify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method GetEncoded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  // Ctor Parameters [CppParam { name: "", ty: "IX509AttributeCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IX509AttributeCertificate(IX509AttributeCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IX509AttributeCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509AttributeCertificate(IX509AttributeCertificate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::IX509AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::IX509AttributeCertificate*, "Org.BouncyCastle.X509", "IX509AttributeCertificate");
