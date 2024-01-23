#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ExtensionType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ExtensionType);
// Type: Org.BouncyCastle.Crypto.Tls::ExtensionType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1243))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ExtensionType*
class CORDL_TYPE ExtensionType : public ::System::Object {
public:
  // Declarations
  /// @brief Field DRAFT_token_binding, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DRAFT_token_binding, put = setStaticF_DRAFT_token_binding)) int32_t DRAFT_token_binding;

  /// @brief Field negotiated_ff_dhe_groups, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_negotiated_ff_dhe_groups, put = setStaticF_negotiated_ff_dhe_groups)) int32_t negotiated_ff_dhe_groups;

  static inline void setStaticF_DRAFT_token_binding(int32_t value);

  static inline int32_t getStaticF_DRAFT_token_binding();

  static inline void setStaticF_negotiated_ff_dhe_groups(int32_t value);

  static inline int32_t getStaticF_negotiated_ff_dhe_groups();

  static inline ::Org::BouncyCastle::Crypto::Tls::ExtensionType* New_ctor();

  /// @brief Method .ctor, addr 0xf91450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionType(ExtensionType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionType(ExtensionType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionType();

public:
  /// @brief Field server_name offset 0xffffffff size 0x4
  static constexpr int32_t server_name{ static_cast<int32_t>(0x0) };

  /// @brief Field max_fragment_length offset 0xffffffff size 0x4
  static constexpr int32_t max_fragment_length{ static_cast<int32_t>(0x1) };

  /// @brief Field client_certificate_url offset 0xffffffff size 0x4
  static constexpr int32_t client_certificate_url{ static_cast<int32_t>(0x2) };

  /// @brief Field trusted_ca_keys offset 0xffffffff size 0x4
  static constexpr int32_t trusted_ca_keys{ static_cast<int32_t>(0x3) };

  /// @brief Field truncated_hmac offset 0xffffffff size 0x4
  static constexpr int32_t truncated_hmac{ static_cast<int32_t>(0x4) };

  /// @brief Field status_request offset 0xffffffff size 0x4
  static constexpr int32_t status_request{ static_cast<int32_t>(0x5) };

  /// @brief Field user_mapping offset 0xffffffff size 0x4
  static constexpr int32_t user_mapping{ static_cast<int32_t>(0x6) };

  /// @brief Field client_authz offset 0xffffffff size 0x4
  static constexpr int32_t client_authz{ static_cast<int32_t>(0x7) };

  /// @brief Field server_authz offset 0xffffffff size 0x4
  static constexpr int32_t server_authz{ static_cast<int32_t>(0x8) };

  /// @brief Field cert_type offset 0xffffffff size 0x4
  static constexpr int32_t cert_type{ static_cast<int32_t>(0x9) };

  /// @brief Field supported_groups offset 0xffffffff size 0x4
  static constexpr int32_t supported_groups{ static_cast<int32_t>(0xa) };

  /// @brief Field elliptic_curves offset 0xffffffff size 0x4
  static constexpr int32_t elliptic_curves{ static_cast<int32_t>(0xa) };

  /// @brief Field ec_point_formats offset 0xffffffff size 0x4
  static constexpr int32_t ec_point_formats{ static_cast<int32_t>(0xb) };

  /// @brief Field srp offset 0xffffffff size 0x4
  static constexpr int32_t srp{ static_cast<int32_t>(0xc) };

  /// @brief Field signature_algorithms offset 0xffffffff size 0x4
  static constexpr int32_t signature_algorithms{ static_cast<int32_t>(0xd) };

  /// @brief Field use_srtp offset 0xffffffff size 0x4
  static constexpr int32_t use_srtp{ static_cast<int32_t>(0xe) };

  /// @brief Field heartbeat offset 0xffffffff size 0x4
  static constexpr int32_t heartbeat{ static_cast<int32_t>(0xf) };

  /// @brief Field application_layer_protocol_negotiation offset 0xffffffff size 0x4
  static constexpr int32_t application_layer_protocol_negotiation{ static_cast<int32_t>(0x10) };

  /// @brief Field status_request_v2 offset 0xffffffff size 0x4
  static constexpr int32_t status_request_v2{ static_cast<int32_t>(0x11) };

  /// @brief Field signed_certificate_timestamp offset 0xffffffff size 0x4
  static constexpr int32_t signed_certificate_timestamp{ static_cast<int32_t>(0x12) };

  /// @brief Field client_certificate_type offset 0xffffffff size 0x4
  static constexpr int32_t client_certificate_type{ static_cast<int32_t>(0x13) };

  /// @brief Field server_certificate_type offset 0xffffffff size 0x4
  static constexpr int32_t server_certificate_type{ static_cast<int32_t>(0x14) };

  /// @brief Field padding offset 0xffffffff size 0x4
  static constexpr int32_t padding{ static_cast<int32_t>(0x15) };

  /// @brief Field encrypt_then_mac offset 0xffffffff size 0x4
  static constexpr int32_t encrypt_then_mac{ static_cast<int32_t>(0x16) };

  /// @brief Field extended_master_secret offset 0xffffffff size 0x4
  static constexpr int32_t extended_master_secret{ static_cast<int32_t>(0x17) };

  /// @brief Field cached_info offset 0xffffffff size 0x4
  static constexpr int32_t cached_info{ static_cast<int32_t>(0x19) };

  /// @brief Field session_ticket offset 0xffffffff size 0x4
  static constexpr int32_t session_ticket{ static_cast<int32_t>(0x23) };

  /// @brief Field renegotiation_info offset 0xffffffff size 0x4
  static constexpr int32_t renegotiation_info{ static_cast<int32_t>(0xff01) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ExtensionType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ExtensionType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ExtensionType*, "Org.BouncyCastle.Crypto.Tls", "ExtensionType");
