#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCache_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Entry;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class LinkedListNodeCache_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2);
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2/Entry<TKey,TValue>
struct CORDL_TYPE LRUCache_2_Entry {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*
  i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__LRUCache_2_Entry_TKey_TValue__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCache_2_Entry();

  // Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<TKey>*", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "TValue", modifiers:
  // "", def_value: None }]
  constexpr LRUCache_2_Entry(::System::Collections::Generic::LinkedListNode_1<TKey>* lruNode, TValue Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18702 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field lruNode, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<TKey>* lruNode;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  TValue Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2<TKey,TValue>
struct CORDL_TYPE LRUCache_2 {
public:
  // Declarations
  using Entry = ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>;

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey id, TValue obj);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGet(TKey offset, ::ByRef<TValue> val);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t limit);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCache_2();

  // Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "entryLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cache", ty:
  // "::System::Collections::Generic::Dictionary_2<TKey,::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>*", modifiers: "", def_value: None }, CppParam { name: "lru", ty:
  // "::System::Collections::Generic::LinkedList_1<TKey>*", modifiers: "", def_value: None }, CppParam { name: "nodeCache", ty: "::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<TKey>*",
  // modifiers: "", def_value: None }]
  constexpr LRUCache_2(int32_t requestHits, int32_t requestCount, int32_t entryLimit,
                       ::System::Collections::Generic::Dictionary_2<TKey, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache,
                       ::System::Collections::Generic::LinkedList_1<TKey>* lru, ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<TKey>* nodeCache) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field requestHits, offset: 0x0, size: 0x4, def value: None
  int32_t requestHits;

  /// @brief Field requestCount, offset: 0x4, size: 0x4, def value: None
  int32_t requestCount;

  /// @brief Field entryLimit, offset: 0x8, size: 0x4, def value: None
  int32_t entryLimit;

  /// @brief Field cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache;

  /// @brief Field lru, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<TKey>* lru;

  /// @brief Field nodeCache, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<TKey>* nodeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ResourceManagement::Util::LRUCache_2, "UnityEngine.ResourceManagement.Util", "LRUCache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry, "UnityEngine.ResourceManagement.Util", "LRUCache`2/Entry");
