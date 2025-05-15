#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampTokenGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampTokenGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampTokenGenerator
class CORDL_TYPE TimeStampTokenGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field accuracyMicros, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_accuracyMicros, put = __cordl_internal_set_accuracyMicros)) int32_t accuracyMicros;

  /// @brief Field accuracyMillis, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_accuracyMillis, put = __cordl_internal_set_accuracyMillis)) int32_t accuracyMillis;

  /// @brief Field accuracySeconds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_accuracySeconds, put = __cordl_internal_set_accuracySeconds)) int32_t accuracySeconds;

  /// @brief Field cert, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::Org::BouncyCastle::X509::X509Certificate* cert;

  /// @brief Field digestOID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_digestOID, put = __cordl_internal_set_digestOID)) ::StringW digestOID;

  /// @brief Field key, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key;

  /// @brief Field ordering, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_ordering, put = __cordl_internal_set_ordering)) bool ordering;

  /// @brief Field signedAttr, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_signedAttr, put = __cordl_internal_set_signedAttr)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr;

  /// @brief Field tsa, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tsa, put = __cordl_internal_set_tsa)) ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa;

  /// @brief Field tsaPolicyOID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tsaPolicyOID, put = __cordl_internal_set_tsaPolicyOID)) ::StringW tsaPolicyOID;

  /// @brief Field unsignedAttr, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unsignedAttr, put = __cordl_internal_set_unsignedAttr)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr;

  /// @brief Field x509Certs, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_x509Certs, put = __cordl_internal_set_x509Certs)) ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs;

  /// @brief Field x509Crls, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_x509Crls, put = __cordl_internal_set_x509Crls)) ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls;

  /// @brief Method Generate, addr 0x25cc19c, size 0x664, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampToken* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime);

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOID, ::StringW tsaPolicyOID);

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOID, ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method SetAccuracyMicros, addr 0x25ce420, size 0x8, virtual false, abstract: false, final false
  inline void SetAccuracyMicros(int32_t accuracyMicros);

  /// @brief Method SetAccuracyMillis, addr 0x25ce418, size 0x8, virtual false, abstract: false, final false
  inline void SetAccuracyMillis(int32_t accuracyMillis);

  /// @brief Method SetAccuracySeconds, addr 0x25ce410, size 0x8, virtual false, abstract: false, final false
  inline void SetAccuracySeconds(int32_t accuracySeconds);

  /// @brief Method SetCertificates, addr 0x25ce400, size 0x8, virtual false, abstract: false, final false
  inline void SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certificates);

  /// @brief Method SetCrls, addr 0x25ce408, size 0x8, virtual false, abstract: false, final false
  inline void SetCrls(::Org::BouncyCastle::X509::Store::IX509Store* crls);

  /// @brief Method SetOrdering, addr 0x25ce428, size 0xc, virtual false, abstract: false, final false
  inline void SetOrdering(bool ordering);

  /// @brief Method SetTsa, addr 0x25ce434, size 0x8, virtual false, abstract: false, final false
  inline void SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName* tsa);

  constexpr int32_t const& __cordl_internal_get_accuracyMicros() const;

  constexpr int32_t& __cordl_internal_get_accuracyMicros();

  constexpr int32_t const& __cordl_internal_get_accuracyMillis() const;

  constexpr int32_t& __cordl_internal_get_accuracyMillis();

  constexpr int32_t const& __cordl_internal_get_accuracySeconds() const;

  constexpr int32_t& __cordl_internal_get_accuracySeconds();

  constexpr ::Org::BouncyCastle::X509::X509Certificate* const& __cordl_internal_get_cert() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_cert();

  constexpr ::StringW const& __cordl_internal_get_digestOID() const;

  constexpr ::StringW& __cordl_internal_get_digestOID();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_key();

  constexpr bool const& __cordl_internal_get_ordering() const;

  constexpr bool& __cordl_internal_get_ordering();

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& __cordl_internal_get_signedAttr() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_signedAttr();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_tsa() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_tsa();

  constexpr ::StringW const& __cordl_internal_get_tsaPolicyOID() const;

  constexpr ::StringW& __cordl_internal_get_tsaPolicyOID();

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& __cordl_internal_get_unsignedAttr() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_unsignedAttr();

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& __cordl_internal_get_x509Certs() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get_x509Certs();

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& __cordl_internal_get_x509Crls() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get_x509Crls();

  constexpr void __cordl_internal_set_accuracyMicros(int32_t value);

  constexpr void __cordl_internal_set_accuracyMillis(int32_t value);

  constexpr void __cordl_internal_set_accuracySeconds(int32_t value);

  constexpr void __cordl_internal_set_cert(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_digestOID(::StringW value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_ordering(bool value);

  constexpr void __cordl_internal_set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr void __cordl_internal_set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_tsaPolicyOID(::StringW value);

  constexpr void __cordl_internal_set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr void __cordl_internal_set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr void __cordl_internal_set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store* value);

  /// @brief Method .ctor, addr 0x25cdfe4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID, ::StringW tsaPolicyOID);

  /// @brief Method .ctor, addr 0x25cdff0, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID, ::StringW tsaPolicyOID,
                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampTokenGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampTokenGenerator(TimeStampTokenGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampTokenGenerator(TimeStampTokenGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1771 };

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

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, "Org.BouncyCastle.Tsp", "TimeStampTokenGenerator");
