#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Crl)
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509CrlEntry;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509Crl);
// Type: Org.BouncyCastle.X509::X509Crl
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1606))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1864))
// CS Name: ::Org.BouncyCastle.X509::X509Crl*
class CORDL_TYPE X509Crl : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::Org::BouncyCastle::Asn1::X509::CertificateList* c;

  /// @brief Field sigAlgName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgName, put = __cordl_internal_set_sigAlgName))::StringW sigAlgName;

  /// @brief Field sigAlgParams, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgParams, put = __cordl_internal_set_sigAlgParams))::ArrayW<uint8_t, ::Array<uint8_t>*> sigAlgParams;

  /// @brief Field isIndirect, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isIndirect, put = __cordl_internal_set_isIndirect)) bool isIndirect;

  /// @brief Field hashValueSet, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_hashValueSet, put = __cordl_internal_set_hashValueSet)) bool hashValueSet;

  /// @brief Field hashValue, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashValue, put = __cordl_internal_set_hashValue)) int32_t hashValue;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_IssuerDN))::Org::BouncyCastle::Asn1::X509::X509Name* IssuerDN;

  __declspec(property(get = get_ThisUpdate))::System::DateTime ThisUpdate;

  __declspec(property(get = get_NextUpdate))::Org::BouncyCastle::Utilities::Date::DateTimeObject* NextUpdate;

  __declspec(property(get = get_SigAlgName))::StringW SigAlgName;

  __declspec(property(get = get_SigAlgOid))::StringW SigAlgOid;

  __declspec(property(get = get_IsIndirectCrl)) bool IsIndirectCrl;

  constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& __cordl_internal_get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CertificateList*> const& __cordl_internal_get_c() const;

  constexpr void __cordl_internal_set_c(::Org::BouncyCastle::Asn1::X509::CertificateList* value);

  constexpr ::StringW& __cordl_internal_get_sigAlgName();

  constexpr ::StringW const& __cordl_internal_get_sigAlgName() const;

  constexpr void __cordl_internal_set_sigAlgName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sigAlgParams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sigAlgParams() const;

  constexpr void __cordl_internal_set_sigAlgParams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __cordl_internal_get_isIndirect();

  constexpr bool const& __cordl_internal_get_isIndirect() const;

  constexpr void __cordl_internal_set_isIndirect(bool value);

  constexpr bool& __cordl_internal_get_hashValueSet();

  constexpr bool const& __cordl_internal_get_hashValueSet() const;

  constexpr void __cordl_internal_set_hashValueSet(bool value);

  constexpr int32_t& __cordl_internal_get_hashValue();

  constexpr int32_t const& __cordl_internal_get_hashValue() const;

  constexpr void __cordl_internal_set_hashValue(int32_t value);

  static inline ::Org::BouncyCastle::X509::X509Crl* New_ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method .ctor, addr 0x11a9eb8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method GetX509Extensions, addr 0x11aa074, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetEncoded, addr 0x11aa0b8, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Verify, addr 0x11aa1b0, size 0x80, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method Verify, addr 0x11aa230, size 0xc8, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  /// @brief Method CheckSignature, addr 0x11aa2f8, size 0x3ec, virtual true, abstract: false, final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method get_Version, addr 0x11aa6e4, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_IssuerDN, addr 0x11aa700, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_ThisUpdate, addr 0x11aa71c, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTime get_ThisUpdate();

  /// @brief Method get_NextUpdate, addr 0x11aa744, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate();

  /// @brief Method LoadCrlEntries, addr 0x11aa7e8, size 0x46c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* LoadCrlEntries();

  /// @brief Method GetRevokedCertificate, addr 0x11aaca0, size 0x438, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CrlEntry* GetRevokedCertificate(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method GetRevokedCertificates, addr 0x11ab0d8, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetRevokedCertificates();

  /// @brief Method GetTbsCertList, addr 0x11ab190, size 0x108, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertList();

  /// @brief Method GetSignature, addr 0x11ab298, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method get_SigAlgName, addr 0x11ab2b4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid, addr 0x11ab2bc, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method GetSigAlgParams, addr 0x11ab2f0, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method Equals, addr 0x11ab34c, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x11ab464, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x11ab4c0, size 0xfe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method IsRevoked, addr 0x11ac4a0, size 0xc4, virtual true, abstract: false, final false
  inline bool IsRevoked(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method get_IsIndirectCrl, addr 0x11ac564, size 0x164, virtual true, abstract: false, final false
  inline bool get_IsIndirectCrl();

  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Crl(X509Crl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Crl(X509Crl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Crl();

public:
  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::CertificateList* ___c;

  /// @brief Field sigAlgName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sigAlgName;

  /// @brief Field sigAlgParams, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sigAlgParams;

  /// @brief Field isIndirect, offset: 0x28, size: 0x1, def value: None
  bool ___isIndirect;

  /// @brief Field hashValueSet, offset: 0x29, size: 0x1, def value: None
  bool ___hashValueSet;

  /// @brief Field hashValue, offset: 0x2c, size: 0x4, def value: None
  int32_t ___hashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509Crl, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___sigAlgName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___sigAlgParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___isIndirect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___hashValueSet) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Crl, ___hashValue) == 0x2c, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509Crl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509Crl*, "Org.BouncyCastle.X509", "X509Crl");
