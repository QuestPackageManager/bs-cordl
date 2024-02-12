#pragma once
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
// Type: UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13994))
// CS Name: ::UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1<T>*
class CORDL_TYPE LinkedListNodeCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NodesCreated, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NodesCreated, put = __cordl_internal_set_m_NodesCreated)) int32_t m_NodesCreated;

  /// @brief Field m_NodeCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeCache, put = __cordl_internal_set_m_NodeCache))::System::Collections::Generic::LinkedList_1<T>* m_NodeCache;

  __declspec(property(get = get_CreatedNodeCount)) int32_t CreatedNodeCount;

  __declspec(property(get = get_CachedNodeCount)) int32_t CachedNodeCount;

  constexpr int32_t& __cordl_internal_get_m_NodesCreated();

  constexpr int32_t const& __cordl_internal_get_m_NodesCreated() const;

  constexpr void __cordl_internal_set_m_NodesCreated(int32_t value);

  constexpr ::System::Collections::Generic::LinkedList_1<T>*& __cordl_internal_get_m_NodeCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> const& __cordl_internal_get_m_NodeCache() const;

  constexpr void __cordl_internal_set_m_NodeCache(::System::Collections::Generic::LinkedList_1<T>* value);

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T val);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Release(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method get_CreatedNodeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_CreatedNodeCount();

  /// @brief Method get_CachedNodeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_CachedNodeCount();

  static inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedListNodeCache_1(LinkedListNodeCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedListNodeCache_1(LinkedListNodeCache_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedListNodeCache_1();

public:
  /// @brief Field m_NodesCreated, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NodesCreated;

  /// @brief Field m_NodeCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<T>* ___m_NodeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "LinkedListNodeCache`1");
