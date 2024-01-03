#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyCollectionBase)
namespace System::Collections {
class ArrayList;
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
// Type: System.Collections::ReadOnlyCollectionBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3777))
// CS Name: ::System.Collections::ReadOnlyCollectionBase*
class CORDL_TYPE ReadOnlyCollectionBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::ArrayList* _list;

  __declspec(property(get = get_InnerList))::System::Collections::ArrayList* InnerList;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::ArrayList* value);

  /// @brief Method get_InnerList, addr 0x257fb04, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_InnerList();

  /// @brief Method get_Count, addr 0x257fb6c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x257fb90, size 0x24, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x257fbb4, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x257fbd8, size 0x3c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x257fc14, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::ReadOnlyCollectionBase* New_ctor();

  /// @brief Method .ctor, addr 0x257fc38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyCollectionBase(ReadOnlyCollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyCollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyCollectionBase(ReadOnlyCollectionBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyCollectionBase();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::ReadOnlyCollectionBase, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::ReadOnlyCollectionBase, ____list) == 0x10, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::ReadOnlyCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ReadOnlyCollectionBase*, "System.Collections", "ReadOnlyCollectionBase");
