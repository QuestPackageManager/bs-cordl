#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptographicException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptographicException)
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
namespace System::Security::Cryptography {
class CryptographicException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptographicException);
// Dependencies System.SystemException
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CryptographicException
class CORDL_TYPE CryptographicException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Security::Cryptography::CryptographicException* New_ctor();

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW format, ::StringW insert);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW message);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x3ca09c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ca0a2c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW format, ::StringW insert);

  /// @brief Method .ctor, addr 0x3ca0aec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3ca0828, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3ca0ac4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptographicException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptographicException(CryptographicException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptographicException(CryptographicException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptographicException, 0x90>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptographicException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicException*, "System.Security.Cryptography", "CryptographicException");
