#pragma once
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
// Type: ::ISortedListItemProcessor`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14777))
// CS Name: ::ISortedListItemProcessor`1<T>*
class CORDL_TYPE ISortedListItemProcessor_1 {
public:
  // Declarations
  /// @brief Method ProcessInsertedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<T>* insertedNode);

  /// @brief Method ProcessBeforeDeleteData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<T>* nodeToDelete);

  // Ctor Parameters [CppParam { name: "", ty: "ISortedListItemProcessor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISortedListItemProcessor_1(ISortedListItemProcessor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISortedListItemProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISortedListItemProcessor_1(ISortedListItemProcessor_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISortedListItemProcessor_1, "", "ISortedListItemProcessor`1");
