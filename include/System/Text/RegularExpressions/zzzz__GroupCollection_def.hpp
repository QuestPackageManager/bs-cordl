#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class ICollection;
}
namespace System::Text::RegularExpressions {
class __GroupCollection__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Text::RegularExpressions {
class Group;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class __GroupCollection__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::GroupCollection);
MARK_REF_PTR_T(::System::Text::RegularExpressions::__GroupCollection__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7741))
// CS Name: ::GroupCollection::Enumerator*
class CORDL_TYPE __GroupCollection__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __get__collection, put = __set__collection))::System::Text::RegularExpressions::GroupCollection* _collection;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  __declspec(property(get = get_Current))::System::Text::RegularExpressions::Group* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Text::RegularExpressions::GroupCollection*& __get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::GroupCollection*> const& __get__collection() const;

  constexpr void __set__collection(::System::Text::RegularExpressions::GroupCollection* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  static inline ::System::Text::RegularExpressions::__GroupCollection__Enumerator* New_ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method .ctor addr 0x27d199c size 0x30 virtual false final false
  inline void _ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method MoveNext addr 0x27d2710 size 0x44 virtual true final true
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x27d2754 size 0x90 virtual true final true
  inline ::System::Text::RegularExpressions::Group* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x27d27e4 size 0x4 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x27d27e8 size 0xc virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.IDisposable.Dispose addr 0x27d27f4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__GroupCollection__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroupCollection__Enumerator(__GroupCollection__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroupCollection__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroupCollection__Enumerator(__GroupCollection__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroupCollection__Enumerator();

public:
  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::GroupCollection* ____collection;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__GroupCollection__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__GroupCollection__Enumerator, ____collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__GroupCollection__Enumerator, ____index) == 0x18, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::GroupCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7742))
// CS Name: ::System.Text.RegularExpressions::GroupCollection*
class CORDL_TYPE GroupCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Text::RegularExpressions::__GroupCollection__Enumerator;

  /// @brief Field _match, offset 0x10, size 0x8
  __declspec(property(get = __get__match, put = __set__match))::System::Text::RegularExpressions::Match* _match;

  /// @brief Field _captureMap, offset 0x18, size 0x8
  __declspec(property(get = __get__captureMap, put = __set__captureMap))::System::Collections::Hashtable* _captureMap;

  /// @brief Field _groups, offset 0x20, size 0x8
  __declspec(property(get = __get__groups, put = __set__groups))::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> _groups;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_Item))::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item, put = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item))::
      System::Text::RegularExpressions::Group* System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Item[];

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  constexpr ::System::Text::RegularExpressions::Match*& __get__match();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Match*> const& __get__match() const;

  constexpr void __set__match(::System::Text::RegularExpressions::Match* value);

  constexpr ::System::Collections::Hashtable*& __get__captureMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__captureMap() const;

  constexpr void __set__captureMap(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*>& __get__groups();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> const& __get__groups() const;

  constexpr void __set__groups(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> value);

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method .ctor addr 0x27d15f4 size 0x2c virtual false final false
  inline void _ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method get_IsReadOnly addr 0x27d1620 size 0x8 virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Count addr 0x27d1628 size 0x24 virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_Item addr 0x27d164c size 0x4 virtual true final true
  inline ::System::Text::RegularExpressions::Group* get_Item(int32_t groupnum);

  /// @brief Method get_Item addr 0x27d1754 size 0x90 virtual false final false
  inline ::System::Text::RegularExpressions::Group* get_Item(::StringW groupname);

  /// @brief Method GetEnumerator addr 0x27d1930 size 0x6c virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Group>.GetEnumerator addr 0x27d19cc size 0x6c virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>* System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Group__GetEnumerator();

  /// @brief Method GetGroup addr 0x27d1650 size 0x104 virtual false final false
  inline ::System::Text::RegularExpressions::Group* GetGroup(int32_t groupnum);

  /// @brief Method GetGroupImpl addr 0x27d1a38 size 0x1e0 virtual false final false
  inline ::System::Text::RegularExpressions::Group* GetGroupImpl(int32_t groupnum);

  /// @brief Method get_IsSynchronized addr 0x27d1d60 size 0x8 virtual true final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x27d1d68 size 0x8 virtual true final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method CopyTo addr 0x27d1d70 size 0xc0 virtual true final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo addr 0x27d1e30 size 0x184 virtual true final true
  inline void CopyTo(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.IndexOf addr 0x27d1fb4 size 0xb8 virtual true final true
  inline int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Group__IndexOf(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Insert addr 0x27d206c size 0x50 virtual true final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Insert(int32_t index, ::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.RemoveAt addr 0x27d20bc size 0x50 virtual true final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.get_Item addr 0x27d210c size 0x4 virtual true final true
  inline ::System::Text::RegularExpressions::Group* System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.set_Item addr 0x27d2110 size 0x50 virtual true final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item(int32_t index, ::System::Text::RegularExpressions::Group* value);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Add addr 0x27d2160 size 0x50 virtual true final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Add(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Clear addr 0x27d21b0 size 0x50 virtual true final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Contains addr 0x27d2200 size 0xb4 virtual true final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Contains(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Remove addr 0x27d22b4 size 0x50 virtual true final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Remove(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.IList.Add addr 0x27d2304 size 0x50 virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear addr 0x27d2354 size 0x50 virtual true final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains addr 0x27d23a4 size 0xf4 virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf addr 0x27d2498 size 0xf4 virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert addr 0x27d258c size 0x50 virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27d25dc size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.Remove addr 0x27d25e4 size 0x50 virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt addr 0x27d2634 size 0x50 virtual true final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_Item addr 0x27d2684 size 0x4 virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x27d2688 size 0x50 virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor();

  /// @brief Method .ctor addr 0x27d26d8 size 0x38 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupCollection(GroupCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupCollection(GroupCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupCollection();

public:
  /// @brief Field _match, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Match* ____match;

  /// @brief Field _captureMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____captureMap;

  /// @brief Field _groups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> ____groups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::GroupCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____match) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____captureMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____groups) == 0x20, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::GroupCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::GroupCollection*, "System.Text.RegularExpressions", "GroupCollection");
NEED_NO_BOX(::System::Text::RegularExpressions::__GroupCollection__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__GroupCollection__Enumerator*, "System.Text.RegularExpressions", "GroupCollection/Enumerator");
