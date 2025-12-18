#pragma once
// IWYU pragma private; include "System/IO/__Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__Error)
// Forward declare root types
namespace System::IO {
class __Error;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__Error);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.__Error
class CORDL_TYPE __Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method EndOfFile, addr 0x5a65728, size 0x50, virtual false, abstract: false, final false
  static inline void EndOfFile();

  /// @brief Method FileNotOpen, addr 0x5a65778, size 0x54, virtual false, abstract: false, final false
  static inline void FileNotOpen();

  /// @brief Method GetDisplayablePath, addr 0x5a65820, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayablePath(::StringW path, bool isInvalidPath);

  /// @brief Method ReaderClosed, addr 0x5a657cc, size 0x54, virtual false, abstract: false, final false
  static inline void ReaderClosed();

  /// @brief Method WinIOError, addr 0x5a65afc, size 0x550, virtual false, abstract: false, final false
  static inline void WinIOError(int32_t errorCode, ::StringW maybeFullPath);

  /// @brief Method WriterClosed, addr 0x5a6604c, size 0x54, virtual false, abstract: false, final false
  static inline void WriterClosed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Error(__Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Error(__Error const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Error, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Error*, "System.IO", "__Error");
