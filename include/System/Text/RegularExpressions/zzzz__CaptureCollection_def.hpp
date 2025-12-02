#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/CaptureCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaptureCollection)
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
class CaptureCollection_Enumerator;
}
namespace System::Text::RegularExpressions {
class Capture;
}
namespace System::Text::RegularExpressions {
class Group;
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
class CaptureCollection;
}
namespace System::Text::RegularExpressions {
class CaptureCollection_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::CaptureCollection);
MARK_REF_PTR_T(::System::Text::RegularExpressions::CaptureCollection_Enumerator);
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.CaptureCollection/Enumerator
class CORDL_TYPE CaptureCollection_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Text::RegularExpressions::Capture* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection)) ::System::Text::RegularExpressions::CaptureCollection* _collection;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x615f900, size 0x3c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Text::RegularExpressions::CaptureCollection_Enumerator* New_ctor(::System::Text::RegularExpressions::CaptureCollection* collection);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x615f9b4, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x615f9b0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x615f9c0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr ::System::Text::RegularExpressions::CaptureCollection* const& __cordl_internal_get__collection() const;

  constexpr ::System::Text::RegularExpressions::CaptureCollection*& __cordl_internal_get__collection();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__collection(::System::Text::RegularExpressions::CaptureCollection* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x615edc8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::CaptureCollection* collection);

  /// @brief Method get_Current, addr 0x615f93c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Capture* get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>*
  i___System__Collections__Generic__IEnumerator_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaptureCollection_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaptureCollection_Enumerator(CaptureCollection_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaptureCollection_Enumerator(CaptureCollection_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11065 };

  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::CaptureCollection* ____collection;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection_Enumerator, ____collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection_Enumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::CaptureCollection_Enumerator, 0x20>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.CaptureCollection
class CORDL_TYPE CaptureCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Text::RegularExpressions::CaptureCollection_Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item)) ::System::Text::RegularExpressions::Capture* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__get_Item,
                      put = System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__set_Item)) ::System::Text::RegularExpressions::Capture*
      System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__Item[];

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  /// @brief Field _capcount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__capcount, put = __cordl_internal_set__capcount)) int32_t _capcount;

  /// @brief Field _captures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__captures,
                      put = __cordl_internal_set__captures)) ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>
      _captures;

  /// @brief Field _group, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__group, put = __cordl_internal_set__group)) ::System::Text::RegularExpressions::Group* _group;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method CopyTo, addr 0x615f044, size 0x164, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x615ef90, size 0xb4, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method ForceInitialized, addr 0x615ee30, size 0x150, virtual false, abstract: false, final false
  inline void ForceInitialized();

  /// @brief Method GetCapture, addr 0x615ecac, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Capture* GetCapture(int32_t i);

  /// @brief Method GetEnumerator, addr 0x615ed70, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Text::RegularExpressions::CaptureCollection* New_ctor();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Add, addr 0x615f344, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Add(::System::Text::RegularExpressions::Capture* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Clear, addr 0x615f390, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Contains, addr 0x615f3dc, size 0xb8, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Contains(::System::Text::RegularExpressions::Capture* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Remove, addr 0x615f494, size 0x4c, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Capture__Remove(::System::Text::RegularExpressions::Capture* item);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Capture>.GetEnumerator, addr 0x615edd8, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Capture*>* System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Capture__GetEnumerator();

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.IndexOf, addr 0x615f1a8, size 0xb4, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__IndexOf(::System::Text::RegularExpressions::Capture* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Insert, addr 0x615f25c, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__Insert(int32_t index, ::System::Text::RegularExpressions::Capture* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.RemoveAt, addr 0x615f2a8, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.get_Item, addr 0x615f2f4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Capture* System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.set_Item, addr 0x615f2f8, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Capture__set_Item(int32_t index, ::System::Text::RegularExpressions::Capture* value);

  /// @brief Method System.Collections.IList.Add, addr 0x615f4e0, size 0x4c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x615f52c, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x615f578, size 0x108, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x615f680, size 0x108, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x615f788, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x615f7dc, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x615f828, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x615f7d4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_Item, addr 0x615f874, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x615f878, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr int32_t const& __cordl_internal_get__capcount() const;

  constexpr int32_t& __cordl_internal_get__capcount();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> const& __cordl_internal_get__captures() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>& __cordl_internal_get__captures();

  constexpr ::System::Text::RegularExpressions::Group* const& __cordl_internal_get__group() const;

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get__group();

  constexpr void __cordl_internal_set__capcount(int32_t value);

  constexpr void __cordl_internal_set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> value);

  constexpr void __cordl_internal_set__group(::System::Text::RegularExpressions::Group* value);

  /// @brief Method .ctor, addr 0x615f8c4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x615eca0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x615ec98, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x615ef80, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x615eca8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Capture* get_Item(int32_t i);

  /// @brief Method get_SyncRoot, addr 0x615ef88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Capture*>*
  i___System__Collections__Generic__ICollection_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Capture*>*
  i___System__Collections__Generic__IEnumerable_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Capture*>* i___System__Collections__Generic__IList_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Capture*>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Capture*>*
  i___System__Collections__Generic__IReadOnlyList_1___System__Text__RegularExpressions__Capture__() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaptureCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaptureCollection(CaptureCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaptureCollection(CaptureCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11066 };

  /// @brief Field _group, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ____group;

  /// @brief Field _capcount, offset: 0x18, size: 0x4, def value: None
  int32_t ____capcount;

  /// @brief Field _captures, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> ____captures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____capcount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____captures) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::CaptureCollection, 0x28>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::CaptureCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::CaptureCollection*, "System.Text.RegularExpressions", "CaptureCollection");
NEED_NO_BOX(::System::Text::RegularExpressions::CaptureCollection_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::CaptureCollection_Enumerator*, "System.Text.RegularExpressions", "CaptureCollection/Enumerator");
