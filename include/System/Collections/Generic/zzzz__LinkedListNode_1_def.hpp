#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LinkedListNode_1)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LinkedListNode_1);
// Type: System.Collections.Generic::LinkedListNode`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9535))
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list))::System::Collections::Generic::LinkedList_1<T>* list;

  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::System::Collections::Generic::LinkedListNode_1<T>* next;

  /// @brief Field prev, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev))::System::Collections::Generic::LinkedListNode_1<T>* prev;

  /// @brief Field item, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) T item;

  __declspec(property(get = get_List))::System::Collections::Generic::LinkedList_1<T>* List;

  __declspec(property(get = get_Next))::System::Collections::Generic::LinkedListNode_1<T>* Next;

  __declspec(property(get = get_Previous))::System::Collections::Generic::LinkedListNode_1<T>* Previous;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  constexpr ::System::Collections::Generic::LinkedList_1<T>*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::LinkedList_1<T>* value);

  constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::System::Collections::Generic::LinkedListNode_1<T>* value);

  constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& __cordl_internal_get_prev();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> const& __cordl_internal_get_prev() const;

  constexpr void __cordl_internal_set_prev(::System::Collections::Generic::LinkedListNode_1<T>* value);

  constexpr T& __cordl_internal_get_item();

  constexpr T const& __cordl_internal_get_item() const;

  constexpr void __cordl_internal_set_item(T value);

  static inline ::System::Collections::Generic::LinkedListNode_1<T>* New_ctor(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  static inline ::System::Collections::Generic::LinkedListNode_1<T>* New_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value);

  /// @brief Method get_List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedList_1<T>* get_List();

  /// @brief Method get_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Next();

  /// @brief Method get_Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Previous();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

  /// @brief Method Invalidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Invalidate();

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedListNode_1(LinkedListNode_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedListNode_1(LinkedListNode_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedListNode_1();

public:
  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<T>* ___list;

  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<T>* ___next;

  /// @brief Field prev, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<T>* ___prev;

  /// @brief Field item, offset: 0x28, size: 0x8, def value: None
  T ___item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LinkedListNode_1, "System.Collections.Generic", "LinkedListNode`1");
