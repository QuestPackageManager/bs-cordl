#pragma once
// IWYU pragma private; include "GlobalNamespace/SortedList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
CORDL_MODULE_EXPORT(SortedList_1)
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TBase> class SortedList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortedList_1);
// Type: ::SortedList`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TBase>
// Is value type: false
// CS Name: ::SortedList`1<TBase>*
class CORDL_TYPE SortedList_1 : public ::GlobalNamespace::SortedList_2<TBase, TBase> {
public:
  // Declarations
  static inline ::GlobalNamespace::SortedList_1<TBase>* New_ctor();

  static inline ::GlobalNamespace::SortedList_1<TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_1(SortedList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_1(SortedList_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_1, "", "SortedList`1");
