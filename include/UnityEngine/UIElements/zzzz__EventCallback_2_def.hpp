#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallback_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(EventCallback_2)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TEventType, typename TCallbackArgs> class EventCallback_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallback_2);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// cpp template
template <typename TEventType, typename TCallbackArgs>
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallback`2<TEventType,TCallbackArgs>
class CORDL_TYPE EventCallback_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(TEventType evt, TCallbackArgs userArgs);

  static inline ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallback_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallback_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallback_2(EventCallback_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallback_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallback_2(EventCallback_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5809 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallback_2, "UnityEngine.UIElements", "EventCallback`2");
