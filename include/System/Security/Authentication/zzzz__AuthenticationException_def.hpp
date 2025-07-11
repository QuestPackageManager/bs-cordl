#pragma once
// IWYU pragma private; include "System/Security/Authentication/AuthenticationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Security::Authentication {
class AuthenticationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::AuthenticationException);
// Dependencies System.SystemException
namespace System::Security::Authentication {
// Is value type: false
// CS Name: System.Security.Authentication.AuthenticationException
class CORDL_TYPE AuthenticationException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Security::Authentication::AuthenticationException* New_ctor();

  static inline ::System::Security::Authentication::AuthenticationException* New_ctor(::StringW message);

  static inline ::System::Security::Authentication::AuthenticationException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Security::Authentication::AuthenticationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                      ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x4432efc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4432f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x4432f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x4432f64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationException(AuthenticationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationException(AuthenticationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9284 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::AuthenticationException, 0x90>, "Size mismatch!");

} // namespace System::Security::Authentication
NEED_NO_BOX(::System::Security::Authentication::AuthenticationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::AuthenticationException*, "System.Security.Authentication", "AuthenticationException");
