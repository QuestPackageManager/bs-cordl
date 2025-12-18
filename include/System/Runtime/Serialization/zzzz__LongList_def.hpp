#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/LongList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongList)
// Forward declare root types
namespace System::Runtime::Serialization {
class LongList;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::LongList);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.LongList
class CORDL_TYPE LongList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Current)) int64_t Current;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_currentItem, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentItem, put = __cordl_internal_set_m_currentItem)) int32_t m_currentItem;

  /// @brief Field m_totalItems, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_totalItems, put = __cordl_internal_set_m_totalItems)) int32_t m_totalItems;

  /// @brief Field m_values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_values, put = __cordl_internal_set_m_values)) ::ArrayW<int64_t, ::Array<int64_t>*> m_values;

  /// @brief Method Add, addr 0x59a3a58, size 0x84, virtual false, abstract: false, final false
  inline void Add(int64_t value);

  /// @brief Method EnlargeArray, addr 0x59a3d38, size 0x8c, virtual false, abstract: false, final false
  inline void EnlargeArray();

  /// @brief Method MoveNext, addr 0x59a1dd4, size 0x80, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Runtime::Serialization::LongList* New_ctor();

  static inline ::System::Runtime::Serialization::LongList* New_ctor(int32_t startingSize);

  /// @brief Method RemoveElement, addr 0x59a39a0, size 0x90, virtual false, abstract: false, final false
  inline bool RemoveElement(int64_t value);

  /// @brief Method StartEnumeration, addr 0x59a1d88, size 0xc, virtual false, abstract: false, final false
  inline void StartEnumeration();

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr int32_t const& __cordl_internal_get_m_currentItem() const;

  constexpr int32_t& __cordl_internal_get_m_currentItem();

  constexpr int32_t const& __cordl_internal_get_m_totalItems() const;

  constexpr int32_t& __cordl_internal_get_m_totalItems();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_m_values() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_m_values();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_currentItem(int32_t value);

  constexpr void __cordl_internal_set_m_totalItems(int32_t value);

  constexpr void __cordl_internal_set_m_values(::ArrayW<int64_t, ::Array<int64_t>*> value);

  /// @brief Method .ctor, addr 0x59a3a50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59a3cd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t startingSize);

  /// @brief Method get_Count, addr 0x59a3dc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Current, addr 0x59a1d94, size 0x34, virtual false, abstract: false, final false
  inline int64_t get_Current();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongList(LongList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongList(LongList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3237 };

  /// @brief Field m_values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_values;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  /// @brief Field m_totalItems, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_totalItems;

  /// @brief Field m_currentItem, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_currentItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::LongList, ___m_values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::LongList, ___m_count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::LongList, ___m_totalItems) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::LongList, ___m_currentItem) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::LongList, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::LongList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::LongList*, "System.Runtime.Serialization", "LongList");
