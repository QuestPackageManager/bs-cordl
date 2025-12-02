#pragma once
// IWYU pragma private; include "GlobalNamespace/LazyCopyHashSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyCopyHashSet_1)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LazyCopyHashSet_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LazyCopyHashSet`1<T>
class CORDL_TYPE LazyCopyHashSet_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dirty, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__dirty, put = __cordl_internal_set__dirty)) bool _dirty;

  /// @brief Field _items, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::System::Collections::Generic::HashSet_1<T>* _items;

  /// @brief Field _itemsCopy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__itemsCopy, put = __cordl_internal_set__itemsCopy)) ::System::Collections::Generic::List_1<T>* _itemsCopy;

  __declspec(property(get = get_items)) ::System::Collections::Generic::List_1<T>* items;

  /// @brief Convert operator to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
  constexpr operator ::GlobalNamespace::ILazyCopyHashSet_1<T>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::LazyCopyHashSet_1<T>* New_ctor();

  static inline ::GlobalNamespace::LazyCopyHashSet_1<T>* New_ctor(int32_t capacity);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(T item);

  constexpr bool const& __cordl_internal_get__dirty() const;

  constexpr bool& __cordl_internal_get__dirty();

  constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__items();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__itemsCopy() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__itemsCopy();

  constexpr void __cordl_internal_set__dirty(bool value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::HashSet_1<T>* value);

  constexpr void __cordl_internal_set__itemsCopy(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_items();

  /// @brief Convert to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
  constexpr ::GlobalNamespace::ILazyCopyHashSet_1<T>* i___GlobalNamespace__ILazyCopyHashSet_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyCopyHashSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyCopyHashSet_1(LazyCopyHashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyCopyHashSet_1(LazyCopyHashSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20474 };

  /// @brief Field _itemsCopy, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____itemsCopy;

  /// @brief Field _items, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ____items;

  /// @brief Field _dirty, offset: 0x20, size: 0x1, def value: None
  bool ____dirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LazyCopyHashSet_1, "", "LazyCopyHashSet`1");
