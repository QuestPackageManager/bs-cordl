#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls)
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_ciphersuite;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_error_code;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_errorstate;
}
namespace Mono::Unity {
class __UnityTls__unitytls_interface_struct;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_protocol;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx_callbacks;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx_protocolrange;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_trace_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509name;
}
namespace Mono::Unity {
class __UnityTls__unitytls_x509verify_callback;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509verify_result;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Unity {
struct __UnityTls__unitytls_ciphersuite;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_error_code;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_protocol;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509verify_result;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t;
}
namespace GlobalNamespace {
class __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t;
}
namespace Mono::Unity {
class UnityTls;
}
namespace Mono::Unity {
class __UnityTls__unitytls_interface_struct;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_trace_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
class __UnityTls__unitytls_x509verify_callback;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_errorstate;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_key_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx_callbacks;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_tlsctx_protocolrange;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list_ref;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509name;
}
// Write type traits
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_ciphersuite);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_error_code);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_protocol);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_x509verify_result);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t);
MARK_REF_PTR_T(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t);
MARK_REF_PTR_T(::Mono::Unity::UnityTls);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_interface_struct);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback);
MARK_REF_PTR_T(::Mono::Unity::__UnityTls__unitytls_x509verify_callback);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_errorstate);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_key);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_key_ref);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_tlsctx);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_x509_ref);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_x509list);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_x509list_ref);
MARK_VAL_T(::Mono::Unity::__UnityTls__unitytls_x509name);
// Type: ::unitytls_error_code
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_error_code
struct CORDL_TYPE __UnityTls__unitytls_error_code {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____UnityTls__unitytls_error_code_Unwrapped
  enum struct ____UnityTls__unitytls_error_code_Unwrapped : uint32_t {
    __E_UNITYTLS_SUCCESS = static_cast<uint32_t>(0x3020100u),
    __E_UNITYTLS_INVALID_ARGUMENT = static_cast<uint32_t>(0x4030201u),
    __E_UNITYTLS_INVALID_FORMAT = static_cast<uint32_t>(0x5040302u),
    __E_UNITYTLS_INVALID_PASSWORD = static_cast<uint32_t>(0x6050403u),
    __E_UNITYTLS_INVALID_STATE = static_cast<uint32_t>(0x7060504u),
    __E_UNITYTLS_BUFFER_OVERFLOW = static_cast<uint32_t>(0x8070605u),
    __E_UNITYTLS_OUT_OF_MEMORY = static_cast<uint32_t>(0x9080706u),
    __E_UNITYTLS_INTERNAL_ERROR = static_cast<uint32_t>(0xa090807u),
    __E_UNITYTLS_NOT_SUPPORTED = static_cast<uint32_t>(0xc00a0908u),
    __E_UNITYTLS_ENTROPY_SOURCE_FAILED = static_cast<uint32_t>(0x10c00a09u),
    __E_UNITYTLS_STREAM_CLOSED = static_cast<uint32_t>(0x10c00au),
    __E_UNITYTLS_USER_CUSTOM_ERROR_START = static_cast<uint32_t>(0x10c0u),
    __E_UNITYTLS_USER_WOULD_BLOCK = static_cast<uint32_t>(0x10010c0u),
    __E_UNITYTLS_USER_READ_FAILED = static_cast<uint32_t>(0x20010c0u),
    __E_UNITYTLS_USER_WRITE_FAILED = static_cast<uint32_t>(0x30010c0u),
    __E_UNITYTLS_USER_UNKNOWN_ERROR = static_cast<uint32_t>(0x40010c0u),
    __E_UNITYTLS_USER_CUSTOM_ERROR_END = static_cast<uint32_t>(0x20c0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityTls__unitytls_error_code_Unwrapped() const noexcept {
    return static_cast<____UnityTls__unitytls_error_code_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_error_code();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_error_code(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field UNITYTLS_BUFFER_OVERFLOW value: static_cast<uint32_t>(0x8070605u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_BUFFER_OVERFLOW;

  /// @brief Field UNITYTLS_ENTROPY_SOURCE_FAILED value: static_cast<uint32_t>(0x10c00a09u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_ENTROPY_SOURCE_FAILED;

  /// @brief Field UNITYTLS_INTERNAL_ERROR value: static_cast<uint32_t>(0xa090807u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_INTERNAL_ERROR;

  /// @brief Field UNITYTLS_INVALID_ARGUMENT value: static_cast<uint32_t>(0x4030201u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_INVALID_ARGUMENT;

  /// @brief Field UNITYTLS_INVALID_FORMAT value: static_cast<uint32_t>(0x5040302u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_INVALID_FORMAT;

  /// @brief Field UNITYTLS_INVALID_PASSWORD value: static_cast<uint32_t>(0x6050403u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_INVALID_PASSWORD;

  /// @brief Field UNITYTLS_INVALID_STATE value: static_cast<uint32_t>(0x7060504u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_INVALID_STATE;

  /// @brief Field UNITYTLS_NOT_SUPPORTED value: static_cast<uint32_t>(0xc00a0908u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_NOT_SUPPORTED;

  /// @brief Field UNITYTLS_OUT_OF_MEMORY value: static_cast<uint32_t>(0x9080706u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_OUT_OF_MEMORY;

  /// @brief Field UNITYTLS_STREAM_CLOSED value: static_cast<uint32_t>(0x10c00au)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_STREAM_CLOSED;

  /// @brief Field UNITYTLS_SUCCESS value: static_cast<uint32_t>(0x3020100u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_SUCCESS;

  /// @brief Field UNITYTLS_USER_CUSTOM_ERROR_END value: static_cast<uint32_t>(0x20c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_END;

  /// @brief Field UNITYTLS_USER_CUSTOM_ERROR_START value: static_cast<uint32_t>(0x10c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_START;

  /// @brief Field UNITYTLS_USER_READ_FAILED value: static_cast<uint32_t>(0x20010c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_READ_FAILED;

  /// @brief Field UNITYTLS_USER_UNKNOWN_ERROR value: static_cast<uint32_t>(0x40010c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_UNKNOWN_ERROR;

  /// @brief Field UNITYTLS_USER_WOULD_BLOCK value: static_cast<uint32_t>(0x10010c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_WOULD_BLOCK;

  /// @brief Field UNITYTLS_USER_WRITE_FAILED value: static_cast<uint32_t>(0x30010c0u)
  static ::Mono::Unity::__UnityTls__unitytls_error_code const UNITYTLS_USER_WRITE_FAILED;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_error_code, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_error_code, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_errorstate
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_errorstate
struct CORDL_TYPE __UnityTls__unitytls_errorstate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_errorstate();

  // Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::Mono::Unity::__UnityTls__unitytls_error_code", modifiers: "",
  // def_value: None }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_errorstate(uint32_t magic, ::Mono::Unity::__UnityTls__unitytls_error_code code, uint64_t reserved) noexcept;

  /// @brief Field magic, offset: 0x0, size: 0x4, def value: None
  uint32_t magic;

  /// @brief Field code, offset: 0x4, size: 0x4, def value: None
  ::Mono::Unity::__UnityTls__unitytls_error_code code;

  /// @brief Field reserved, offset: 0x8, size: 0x8, def value: None
  uint64_t reserved;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_errorstate, 0x10>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_errorstate, magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_errorstate, code) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_errorstate, reserved) == 0x8, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_key
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_key
#pragma pack(push, 0)
struct CORDL_TYPE __UnityTls__unitytls_key {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_key();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_key, 0x1>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_key_ref
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_key_ref
struct CORDL_TYPE __UnityTls__unitytls_key_ref {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_key_ref();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_key_ref(uint64_t handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_key_ref, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_key_ref, handle) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509_ref
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_x509_ref
struct CORDL_TYPE __UnityTls__unitytls_x509_ref {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509_ref();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_x509_ref(uint64_t handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509_ref, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_x509_ref, handle) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509list
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_x509list
#pragma pack(push, 0)
struct CORDL_TYPE __UnityTls__unitytls_x509list {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509list();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509list, 0x1>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509list_ref
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_x509list_ref
struct CORDL_TYPE __UnityTls__unitytls_x509list_ref {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509list_ref();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_x509list_ref(uint64_t handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509list_ref, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_x509list_ref, handle) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509verify_result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_x509verify_result
struct CORDL_TYPE __UnityTls__unitytls_x509verify_result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____UnityTls__unitytls_x509verify_result_Unwrapped
  enum struct ____UnityTls__unitytls_x509verify_result_Unwrapped : uint32_t {
    __E_UNITYTLS_X509VERIFY_SUCCESS = static_cast<uint32_t>(0xf000u),
    __E_UNITYTLS_X509VERIFY_NOT_DONE = static_cast<uint32_t>(0xf0u),
    __E_UNITYTLS_X509VERIFY_FATAL_ERROR = static_cast<uint32_t>(0x40201ffu),
    __E_UNITYTLS_X509VERIFY_FLAG_EXPIRED = static_cast<uint32_t>(0x8040201u),
    __E_UNITYTLS_X509VERIFY_FLAG_REVOKED = static_cast<uint32_t>(0xc0080402u),
    __E_UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = static_cast<uint32_t>(0x1c00804u),
    __E_UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = static_cast<uint32_t>(0x1c008u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = static_cast<uint32_t>(0x1c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = static_cast<uint32_t>(0x2c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = static_cast<uint32_t>(0x4c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = static_cast<uint32_t>(0x8c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = static_cast<uint32_t>(0x10c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = static_cast<uint32_t>(0x20c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = static_cast<uint32_t>(0x40c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = static_cast<uint32_t>(0x80c0u),
    __E_UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = static_cast<uint32_t>(0xc8u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityTls__unitytls_x509verify_result_Unwrapped() const noexcept {
    return static_cast<____UnityTls__unitytls_x509verify_result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509verify_result();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_x509verify_result(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field UNITYTLS_X509VERIFY_FATAL_ERROR value: static_cast<uint32_t>(0x40201ffu)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FATAL_ERROR;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH value: static_cast<uint32_t>(0x1c00804u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_EXPIRED value: static_cast<uint32_t>(0x8040201u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_EXPIRED;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED value: static_cast<uint32_t>(0x1c008u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_REVOKED value: static_cast<uint32_t>(0xc0080402u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_REVOKED;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR value: static_cast<uint32_t>(0xc8u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 value: static_cast<uint32_t>(0x1c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR1;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 value: static_cast<uint32_t>(0x2c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR2;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 value: static_cast<uint32_t>(0x4c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR3;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 value: static_cast<uint32_t>(0x8c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR4;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 value: static_cast<uint32_t>(0x10c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR5;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 value: static_cast<uint32_t>(0x20c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR6;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 value: static_cast<uint32_t>(0x40c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR7;

  /// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 value: static_cast<uint32_t>(0x80c0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR8;

  /// @brief Field UNITYTLS_X509VERIFY_NOT_DONE value: static_cast<uint32_t>(0xf0u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_NOT_DONE;

  /// @brief Field UNITYTLS_X509VERIFY_SUCCESS value: static_cast<uint32_t>(0xf000u)
  static ::Mono::Unity::__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_SUCCESS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509verify_result, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_x509verify_result, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509verify_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_x509verify_callback*
class CORDL_TYPE __UnityTls__unitytls_x509verify_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c9248c, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Invoke(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509_ref cert,
                                                                      ::Mono::Unity::__UnityTls__unitytls_x509verify_result result,
                                                                      ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c923b4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509verify_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_x509verify_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_x509verify_callback(__UnityTls__unitytls_x509verify_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_x509verify_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_x509verify_callback(__UnityTls__unitytls_x509verify_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509verify_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_tlsctx
#pragma pack(push, 0)
struct CORDL_TYPE __UnityTls__unitytls_tlsctx {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx, 0x1>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_x509name
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_x509name
#pragma pack(push, 0)
struct CORDL_TYPE __UnityTls__unitytls_x509name {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_x509name();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_x509name, 0x1>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_ciphersuite
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_ciphersuite
struct CORDL_TYPE __UnityTls__unitytls_ciphersuite {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____UnityTls__unitytls_ciphersuite_Unwrapped
  enum struct ____UnityTls__unitytls_ciphersuite_Unwrapped : uint32_t {
    __E_UNITYTLS_CIPHERSUITE_INVALID = static_cast<uint32_t>(0xffffffc0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityTls__unitytls_ciphersuite_Unwrapped() const noexcept {
    return static_cast<____UnityTls__unitytls_ciphersuite_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_ciphersuite();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_ciphersuite(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field UNITYTLS_CIPHERSUITE_INVALID value: static_cast<uint32_t>(0xffffffc0u)
  static ::Mono::Unity::__UnityTls__unitytls_ciphersuite const UNITYTLS_CIPHERSUITE_INVALID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_ciphersuite, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_ciphersuite, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_protocol
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_protocol
struct CORDL_TYPE __UnityTls__unitytls_protocol {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____UnityTls__unitytls_protocol_Unwrapped
  enum struct ____UnityTls__unitytls_protocol_Unwrapped : uint32_t {
    __E_UNITYTLS_PROTOCOL_TLS_1_0 = static_cast<uint32_t>(0x3020100u),
    __E_UNITYTLS_PROTOCOL_TLS_1_1 = static_cast<uint32_t>(0x50030201u),
    __E_UNITYTLS_PROTOCOL_TLS_1_2 = static_cast<uint32_t>(0x500302u),
    __E_UNITYTLS_PROTOCOL_INVALID = static_cast<uint32_t>(0x5003u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityTls__unitytls_protocol_Unwrapped() const noexcept {
    return static_cast<____UnityTls__unitytls_protocol_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_protocol();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_protocol(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field UNITYTLS_PROTOCOL_INVALID value: static_cast<uint32_t>(0x5003u)
  static ::Mono::Unity::__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_INVALID;

  /// @brief Field UNITYTLS_PROTOCOL_TLS_1_0 value: static_cast<uint32_t>(0x3020100u)
  static ::Mono::Unity::__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_0;

  /// @brief Field UNITYTLS_PROTOCOL_TLS_1_1 value: static_cast<uint32_t>(0x50030201u)
  static ::Mono::Unity::__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_1;

  /// @brief Field UNITYTLS_PROTOCOL_TLS_1_2 value: static_cast<uint32_t>(0x500302u)
  static ::Mono::Unity::__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_protocol, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_protocol, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_protocolrange
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_tlsctx_protocolrange
struct CORDL_TYPE __UnityTls__unitytls_tlsctx_protocolrange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_protocolrange();

  // Ctor Parameters [CppParam { name: "min", ty: "::Mono::Unity::__UnityTls__unitytls_protocol", modifiers: "", def_value: None }, CppParam { name: "max", ty:
  // "::Mono::Unity::__UnityTls__unitytls_protocol", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_tlsctx_protocolrange(::Mono::Unity::__UnityTls__unitytls_protocol min, ::Mono::Unity::__UnityTls__unitytls_protocol max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  ::Mono::Unity::__UnityTls__unitytls_protocol min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  ::Mono::Unity::__UnityTls__unitytls_protocol max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, max) == 0x4, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_write_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_tlsctx_write_callback*
class CORDL_TYPE __UnityTls__unitytls_tlsctx_write_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92578, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c924a0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_write_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_write_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_tlsctx_write_callback(__UnityTls__unitytls_tlsctx_write_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_write_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_tlsctx_write_callback(__UnityTls__unitytls_tlsctx_write_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_read_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_tlsctx_read_callback*
class CORDL_TYPE __UnityTls__unitytls_tlsctx_read_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92664, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c9258c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_read_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_read_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_tlsctx_read_callback(__UnityTls__unitytls_tlsctx_read_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_read_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_tlsctx_read_callback(__UnityTls__unitytls_tlsctx_read_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_trace_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_tlsctx_trace_callback*
class CORDL_TYPE __UnityTls__unitytls_tlsctx_trace_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92750, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> traceMessage,
                     ::System::IntPtr traceMessageLen);

  static inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92678, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_trace_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_trace_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_tlsctx_trace_callback(__UnityTls__unitytls_tlsctx_trace_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_trace_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_tlsctx_trace_callback(__UnityTls__unitytls_tlsctx_trace_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_certificate_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_tlsctx_certificate_callback*
class CORDL_TYPE __UnityTls__unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c9283c, size 0x1c, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList, ::System::IntPtr caListLen,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92764, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_certificate_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_certificate_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_tlsctx_certificate_callback(__UnityTls__unitytls_tlsctx_certificate_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_certificate_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_tlsctx_certificate_callback(__UnityTls__unitytls_tlsctx_certificate_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_x509verify_callback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_tlsctx_x509verify_callback*
class CORDL_TYPE __UnityTls__unitytls_tlsctx_x509verify_callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92930, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Invoke(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                      ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92858, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_x509verify_callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_x509verify_callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_tlsctx_x509verify_callback(__UnityTls__unitytls_tlsctx_x509verify_callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_tlsctx_x509verify_callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_tlsctx_x509verify_callback(__UnityTls__unitytls_tlsctx_x509verify_callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback, 0x80>, "Size mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_tlsctx_callbacks
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: true
// CS Name: ::UnityTls::unitytls_tlsctx_callbacks
struct CORDL_TYPE __UnityTls__unitytls_tlsctx_callbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_tlsctx_callbacks();

  // Ctor Parameters [CppParam { name: "read", ty: "::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*", modifiers: "", def_value: None }, CppParam { name: "write", ty:
  // "::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr __UnityTls__unitytls_tlsctx_callbacks(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* read, ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* write,
                                                  ::cordl_internals::Ptr<void> data) noexcept;

  /// @brief Field read, offset: 0x0, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* read;

  /// @brief Field write, offset: 0x8, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* write;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, read) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, write) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, data) == 0x10, "Offset mismatch!");

} // namespace Mono::Unity
// Type: ::unitytls_errorstate_create_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92a08, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_errorstate Invoke();

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c9294c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_errorstate_raise_error_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92af4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState, ::Mono::Unity::__UnityTls__unitytls_error_code errorCode);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92a1c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_key_get_ref_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92be0, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_key_ref Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> key,
                                                            ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92b08, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_key_parse_der_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92ccc, size 0x14, virtual true, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                ::System::IntPtr passwordLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92bf4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_key_parse_pem_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92db8, size 0x14, virtual true, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                ::System::IntPtr passwordLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92ce0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_key_free_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_key_free_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_key_free_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92ea0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> key);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92dcc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_key_free_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_free_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_key_free_t(__UnityTls__unitytls_interface_struct__unitytls_key_free_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_key_free_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_key_free_t(__UnityTls__unitytls_interface_struct__unitytls_key_free_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509_export_der_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c92f78, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::Mono::Unity::__UnityTls__unitytls_x509_ref cert, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92eb4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_get_ref_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93064, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509list_ref Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list,
                                                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c92f8c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_get_x509_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c9313c, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509_ref Invoke(::Mono::Unity::__UnityTls__unitytls_x509list_ref list, ::System::IntPtr index,
                                                             ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93078, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_create_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93224, size 0x14, virtual true, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93150, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_append_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93310, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list, ::Mono::Unity::__UnityTls__unitytls_x509_ref cert,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93238, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_append_der_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c933fc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93324, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509list_free_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509list_free_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c934e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93410, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509verify_default_ca_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c935bc, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Invoke(::Mono::Unity::__UnityTls__unitytls_x509list_ref chain, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
                                                                      ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* cb, ::cordl_internals::Ptr<void> userData,
                                                                      ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c934f8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_x509verify_explicit_ca_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93694, size 0x18, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Invoke(::Mono::Unity::__UnityTls__unitytls_x509list_ref chain, ::Mono::Unity::__UnityTls__unitytls_x509list_ref trustCA,
                                                                      ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen, ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* cb,
                                                                      ::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c935d0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_create_server_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93770, size 0x3c, virtual true, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> Invoke(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols,
                                                                                   ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey,
                                                                                   ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c936ac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_create_client_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93870, size 0x3c, virtual true, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> Invoke(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols,
                                                                                   ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks callbacks, ::cordl_internals::Ptr<uint8_t> cn,
                                                                                   ::System::IntPtr cnLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c937ac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_server_require_client_authentication_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93984, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_x509list_ref clientAuthCAList,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c938ac, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t&&) =
      delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t const&) =
      delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_set_certificate_callback_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93a70, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* cb, ::cordl_internals::Ptr<void> userData,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93998, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_set_trace_callback_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93b5c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback* cb, ::cordl_internals::Ptr<void> userData,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93a84, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_set_x509verify_callback_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93c48, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* cb, ::cordl_internals::Ptr<void> userData,
                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93b70, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_set_supported_ciphersuites_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93d34, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_ciphersuite> supportedCiphersuites,
                     ::System::IntPtr supportedCiphersuitesLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93c5c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_get_ciphersuite_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93e20, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_ciphersuite Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93d48, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_get_protocol_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93f0c, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_protocol Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                             ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93e34, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_process_handshake_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c93ff8, size 0x14, virtual true, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                      ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c93f20, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_read_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c940e4, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c9400c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_write_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c941d0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c940f8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_notify_close_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c942bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c941e4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_tlsctx_free_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c943a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c942d0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_random_generate_bytes_t
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t*
class CORDL_TYPE __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2c94490, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState);

  static inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2c943b8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::unitytls_interface_struct
// SizeInfo { instance_size: 280, native_size: 264, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::UnityTls::unitytls_interface_struct*
class CORDL_TYPE __UnityTls__unitytls_interface_struct : public ::System::Object {
public:
  // Declarations
  using unitytls_errorstate_create_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t;

  using unitytls_errorstate_raise_error_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t;

  using unitytls_key_free_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t;

  using unitytls_key_get_ref_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t;

  using unitytls_key_parse_der_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t;

  using unitytls_key_parse_pem_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t;

  using unitytls_random_generate_bytes_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t;

  using unitytls_tlsctx_create_client_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t;

  using unitytls_tlsctx_create_server_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t;

  using unitytls_tlsctx_free_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t;

  using unitytls_tlsctx_get_ciphersuite_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t;

  using unitytls_tlsctx_get_protocol_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t;

  using unitytls_tlsctx_notify_close_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t;

  using unitytls_tlsctx_process_handshake_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t;

  using unitytls_tlsctx_read_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t;

  using unitytls_tlsctx_server_require_client_authentication_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t;

  using unitytls_tlsctx_set_certificate_callback_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t;

  using unitytls_tlsctx_set_supported_ciphersuites_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t;

  using unitytls_tlsctx_set_trace_callback_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t;

  using unitytls_tlsctx_set_x509verify_callback_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t;

  using unitytls_tlsctx_write_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t;

  using unitytls_x509_export_der_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t;

  using unitytls_x509list_append_der_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t;

  using unitytls_x509list_append_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t;

  using unitytls_x509list_create_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t;

  using unitytls_x509list_free_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t;

  using unitytls_x509list_get_ref_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t;

  using unitytls_x509list_get_x509_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t;

  using unitytls_x509verify_default_ca_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t;

  using unitytls_x509verify_explicit_ca_t = ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t;

  /// @brief Field UNITYTLS_INVALID_HANDLE, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_UNITYTLS_INVALID_HANDLE, put = __cordl_internal_set_UNITYTLS_INVALID_HANDLE)) uint64_t UNITYTLS_INVALID_HANDLE;

  /// @brief Field UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT,
                      put = __cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT))::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

  /// @brief Field unitytls_errorstate_create, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_errorstate_create,
                      put = __cordl_internal_set_unitytls_errorstate_create))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t* unitytls_errorstate_create;

  /// @brief Field unitytls_errorstate_raise_error, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_errorstate_raise_error,
               put = __cordl_internal_set_unitytls_errorstate_raise_error))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t* unitytls_errorstate_raise_error;

  /// @brief Field unitytls_key_free, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_key_free,
                      put = __cordl_internal_set_unitytls_key_free))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* unitytls_key_free;

  /// @brief Field unitytls_key_get_ref, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_key_get_ref,
                      put = __cordl_internal_set_unitytls_key_get_ref))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t* unitytls_key_get_ref;

  /// @brief Field unitytls_key_parse_der, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_key_parse_der,
                      put = __cordl_internal_set_unitytls_key_parse_der))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t* unitytls_key_parse_der;

  /// @brief Field unitytls_key_parse_pem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_key_parse_pem,
                      put = __cordl_internal_set_unitytls_key_parse_pem))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t* unitytls_key_parse_pem;

  /// @brief Field unitytls_random_generate_bytes, offset 0x110, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_random_generate_bytes,
               put = __cordl_internal_set_unitytls_random_generate_bytes))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t* unitytls_random_generate_bytes;

  /// @brief Field unitytls_tlsctx_create_client, offset 0xa8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_tlsctx_create_client,
               put = __cordl_internal_set_unitytls_tlsctx_create_client))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t* unitytls_tlsctx_create_client;

  /// @brief Field unitytls_tlsctx_create_server, offset 0xa0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_tlsctx_create_server,
               put = __cordl_internal_set_unitytls_tlsctx_create_server))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t* unitytls_tlsctx_create_server;

  /// @brief Field unitytls_tlsctx_free, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_free,
                      put = __cordl_internal_set_unitytls_tlsctx_free))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t* unitytls_tlsctx_free;

  /// @brief Field unitytls_tlsctx_get_ciphersuite, offset 0xd8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_tlsctx_get_ciphersuite,
               put = __cordl_internal_set_unitytls_tlsctx_get_ciphersuite))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t* unitytls_tlsctx_get_ciphersuite;

  /// @brief Field unitytls_tlsctx_get_protocol, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_get_protocol,
                      put = __cordl_internal_set_unitytls_tlsctx_get_protocol))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t* unitytls_tlsctx_get_protocol;

  /// @brief Field unitytls_tlsctx_notify_close, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_notify_close,
                      put = __cordl_internal_set_unitytls_tlsctx_notify_close))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t* unitytls_tlsctx_notify_close;

  /// @brief Field unitytls_tlsctx_process_handshake, offset 0xe8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_unitytls_tlsctx_process_handshake,
      put = __cordl_internal_set_unitytls_tlsctx_process_handshake))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t* unitytls_tlsctx_process_handshake;

  /// @brief Field unitytls_tlsctx_read, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_read,
                      put = __cordl_internal_set_unitytls_tlsctx_read))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t* unitytls_tlsctx_read;

  /// @brief Field unitytls_tlsctx_server_require_client_authentication, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_server_require_client_authentication, put = __cordl_internal_set_unitytls_tlsctx_server_require_client_authentication))::
      GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t* unitytls_tlsctx_server_require_client_authentication;

  /// @brief Field unitytls_tlsctx_set_certificate_callback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_set_certificate_callback, put = __cordl_internal_set_unitytls_tlsctx_set_certificate_callback))::GlobalNamespace::
      __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t* unitytls_tlsctx_set_certificate_callback;

  /// @brief Field unitytls_tlsctx_set_supported_ciphersuites, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites, put = __cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites))::GlobalNamespace::
      __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t* unitytls_tlsctx_set_supported_ciphersuites;

  /// @brief Field unitytls_tlsctx_set_trace_callback, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_unitytls_tlsctx_set_trace_callback,
      put = __cordl_internal_set_unitytls_tlsctx_set_trace_callback))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t* unitytls_tlsctx_set_trace_callback;

  /// @brief Field unitytls_tlsctx_set_x509verify_callback, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_set_x509verify_callback, put = __cordl_internal_set_unitytls_tlsctx_set_x509verify_callback))::GlobalNamespace::
      __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t* unitytls_tlsctx_set_x509verify_callback;

  /// @brief Field unitytls_tlsctx_write, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_tlsctx_write,
                      put = __cordl_internal_set_unitytls_tlsctx_write))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t* unitytls_tlsctx_write;

  /// @brief Field unitytls_x509_export_der, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509_export_der,
                      put = __cordl_internal_set_unitytls_x509_export_der))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t* unitytls_x509_export_der;

  /// @brief Field unitytls_x509list_append, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_append,
                      put = __cordl_internal_set_unitytls_x509list_append))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t* unitytls_x509list_append;

  /// @brief Field unitytls_x509list_append_der, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_append_der,
                      put = __cordl_internal_set_unitytls_x509list_append_der))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* unitytls_x509list_append_der;

  /// @brief Field unitytls_x509list_append_pem, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_append_pem,
                      put = __cordl_internal_set_unitytls_x509list_append_pem))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* unitytls_x509list_append_pem;

  /// @brief Field unitytls_x509list_create, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_create,
                      put = __cordl_internal_set_unitytls_x509list_create))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t* unitytls_x509list_create;

  /// @brief Field unitytls_x509list_free, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_free,
                      put = __cordl_internal_set_unitytls_x509list_free))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t* unitytls_x509list_free;

  /// @brief Field unitytls_x509list_get_ref, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_get_ref,
                      put = __cordl_internal_set_unitytls_x509list_get_ref))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t* unitytls_x509list_get_ref;

  /// @brief Field unitytls_x509list_get_x509, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_unitytls_x509list_get_x509,
                      put = __cordl_internal_set_unitytls_x509list_get_x509))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t* unitytls_x509list_get_x509;

  /// @brief Field unitytls_x509verify_default_ca, offset 0x90, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_x509verify_default_ca,
               put = __cordl_internal_set_unitytls_x509verify_default_ca))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t* unitytls_x509verify_default_ca;

  /// @brief Field unitytls_x509verify_explicit_ca, offset 0x98, size 0x8
  __declspec(
      property(get = __cordl_internal_get_unitytls_x509verify_explicit_ca,
               put = __cordl_internal_set_unitytls_x509verify_explicit_ca))::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t* unitytls_x509verify_explicit_ca;

  static inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* New_ctor();

  constexpr uint64_t const& __cordl_internal_get_UNITYTLS_INVALID_HANDLE() const;

  constexpr uint64_t& __cordl_internal_get_UNITYTLS_INVALID_HANDLE();

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange const& __cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const;

  constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange& __cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT();

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*& __cordl_internal_get_unitytls_errorstate_create();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*> const& __cordl_internal_get_unitytls_errorstate_create() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*& __cordl_internal_get_unitytls_errorstate_raise_error();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*> const&
  __cordl_internal_get_unitytls_errorstate_raise_error() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*& __cordl_internal_get_unitytls_key_free();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*> const& __cordl_internal_get_unitytls_key_free() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*& __cordl_internal_get_unitytls_key_get_ref();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*> const& __cordl_internal_get_unitytls_key_get_ref() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*& __cordl_internal_get_unitytls_key_parse_der();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*> const& __cordl_internal_get_unitytls_key_parse_der() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*& __cordl_internal_get_unitytls_key_parse_pem();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*> const& __cordl_internal_get_unitytls_key_parse_pem() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*& __cordl_internal_get_unitytls_random_generate_bytes();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*> const&
  __cordl_internal_get_unitytls_random_generate_bytes() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*& __cordl_internal_get_unitytls_tlsctx_create_client();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*> const&
  __cordl_internal_get_unitytls_tlsctx_create_client() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*& __cordl_internal_get_unitytls_tlsctx_create_server();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*> const&
  __cordl_internal_get_unitytls_tlsctx_create_server() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*& __cordl_internal_get_unitytls_tlsctx_free();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*> const& __cordl_internal_get_unitytls_tlsctx_free() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*& __cordl_internal_get_unitytls_tlsctx_get_ciphersuite();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*> const&
  __cordl_internal_get_unitytls_tlsctx_get_ciphersuite() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*& __cordl_internal_get_unitytls_tlsctx_get_protocol();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*> const&
  __cordl_internal_get_unitytls_tlsctx_get_protocol() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*& __cordl_internal_get_unitytls_tlsctx_notify_close();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*> const&
  __cordl_internal_get_unitytls_tlsctx_notify_close() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*& __cordl_internal_get_unitytls_tlsctx_process_handshake();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*> const&
  __cordl_internal_get_unitytls_tlsctx_process_handshake() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*& __cordl_internal_get_unitytls_tlsctx_read();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*> const& __cordl_internal_get_unitytls_tlsctx_read() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*&
  __cordl_internal_get_unitytls_tlsctx_server_require_client_authentication();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*> const&
  __cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_certificate_callback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*> const&
  __cordl_internal_get_unitytls_tlsctx_set_certificate_callback() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*& __cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*> const&
  __cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_trace_callback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*> const&
  __cordl_internal_get_unitytls_tlsctx_set_trace_callback() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*& __cordl_internal_get_unitytls_tlsctx_set_x509verify_callback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*> const&
  __cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*& __cordl_internal_get_unitytls_tlsctx_write();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*> const& __cordl_internal_get_unitytls_tlsctx_write() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*& __cordl_internal_get_unitytls_x509_export_der();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*> const& __cordl_internal_get_unitytls_x509_export_der() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*& __cordl_internal_get_unitytls_x509list_append();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*> const& __cordl_internal_get_unitytls_x509list_append() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*& __cordl_internal_get_unitytls_x509list_append_der();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*> const&
  __cordl_internal_get_unitytls_x509list_append_der() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*& __cordl_internal_get_unitytls_x509list_append_pem();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*> const&
  __cordl_internal_get_unitytls_x509list_append_pem() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*& __cordl_internal_get_unitytls_x509list_create();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*> const& __cordl_internal_get_unitytls_x509list_create() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*& __cordl_internal_get_unitytls_x509list_free();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*> const& __cordl_internal_get_unitytls_x509list_free() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*& __cordl_internal_get_unitytls_x509list_get_ref();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*> const& __cordl_internal_get_unitytls_x509list_get_ref() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*& __cordl_internal_get_unitytls_x509list_get_x509();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*> const& __cordl_internal_get_unitytls_x509list_get_x509() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*& __cordl_internal_get_unitytls_x509verify_default_ca();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*> const&
  __cordl_internal_get_unitytls_x509verify_default_ca() const;

  constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*& __cordl_internal_get_unitytls_x509verify_explicit_ca();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*> const&
  __cordl_internal_get_unitytls_x509verify_explicit_ca() const;

  constexpr void __cordl_internal_set_UNITYTLS_INVALID_HANDLE(uint64_t value);

  constexpr void __cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange value);

  constexpr void __cordl_internal_set_unitytls_errorstate_create(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t* value);

  constexpr void __cordl_internal_set_unitytls_errorstate_raise_error(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t* value);

  constexpr void __cordl_internal_set_unitytls_key_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* value);

  constexpr void __cordl_internal_set_unitytls_key_get_ref(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t* value);

  constexpr void __cordl_internal_set_unitytls_key_parse_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t* value);

