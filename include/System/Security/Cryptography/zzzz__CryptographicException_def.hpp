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
// Type: System.Security.Cryptography::CryptographicException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CryptographicException*
class CORDL_TYPE CryptographicException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Security::Cryptography::CryptographicException* New_ctor();

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW format, ::StringW insert);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW message);

  static inline ::System::Security::Cryptography::CryptographicException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x27f6544, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27f65b0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW format, ::StringW insert);

  /// @brief Method .ctor, addr 0x27f6670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x27f63a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x27f6648, size 0x28, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptographicException, 0x90>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptographicException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicException*, "System.Security.Cryptography", "CryptographicException");
