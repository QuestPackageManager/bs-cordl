#pragma once
// IWYU pragma private; include "System/Collections/Specialized/StringCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
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
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.StringCollection
class CORDL_TYPE StringCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::StringW Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::Collections::ArrayList* data;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x4482560, size 0x24, virtual false, abstract: false, final false
  inline int32_t Add(::StringW value);

  /// @brief Method Clear, addr 0x4482584, size 0x24, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x44825a8, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(::StringW value);

  /// @brief Method CopyTo, addr 0x44825cc, size 0x24, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::StringW, ::Array<::StringW>*> array, int32_t index);

  /// @brief Method IndexOf, addr 0x44825f0, size 0x24, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW value);

  /// @brief Method Insert, addr 0x4482614, size 0x24, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::StringW value);

  static inline ::System::Collections::Specialized::StringCollection* New_ctor();

  /// @brief Method Remove, addr 0x4482640, size 0x24, virtual false, abstract: false, final false
  inline void Remove(::StringW value);

  /// @brief Method RemoveAt, addr 0x4482664, size 0x24, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x44829b8, size 0x24, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44829dc, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x448273c, size 0x7c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains, addr 0x44827b8, size 0x7c, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x4482834, size 0x7c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x44828b0, size 0x8c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x448293c, size 0x7c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x4482558, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x4482550, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x44826ac, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x44826b0, size 0x8c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_data() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x4482a00, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x448252c, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x4482638, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x448248c, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x4482688, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x4482508, size 0x24, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringCollection(StringCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringCollection(StringCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9490 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::StringCollection, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::StringCollection, 0x18>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::StringCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringCollection*, "System.Collections.Specialized", "StringCollection");
