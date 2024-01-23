#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListWithEvents_1)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ListWithEvents_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ListWithEvents_1);
// Type: ::ListWithEvents`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13947))
// CS Name: ::ListWithEvents`1<T>*
class CORDL_TYPE ListWithEvents_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List))::System::Collections::Generic::List_1<T>* m_List;

  /// @brief Field OnElementAdded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OnElementAdded, put = __cordl_internal_set_OnElementAdded))::System::Action_1<T>* OnElementAdded;

  /// @brief Field OnElementRemoved, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnElementRemoved, put = __cordl_internal_set_OnElementRemoved))::System::Action_1<T>* OnElementRemoved;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
  constexpr operator ::System::Collections::Generic::IList_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<T>"
  constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get_m_List() const;

  constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>* value);

  constexpr ::System::Action_1<T>*& __cordl_internal_get_OnElementAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_OnElementAdded() const;

  constexpr void __cordl_internal_set_OnElementAdded(::System::Action_1<T>* value);

  constexpr ::System::Action_1<T>*& __cordl_internal_get_OnElementRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_OnElementRemoved() const;

  constexpr void __cordl_internal_set_OnElementRemoved(::System::Action_1<T>* value);

  /// @brief Method add_OnElementAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_OnElementAdded(::System::Action_1<T>* value);

  /// @brief Method remove_OnElementAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_OnElementAdded(::System::Action_1<T>* value);

  /// @brief Method add_OnElementRemoved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_OnElementRemoved(::System::Action_1<T>* value);

  /// @brief Method remove_OnElementRemoved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_OnElementRemoved(::System::Action_1<T>* value);

  /// @brief Method InvokeAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeAdded(T element);

  /// @brief Method InvokeRemoved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeRemoved(T element);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(T item);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, T item);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  static inline ::GlobalNamespace::ListWithEvents_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ListWithEvents_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListWithEvents_1(ListWithEvents_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListWithEvents_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListWithEvents_1(ListWithEvents_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListWithEvents_1();

public:
  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_List;

  /// @brief Field OnElementAdded, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___OnElementAdded;

  /// @brief Field OnElementRemoved, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___OnElementRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ListWithEvents_1, "", "ListWithEvents`1");
