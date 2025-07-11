#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/CmpException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmpException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CmpException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CmpException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.CmpException
class CORDL_TYPE CmpException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor();

  static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x264cca4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x264c928, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x264ccfc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmpException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmpException(CmpException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmpException(CmpException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CmpException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CmpException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CmpException*, "Org.BouncyCastle.Cmp", "CmpException");
