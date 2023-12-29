#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampTokenGenerator)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
// Type: Org.BouncyCastle.Tsp::TimeStampTokenGenerator
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1771))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampTokenGenerator*
class CORDL_TYPE TimeStampTokenGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field accuracySeconds, offset 0x10, size 0x4
  __declspec(property(get = __get_accuracySeconds, put = __set_accuracySeconds)) int32_t accuracySeconds;

  /// @brief Field accuracyMillis, offset 0x14, size 0x4
  __declspec(property(get = __get_accuracyMillis, put = __set_accuracyMillis)) int32_t accuracyMillis;

  /// @brief Field accuracyMicros, offset 0x18, size 0x4
  __declspec(property(get = __get_accuracyMicros, put = __set_accuracyMicros)) int32_t accuracyMicros;

  /// @brief Field ordering, offset 0x1c, size 0x1
  __declspec(property(get = __get_ordering, put = __set_ordering)) bool ordering;

  /// @brief Field tsa, offset 0x20, size 0x8
  __declspec(property(get = __get_tsa, put = __set_tsa))::Org::BouncyCastle::Asn1::X509::GeneralName* tsa;

  /// @brief Field tsaPolicyOID, offset 0x28, size 0x8
  __declspec(property(get = __get_tsaPolicyOID, put = __set_tsaPolicyOID))::StringW tsaPolicyOID;

  /// @brief Field key, offset 0x30, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key;

  /// @brief Field cert, offset 0x38, size 0x8
  __declspec(property(get = __get_cert, put = __set_cert))::Org::BouncyCastle::X509::X509Certificate* cert;

  /// @brief Field digestOID, offset 0x40, size 0x8
  __declspec(property(get = __get_digestOID, put = __set_digestOID))::StringW digestOID;

  /// @brief Field signedAttr, offset 0x48, size 0x8
  __declspec(property(get = __get_signedAttr, put = __set_signedAttr))::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr;

  /// @brief Field unsignedAttr, offset 0x50, size 0x8
  __declspec(property(get = __get_unsignedAttr, put = __set_unsignedAttr))::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr;

  /// @brief Field x509Certs, offset 0x58, size 0x8
  __declspec(property(get = __get_x509Certs, put = __set_x509Certs))::Org::BouncyCastle::X509::Store::IX509Store* x509Certs;

  /// @brief Field x509Crls, offset 0x60, size 0x8
  __declspec(property(get = __get_x509Crls, put = __set_x509Crls))::Org::BouncyCastle::X509::Store::IX509Store* x509Crls;

  constexpr int32_t& __get_accuracySeconds();

  constexpr int32_t const& __get_accuracySeconds() const;

  constexpr void __set_accuracySeconds(int32_t value);

  constexpr int32_t& __get_accuracyMillis();

  constexpr int32_t const& __get_accuracyMillis() const;

  constexpr void __set_accuracyMillis(int32_t value);

  constexpr int32_t& __get_accuracyMicros();

  constexpr int32_t const& __get_accuracyMicros() const;

  constexpr void __set_accuracyMicros(int32_t value);

  constexpr bool& __get_ordering();

  constexpr bool const& __get_ordering() const;

  constexpr void __set_ordering(bool value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_tsa();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_tsa() const;

  constexpr void __set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::StringW& __get_tsaPolicyOID();

  constexpr ::StringW const& __get_tsaPolicyOID() const;

  constexpr void __set_tsaPolicyOID(::StringW value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_cert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_cert() const;

  constexpr void __set_cert(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr ::StringW& __get_digestOID();

  constexpr ::StringW const& __get_digestOID() const;

  constexpr void __set_digestOID(::StringW value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_signedAttr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_signedAttr() const;

  constexpr void __set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_unsignedAttr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_unsignedAttr() const;

  constexpr void __set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __get_x509Certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __get_x509Certs() const;

  constexpr void __set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __get_x509Crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __get_x509Crls() const;

  constexpr void __set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store* value);

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOID, ::StringW tsaPolicyOID);

  /// @brief Method .ctor addr 0x10e265c size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID, ::StringW tsaPolicyOID);

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOID, ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method .ctor addr 0x10e2668 size 0x448 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID, ::StringW tsaPolicyOID,
                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method SetCertificates addr 0x10e2ab0 size 0x8 virtual false final false
  inline void SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certificates);

  /// @brief Method SetCrls addr 0x10e2ab8 size 0x8 virtual false final false
  inline void SetCrls(::Org::BouncyCastle::X509::Store::IX509Store* crls);

  /// @brief Method SetAccuracySeconds addr 0x10e2ac0 size 0x8 virtual false final false
  inline void SetAccuracySeconds(int32_t accuracySeconds);

  /// @brief Method SetAccuracyMillis addr 0x10e2ac8 size 0x8 virtual false final false
  inline void SetAccuracyMillis(int32_t accuracyMillis);

  /// @brief Method SetAccuracyMicros addr 0x10e2ad0 size 0x8 virtual false final false
  inline void SetAccuracyMicros(int32_t accuracyMicros);

  /// @brief Method SetOrdering addr 0x10e2ad8 size 0xc virtual false final false
  inline void SetOrdering(bool ordering);

  /// @brief Method SetTsa addr 0x10e2ae4 size 0x8 virtual false final false
  inline void SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName* tsa);

  /// @brief Method Generate addr 0x10e0708 size 0x6a8 virtual false final false
  inline ::Org::BouncyCastle::Tsp::TimeStampToken* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime);

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampTokenGenerator(TimeStampTokenGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampTokenGenerator(TimeStampTokenGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampTokenGenerator();

public:
  /// @brief Field accuracySeconds, offset: 0x10, size: 0x4, def value: None
  int32_t ___accuracySeconds;

  /// @brief Field accuracyMillis, offset: 0x14, size: 0x4, def value: None
  int32_t ___accuracyMillis;

  /// @brief Field accuracyMicros, offset: 0x18, size: 0x4, def value: None
  int32_t ___accuracyMicros;

  /// @brief Field ordering, offset: 0x1c, size: 0x1, def value: None
  bool ___ordering;

  /// @brief Field tsa, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___tsa;

  /// @brief Field tsaPolicyOID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___tsaPolicyOID;

  /// @brief Field key, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___key;

  /// @brief Field cert, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___cert;

  /// @brief Field digestOID, offset: 0x40, size: 0x8, def value: None
  ::StringW ___digestOID;

  /// @brief Field signedAttr, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___signedAttr;

  /// @brief Field unsignedAttr, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___unsignedAttr;

  /// @brief Field x509Certs, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ___x509Certs;

  /// @brief Field x509Crls, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ___x509Crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___accuracySeconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___accuracyMillis) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___accuracyMicros) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___ordering) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___tsa) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___tsaPolicyOID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___cert) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___digestOID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___signedAttr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___unsignedAttr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___x509Certs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, ___x509Crls) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, "Org.BouncyCastle.Tsp", "TimeStampTokenGenerator");
