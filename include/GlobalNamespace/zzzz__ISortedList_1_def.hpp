#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISortedList_1)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ISortedList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ISortedList_1);
// Type: ::ISortedList`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14778))
// CS Name: ::ISortedList`1<T>*
class CORDL_TYPE ISortedList_1 {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_items))::System::Collections::Generic::LinkedList_1<T>* items;

  /// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_count();

  /// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::LinkedList_1<T>* get_items();

  /// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* Insert(T newItem);

  /// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Insert(::System::Collections::Generic::LinkedListNode_1<T>* newNode);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method TouchLastUsedNode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<T>* node);

  // Ctor Parameters [CppParam { name: "", ty: "ISortedList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISortedList_1(ISortedList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISortedList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISortedList_1(ISortedList_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISortedList_1, "", "ISortedList`1");
