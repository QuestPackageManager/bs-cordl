#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/CollectionDebuggerProxy_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CollectionDebuggerProxy_1)
// Forward declare root types
namespace System::Text::RegularExpressions {
template <typename T> class CollectionDebuggerProxy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Text::RegularExpressions::CollectionDebuggerProxy_1);
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Text.RegularExpressions.CollectionDebuggerProxy`1<T>
class CORDL_TYPE CollectionDebuggerProxy_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDebuggerProxy_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDebuggerProxy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDebuggerProxy_1(CollectionDebuggerProxy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDebuggerProxy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDebuggerProxy_1(CollectionDebuggerProxy_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Text::RegularExpressions::CollectionDebuggerProxy_1, "System.Text.RegularExpressions", "CollectionDebuggerProxy`1");
