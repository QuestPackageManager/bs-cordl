#pragma once
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
// Type: System.Runtime.Serialization.Formatters.Binary::MessageEnd
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::MessageEnd*
class CORDL_TYPE MessageEnd : public ::System::Object {
public:
  // Declarations
  /// @brief Method Dump, addr 0x273fc28, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  /// @brief Method Dump, addr 0x273fc2c, size 0x4, virtual false, abstract: false, final false
  inline void Dump(::System::IO::Stream* sout);

  static inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* New_ctor();

  /// @brief Method Read, addr 0x273fc24, size 0x4, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Write, addr 0x273fbfc, size 0x28, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method .ctor, addr 0x273fbf4, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MessageEnd, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MessageEnd);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
