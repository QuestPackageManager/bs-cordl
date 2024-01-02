#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringCollection)
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class StringCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::StringCollection);
// Type: System.Collections.Specialized::StringCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9517))
// CS Name: ::System.Collections.Specialized::StringCollection*
class CORDL_TYPE StringCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::Collections::ArrayList* data;

  __declspec(property(get = get_Item, put = set_Item))::StringW Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_data() const;

  constexpr void __set_data(::System::Collections::ArrayList* value);

  /// @brief Method get_Item, addr 0x293f660, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x293f6dc, size 0x24, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::StringW value);

  /// @brief Method get_Count, addr 0x293f700, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x293f724, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x293f72c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method Add, addr 0x293f734, size 0x24, virtual false, abstract: false, final false
  inline int32_t Add(::StringW value);

  /// @brief Method Clear, addr 0x293f758, size 0x24, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x293f77c, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(::StringW value);

  /// @brief Method CopyTo, addr 0x293f7a0, size 0x24, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::StringW, ::Array<::StringW>*> array, int32_t index);

  /// @brief Method IndexOf, addr 0x293f7c4, size 0x24, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value);

  /// @brief Method Insert, addr 0x293f7e8, size 0x24, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::StringW value);

  /// @brief Method get_IsSynchronized, addr 0x293f80c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method Remove, addr 0x293f814, size 0x24, virtual false, abstract: false, final false
  inline void Remove(::StringW value);

  /// @brief Method RemoveAt, addr 0x293f838, size 0x24, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x293f85c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method System.Collections.IList.get_Item, addr 0x293f880, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x293f884, size 0x8c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Add, addr 0x293f910, size 0x7c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains, addr 0x293f98c, size 0x7c, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x293fa08, size 0x7c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x293fa84, size 0x8c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x293fb10, size 0x7c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x293fb8c, size 0x24, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x293fbb0, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  static inline ::System::Collections::Specialized::StringCollection* New_ctor();

  /// @brief Method .ctor, addr 0x293fbd4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringCollection(StringCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringCollection(StringCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringCollection();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::StringCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::StringCollection, ___data) == 0x10, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::StringCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringCollection*, "System.Collections.Specialized", "StringCollection");