  constexpr void __cordl_internal_set_unitytls_key_parse_pem(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t* value);

  constexpr void __cordl_internal_set_unitytls_random_generate_bytes(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_create_client(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_create_server(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_get_ciphersuite(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_get_protocol(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_notify_close(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_process_handshake(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_read(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t* value);

  constexpr void
  __cordl_internal_set_unitytls_tlsctx_server_require_client_authentication(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_set_certificate_callback(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_set_trace_callback(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_set_x509verify_callback(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t* value);

  constexpr void __cordl_internal_set_unitytls_tlsctx_write(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t* value);

  constexpr void __cordl_internal_set_unitytls_x509_export_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_append(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_append_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_append_pem(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_create(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_get_ref(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t* value);

  constexpr void __cordl_internal_set_unitytls_x509list_get_x509(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t* value);

  constexpr void __cordl_internal_set_unitytls_x509verify_default_ca(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t* value);

  constexpr void __cordl_internal_set_unitytls_x509verify_explicit_ca(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t* value);

  /// @brief Method .ctor, addr 0x2c92944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityTls__unitytls_interface_struct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityTls__unitytls_interface_struct(__UnityTls__unitytls_interface_struct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityTls__unitytls_interface_struct", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityTls__unitytls_interface_struct(__UnityTls__unitytls_interface_struct const&) = delete;

  /// @brief Field UNITYTLS_INVALID_HANDLE, offset: 0x10, size: 0x8, def value: None
  uint64_t ___UNITYTLS_INVALID_HANDLE;

  /// @brief Field UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, offset: 0x18, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

  /// @brief Field unitytls_errorstate_create, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t* ___unitytls_errorstate_create;

  /// @brief Field unitytls_errorstate_raise_error, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t* ___unitytls_errorstate_raise_error;

  /// @brief Field unitytls_key_get_ref, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t* ___unitytls_key_get_ref;

  /// @brief Field unitytls_key_parse_der, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t* ___unitytls_key_parse_der;

  /// @brief Field unitytls_key_parse_pem, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t* ___unitytls_key_parse_pem;

  /// @brief Field unitytls_key_free, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* ___unitytls_key_free;

  /// @brief Field unitytls_x509_export_der, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t* ___unitytls_x509_export_der;

  /// @brief Field unitytls_x509list_get_ref, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t* ___unitytls_x509list_get_ref;

  /// @brief Field unitytls_x509list_get_x509, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t* ___unitytls_x509list_get_x509;

  /// @brief Field unitytls_x509list_create, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t* ___unitytls_x509list_create;

  /// @brief Field unitytls_x509list_append, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t* ___unitytls_x509list_append;

  /// @brief Field unitytls_x509list_append_der, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* ___unitytls_x509list_append_der;

  /// @brief Field unitytls_x509list_append_pem, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* ___unitytls_x509list_append_pem;

  /// @brief Field unitytls_x509list_free, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t* ___unitytls_x509list_free;

  /// @brief Field unitytls_x509verify_default_ca, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t* ___unitytls_x509verify_default_ca;

  /// @brief Field unitytls_x509verify_explicit_ca, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t* ___unitytls_x509verify_explicit_ca;

  /// @brief Field unitytls_tlsctx_create_server, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t* ___unitytls_tlsctx_create_server;

  /// @brief Field unitytls_tlsctx_create_client, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t* ___unitytls_tlsctx_create_client;

  /// @brief Field unitytls_tlsctx_server_require_client_authentication, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t* ___unitytls_tlsctx_server_require_client_authentication;

  /// @brief Field unitytls_tlsctx_set_certificate_callback, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t* ___unitytls_tlsctx_set_certificate_callback;

  /// @brief Field unitytls_tlsctx_set_trace_callback, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t* ___unitytls_tlsctx_set_trace_callback;

  /// @brief Field unitytls_tlsctx_set_x509verify_callback, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t* ___unitytls_tlsctx_set_x509verify_callback;

  /// @brief Field unitytls_tlsctx_set_supported_ciphersuites, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t* ___unitytls_tlsctx_set_supported_ciphersuites;

  /// @brief Field unitytls_tlsctx_get_ciphersuite, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t* ___unitytls_tlsctx_get_ciphersuite;

  /// @brief Field unitytls_tlsctx_get_protocol, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t* ___unitytls_tlsctx_get_protocol;

  /// @brief Field unitytls_tlsctx_process_handshake, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t* ___unitytls_tlsctx_process_handshake;

  /// @brief Field unitytls_tlsctx_read, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t* ___unitytls_tlsctx_read;

  /// @brief Field unitytls_tlsctx_write, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t* ___unitytls_tlsctx_write;

  /// @brief Field unitytls_tlsctx_notify_close, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t* ___unitytls_tlsctx_notify_close;

  /// @brief Field unitytls_tlsctx_free, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t* ___unitytls_tlsctx_free;

  /// @brief Field unitytls_random_generate_bytes, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t* ___unitytls_random_generate_bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::__UnityTls__unitytls_interface_struct, 0x118>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___UNITYTLS_INVALID_HANDLE) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_errorstate_create) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_errorstate_raise_error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_key_get_ref) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_key_parse_der) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_key_parse_pem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_key_free) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509_export_der) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_get_ref) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_get_x509) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_create) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_append) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_append_der) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_append_pem) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509list_free) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509verify_default_ca) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_x509verify_explicit_ca) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_create_server) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_create_client) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_server_require_client_authentication) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_set_certificate_callback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_set_trace_callback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_set_x509verify_callback) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_set_supported_ciphersuites) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_get_ciphersuite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_get_protocol) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_process_handshake) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_read) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_write) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_notify_close) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_tlsctx_free) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::__UnityTls__unitytls_interface_struct, ___unitytls_random_generate_bytes) == 0x110, "Offset mismatch!");

} // namespace Mono::Unity
// Type: Mono.Unity::UnityTls
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::Mono.Unity::UnityTls*
class CORDL_TYPE UnityTls : public ::System::Object {
public:
  // Declarations
  using unitytls_ciphersuite = ::Mono::Unity::__UnityTls__unitytls_ciphersuite;

  using unitytls_error_code = ::Mono::Unity::__UnityTls__unitytls_error_code;

  using unitytls_errorstate = ::Mono::Unity::__UnityTls__unitytls_errorstate;

  using unitytls_interface_struct = ::Mono::Unity::__UnityTls__unitytls_interface_struct;

  using unitytls_key = ::Mono::Unity::__UnityTls__unitytls_key;

  using unitytls_key_ref = ::Mono::Unity::__UnityTls__unitytls_key_ref;

  using unitytls_protocol = ::Mono::Unity::__UnityTls__unitytls_protocol;

  using unitytls_tlsctx = ::Mono::Unity::__UnityTls__unitytls_tlsctx;

  using unitytls_tlsctx_callbacks = ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks;

  using unitytls_tlsctx_certificate_callback = ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback;

  using unitytls_tlsctx_protocolrange = ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange;

  using unitytls_tlsctx_read_callback = ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback;

  using unitytls_tlsctx_trace_callback = ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback;

  using unitytls_tlsctx_write_callback = ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback;

  using unitytls_tlsctx_x509verify_callback = ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback;

  using unitytls_x509_ref = ::Mono::Unity::__UnityTls__unitytls_x509_ref;

  using unitytls_x509list = ::Mono::Unity::__UnityTls__unitytls_x509list;

  using unitytls_x509list_ref = ::Mono::Unity::__UnityTls__unitytls_x509list_ref;

  using unitytls_x509name = ::Mono::Unity::__UnityTls__unitytls_x509name;

  using unitytls_x509verify_callback = ::Mono::Unity::__UnityTls__unitytls_x509verify_callback;

  using unitytls_x509verify_result = ::Mono::Unity::__UnityTls__unitytls_x509verify_result;

  /// @brief Field marshalledInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_marshalledInterface, put = setStaticF_marshalledInterface))::Mono::Unity::__UnityTls__unitytls_interface_struct* marshalledInterface;

  /// @brief Method GetUnityTlsInterface, addr 0x2c92398, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetUnityTlsInterface();

  static inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* getStaticF_marshalledInterface();

  /// @brief Method get_IsSupported, addr 0x2c9239c, size 0x18, virtual false, abstract: false, final false
  static inline bool get_IsSupported();

  /// @brief Method get_NativeInterface, addr 0x2c920e8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* get_NativeInterface();

  static inline void setStaticF_marshalledInterface(::Mono::Unity::__UnityTls__unitytls_interface_struct* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTls(UnityTls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTls(UnityTls const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTls, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_ciphersuite, "Mono.Unity", "UnityTls/unitytls_ciphersuite");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_error_code, "Mono.Unity", "UnityTls/unitytls_error_code");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_protocol, "Mono.Unity", "UnityTls/unitytls_protocol");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509verify_result, "Mono.Unity", "UnityTls/unitytls_x509verify_result");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_free_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_create_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_free_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t");
NEED_NO_BOX(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*, "Mono.Unity",
                       "UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t");
NEED_NO_BOX(::Mono::Unity::UnityTls);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls*, "Mono.Unity", "UnityTls");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_interface_struct);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_interface_struct*, "Mono.Unity", "UnityTls/unitytls_interface_struct");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_certificate_callback");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_read_callback");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_trace_callback");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_write_callback");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_x509verify_callback");
NEED_NO_BOX(::Mono::Unity::__UnityTls__unitytls_x509verify_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_x509verify_callback");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_errorstate, "Mono.Unity", "UnityTls/unitytls_errorstate");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_key, "Mono.Unity", "UnityTls/unitytls_key");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_key_ref, "Mono.Unity", "UnityTls/unitytls_key_ref");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx, "Mono.Unity", "UnityTls/unitytls_tlsctx");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, "Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, "Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509_ref, "Mono.Unity", "UnityTls/unitytls_x509_ref");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509list, "Mono.Unity", "UnityTls/unitytls_x509list");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509list_ref, "Mono.Unity", "UnityTls/unitytls_x509list_ref");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::__UnityTls__unitytls_x509name, "Mono.Unity", "UnityTls/unitytls_x509name");
