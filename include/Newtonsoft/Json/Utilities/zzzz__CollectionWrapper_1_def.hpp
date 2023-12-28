#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionWrapper_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename T> class CollectionWrapper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::CollectionWrapper_1);
// Type: Newtonsoft.Json.Utilities::CollectionWrapper`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11878))
// CS Name: ::Newtonsoft.Json.Utilities::CollectionWrapper`1<T>*
class CORDL_TYPE CollectionWrapper_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::IList* _list;

  /// @brief Field _genericCollection, offset 0x18, size 0x8
  __declspec(property(get = __get__genericCollection, put = __set__genericCollection))::System::Collections::Generic::ICollection_1<T>* _genericCollection;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = get_UnderlyingCollection))::System::Object* UnderlyingCollection;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedCollection"
  constexpr operator ::Newtonsoft::Json::Utilities::IWrappedCollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  constexpr ::System::Collections::IList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::IList* value);

  constexpr ::System::Collections::Generic::ICollection_1<T>*& __get__genericCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<T>*> const& __get__genericCollection() const;

  constexpr void __set__genericCollection(::System::Collections::Generic::ICollection_1<T>* value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* New_ctor(::System::Collections::IList* list);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::IList* list);

  static inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* New_ctor(::System::Collections::Generic::ICollection_1<T>* list);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::ICollection_1<T>* list);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Add(T item);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Contains(T item);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Remove(T item);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method VerifyValueType addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void VerifyValueType(::System::Object* value);

  /// @brief Method IsCompatibleObject addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool IsCompatibleObject(::System::Object* value);

  /// @brief Method get_UnderlyingCollection addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* get_UnderlyingCollection();

  // Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionWrapper_1(CollectionWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionWrapper_1(CollectionWrapper_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionWrapper_1();

public:
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
