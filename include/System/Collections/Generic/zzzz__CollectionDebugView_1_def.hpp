#pragma once
// IWYU pragma private; include "System\Collections\Generic\CollectionDebugView_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CollectionDebugView_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class CollectionDebugView_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Collections::Generic::CollectionDebugView_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Collections::Generic::CollectionDebugView_1, "System.Collections.Generic", "CollectionDebugView`1");
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.CollectionDebugView`1<T>
class CORDL_TYPE CollectionDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDebugView_1(CollectionDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDebugView_1(CollectionDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
