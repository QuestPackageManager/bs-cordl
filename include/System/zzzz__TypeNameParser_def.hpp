#pragma once
// IWYU pragma private; include "System/TypeNameParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypeNameParser)
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class TypeNameParser;
}
// Write type traits
MARK_REF_T(::System::TypeNameParser*);
DEFINE_IL2CPP_CLASS(::System::TypeNameParser*, "System", "TypeNameParser");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TypeNameParser
class CORDL_TYPE TypeNameParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetType, addr 0x5c8ca30, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                        ::by_ref<::System::Threading::StackCrawlMark> stackMark);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeNameParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeNameParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeNameParser(TypeNameParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeNameParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeNameParser(TypeNameParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::TypeNameParser) == 0x10, "Size mismatch!");

} // namespace System
