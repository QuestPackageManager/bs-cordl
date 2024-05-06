#pragma once
// IWYU pragma private; include "System/Data/RBTree_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Data/zzzz__TreeAccessMethod_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
struct TreeAccessMethod;
}
namespace System::Data {
template <typename K> struct __RBTree_1__NodeColor;
}
namespace System::Data {
template <typename K> struct __RBTree_1__NodePath;
}
namespace System::Data {
template <typename K> struct __RBTree_1__Node;
}
namespace System::Data {
template <typename K> struct __RBTree_1__RBTreeEnumerator;
}
namespace System::Data {
template <typename K> class __RBTree_1__TreePage;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
template <typename K> struct __RBTree_1__NodeColor;
}
namespace System::Data {
template <typename K> class RBTree_1;
}
namespace System::Data {
template <typename K> class __RBTree_1__TreePage;
}
namespace System::Data {
template <typename K> struct __RBTree_1__Node;
}
namespace System::Data {
template <typename K> struct __RBTree_1__NodePath;
}
namespace System::Data {
template <typename K> struct __RBTree_1__RBTreeEnumerator;
}
// Write type traits
MARK_GEN_VAL_T(::System::Data::__RBTree_1__NodeColor);
MARK_GEN_REF_PTR_T(::System::Data::RBTree_1);
MARK_GEN_REF_PTR_T(::System::Data::__RBTree_1__TreePage);
MARK_GEN_VAL_T(::System::Data::__RBTree_1__Node);
MARK_GEN_VAL_T(::System::Data::__RBTree_1__NodePath);
MARK_GEN_VAL_T(::System::Data::__RBTree_1__RBTreeEnumerator);
// Type: ::NodeColor
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: true
// CS Name: ::RBTree`1::NodeColor<K>
struct CORDL_TYPE __RBTree_1__NodeColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RBTree_1__NodeColor_Unwrapped
  enum struct ____RBTree_1__NodeColor_Unwrapped : int32_t {
    __E_red = static_cast<int32_t>(0x0),
    __E_black = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RBTree_1__NodeColor_Unwrapped() const noexcept {
    return static_cast<____RBTree_1__NodeColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RBTree_1__NodeColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RBTree_1__NodeColor(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field black value: static_cast<int32_t>(0x1)
  static ::System::Data::__RBTree_1__NodeColor<K> const black;

  /// @brief Field red value: static_cast<int32_t>(0x0)
  static ::System::Data::__RBTree_1__NodeColor<K> const red;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Data
// Type: ::Node
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: true
// CS Name: ::RBTree`1::Node<K>
struct CORDL_TYPE __RBTree_1__Node {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RBTree_1__Node();

  // Ctor Parameters [CppParam { name: "_selfId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_leftId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_rightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_nextId", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_subTreeSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_keyOfNode", ty: "K", modifiers: "", def_value: None }, CppParam { name:
  // "_nodeColor", ty: "::System::Data::__RBTree_1__NodeColor<K>", modifiers: "", def_value: None }]
  constexpr __RBTree_1__Node(int32_t _selfId, int32_t _leftId, int32_t _rightId, int32_t _parentId, int32_t _nextId, int32_t _subTreeSize, K _keyOfNode,
                             ::System::Data::__RBTree_1__NodeColor<K> _nodeColor) noexcept;

  /// @brief Field _selfId, offset: 0x0, size: 0x4, def value: None
  int32_t _selfId;

  /// @brief Field _leftId, offset: 0x4, size: 0x4, def value: None
  int32_t _leftId;

  /// @brief Field _rightId, offset: 0x8, size: 0x4, def value: None
  int32_t _rightId;

  /// @brief Field _parentId, offset: 0xc, size: 0x4, def value: None
  int32_t _parentId;

  /// @brief Field _nextId, offset: 0x10, size: 0x4, def value: None
  int32_t _nextId;

  /// @brief Field _subTreeSize, offset: 0x14, size: 0x4, def value: None
  int32_t _subTreeSize;

  /// @brief Field _keyOfNode, offset: 0x18, size: 0x8, def value: None
  K _keyOfNode;

  /// @brief Field _nodeColor, offset: 0x20, size: 0x4, def value: None
  ::System::Data::__RBTree_1__NodeColor<K> _nodeColor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Data
// Type: ::NodePath
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: true
// CS Name: ::RBTree`1::NodePath<K>
struct CORDL_TYPE __RBTree_1__NodePath {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t nodeID, int32_t mainTreeNodeID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RBTree_1__NodePath();

  // Ctor Parameters [CppParam { name: "_nodeID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_mainTreeNodeID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RBTree_1__NodePath(int32_t _nodeID, int32_t _mainTreeNodeID) noexcept;

  /// @brief Field _nodeID, offset: 0x0, size: 0x4, def value: None
  int32_t _nodeID;

  /// @brief Field _mainTreeNodeID, offset: 0x4, size: 0x4, def value: None
  int32_t _mainTreeNodeID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Data
// Type: ::TreePage
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: false
// CS Name: ::RBTree`1::TreePage<K>*
class CORDL_TYPE __RBTree_1__TreePage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InUseCount, put = set_InUseCount)) int32_t InUseCount;

  __declspec(property(get = get_PageId, put = set_PageId)) int32_t PageId;

  /// @brief Field _inUseCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__inUseCount, put = __cordl_internal_set__inUseCount)) int32_t _inUseCount;

  /// @brief Field _nextFreeSlotLine, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nextFreeSlotLine, put = __cordl_internal_set__nextFreeSlotLine)) int32_t _nextFreeSlotLine;

  /// @brief Field _pageId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__pageId, put = __cordl_internal_set__pageId)) int32_t _pageId;

  /// @brief Field _slotMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__slotMap, put = __cordl_internal_set__slotMap))::ArrayW<int32_t, ::Array<int32_t>*> _slotMap;

  /// @brief Field _slots, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__slots, put = __cordl_internal_set__slots))::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> _slots;

  /// @brief Method AllocSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t AllocSlot(::System::Data::RBTree_1<K>* tree);

  static inline ::System::Data::__RBTree_1__TreePage<K>* New_ctor(int32_t size);

  constexpr int32_t const& __cordl_internal_get__inUseCount() const;

  constexpr int32_t& __cordl_internal_get__inUseCount();

  constexpr int32_t const& __cordl_internal_get__nextFreeSlotLine() const;

  constexpr int32_t& __cordl_internal_get__nextFreeSlotLine();

  constexpr int32_t const& __cordl_internal_get__pageId() const;

  constexpr int32_t& __cordl_internal_get__pageId();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__slotMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__slotMap();

  constexpr ::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> const& __cordl_internal_get__slots() const;

  constexpr ::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*>& __cordl_internal_get__slots();

  constexpr void __cordl_internal_set__inUseCount(int32_t value);

  constexpr void __cordl_internal_set__nextFreeSlotLine(int32_t value);

  constexpr void __cordl_internal_set__pageId(int32_t value);

  constexpr void __cordl_internal_set__slotMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__slots(::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_InUseCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_InUseCount();

  /// @brief Method get_PageId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_PageId();

  /// @brief Method set_InUseCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_InUseCount(int32_t value);

  /// @brief Method set_PageId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_PageId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RBTree_1__TreePage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RBTree_1__TreePage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RBTree_1__TreePage(__RBTree_1__TreePage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RBTree_1__TreePage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RBTree_1__TreePage(__RBTree_1__TreePage const&) = delete;

  /// @brief Field _slots, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Data::__RBTree_1__Node<K>, ::Array<::System::Data::__RBTree_1__Node<K>>*> ____slots;

  /// @brief Field _slotMap, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____slotMap;

  /// @brief Field _inUseCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____inUseCount;

  /// @brief Field _pageId, offset: 0x24, size: 0x4, def value: None
  int32_t ____pageId;

  /// @brief Field _nextFreeSlotLine, offset: 0x28, size: 0x4, def value: None
  int32_t ____nextFreeSlotLine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
// Type: ::RBTreeEnumerator
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: true
// CS Name: ::RBTree`1::RBTreeEnumerator<K>
struct CORDL_TYPE __RBTree_1__RBTreeEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) K Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<K>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::RBTree_1<K>* tree);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::RBTree_1<K>* tree, int32_t position);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline K get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
  constexpr ::System::Collections::Generic::IEnumerator_1<K>* i___System__Collections__Generic__IEnumerator_1_K_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RBTree_1__RBTreeEnumerator();

  // Ctor Parameters [CppParam { name: "_tree", ty: "::System::Data::RBTree_1<K>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_mainTreeNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty:
  // "K", modifiers: "", def_value: None }]
  constexpr __RBTree_1__RBTreeEnumerator(::System::Data::RBTree_1<K>* _tree, int32_t _version, int32_t _index, int32_t _mainTreeNodeId, K _current) noexcept;

  /// @brief Field _tree, offset: 0x0, size: 0x8, def value: None
  ::System::Data::RBTree_1<K>* _tree;

  /// @brief Field _version, offset: 0x8, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _index, offset: 0xc, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _mainTreeNodeId, offset: 0x10, size: 0x4, def value: None
  int32_t _mainTreeNodeId;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  K _current;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Data
// Type: System.Data::RBTree`1
// SizeInfo { instance_size: 64, native_size: 60, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// cpp template
template <typename K>
// Is value type: false
// CS Name: ::System.Data::RBTree`1<K>*
class CORDL_TYPE RBTree_1 : public ::System::Object {
public:
  // Declarations
  using Node = ::System::Data::__RBTree_1__Node<K>;

  using NodeColor = ::System::Data::__RBTree_1__NodeColor<K>;

  using NodePath = ::System::Data::__RBTree_1__NodePath<K>;

  using RBTreeEnumerator = ::System::Data::__RBTree_1__RBTreeEnumerator<K>;

  using TreePage = ::System::Data::__RBTree_1__TreePage<K>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_HasDuplicates)) bool HasDuplicates;

  __declspec(property(get = get_Item)) K Item[];

  /// @brief Field _accessMethod, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__accessMethod, put = __cordl_internal_set__accessMethod))::System::Data::TreeAccessMethod _accessMethod;

  /// @brief Field _inUseNodeCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inUseNodeCount, put = __cordl_internal_set__inUseNodeCount)) int32_t _inUseNodeCount;

  /// @brief Field _inUsePageCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__inUsePageCount, put = __cordl_internal_set__inUsePageCount)) int32_t _inUsePageCount;

  /// @brief Field _inUseSatelliteTreeCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__inUseSatelliteTreeCount, put = __cordl_internal_set__inUseSatelliteTreeCount)) int32_t _inUseSatelliteTreeCount;

  /// @brief Field _nextFreePageLine, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__nextFreePageLine, put = __cordl_internal_set__nextFreePageLine)) int32_t _nextFreePageLine;

  /// @brief Field _pageTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pageTable,
                      put = __cordl_internal_set__pageTable))::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> _pageTable;

  /// @brief Field _pageTableMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pageTableMap, put = __cordl_internal_set__pageTableMap))::ArrayW<int32_t, ::Array<int32_t>*> _pageTableMap;

  /// @brief Field _version, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field root, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root)) int32_t root;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(K item);

  /// @brief Method AllocPage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Data::__RBTree_1__TreePage<K>* AllocPage(int32_t size);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CompareNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CompareNode(K record1, K record2);

  /// @brief Method CompareSateliteTreeNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CompareSateliteTreeNode(K record1, K record2);

  /// @brief Method ComputeIndexByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t ComputeIndexByNode(int32_t nodeId);

  /// @brief Method ComputeIndexWithSatelliteByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t ComputeIndexWithSatelliteByNode(int32_t nodeId);

  /// @brief Method ComputeNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t ComputeNodeByIndex(int32_t index, ByRef<int32_t> satelliteRootId);

  /// @brief Method ComputeNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t ComputeNodeByIndex(int32_t x_id, int32_t index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<K, ::Array<K>*> array, int32_t index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method DecreaseSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DecreaseSize(int32_t nodeId);

  /// @brief Method DeleteByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline K DeleteByIndex(int32_t i);

  /// @brief Method FreeNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FreeNode(int32_t nodeId);

  /// @brief Method FreePage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FreePage(::System::Data::__RBTree_1__TreePage<K>* page);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetIndexByKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIndexByKey(K key);

  /// @brief Method GetIndexByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIndexByNode(int32_t node);

  /// @brief Method GetIndexByNodePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIndexByNodePath(::System::Data::__RBTree_1__NodePath<K> path);

  /// @brief Method GetIndexOfPageWithFreeSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIndexOfPageWithFreeSlot(bool allocatedPage);

  /// @brief Method GetIntValueFromBitMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetIntValueFromBitMap(uint32_t bitMap);

  /// @brief Method GetNewNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetNewNode(K key);

  /// @brief Method GetNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Data::__RBTree_1__NodePath<K> GetNodeByIndex(int32_t userIndex);

  /// @brief Method GetNodeByKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Data::__RBTree_1__NodePath<K> GetNodeByKey(K key);

  /// @brief Method IncreaseSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IncreaseSize(int32_t nodeId);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(int32_t nodeId, K item);

  /// @brief Method InitTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitTree();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Insert(K item);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Insert(int32_t position, K item);

  /// @brief Method InsertAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InsertAt(int32_t position, K item, bool append);

  /// @brief Method Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline K Key(int32_t nodeId);

  /// @brief Method Left, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Left(int32_t nodeId);

  /// @brief Method LeftRotate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t LeftRotate(int32_t root_id, int32_t x_id, int32_t mainTreeNode);

  /// @brief Method MarkPageFree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MarkPageFree(::System::Data::__RBTree_1__TreePage<K>* page);

  /// @brief Method MarkPageFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MarkPageFull(::System::Data::__RBTree_1__TreePage<K>* page);

  /// @brief Method Minimum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Minimum(int32_t x_id);

  static inline ::System::Data::RBTree_1<K>* New_ctor(::System::Data::TreeAccessMethod accessMethod);

  /// @brief Method Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Next(int32_t nodeId);

  /// @brief Method Parent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Parent(int32_t nodeId);

  /// @brief Method RBDelete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RBDelete(int32_t z_id);

  /// @brief Method RBDeleteFixup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RBDeleteFixup(int32_t root_id, int32_t x_id, int32_t px_id, int32_t mainTreeNodeID);

  /// @brief Method RBDeleteX, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RBDeleteX(int32_t root_id, int32_t z_id, int32_t mainTreeNodeID);

  /// @brief Method RBInsert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RBInsert(int32_t root_id, int32_t x_id, int32_t mainTreeNodeID, int32_t position, bool append);

  /// @brief Method RecomputeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RecomputeSize(int32_t nodeId);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t position);

  /// @brief Method Right, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Right(int32_t nodeId);

  /// @brief Method RightRotate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RightRotate(int32_t root_id, int32_t x_id, int32_t mainTreeNode);

  /// @brief Method SearchSubTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t SearchSubTree(int32_t root_id, K key);

  /// @brief Method SetColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetColor(int32_t nodeId, ::System::Data::__RBTree_1__NodeColor<K> color);

  /// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetKey(int32_t nodeId, K key);

  /// @brief Method SetLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetLeft(int32_t nodeId, int32_t leftNodeId);

  /// @brief Method SetNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetNext(int32_t nodeId, int32_t nextNodeId);

  /// @brief Method SetParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetParent(int32_t nodeId, int32_t parentNodeId);

  /// @brief Method SetRight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetRight(int32_t nodeId, int32_t rightNodeId);

  /// @brief Method SetSubTreeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetSubTreeSize(int32_t nodeId, int32_t size);

  /// @brief Method SubTreeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t SubTreeSize(int32_t nodeId);

  /// @brief Method Successor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Successor(ByRef<int32_t> nodeId, ByRef<int32_t> mainTreeNodeId);

  /// @brief Method Successor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Successor(int32_t x_id);

  /// @brief Method UpdateNodeKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateNodeKey(K currentKey, K newKey);

  constexpr ::System::Data::TreeAccessMethod const& __cordl_internal_get__accessMethod() const;

  constexpr ::System::Data::TreeAccessMethod& __cordl_internal_get__accessMethod();

  constexpr int32_t const& __cordl_internal_get__inUseNodeCount() const;

  constexpr int32_t& __cordl_internal_get__inUseNodeCount();

  constexpr int32_t const& __cordl_internal_get__inUsePageCount() const;

  constexpr int32_t& __cordl_internal_get__inUsePageCount();

  constexpr int32_t const& __cordl_internal_get__inUseSatelliteTreeCount() const;

  constexpr int32_t& __cordl_internal_get__inUseSatelliteTreeCount();

  constexpr int32_t const& __cordl_internal_get__nextFreePageLine() const;

  constexpr int32_t& __cordl_internal_get__nextFreePageLine();

  constexpr ::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> const& __cordl_internal_get__pageTable() const;

  constexpr ::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*>& __cordl_internal_get__pageTable();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__pageTableMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__pageTableMap();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr int32_t const& __cordl_internal_get_root() const;

  constexpr int32_t& __cordl_internal_get_root();

  constexpr void __cordl_internal_set__accessMethod(::System::Data::TreeAccessMethod value);

  constexpr void __cordl_internal_set__inUseNodeCount(int32_t value);

  constexpr void __cordl_internal_set__inUsePageCount(int32_t value);

  constexpr void __cordl_internal_set__inUseSatelliteTreeCount(int32_t value);

  constexpr void __cordl_internal_set__nextFreePageLine(int32_t value);

  constexpr void __cordl_internal_set__pageTable(::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> value);

  constexpr void __cordl_internal_set__pageTableMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__version(int32_t value);

  constexpr void __cordl_internal_set_root(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::TreeAccessMethod accessMethod);

  /// @brief Method color, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Data::__RBTree_1__NodeColor<K> color(int32_t nodeId);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_HasDuplicates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasDuplicates();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline K get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RBTree_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RBTree_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RBTree_1(RBTree_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RBTree_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RBTree_1(RBTree_1 const&) = delete;

  /// @brief Field _pageTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Data::__RBTree_1__TreePage<K>*, ::Array<::System::Data::__RBTree_1__TreePage<K>*>*> ____pageTable;

  /// @brief Field _pageTableMap, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____pageTableMap;

  /// @brief Field _inUsePageCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____inUsePageCount;

  /// @brief Field _nextFreePageLine, offset: 0x24, size: 0x4, def value: None
  int32_t ____nextFreePageLine;

  /// @brief Field root, offset: 0x28, size: 0x4, def value: None
  int32_t ___root;

  /// @brief Field _version, offset: 0x2c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _inUseNodeCount, offset: 0x30, size: 0x4, def value: None
  int32_t ____inUseNodeCount;

  /// @brief Field _inUseSatelliteTreeCount, offset: 0x34, size: 0x4, def value: None
  int32_t ____inUseSatelliteTreeCount;

  /// @brief Field _accessMethod, offset: 0x38, size: 0x4, def value: None
  ::System::Data::TreeAccessMethod ____accessMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Data::__RBTree_1__NodeColor, "System.Data", "RBTree`1/NodeColor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Data::RBTree_1, "System.Data", "RBTree`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Data::__RBTree_1__TreePage, "System.Data", "RBTree`1/TreePage");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Data::__RBTree_1__Node, "System.Data", "RBTree`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Data::__RBTree_1__NodePath, "System.Data", "RBTree`1/NodePath");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Data::__RBTree_1__RBTreeEnumerator, "System.Data", "RBTree`1/RBTreeEnumerator");
