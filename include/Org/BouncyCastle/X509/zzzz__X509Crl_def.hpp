#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509Crl.hpp"
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::X509Crl*
class CORDL_TYPE X509Crl : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_IsIndirectCrl)) bool IsIndirectCrl;

  __declspec(property(get = get_IssuerDN)) ::Org::BouncyCastle::Asn1::X509::X509Name* IssuerDN;

  __declspec(property(get = get_NextUpdate)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* NextUpdate;

  __declspec(property(get = get_SigAlgName)) ::StringW SigAlgName;

  __declspec(property(get = get_SigAlgOid)) ::StringW SigAlgOid;

  __declspec(property(get = get_ThisUpdate)) ::System::DateTime ThisUpdate;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::Org::BouncyCastle::Asn1::X509::CertificateList* c;

  /// @brief Field hashValue, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashValue, put = __cordl_internal_set_hashValue)) int32_t hashValue;

  /// @brief Field hashValueSet, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_hashValueSet, put = __cordl_internal_set_hashValueSet)) bool hashValueSet;

  /// @brief Field isIndirect, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isIndirect, put = __cordl_internal_set_isIndirect)) bool isIndirect;

  /// @brief Field sigAlgName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgName, put = __cordl_internal_set_sigAlgName)) ::StringW sigAlgName;

  /// @brief Field sigAlgParams, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgParams, put = __cordl_internal_set_sigAlgParams)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sigAlgParams;

  /// @brief Method CheckSignature, addr 0x25b4e40, size 0x3e4, virtual true, abstract: false, final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method Equals, addr 0x25b5e68, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetEncoded, addr 0x25b4c10, size 0xf0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x25b5f80, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetRevokedCertificate, addr 0x25b57e8, size 0x414, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CrlEntry* GetRevokedCertificate(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method GetRevokedCertificates, addr 0x25b5bfc, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetRevokedCertificates();

  /// @brief Method GetSigAlgParams, addr 0x25b5e0c, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method GetSignature, addr 0x25b5db4, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetTbsCertList, addr 0x25b5cb4, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertList();

  /// @brief Method GetX509Extensions, addr 0x25b4bcc, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method IsRevoked, addr 0x25b6f94, size 0xc4, virtual true, abstract: false, final false
  inline bool IsRevoked(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method LoadCrlEntries, addr 0x25b531c, size 0x480, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* LoadCrlEntries();

  static inline ::Org::BouncyCastle::X509::X509Crl* New_ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method ToString, addr 0x25b5fdc, size 0xfb8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Verify, addr 0x25b4d00, size 0x78, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method Verify, addr 0x25b4d78, size 0xc8, virtual true, abstract: false, final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& __cordl_internal_get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CertificateList*> const& __cordl_internal_get_c() const;

  constexpr int32_t const& __cordl_internal_get_hashValue() const;

  constexpr int32_t& __cordl_internal_get_hashValue();

  constexpr bool const& __cordl_internal_get_hashValueSet() const;

  constexpr bool& __cordl_internal_get_hashValueSet();

  constexpr bool const& __cordl_internal_get_isIndirect() const;

  constexpr bool& __cordl_internal_get_isIndirect();

  constexpr ::StringW const& __cordl_internal_get_sigAlgName() const;

  constexpr ::StringW& __cordl_internal_get_sigAlgName();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sigAlgParams() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sigAlgParams();

  constexpr void __cordl_internal_set_c(::Org::BouncyCastle::Asn1::X509::CertificateList* value);

  constexpr void __cordl_internal_set_hashValue(int32_t value);

  constexpr void __cordl_internal_set_hashValueSet(bool value);

  constexpr void __cordl_internal_set_isIndirect(bool value);

  constexpr void __cordl_internal_set_sigAlgName(::StringW value);

  constexpr void __cordl_internal_set_sigAlgParams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x25b4a18, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method get_IsIndirectCrl, addr 0x25b7058, size 0x15c, virtual true, abstract: false, final false
  inline bool get_IsIndirectCrl();

  /// @brief Method get_IssuerDN, addr 0x25b5240, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_NextUpdate, addr 0x25b5284, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate();

  /// @brief Method get_SigAlgName, addr 0x25b5dd0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid, addr 0x25b5dd8, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method get_ThisUpdate, addr 0x25b525c, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTime get_ThisUpdate();

  /// @brief Method get_Version, addr 0x25b5224, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Crl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Crl(X509Crl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Crl(X509Crl const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1864 };

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
