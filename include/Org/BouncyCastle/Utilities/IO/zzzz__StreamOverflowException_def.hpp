#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/StreamOverflowException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StreamOverflowException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class StreamOverflowException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::StreamOverflowException);
// Dependencies System.IO.IOException
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.StreamOverflowException
class CORDL_TYPE StreamOverflowException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor();

  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x25de538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25de540, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25de548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamOverflowException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamOverflowException(StreamOverflowException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamOverflowException(StreamOverflowException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::StreamOverflowException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::StreamOverflowException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::StreamOverflowException*, "Org.BouncyCastle.Utilities.IO", "StreamOverflowException");
