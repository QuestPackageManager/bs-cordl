#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/INearestNeighbourList_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INearestNeighbourList_2)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TDistance> class INearestNeighbourList_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2);
// Type: UnityEngine.ProBuilder.KdTree::INearestNeighbourList`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TItem, typename TDistance>
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.KdTree::INearestNeighbourList`2<TItem,TDistance>*
class CORDL_TYPE INearestNeighbourList_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MaxCapacity)) int32_t MaxCapacity;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Add(TItem item, TDistance distance);

  /// @brief Method GetFurtherest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TItem GetFurtherest();

  /// @brief Method RemoveFurtherest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TItem RemoveFurtherest();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method get_MaxCapacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_MaxCapacity();

  // Ctor Parameters [CppParam { name: "", ty: "INearestNeighbourList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INearestNeighbourList_2(INearestNeighbourList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INearestNeighbourList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INearestNeighbourList_2(INearestNeighbourList_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "INearestNeighbourList`2");
