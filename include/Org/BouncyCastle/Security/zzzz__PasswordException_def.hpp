#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/PasswordException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasswordException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PasswordException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::PasswordException);
// Type: Org.BouncyCastle.Security::PasswordException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::PasswordException*
class CORDL_TYPE PasswordException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::PasswordException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::PasswordException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x133b600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x133b608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasswordException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordException(PasswordException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordException(PasswordException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::PasswordException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::PasswordException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::PasswordException*, "Org.BouncyCastle.Security", "PasswordException");
