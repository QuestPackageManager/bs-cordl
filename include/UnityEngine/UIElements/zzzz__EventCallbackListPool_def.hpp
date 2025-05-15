#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackListPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventCallbackListPool)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackListPool);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackListPool
class CORDL_TYPE EventCallbackListPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* m_Stack;

  /// @brief Method Get, addr 0x4a27df8, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackList* Get(::UnityEngine::UIElements::EventCallbackList* initializer);

  static inline ::UnityEngine::UIElements::EventCallbackListPool* New_ctor();

  /// @brief Method Release, addr 0x4a28154, size 0x64, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::UIElements::EventCallbackList* element);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* const& __cordl_internal_get_m_Stack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*& __cordl_internal_get_m_Stack();

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* value);

  /// @brief Method .ctor, addr 0x4a28224, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackListPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackListPool(EventCallbackListPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackListPool(EventCallbackListPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5818 };

  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* ___m_Stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackListPool, ___m_Stack) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackListPool, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackListPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackListPool*, "UnityEngine.UIElements", "EventCallbackListPool");
