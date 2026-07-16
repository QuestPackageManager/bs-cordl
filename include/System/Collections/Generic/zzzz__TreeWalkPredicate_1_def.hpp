#pragma once
// IWYU pragma private; include "System/Collections/Generic/TreeWalkPredicate_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TreeWalkPredicate_1)
namespace System::Collections::Generic {
template <typename T> class SortedSet_1_Node;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class TreeWalkPredicate_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Collections::Generic::TreeWalkPredicate_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Collections::Generic::TreeWalkPredicate_1, "System.Collections.Generic", "TreeWalkPredicate`1");
// Dependencies System.MulticastDelegate
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.TreeWalkPredicate`1<T>
class CORDL_TYPE TreeWalkPredicate_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  static inline ::System::Collections::Generic::TreeWalkPredicate_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeWalkPredicate_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeWalkPredicate_1(TreeWalkPredicate_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeWalkPredicate_1(TreeWalkPredicate_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
