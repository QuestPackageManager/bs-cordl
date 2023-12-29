#pragma once
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
// Type: System.IO::StreamHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3566))
// CS Name: ::System.IO::StreamHelpers*
class CORDL_TYPE StreamHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ValidateCopyToArgs addr 0x23a4aa0 size 0x240 virtual false final false
  static inline void ValidateCopyToArgs(::System::IO::Stream* source, ::System::IO::Stream* destination, int32_t bufferSize);

  // Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamHelpers(StreamHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamHelpers(StreamHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamHelpers, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamHelpers*, "System.IO", "StreamHelpers");
