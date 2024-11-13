#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/InvalidKeyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidKeyException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::InvalidKeyException);
// Type: Org.BouncyCastle.Security::InvalidKeyException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::InvalidKeyException*
class CORDL_TYPE InvalidKeyException : public ::Org::BouncyCastle::Security::KeyException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor();

  static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::InvalidKeyException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x2575508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2575510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2575518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidKeyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidKeyException(InvalidKeyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidKeyException(InvalidKeyException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::InvalidKeyException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::InvalidKeyException*, "Org.BouncyCastle.Security", "InvalidKeyException");
