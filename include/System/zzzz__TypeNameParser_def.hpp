#pragma once
// IWYU pragma private; include "System/TypeNameParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::TypeNameParser);
// Type: System::TypeNameParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeNameParser*
class CORDL_TYPE TypeNameParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetType, addr 0x29ac204, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                        ByRef<::System::Threading::StackCrawlMark> stackMark);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNameParser, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeNameParser);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameParser*, "System", "TypeNameParser");
