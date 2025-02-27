#pragma once
// IWYU pragma private; include "GlobalNamespace/ISortedListItemProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISortedListItemProcessor_1)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ISortedListItemProcessor_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ISortedListItemProcessor`1<T>
class CORDL_TYPE ISortedListItemProcessor_1 {
public:
  // Declarations
  /// @brief Method ProcessBeforeDeleteData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<T>* nodeToDelete);

  /// @brief Method ProcessInsertedData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<T>* insertedNode);

  // Ctor Parameters [CppParam { name: "", ty: "ISortedListItemProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISortedListItemProcessor_1(ISortedListItemProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17098 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISortedListItemProcessor_1, "", "ISortedListItemProcessor`1");
