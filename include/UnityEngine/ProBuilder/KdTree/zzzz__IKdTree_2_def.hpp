#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IKdTree_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTreeNode_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class IKdTree_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::IKdTree_2);
// Type: UnityEngine.ProBuilder.KdTree::IKdTree`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.KdTree::IKdTree`2<TKey,TValue>*
class CORDL_TYPE IKdTree_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Add(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method FindValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<TKey, ::Array<TKey>*> FindValue(TValue value);

  /// @brief Method FindValueAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue FindValueAt(::ArrayW<TKey, ::Array<TKey>*> point);

  /// @brief Method GetNearestNeighbours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
  GetNearestNeighbours(::ArrayW<TKey, ::Array<TKey>*> point, int32_t count);

  /// @brief Method RadialSearch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
  RadialSearch(::ArrayW<TKey, ::Array<TKey>*> center, TKey radius, int32_t count);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveAt(::ArrayW<TKey, ::Array<TKey>*> point);

  /// @brief Method TryFindValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryFindValue(TValue value, ByRef<::ArrayW<TKey, ::Array<TKey>*>> point);

  /// @brief Method TryFindValueAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryFindValueAt(::ArrayW<TKey, ::Array<TKey>*> point, ByRef<TValue> value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IKdTree_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKdTree_2(IKdTree_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKdTree_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKdTree_2(IKdTree_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::IKdTree_2, "UnityEngine.ProBuilder.KdTree", "IKdTree`2");
