#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchCollection)
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
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class Match;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text::RegularExpressions {
class __MatchCollection__Enumerator;
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
class MatchCollection;
}
namespace System::Text::RegularExpressions {
class __MatchCollection__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::MatchCollection);
MARK_REF_PTR_T(::System::Text::RegularExpressions::__MatchCollection__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8908))
// CS Name: ::MatchCollection::Enumerator*
class CORDL_TYPE __MatchCollection__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection))::System::Text::RegularExpressions::MatchCollection* _collection;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  __declspec(property(get = get_Current))::System::Text::RegularExpressions::Match* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>*
  i___System__Collections__Generic__IEnumerator_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Text::RegularExpressions::MatchCollection*& __cordl_internal_get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::MatchCollection*> const& __cordl_internal_get__collection() const;

  constexpr void __cordl_internal_set__collection(::System::Text::RegularExpressions::MatchCollection* value);

  constexpr int32_t& __cordl_internal_get__index();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr void __cordl_internal_set__index(int32_t value);

  static inline ::System::Text::RegularExpressions::__MatchCollection__Enumerator* New_ctor(::System::Text::RegularExpressions::MatchCollection* collection);

  /// @brief Method .ctor, addr 0x2950c4c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::MatchCollection* collection);

  /// @brief Method MoveNext, addr 0x295151c, size 0x50, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x295156c, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Match* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29515d8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x29515dc, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.IDisposable.Dispose, addr 0x29515e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__MatchCollection__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MatchCollection__Enumerator(__MatchCollection__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MatchCollection__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MatchCollection__Enumerator(__MatchCollection__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MatchCollection__Enumerator();

