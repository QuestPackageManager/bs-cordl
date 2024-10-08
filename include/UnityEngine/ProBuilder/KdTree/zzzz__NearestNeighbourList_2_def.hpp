#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/NearestNeighbourList_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NearestNeighbourList_2)
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TDistance> class INearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> class PriorityQueue_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TDistance> class NearestNeighbourList_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2);
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TItem, typename TDistance>
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2<TItem,TDistance>*
class CORDL_TYPE NearestNeighbourList_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCapacityReached)) bool IsCapacityReached;

  __declspec(property(get = get_MaxCapacity)) int32_t MaxCapacity;

  /// @brief Field distanceMath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_distanceMath, put = __cordl_internal_set_distanceMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath;

  /// @brief Field maxCapacity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCapacity, put = __cordl_internal_set_maxCapacity)) int32_t maxCapacity;

  /// @brief Field queue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_queue, put = __cordl_internal_set_queue)) ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* queue;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>"
  constexpr operator ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(TItem item, TDistance distance);

  /// @brief Method GetFurtherest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem GetFurtherest();

  /// @brief Method GetFurtherestDistance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TDistance GetFurtherestDistance();

  static inline ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>* New_ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath);

  /// @brief Method RemoveFurtherest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TItem RemoveFurtherest();

  constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*& __cordl_internal_get_distanceMath();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*> const& __cordl_internal_get_distanceMath() const;

  constexpr int32_t const& __cordl_internal_get_maxCapacity() const;

  constexpr int32_t& __cordl_internal_get_maxCapacity();

  constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>*& __cordl_internal_get_queue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>*> const& __cordl_internal_get_queue() const;

  constexpr void __cordl_internal_set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* value);

  constexpr void __cordl_internal_set_maxCapacity(int32_t value);

  constexpr void __cordl_internal_set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsCapacityReached, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCapacityReached();

  /// @brief Method get_MaxCapacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_MaxCapacity();

  /// @brief Convert to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>"
  constexpr ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>* i___UnityEngine__ProBuilder__KdTree__INearestNeighbourList_2_TItem_TDistance_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NearestNeighbourList_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NearestNeighbourList_2(NearestNeighbourList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NearestNeighbourList_2(NearestNeighbourList_2 const&) = delete;

  /// @brief Field queue, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* ___queue;

  /// @brief Field distanceMath, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* ___distanceMath;

  /// @brief Field maxCapacity, offset: 0x20, size: 0x4, def value: None
  int32_t ___maxCapacity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18431 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "NearestNeighbourList`2");
