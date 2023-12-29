#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeWalkPredicate_1)
namespace System::Collections::Generic {
template <typename T> class __SortedSet_1__Node;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class TreeWalkPredicate_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::TreeWalkPredicate_1);
// Type: System.Collections.Generic::TreeWalkPredicate`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8380))
// CS Name: ::System.Collections.Generic::TreeWalkPredicate`1<T>*
class CORDL_TYPE TreeWalkPredicate_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Collections::Generic::TreeWalkPredicate_1<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Invoke(::System::Collections::Generic::__SortedSet_1__Node<T>* node);

  // Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeWalkPredicate_1(TreeWalkPredicate_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeWalkPredicate_1(TreeWalkPredicate_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeWalkPredicate_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::TreeWalkPredicate_1, "System.Collections.Generic", "TreeWalkPredicate`1");
