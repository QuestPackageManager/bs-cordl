#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementListPool.hpp"
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
class VisualElementListPool___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementListPool;
}
namespace UnityEngine::UIElements {
class VisualElementListPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementListPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementListPool___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementListPool/<>c
class CORDL_TYPE VisualElementListPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::VisualElementListPool___c* __9;

  static inline ::UnityEngine::UIElements::VisualElementListPool___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x6a9512c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* __cctor_b__4_0();

  /// @brief Method .ctor, addr 0x6a95128, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::VisualElementListPool___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::VisualElementListPool___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementListPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementListPool___c(VisualElementListPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementListPool___c(VisualElementListPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementListPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementListPool
class CORDL_TYPE VisualElementListPool : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::VisualElementListPool___c;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pool, put = setStaticF_pool)) ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* pool;

  /// @brief Method Copy, addr 0x6a94d44, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Copy(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method Get, addr 0x6a94e0c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* Get(int32_t initialCapacity);

  /// @brief Method Release, addr 0x6a94ef8, size 0xc4, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* getStaticF_pool();

  static inline void setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementListPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementListPool(VisualElementListPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementListPool(VisualElementListPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementListPool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementListPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementListPool*, "UnityEngine.UIElements", "VisualElementListPool");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementListPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementListPool___c*, "UnityEngine.UIElements", "VisualElementListPool/<>c");
