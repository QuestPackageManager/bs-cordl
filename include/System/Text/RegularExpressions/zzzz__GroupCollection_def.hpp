#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/GroupCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupCollection)
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
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
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
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class __GroupCollection__Enumerator;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
// CS Name: ::GroupCollection::Enumerator*
class CORDL_TYPE __GroupCollection__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Text::RegularExpressions::Group* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection))::System::Text::RegularExpressions::GroupCollection* _collection;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2fa307c, size 0x44, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Text::RegularExpressions::__GroupCollection__Enumerator* New_ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2fa3154, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2fa3150, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2fa3160, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr ::System::Text::RegularExpressions::GroupCollection*& __cordl_internal_get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::GroupCollection*> const& __cordl_internal_get__collection() const;

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__collection(::System::Text::RegularExpressions::GroupCollection* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x2fa2308, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method get_Current, addr 0x2fa30c0, size 0x90, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Group* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>*
  i___System__Collections__Generic__IEnumerator_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroupCollection__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GroupCollection__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroupCollection__Enumerator(__GroupCollection__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroupCollection__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroupCollection__Enumerator(__GroupCollection__Enumerator const&) = delete;

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
// CS Name: ::System.Text.RegularExpressions::GroupCollection*
class CORDL_TYPE GroupCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Text::RegularExpressions::__GroupCollection__Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item))::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_Item))::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item, put = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item))::
      System::Text::RegularExpressions::Group* System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Item[];

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Field _captureMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__captureMap, put = __cordl_internal_set__captureMap))::System::Collections::Hashtable* _captureMap;

  /// @brief Field _groups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__groups,
                      put = __cordl_internal_set__groups))::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> _groups;

  /// @brief Field _match, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__match, put = __cordl_internal_set__match))::System::Text::RegularExpressions::Match* _match;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method CopyTo, addr 0x2fa279c, size 0x184, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x2fa26dc, size 0xc0, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x2fa229c, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetGroup, addr 0x2fa1fbc, size 0x104, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* GetGroup(int32_t groupnum);

  /// @brief Method GetGroupImpl, addr 0x2fa23a4, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* GetGroupImpl(int32_t groupnum);

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor();

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Add, addr 0x2fa2acc, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Add(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Clear, addr 0x2fa2b1c, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Contains, addr 0x2fa2b6c, size 0xb4, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Contains(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Remove, addr 0x2fa2c20, size 0x50, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Remove(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Group>.GetEnumerator, addr 0x2fa2338, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>* System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Group__GetEnumerator();

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.IndexOf, addr 0x2fa2920, size 0xb8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Group__IndexOf(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Insert, addr 0x2fa29d8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Insert(int32_t index, ::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.RemoveAt, addr 0x2fa2a28, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.get_Item, addr 0x2fa2a78, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Group* System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.set_Item, addr 0x2fa2a7c, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item(int32_t index, ::System::Text::RegularExpressions::Group* value);

  /// @brief Method System.Collections.IList.Add, addr 0x2fa2c70, size 0x50, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x2fa2cc0, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x2fa2d10, size 0xf4, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x2fa2e04, size 0xf4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x2fa2ef8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x2fa2f50, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x2fa2fa0, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2fa2f48, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_Item, addr 0x2fa2ff0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x2fa2ff4, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__captureMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__captureMap() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> const& __cordl_internal_get__groups() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*>& __cordl_internal_get__groups();

  constexpr ::System::Text::RegularExpressions::Match*& __cordl_internal_get__match();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Match*> const& __cordl_internal_get__match() const;

  constexpr void __cordl_internal_set__captureMap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__groups(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> value);

  constexpr void __cordl_internal_set__match(::System::Text::RegularExpressions::Match* value);

  /// @brief Method .ctor, addr 0x2fa3044, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2fa1f60, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method get_Count, addr 0x2fa1f94, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2fa1f8c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2fa26cc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x2fa20c0, size 0x90, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* get_Item(::StringW groupname);

  /// @brief Method get_Item, addr 0x2fa1fb8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Group* get_Item(int32_t groupnum);

  /// @brief Method get_SyncRoot, addr 0x2fa26d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Group*>*
  i___System__Collections__Generic__ICollection_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Group*>*
  i___System__Collections__Generic__IEnumerable_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Group*>* i___System__Collections__Generic__IList_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Group*>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Group*>*
  i___System__Collections__Generic__IReadOnlyList_1___System__Text__RegularExpressions__Group__() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupCollection(GroupCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupCollection(GroupCollection const&) = delete;

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
