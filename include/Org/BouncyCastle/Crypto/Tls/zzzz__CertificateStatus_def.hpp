#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1188))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateStatus*
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field mStatusType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mStatusType, put = __cordl_internal_set_mStatusType)) uint8_t mStatusType;

  /// @brief Field mResponse, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mResponse, put = __cordl_internal_set_mResponse))::System::Object* mResponse;

  __declspec(property(get = get_StatusType)) uint8_t StatusType;

  __declspec(property(get = get_Response))::System::Object* Response;

  constexpr uint8_t& __cordl_internal_get_mStatusType();

  constexpr uint8_t const& __cordl_internal_get_mStatusType() const;

  constexpr void __cordl_internal_set_mStatusType(uint8_t value);

  constexpr ::System::Object*& __cordl_internal_get_mResponse();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_mResponse() const;

  constexpr void __cordl_internal_set_mResponse(::System::Object* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* New_ctor(uint8_t statusType, ::System::Object* response);

  /// @brief Method .ctor, addr 0xf89aa4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(uint8_t statusType, ::System::Object* response);

  /// @brief Method get_StatusType, addr 0xf89c2c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_StatusType();

  /// @brief Method get_Response, addr 0xf89c34, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Response();

  /// @brief Method GetOcspResponse, addr 0xf89c3c, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* GetOcspResponse();

  /// @brief Method Encode, addr 0xf89d10, size 0x150, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Parse, addr 0xf89e60, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Parse(::System::IO::Stream* input);

  /// @brief Method IsCorrectType, addr 0xf89b44, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsCorrectType(uint8_t statusType, ::System::Object* response);

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  /// @brief Field mStatusType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mStatusType;

  /// @brief Field mResponse, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___mResponse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateStatus, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatus, ___mStatusType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatus, ___mResponse) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, "Org.BouncyCastle.Crypto.Tls", "CertificateStatus");
