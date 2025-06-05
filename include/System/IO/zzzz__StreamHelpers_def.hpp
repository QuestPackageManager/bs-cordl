#pragma once
// IWYU pragma private; include "System/IO/StreamHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamHelpers)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO {
class StreamHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamHelpers);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StreamHelpers
class CORDL_TYPE StreamHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ValidateCopyToArgs, addr 0x3d3988c, size 0x224, virtual false, abstract: false, final false
  static inline void ValidateCopyToArgs(::System::IO::Stream* source, ::System::IO::Stream* destination, int32_t bufferSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamHelpers(StreamHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamHelpers(StreamHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamHelpers, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamHelpers*, "System.IO", "StreamHelpers");
