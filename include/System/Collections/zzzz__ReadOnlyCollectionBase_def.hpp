#pragma once
// IWYU pragma private; include "System/Collections/ReadOnlyCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyCollectionBase)
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
namespace System::Collections {
class ReadOnlyCollectionBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::ReadOnlyCollectionBase);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ReadOnlyCollectionBase
class CORDL_TYPE ReadOnlyCollectionBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_InnerList)) ::System::Collections::ArrayList* InnerList;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x3dbc4b8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::ReadOnlyCollectionBase* New_ctor();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x3dbc47c, size 0x3c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x3dbc434, size 0x24, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x3dbc458, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x3dbc4dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x3dbc410, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_InnerList, addr 0x3dbc3b0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_InnerList();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyCollectionBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyCollectionBase(ReadOnlyCollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyCollectionBase(ReadOnlyCollectionBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3784 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ReadOnlyCollectionBase, ____list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ReadOnlyCollectionBase, 0x18>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::ReadOnlyCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ReadOnlyCollectionBase*, "System.Collections", "ReadOnlyCollectionBase");
