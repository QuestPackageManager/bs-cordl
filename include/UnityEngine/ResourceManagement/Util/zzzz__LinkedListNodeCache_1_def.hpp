#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LinkedListNodeCache_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedListNodeCache_1)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class LinkedListNodeCache_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.LinkedListNodeCache`1<T>
class CORDL_TYPE LinkedListNodeCache_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CachedNodeCount, put = set_CachedNodeCount)) int32_t CachedNodeCount;

  __declspec(property(get = get_CreatedNodeCount)) int32_t CreatedNodeCount;

  /// @brief Field m_NodeCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeCache, put = __cordl_internal_set_m_NodeCache)) ::System::Collections::Generic::LinkedList_1<T>* m_NodeCache;

  /// @brief Field m_NodesCreated, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NodesCreated, put = __cordl_internal_set_m_NodesCreated)) int32_t m_NodesCreated;

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T val);

  static inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(::System::Collections::Generic::LinkedListNode_1<T>* node);

  constexpr ::System::Collections::Generic::LinkedList_1<T>* const& __cordl_internal_get_m_NodeCache() const;

  constexpr ::System::Collections::Generic::LinkedList_1<T>*& __cordl_internal_get_m_NodeCache();

  constexpr int32_t const& __cordl_internal_get_m_NodesCreated() const;

  constexpr int32_t& __cordl_internal_get_m_NodesCreated();

  constexpr void __cordl_internal_set_m_NodeCache(::System::Collections::Generic::LinkedList_1<T>* value);

  constexpr void __cordl_internal_set_m_NodesCreated(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CachedNodeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_CachedNodeCount();

  /// @brief Method get_CreatedNodeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_CreatedNodeCount();

  /// @brief Method set_CachedNodeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_CachedNodeCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedListNodeCache_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedListNodeCache_1(LinkedListNodeCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedListNodeCache_1(LinkedListNodeCache_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15643 };

  /// @brief Field m_NodesCreated, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NodesCreated;

  /// @brief Field m_NodeCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<T>* ___m_NodeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "LinkedListNodeCache`1");
