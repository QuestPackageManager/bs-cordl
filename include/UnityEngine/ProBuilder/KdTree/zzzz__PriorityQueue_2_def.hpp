#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityQueue_2)
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> struct ItemPriority_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TPriority> class PriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2);
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15924))
// CS Name: ::UnityEngine.ProBuilder.KdTree::PriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE PriorityQueue_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field priorityMath, offset 0x10, size 0x8
  __declspec(property(get = __get_priorityMath, put = __set_priorityMath))::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath;

  /// @brief Field queue, offset 0x18, size 0x8
  __declspec(
      property(get = __get_queue,
               put = __set_queue))::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> queue;

  /// @brief Field capacity, offset 0x20, size 0x4
  __declspec(property(get = __get_capacity, put = __set_capacity)) int32_t capacity;

  /// @brief Field count, offset 0x24, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*& __get_priorityMath();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*> const& __get_priorityMath() const;

  constexpr void __set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*>& __get_queue();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> const& __get_queue() const;

  constexpr void __set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> value);

  constexpr int32_t& __get_capacity();

  constexpr int32_t const& __get_capacity() const;

  constexpr void __set_capacity(int32_t value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  static inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>* New_ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method ExpandCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ExpandCapacity();

  /// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Enqueue(TItem item, TPriority priority);

  /// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TItem Dequeue();

  /// @brief Method ReorderItem addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ReorderItem(int32_t index, int32_t direction);

  /// @brief Method GetHighest addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TItem GetHighest();

  /// @brief Method GetHighestPriority addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TPriority GetHighestPriority();

  // Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PriorityQueue_2(PriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PriorityQueue_2(PriorityQueue_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PriorityQueue_2();

public:
  /// @brief Field priorityMath, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* ___priorityMath;

  /// @brief Field queue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>, ::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*> ___queue;

  /// @brief Field capacity, offset: 0x20, size: 0x4, def value: None
  int32_t ___capacity;

  /// @brief Field count, offset: 0x24, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
