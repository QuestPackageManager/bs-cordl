#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalLinkedListNodeCache_1)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class LinkedListNodeCache_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template <typename T> class GlobalLinkedListNodeCache_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1);
// Type: UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13995))
// CS Name: ::UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1<T>*
class CORDL_TYPE GlobalLinkedListNodeCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_globalCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_globalCache, put = setStaticF_m_globalCache))::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* m_globalCache;

  static inline void setStaticF_m_globalCache(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* value);

  static inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* getStaticF_m_globalCache();

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T val);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::LinkedListNode_1<T>* node);

  // Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalLinkedListNodeCache_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "GlobalLinkedListNodeCache`1");
