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
class X509Extensions;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509CrlEntry;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1864))
// CS Name: ::Org.BouncyCastle.X509::X509Crl*
class CORDL_TYPE X509Crl : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::Org::BouncyCastle::Asn1::X509::CertificateList* c;

  /// @brief Field sigAlgName, offset 0x18, size 0x8
  __declspec(property(get = __get_sigAlgName, put = __set_sigAlgName))::StringW sigAlgName;

  /// @brief Field sigAlgParams, offset 0x20, size 0x8
  __declspec(property(get = __get_sigAlgParams, put = __set_sigAlgParams))::ArrayW<uint8_t, ::Array<uint8_t>*> sigAlgParams;

  /// @brief Field isIndirect, offset 0x28, size 0x1
  __declspec(property(get = __get_isIndirect, put = __set_isIndirect)) bool isIndirect;

  /// @brief Field hashValueSet, offset 0x29, size 0x1
  __declspec(property(get = __get_hashValueSet, put = __set_hashValueSet)) bool hashValueSet;

  /// @brief Field hashValue, offset 0x2c, size 0x4
  __declspec(property(get = __get_hashValue, put = __set_hashValue)) int32_t hashValue;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_IssuerDN))::Org::BouncyCastle::Asn1::X509::X509Name* IssuerDN;

  __declspec(property(get = get_ThisUpdate))::System::DateTime ThisUpdate;

  __declspec(property(get = get_NextUpdate))::Org::BouncyCastle::Utilities::Date::DateTimeObject* NextUpdate;

  __declspec(property(get = get_SigAlgName))::StringW SigAlgName;

  __declspec(property(get = get_SigAlgOid))::StringW SigAlgOid;

  __declspec(property(get = get_IsIndirectCrl)) bool IsIndirectCrl;

  constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CertificateList*> const& __get_c() const;

  constexpr void __set_c(::Org::BouncyCastle::Asn1::X509::CertificateList* value);

  constexpr ::StringW& __get_sigAlgName();

  constexpr ::StringW const& __get_sigAlgName() const;

  constexpr void __set_sigAlgName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sigAlgParams();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sigAlgParams() const;

  constexpr void __set_sigAlgParams(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_isIndirect();

  constexpr bool const& __get_isIndirect() const;

  constexpr void __set_isIndirect(bool value);

  constexpr bool& __get_hashValueSet();

  constexpr bool const& __get_hashValueSet() const;

  constexpr void __set_hashValueSet(bool value);

  constexpr int32_t& __get_hashValue();

  constexpr int32_t const& __get_hashValue() const;

  constexpr void __set_hashValue(int32_t value);

  static inline ::Org::BouncyCastle::X509::X509Crl* New_ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method .ctor addr 0x110ade0 size 0x1bc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method GetX509Extensions addr 0x110af9c size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetEncoded addr 0x110afe0 size 0xf8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Verify addr 0x110b0d8 size 0x80 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method Verify addr 0x110b158 size 0xc8 virtual true final false
  inline void Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  /// @brief Method CheckSignature addr 0x110b220 size 0x3ec virtual true final false
  inline void CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method get_Version addr 0x110b60c size 0x1c virtual true final false
  inline int32_t get_Version();

  /// @brief Method get_IssuerDN addr 0x110b628 size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();

  /// @brief Method get_ThisUpdate addr 0x110b644 size 0x28 virtual true final false
  inline ::System::DateTime get_ThisUpdate();

  /// @brief Method get_NextUpdate addr 0x110b66c size 0xa4 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate();

  /// @brief Method LoadCrlEntries addr 0x110b710 size 0x46c virtual false final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* LoadCrlEntries();

  /// @brief Method GetRevokedCertificate addr 0x110bbc8 size 0x438 virtual true final false
  inline ::Org::BouncyCastle::X509::X509CrlEntry* GetRevokedCertificate(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method GetRevokedCertificates addr 0x110c000 size 0xb8 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetRevokedCertificates();

  /// @brief Method GetTbsCertList addr 0x110c0b8 size 0x108 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTbsCertList();

  /// @brief Method GetSignature addr 0x110c1c0 size 0x1c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method get_SigAlgName addr 0x110c1dc size 0x8 virtual true final false
  inline ::StringW get_SigAlgName();

  /// @brief Method get_SigAlgOid addr 0x110c1e4 size 0x34 virtual true final false
  inline ::StringW get_SigAlgOid();

  /// @brief Method GetSigAlgParams addr 0x110c218 size 0x5c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSigAlgParams();

  /// @brief Method Equals addr 0x110c274 size 0x118 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode addr 0x110c38c size 0x5c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x110c3e8 size 0xfe0 virtual true final false
  inline ::StringW ToString();

  /// @brief Method IsRevoked addr 0x110d3c8 size 0xc4 virtual true final false
  inline bool IsRevoked(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method get_IsIndirectCrl addr 0x110d48c size 0x164 virtual true final false
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
