#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IOUtil)
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class IOUtil;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::IOUtil);
// Type: System.Runtime.Serialization.Formatters.Binary::IOUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3256))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::IOUtil*
class CORDL_TYPE IOUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method FlagTest, addr 0x24c1154, size 0xc, virtual false, abstract: false, final false
  static inline bool FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target);

  /// @brief Method WriteStringWithCode, addr 0x24c1160, size 0x74, virtual false, abstract: false, final false
  static inline void WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method WriteWithCode, addr 0x24c11d4, size 0x12c, virtual false, abstract: false, final false
  static inline void WriteWithCode(::System::Type* type, ::System::Object* value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  // Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOUtil(IOUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOUtil(IOUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::IOUtil, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IOUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
