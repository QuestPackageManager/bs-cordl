#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateStatus)
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponse;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateStatus);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateStatus
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Response)) ::System::Object* Response;

  __declspec(property(get = get_StatusType)) uint8_t StatusType;

  /// @brief Field mResponse, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mResponse, put = __cordl_internal_set_mResponse)) ::System::Object* mResponse;

  /// @brief Field mStatusType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mStatusType, put = __cordl_internal_set_mStatusType)) uint8_t mStatusType;

  /// @brief Method Encode, addr 0x23e291c, size 0x148, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method GetOcspResponse, addr 0x23e284c, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* GetOcspResponse();

  /// @brief Method IsCorrectType, addr 0x23e2758, size 0xe4, virtual false, abstract: false, final false
  static inline bool IsCorrectType(uint8_t statusType, ::System::Object* response);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* New_ctor(uint8_t statusType, ::System::Object* response);

  /// @brief Method Parse, addr 0x23e2a64, size 0x104, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Parse(::System::IO::Stream* input);

  constexpr ::System::Object* const& __cordl_internal_get_mResponse() const;

  constexpr ::System::Object*& __cordl_internal_get_mResponse();

  constexpr uint8_t const& __cordl_internal_get_mStatusType() const;

  constexpr uint8_t& __cordl_internal_get_mStatusType();

  constexpr void __cordl_internal_set_mResponse(::System::Object* value);

  constexpr void __cordl_internal_set_mStatusType(uint8_t value);

  /// @brief Method .ctor, addr 0x23e26bc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t statusType, ::System::Object* response);

  /// @brief Method get_Response, addr 0x23e2844, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Response();

  /// @brief Method get_StatusType, addr 0x23e283c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_StatusType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1188 };

  /// @brief Field mStatusType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mStatusType;

  /// @brief Field mResponse, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___mResponse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatus, ___mStatusType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatus, ___mResponse) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateStatus, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, "Org.BouncyCastle.Crypto.Tls", "CertificateStatus");
