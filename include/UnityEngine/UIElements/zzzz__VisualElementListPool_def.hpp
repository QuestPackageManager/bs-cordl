#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementListPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementListPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementListPool);
// Type: UnityEngine.UIElements::VisualElementListPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6824))
// CS Name: ::UnityEngine.UIElements::VisualElementListPool*
class CORDL_TYPE VisualElementListPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pool,
                             put = setStaticF_pool))::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* pool;

  static inline void setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* getStaticF_pool();

  /// @brief Method Copy, addr 0x2dc37a4, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Copy(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method Get, addr 0x2dc3850, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Get(int32_t initialCapacity);

  /// @brief Method Release, addr 0x2dc3930, size 0xb4, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementListPool(VisualElementListPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementListPool(VisualElementListPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementListPool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementListPool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementListPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementListPool*, "UnityEngine.UIElements", "VisualElementListPool");
