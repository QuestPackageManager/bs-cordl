#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ObjectListPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectListPool_1);
// Type: UnityEngine.UIElements::ObjectListPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6825))
// CS Name: ::UnityEngine.UIElements::ObjectListPool`1<T>*
class CORDL_TYPE ObjectListPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pool, put = setStaticF_pool))::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* pool;

  static inline void setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_pool();

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Collections::Generic::List_1<T>* Get();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void Release(::System::Collections::Generic::List_1<T>* elements);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectListPool_1(ObjectListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectListPool_1(ObjectListPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectListPool_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectListPool_1, "UnityEngine.UIElements", "ObjectListPool`1");
