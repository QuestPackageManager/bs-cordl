#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TspException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TspException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TspException
class CORDL_TYPE TspException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor();

  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x35289f8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3528344, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3525164, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TspException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TspException(TspException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TspException(TspException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspException*, "Org.BouncyCastle.Tsp", "TspException");
