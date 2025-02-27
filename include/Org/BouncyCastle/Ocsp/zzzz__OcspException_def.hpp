#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OcspException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspException);
// Dependencies System.Exception
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OcspException
class CORDL_TYPE OcspException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor();

  static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x2523818, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2523870, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2520198, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspException(OcspException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspException(OcspException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspException*, "Org.BouncyCastle.Ocsp", "OcspException");
