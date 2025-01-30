#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/CollectionWrapper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionWrapper_1)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename T> class CollectionWrapper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::CollectionWrapper_1);
// Dependencies Newtonsoft.Json.Utilities.IWrappedCollection, System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.ICollection,
// System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.CollectionWrapper`1<T>
class CORDL_TYPE CollectionWrapper_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = get_UnderlyingCollection)) ::System::Object* UnderlyingCollection;

  /// @brief Field _genericCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__genericCollection, put = __cordl_internal_set__genericCollection)) ::System::Collections::Generic::ICollection_1<T>* _genericCollection;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::IList* _list;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedCollection"
  constexpr operator ::Newtonsoft::Json::Utilities::IWrappedCollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method IsCompatibleObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleObject(::System::Object* value);

  static inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* New_ctor(::System::Collections::Generic::ICollection_1<T>* list);

  static inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* New_ctor(::System::Collections::IList* list);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Remove(T item);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method VerifyValueType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void VerifyValueType(::System::Object* value);

  constexpr ::System::Collections::Generic::ICollection_1<T>* const& __cordl_internal_get__genericCollection() const;

  constexpr ::System::Collections::Generic::ICollection_1<T>*& __cordl_internal_get__genericCollection();

  constexpr ::System::Collections::IList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get__list();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr void __cordl_internal_set__genericCollection(::System::Collections::Generic::ICollection_1<T>* value);

  constexpr void __cordl_internal_set__list(::System::Collections::IList* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::ICollection_1<T>* list);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* list);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_UnderlyingCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_UnderlyingCollection();

  /// @brief Convert to "::Newtonsoft::Json::Utilities::IWrappedCollection"
  constexpr ::Newtonsoft::Json::Utilities::IWrappedCollection* i___Newtonsoft__Json__Utilities__IWrappedCollection() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionWrapper_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionWrapper_1(CollectionWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionWrapper_1(CollectionWrapper_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10192 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ____list;

  /// @brief Field _genericCollection, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<T>* ____genericCollection;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::CollectionWrapper_1, "Newtonsoft.Json.Utilities", "CollectionWrapper`1");
