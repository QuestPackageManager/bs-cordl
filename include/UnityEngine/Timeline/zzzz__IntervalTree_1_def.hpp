#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IntervalTree_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTree_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
struct IntervalTreeNode;
}
namespace UnityEngine::Timeline {
template <typename T> struct IntervalTree_1_Entry;
}
// Forward declare root types
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace UnityEngine::Timeline {
template <typename T> struct IntervalTree_1_Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Timeline::IntervalTree_1);
MARK_GEN_VAL_T(::UnityEngine::Timeline::IntervalTree_1_Entry);
// Dependencies
namespace UnityEngine::Timeline {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Timeline.IntervalTree`1/Entry<T>
struct CORDL_TYPE IntervalTree_1_Entry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTree_1_Entry();

  // Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "item", ty: "T", modifiers: "", def_value: None }]
  constexpr IntervalTree_1_Entry(int64_t intervalStart, int64_t intervalEnd, T item) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field intervalStart, offset: 0x0, size: 0x8, def value: None
  int64_t intervalStart;

  /// @brief Field intervalEnd, offset: 0x8, size: 0x8, def value: None
  int64_t intervalEnd;

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  T item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Timeline.IntervalTree`1<T>
class CORDL_TYPE IntervalTree_1 : public ::System::Object {
public:
  // Declarations
  using Entry = ::UnityEngine::Timeline::IntervalTree_1_Entry<T>;

  /// @brief Field <dirty>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__dirty_k__BackingField, put = __cordl_internal_set__dirty_k__BackingField)) bool _dirty_k__BackingField;

  __declspec(property(get = get_dirty, put = set_dirty)) bool dirty;

  /// @brief Field m_Entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entries, put = __cordl_internal_set_m_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* m_Entries;

  /// @brief Field m_Nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* m_Nodes;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method IntersectsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IntersectsWith(int64_t value, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method IntersectsWithRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IntersectsWithRange(int64_t start, int64_t end, ::System::Collections::Generic::List_1<T>* results);

  static inline ::UnityEngine::Timeline::IntervalTree_1<T>* New_ctor();

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Query(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method QueryRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void QueryRange(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method Rebuild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Rebuild(int32_t start, int32_t end);

  /// @brief Method Rebuild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method UpdateIntervals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateIntervals();

  constexpr bool const& __cordl_internal_get__dirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__dirty_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* const& __cordl_internal_get_m_Entries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>*& __cordl_internal_get_m_Entries();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* const& __cordl_internal_get_m_Nodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*& __cordl_internal_get_m_Nodes();

  constexpr void __cordl_internal_set__dirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* value);

  constexpr void __cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_dirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_dirty();

  /// @brief Method set_dirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTree_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntervalTree_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntervalTree_1(IntervalTree_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTree_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntervalTree_1(IntervalTree_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15843 };

  /// @brief Field kCenterUnknown offset 0xffffffff size 0x8
  static constexpr int64_t kCenterUnknown{ static_cast<int64_t>(0x7fffffffffffffff) };

  /// @brief Field kInvalidNode offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidNode{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kMinNodeSize offset 0xffffffff size 0x4
  static constexpr int32_t kMinNodeSize{ static_cast<int32_t>(0xa) };

  /// @brief Field m_Entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* ___m_Entries;

  /// @brief Field m_Nodes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* ___m_Nodes;

  /// @brief Field <dirty>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____dirty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Timeline::IntervalTree_1, "UnityEngine.Timeline", "IntervalTree`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Timeline::IntervalTree_1_Entry, "UnityEngine.Timeline", "IntervalTree`1/Entry");
