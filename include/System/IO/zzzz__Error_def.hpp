#pragma once
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
// Type: System.IO::Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3558))
// CS Name: ::System.IO::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetStreamIsClosed, addr 0x24fc0d4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* GetStreamIsClosed();

  /// @brief Method GetEndOfFile, addr 0x24fc14c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* GetEndOfFile();

  /// @brief Method GetReadNotSupported, addr 0x24fc1cc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* GetReadNotSupported();

  /// @brief Method GetWriteNotSupported, addr 0x24fc240, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* GetWriteNotSupported();

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Error, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Error*, "System.IO", "Error");
