#pragma once
// IWYU pragma private; include "System/Collections/Specialized/ReadOnlyList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyList)
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
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class ReadOnlyList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::ReadOnlyList);
// Type: System.Collections.Specialized::ReadOnlyList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::ReadOnlyList*
class CORDL_TYPE ReadOnlyList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::IList* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x2f729e0, size 0x50, virtual true, abstract: false, final true
  inline int32_t Add(::System::Object* value);

  /// @brief Method Clear, addr 0x2f72a30, size 0x50, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2f72a80, size 0xac, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x2f72b2c, size 0xb8, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2f72be4, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2f72c84, size 0xac, virtual true, abstract: false, final true
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x2f72d30, size 0x50, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::System::Collections::Specialized::ReadOnlyList* New_ctor(::System::Collections::IList* list);

  /// @brief Method Remove, addr 0x2f72d80, size 0x50, virtual true, abstract: false, final true
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x2f72dd0, size 0x50, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::IList*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__list() const;

  constexpr void __cordl_internal_set__list(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x2f72580, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* list);

  /// @brief Method get_Count, addr 0x2f726ec, size 0xa4, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x2f72798, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2f72790, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2f727a0, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x2f72844, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x2f7293c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x2f728ec, size 0x50, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyList(ReadOnlyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyList(ReadOnlyList const&) = delete;

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ReadOnlyList, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ReadOnlyList, ____list) == 0x10, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::ReadOnlyList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ReadOnlyList*, "System.Collections.Specialized", "ReadOnlyList");
