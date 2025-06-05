#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceListenerCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceListenerCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class TraceListener;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListenerCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceListenerCollection);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceListenerCollection
class CORDL_TYPE TraceListenerCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::ArrayList* list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x442c714, size 0x134, virtual false, abstract: false, final false
  inline int32_t Add(::System::Diagnostics::TraceListener* listener);

  /// @brief Method Clear, addr 0x442d3f0, size 0x58, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method GetEnumerator, addr 0x442d448, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method InitializeListener, addr 0x442d300, size 0xf0, virtual false, abstract: false, final false
  inline void InitializeListener(::System::Diagnostics::TraceListener* listener);

  static inline ::System::Diagnostics::TraceListenerCollection* New_ctor();

  /// @brief Method RemoveAt, addr 0x442d46c, size 0x11c, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x442dbe8, size 0x12c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x442dbe0, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x442dbdc, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IList.Add, addr 0x442d6c8, size 0x1dc, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains, addr 0x442d8a4, size 0x24, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x442d8c8, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x442d8ec, size 0x1d4, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x442dac0, size 0x11c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x442d6c0, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x442d6b8, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x442d588, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x442d5ac, size 0x10c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_list(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x442c584, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x442d2dc, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceListenerCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceListenerCollection(TraceListenerCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceListenerCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceListenerCollection(TraceListenerCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9265 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceListenerCollection, ___list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceListenerCollection, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceListenerCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceListenerCollection*, "System.Diagnostics", "TraceListenerCollection");
