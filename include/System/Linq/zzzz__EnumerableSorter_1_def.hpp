#pragma once
// IWYU pragma private; include "System/Linq/EnumerableSorter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableSorter_1)
// Forward declare root types
namespace System::Linq {
template <typename TElement> class EnumerableSorter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EnumerableSorter_1);
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: System.Linq.EnumerableSorter`1<TElement>
class CORDL_TYPE EnumerableSorter_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CompareKeys, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareKeys(int32_t index1, int32_t index2);

  /// @brief Method ComputeKeys, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ComputeKeys(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count);

  static inline ::System::Linq::EnumerableSorter_1<TElement>* New_ctor();

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QuickSort(::ArrayW<int32_t, ::Array<int32_t>*> map, int32_t left, int32_t right);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> Sort(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableSorter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableSorter_1(EnumerableSorter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableSorter_1(EnumerableSorter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EnumerableSorter_1, "System.Linq", "EnumerableSorter`1");
