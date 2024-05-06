#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemGenerationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemGenerationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemGenerationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemGenerationException*
class CORDL_TYPE PemGenerationException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor();

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x13c0fd8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x13c1030, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x13c1098, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemGenerationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemGenerationException(PemGenerationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemGenerationException(PemGenerationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*, "Org.BouncyCastle.Utilities.IO.Pem", "PemGenerationException");
