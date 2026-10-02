#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Entry;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Key;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Entry;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename TKey, typename TValue> struct LRUCache_2_Key;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2);
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry);
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2_Key);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::ResourceManagement::Util::LRUCache_2, "UnityEngine.ResourceManagement.Util", "LRUCache`2");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry, "UnityEngine.ResourceManagement.Util", "LRUCache`2/Entry");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::ResourceManagement::Util::LRUCache_2_Key, "UnityEngine.ResourceManagement.Util", "LRUCache`2/Key");
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2/Key<TKey,TValue>
struct CORDL_TYPE LRUCache_2_Key {
public:
  // Declarations
  /// @brief Field typeType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeType, put = setStaticF_typeType)) ::System::Type* typeType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.IEquatable<UnityEngine.ResourceManagement.Util.LRUCache<TKey,TValue>.Key>.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_IEquatable_UnityEngine_ResourceManagement_Util_LRUCache_TKey_TValue__Key__Equals(::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey k, ::System::Type* t);

  static inline ::System::Type* getStaticF_typeType();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*
  i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__LRUCache_2_Key_TKey_TValue__();

  static inline void setStaticF_typeType(::System::Type* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCache_2_Key();

  // Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None
  // }]
  constexpr LRUCache_2_Key(TKey key, ::System::Type* type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  TKey key;

  /// @brief Field type, offset: 0x8, size: 0x8, def value: None
  ::System::Type* type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
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

  // Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None, comment: None }]
  constexpr LRUCache_2_Entry(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lruNode, TValue Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19152 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field lruNode, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lruNode;

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

  using Key = ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>;

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey id, TValue obj);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGet(::System::Type* type, TKey id, ::by_ref<TValue> val);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t limit);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCache_2();

  // Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cache", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>,::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "lru", ty: "::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>*",
  // modifiers: "", def_value: None, comment: None }]
  constexpr LRUCache_2(int32_t requestHits, int32_t requestCount, int32_t entryLimit,
                       ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>,
                                                                    ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache,
                       ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lru) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19153 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field requestHits, offset: 0x0, size: 0x4, def value: None
  int32_t requestHits;

  /// @brief Field requestCount, offset: 0x4, size: 0x4, def value: None
  int32_t requestCount;

  /// @brief Field entryLimit, offset: 0x8, size: 0x4, def value: None
  int32_t entryLimit;

  /// @brief Field cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache;

  /// @brief Field lru, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lru;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