public:
  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::MatchCollection* ____collection;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__MatchCollection__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__MatchCollection__Enumerator, ____collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__MatchCollection__Enumerator, ____index) == 0x18, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::MatchCollection
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8909))
// CS Name: ::System.Text.RegularExpressions::MatchCollection*
class CORDL_TYPE MatchCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Text::RegularExpressions::__MatchCollection__Enumerator;

  /// @brief Field _regex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__regex, put = __cordl_internal_set__regex))::System::Text::RegularExpressions::Regex* _regex;

  /// @brief Field _matches, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__matches, put = __cordl_internal_set__matches))::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match*>* _matches;

  /// @brief Field _done, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__done, put = __cordl_internal_set__done)) bool _done;

  /// @brief Field _input, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__input, put = __cordl_internal_set__input))::StringW _input;

  /// @brief Field _beginning, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__beginning, put = __cordl_internal_set__beginning)) int32_t _beginning;

  /// @brief Field _length, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _startat, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startat, put = __cordl_internal_set__startat)) int32_t _startat;

  /// @brief Field _prevlen, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevlen, put = __cordl_internal_set__prevlen)) int32_t _prevlen;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::Text::RegularExpressions::Match* Item[];

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_Generic_IList_System_Text_RegularExpressions_Match__get_Item, put = System_Collections_Generic_IList_System_Text_RegularExpressions_Match__set_Item))::
      System::Text::RegularExpressions::Match* System_Collections_Generic_IList_System_Text_RegularExpressions_Match__Item[];

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match*>* i___System__Collections__Generic__IList_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match*>*
  i___System__Collections__Generic__ICollection_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match*>*
  i___System__Collections__Generic__IEnumerable_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match*>*
  i___System__Collections__Generic__IReadOnlyList_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match*>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match*>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Text__RegularExpressions__Match__() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__regex();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& __cordl_internal_get__regex() const;

  constexpr void __cordl_internal_set__regex(::System::Text::RegularExpressions::Regex* value);

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match*>*& __cordl_internal_get__matches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match*>*> const& __cordl_internal_get__matches() const;

  constexpr void __cordl_internal_set__matches(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match*>* value);

  constexpr bool& __cordl_internal_get__done();

  constexpr bool const& __cordl_internal_get__done() const;

  constexpr void __cordl_internal_set__done(bool value);

  constexpr ::StringW& __cordl_internal_get__input();

  constexpr ::StringW const& __cordl_internal_get__input() const;

  constexpr void __cordl_internal_set__input(::StringW value);

  constexpr int32_t& __cordl_internal_get__beginning();

  constexpr int32_t const& __cordl_internal_get__beginning() const;

  constexpr void __cordl_internal_set__beginning(int32_t value);

  constexpr int32_t& __cordl_internal_get__length();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr void __cordl_internal_set__length(int32_t value);

  constexpr int32_t& __cordl_internal_get__startat();

  constexpr int32_t const& __cordl_internal_get__startat() const;

  constexpr void __cordl_internal_set__startat(int32_t value);

  constexpr int32_t& __cordl_internal_get__prevlen();

  constexpr int32_t const& __cordl_internal_get__prevlen() const;

  constexpr void __cordl_internal_set__prevlen(int32_t value);

  static inline ::System::Text::RegularExpressions::MatchCollection* New_ctor(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t beginning, int32_t length, int32_t startat);

  /// @brief Method .ctor, addr 0x2950868, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t beginning, int32_t length, int32_t startat);

  /// @brief Method get_IsReadOnly, addr 0x2950998, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Count, addr 0x29509a0, size 0x5c, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2950a10, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* get_Item(int32_t i);

  /// @brief Method GetEnumerator, addr 0x2950be0, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Match>.GetEnumerator, addr 0x2950c7c, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>* System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Match__GetEnumerator();

  /// @brief Method GetMatch, addr 0x2950a74, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* GetMatch(int32_t i);

  /// @brief Method EnsureInitialized, addr 0x29509fc, size 0x14, virtual false, abstract: false, final false
  inline void EnsureInitialized();

  /// @brief Method get_IsSynchronized, addr 0x2950ce8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x2950cf0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method CopyTo, addr 0x2950cf4, size 0xcc, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x2950dc0, size 0x7c, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Text::RegularExpressions::Match*, ::Array<::System::Text::RegularExpressions::Match*>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.IndexOf, addr 0x2950e3c, size 0x6c, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Match__IndexOf(::System::Text::RegularExpressions::Match* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Insert, addr 0x2950ea8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__Insert(int32_t index, ::System::Text::RegularExpressions::Match* item);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.RemoveAt, addr 0x2950ef8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.get_Item, addr 0x2950f48, size 0x10, virtual true, abstract: false, final true
  inline ::System::Text::RegularExpressions::Match* System_Collections_Generic_IList_System_Text_RegularExpressions_Match__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.set_Item, addr 0x2950f58, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__set_Item(int32_t index, ::System::Text::RegularExpressions::Match* value);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Add, addr 0x2950fa8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Add(::System::Text::RegularExpressions::Match* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Clear, addr 0x2950ff8, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Contains, addr 0x2951048, size 0x6c, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Contains(::System::Text::RegularExpressions::Match* item);

  /// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Remove, addr 0x29510b4, size 0x50, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Remove(::System::Text::RegularExpressions::Match* item);

  /// @brief Method System.Collections.IList.Add, addr 0x2951104, size 0x50, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x2951154, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x29511a4, size 0xf4, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x2951298, size 0xf4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x295138c, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x29513dc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.Remove, addr 0x29513e4, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x2951434, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_Item, addr 0x2951484, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x2951494, size 0x50, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  static inline ::System::Text::RegularExpressions::MatchCollection* New_ctor();

  /// @brief Method .ctor, addr 0x29514e4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MatchCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchCollection(MatchCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchCollection(MatchCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchCollection();

public:
  /// @brief Field _regex, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex* ____regex;

  /// @brief Field _matches, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match*>* ____matches;

  /// @brief Field _done, offset: 0x20, size: 0x1, def value: None
  bool ____done;

  /// @brief Field _input, offset: 0x28, size: 0x8, def value: None
  ::StringW ____input;

  /// @brief Field _beginning, offset: 0x30, size: 0x4, def value: None
  int32_t ____beginning;

  /// @brief Field _length, offset: 0x34, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _startat, offset: 0x38, size: 0x4, def value: None
  int32_t ____startat;

  /// @brief Field _prevlen, offset: 0x3c, size: 0x4, def value: None
  int32_t ____prevlen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::MatchCollection, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____regex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____matches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____done) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____input) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____beginning) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____startat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::MatchCollection, ____prevlen) == 0x3c, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::MatchCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchCollection*, "System.Text.RegularExpressions", "MatchCollection");
NEED_NO_BOX(::System::Text::RegularExpressions::__MatchCollection__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__MatchCollection__Enumerator*, "System.Text.RegularExpressions", "MatchCollection/Enumerator");
