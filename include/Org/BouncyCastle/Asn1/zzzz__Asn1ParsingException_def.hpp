#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1ParsingException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1ParsingException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1ParsingException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1ParsingException);
// Dependencies System.InvalidOperationException
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1ParsingException
class CORDL_TYPE Asn1ParsingException : public ::System::InvalidOperationException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Asn1ParsingException* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1ParsingException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Asn1::Asn1ParsingException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x3589c70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3589c78, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3589c9c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1ParsingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1ParsingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1ParsingException(Asn1ParsingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1ParsingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1ParsingException(Asn1ParsingException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1ParsingException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1ParsingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1ParsingException*, "Org.BouncyCastle.Asn1", "Asn1ParsingException");
