#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__DataLengthException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OutputLengthException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class OutputLengthException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::OutputLengthException);
// Type: Org.BouncyCastle.Crypto::OutputLengthException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::OutputLengthException*
class CORDL_TYPE OutputLengthException : public ::Org::BouncyCastle::Crypto::DataLengthException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x1131a90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1131934, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1131a94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutputLengthException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutputLengthException(OutputLengthException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutputLengthException(OutputLengthException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::OutputLengthException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::OutputLengthException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::OutputLengthException*, "Org.BouncyCastle.Crypto", "OutputLengthException");
