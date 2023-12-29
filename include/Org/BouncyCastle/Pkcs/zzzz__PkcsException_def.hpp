#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkcsException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PkcsException);
// Type: Org.BouncyCastle.Pkcs::PkcsException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1705))
// CS Name: ::Org.BouncyCastle.Pkcs::PkcsException*
class CORDL_TYPE PkcsException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkcs::PkcsException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x1075fdc size 0x68 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Pkcs::PkcsException* New_ctor(::StringW message, ::System::Exception* underlying);

  /// @brief Method .ctor addr 0x1075b0c size 0x70 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* underlying);

  // Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkcsException(PkcsException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkcsException(PkcsException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkcsException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PkcsException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsException*, "Org.BouncyCastle.Pkcs", "PkcsException");
