#pragma once
// IWYU pragma private; include "Mono/Security/Interface/ValidationResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationResult)
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Mono::Security::Interface {
class ValidationResult;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::ValidationResult);
// Dependencies Mono.Security.Interface.MonoSslPolicyErrors, System.Nullable`1<T>, System.Object
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.ValidationResult
class CORDL_TYPE ValidationResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Trusted)) bool Trusted;

  __declspec(property(get = get_UserDenied)) bool UserDenied;

  /// @brief Field error_code, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_error_code, put = __cordl_internal_set_error_code)) int32_t error_code;

  /// @brief Field policy_errors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_policy_errors, put = __cordl_internal_set_policy_errors)) ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors;

  /// @brief Field trusted, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_trusted, put = __cordl_internal_set_trusted)) bool trusted;

  /// @brief Field user_denied, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_user_denied, put = __cordl_internal_set_user_denied)) bool user_denied;

  static inline ::Mono::Security::Interface::ValidationResult* New_ctor(bool trusted, bool user_denied, int32_t error_code,
                                                                        ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors);

  constexpr int32_t const& __cordl_internal_get_error_code() const;

  constexpr int32_t& __cordl_internal_get_error_code();

  constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> const& __cordl_internal_get_policy_errors() const;

  constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>& __cordl_internal_get_policy_errors();

  constexpr bool const& __cordl_internal_get_trusted() const;

  constexpr bool& __cordl_internal_get_trusted();

  constexpr bool const& __cordl_internal_get_user_denied() const;

  constexpr bool& __cordl_internal_get_user_denied();

  constexpr void __cordl_internal_set_error_code(int32_t value);

  constexpr void __cordl_internal_set_policy_errors(::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> value);

  constexpr void __cordl_internal_set_trusted(bool value);

  constexpr void __cordl_internal_set_user_denied(bool value);

  /// @brief Method .ctor, addr 0x3c4497c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool trusted, bool user_denied, int32_t error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors);

  /// @brief Method get_Trusted, addr 0x3c449c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Trusted();

  /// @brief Method get_UserDenied, addr 0x3c449cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_UserDenied();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationResult(ValidationResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationResult(ValidationResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15946 };

  /// @brief Field trusted, offset: 0x10, size: 0x1, def value: None
  bool ___trusted;

  /// @brief Field user_denied, offset: 0x11, size: 0x1, def value: None
  bool ___user_denied;

  /// @brief Field error_code, offset: 0x14, size: 0x4, def value: None
  int32_t ___error_code;

  /// @brief Field policy_errors, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> ___policy_errors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::ValidationResult, ___trusted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::ValidationResult, ___user_denied) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::ValidationResult, ___error_code) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::ValidationResult, ___policy_errors) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::ValidationResult, 0x20>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::ValidationResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ValidationResult*, "Mono.Security.Interface", "ValidationResult");
