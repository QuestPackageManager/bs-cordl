#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateStatusRequest)
namespace Org::BouncyCastle::Crypto::Tls {
class OcspStatusRequest;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest);
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatusRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1189))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateStatusRequest*
class CORDL_TYPE CertificateStatusRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field mStatusType, offset 0x10, size 0x1
  __declspec(property(get = __get_mStatusType, put = __set_mStatusType)) uint8_t mStatusType;

  /// @brief Field mRequest, offset 0x18, size 0x8
  __declspec(property(get = __get_mRequest, put = __set_mRequest))::System::Object* mRequest;

  __declspec(property(get = get_StatusType)) uint8_t StatusType;

  __declspec(property(get = get_Request))::System::Object* Request;

  constexpr uint8_t& __get_mStatusType();

  constexpr uint8_t const& __get_mStatusType() const;

  constexpr void __set_mStatusType(uint8_t value);

  constexpr ::System::Object*& __get_mRequest();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_mRequest() const;

  constexpr void __set_mRequest(::System::Object* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* New_ctor(uint8_t statusType, ::System::Object* request);

  /// @brief Method .ctor, addr 0xf600e4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(uint8_t statusType, ::System::Object* request);

  /// @brief Method get_StatusType, addr 0xf6026c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_StatusType();

  /// @brief Method get_Request, addr 0xf60274, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Request();

  /// @brief Method GetOcspStatusRequest, addr 0xf6027c, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* GetOcspStatusRequest();

  /// @brief Method Encode, addr 0xf60350, size 0x13c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Parse, addr 0xf6048c, size 0xf4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Parse(::System::IO::Stream* input);

  /// @brief Method IsCorrectType, addr 0xf60184, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsCorrectType(uint8_t statusType, ::System::Object* request);

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatusRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatusRequest(CertificateStatusRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatusRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatusRequest(CertificateStatusRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatusRequest();

public:
  /// @brief Field mStatusType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mStatusType;

  /// @brief Field mRequest, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___mRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest, ___mStatusType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest, ___mRequest) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*, "Org.BouncyCastle.Crypto.Tls", "CertificateStatusRequest");
