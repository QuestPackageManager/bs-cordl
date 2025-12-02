#pragma once
// IWYU pragma private; include "System/IO/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Error)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::IO {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Error);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Error
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEndOfFile, addr 0x59dfcf4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* GetEndOfFile();

  /// @brief Method GetReadNotSupported, addr 0x59dfd74, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* GetReadNotSupported();

  /// @brief Method GetStreamIsClosed, addr 0x59dfc70, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* GetStreamIsClosed();

  /// @brief Method GetWriteNotSupported, addr 0x59dfdf4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* GetWriteNotSupported();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Error, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Error*, "System.IO", "Error");
