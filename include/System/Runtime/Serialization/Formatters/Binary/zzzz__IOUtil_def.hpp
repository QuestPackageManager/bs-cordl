#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/IOUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IOUtil)
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class IOUtil;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::Formatters::Binary::IOUtil*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.IOUtil
class CORDL_TYPE IOUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method FlagTest, addr 0x5b554c4, size 0xc, virtual false, abstract: false, final false
  static inline bool FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target);

  /// @brief Method WriteStringWithCode, addr 0x5b554d0, size 0x7c, virtual false, abstract: false, final false
  static inline void WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method WriteWithCode, addr 0x5b5554c, size 0x120, virtual false, abstract: false, final false
  static inline void WriteWithCode(::System::Type* type, ::System::Object* value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOUtil(IOUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOUtil(IOUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::IOUtil) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
