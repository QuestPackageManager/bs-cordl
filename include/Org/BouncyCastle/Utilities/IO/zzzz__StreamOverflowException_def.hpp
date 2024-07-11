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
// Type: Org.BouncyCastle.Utilities.IO::StreamOverflowException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::StreamOverflowException*
class CORDL_TYPE StreamOverflowException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor();

  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0x13d2024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x13d202c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x13d2034, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::StreamOverflowException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::StreamOverflowException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::StreamOverflowException*, "Org.BouncyCastle.Utilities.IO", "StreamOverflowException");
