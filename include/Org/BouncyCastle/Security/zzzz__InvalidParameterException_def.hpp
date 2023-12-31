#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidParameterException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidParameterException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::InvalidParameterException);
// Type: Org.BouncyCastle.Security::InvalidParameterException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1750))
// CS Name: ::Org.BouncyCastle.Security::InvalidParameterException*
class CORDL_TYPE InvalidParameterException : public ::Org::BouncyCastle::Security::KeyException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor();

  /// @brief Method .ctor, addr 0x112ee9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x112eea4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x112eeac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidParameterException(InvalidParameterException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidParameterException(InvalidParameterException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidParameterException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::InvalidParameterException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::InvalidParameterException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::InvalidParameterException*, "Org.BouncyCastle.Security", "InvalidParameterException");
