#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/MessageEnd.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MessageEnd)
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MessageEnd;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MessageEnd);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.MessageEnd
class CORDL_TYPE MessageEnd : public ::System::Object {
public:
  // Declarations
  /// @brief Method Dump, addr 0x3d03f68, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  /// @brief Method Dump, addr 0x3d03f6c, size 0x4, virtual false, abstract: false, final false
  inline void Dump(::System::IO::Stream* sout);

  static inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* New_ctor();

  /// @brief Method Read, addr 0x3d03f64, size 0x4, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Write, addr 0x3d03f3c, size 0x28, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method .ctor, addr 0x3d03f34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageEnd();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageEnd", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageEnd(MessageEnd&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageEnd", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageEnd(MessageEnd const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MessageEnd, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MessageEnd);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
