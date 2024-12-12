#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/GroupCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupCollection)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text::RegularExpressions {
class GroupCollection_Enumerator;
}
namespace System::Text::RegularExpressions {
class Group;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class GroupCollection_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::GroupCollection);
MARK_REF_PTR_T(::System::Text::RegularExpressions::GroupCollection_Enumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.GroupCollection/Enumerator
class CORDL_TYPE GroupCollection_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Text::RegularExpressions::Group* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection)) ::System::Text::RegularExpressions::GroupCollection* _collection;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x441050c, size 0x44, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Text::RegularExpressions::GroupCollection_Enumerator* New_ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x44105e0, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44105dc, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x44105ec, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr ::System::Text::RegularExpressions::GroupCollection* const& __cordl_internal_get__collection() const;

  constexpr ::System::Text::RegularExpressions::GroupCollection*& __cordl_internal_get__collection();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__collection(::System::Text::RegularExpressions::GroupCollection* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x440f80c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::GroupCollection* collection);

  /// @brief Method get_Current, addr 0x4410550, size 0x8c, virtual true, abstract: false, final true
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
  constexpr GroupCollection_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupCollection_Enumerator(GroupCollection_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupCollection_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupCollection_Enumerator(GroupCollection_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9219 };

  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::GroupCollection* ____collection;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection_Enumerator, ____collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection_Enumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::GroupCollection_Enumerator, 0x20>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>,
// System.Collections.Generic.IReadOnlyList`1<T>, System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.GroupCollection
class CORDL_TYPE GroupCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Text::RegularExpressions::GroupCollection_Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item)) ::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_Item)) ::System::Text::RegularExpressions::Group* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item,
                      put = System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item)) ::System::Text::RegularExpressions::Group*
      System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Item[];

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  /// @brief Field _captureMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__captureMap, put = __cordl_internal_set__captureMap)) ::System::Collections::Hashtable* _captureMap;

  /// @brief Field _groups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__groups,
                      put = __cordl_internal_set__groups)) ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*>
      _groups;

  /// @brief Field _match, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__match, put = __cordl_internal_set__match)) ::System::Text::RegularExpressions::Match* _match;

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

  /// @brief Method CopyTo, addr 0x440fc68, size 0x178, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x440fbac, size 0xbc, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x440f7a8, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetGroup, addr 0x440f4d4, size 0x104, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* GetGroup(int32_t groupnum);

  /// @brief Method GetGroupImpl, addr 0x440f8a0, size 0x1bc, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* GetGroupImpl(int32_t groupnum);

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor();

  static inline ::System::Text::RegularExpressions::GroupCollection* New_ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Add, addr 0x440ff80, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Add(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Clear, addr 0x440ffcc, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Contains, addr 0x4410018, size 0xb4, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Contains(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Remove, addr 0x44100cc, size 0x4c, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Remove(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Group>.GetEnumerator, addr 0x440f83c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Group*>* System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Group__GetEnumerator();

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.IndexOf, addr 0x440fde0, size 0xb8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Group__IndexOf(::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Insert, addr 0x440fe98, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Insert(int32_t index, ::System::Text::RegularExpressions::Group* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.RemoveAt, addr 0x440fee4, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.get_Item, addr 0x440ff30, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Group* System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.set_Item, addr 0x440ff34, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item(int32_t index, ::System::Text::RegularExpressions::Group* value);

  /// @brief Method System.Collections.IList.Add, addr 0x4410118, size 0x4c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x4410164, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x44101b0, size 0xf4, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x44102a4, size 0xf4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x4410398, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x44103ec, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x4410438, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x44103e4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_Item, addr 0x4410484, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x4410488, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__captureMap() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__captureMap();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> const& __cordl_internal_get__groups() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*>& __cordl_internal_get__groups();

  constexpr ::System::Text::RegularExpressions::Match* const& __cordl_internal_get__match() const;

  constexpr ::System::Text::RegularExpressions::Match*& __cordl_internal_get__match();

  constexpr void __cordl_internal_set__captureMap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__groups(::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> value);

  constexpr void __cordl_internal_set__match(::System::Text::RegularExpressions::Match* value);

  /// @brief Method .ctor, addr 0x44104d4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x440f478, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps);

  /// @brief Method get_Count, addr 0x440f4ac, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x440f4a4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x440fb9c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x440f5d8, size 0x90, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Group* get_Item(::StringW groupname);

  /// @brief Method get_Item, addr 0x440f4d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Group* get_Item(int32_t groupnum);

  /// @brief Method get_SyncRoot, addr 0x440fba4, size 0x8, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9220 };

  /// @brief Field _match, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Match* ____match;

  /// @brief Field _captureMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____captureMap;

  /// @brief Field _groups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Group*, ::Array<::System::Text::RegularExpressions::Group*>*> ____groups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____match) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____captureMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::GroupCollection, ____groups) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::GroupCollection, 0x28>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::GroupCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::GroupCollection*, "System.Text.RegularExpressions", "GroupCollection");
NEED_NO_BOX(::System::Text::RegularExpressions::GroupCollection_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::GroupCollection_Enumerator*, "System.Text.RegularExpressions", "GroupCollection/Enumerator");
