#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationEventBase_1)
namespace UnityEngine::UIElements {
class INavigationEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class NavigationEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::NavigationEventBase_1);
// Type: UnityEngine.UIElements::NavigationEventBase`1
// SizeInfo { instance_size: 128, native_size: 124, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationEventBase`1<T>*
class CORDL_TYPE NavigationEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::INavigationEvent"
  constexpr operator ::UnityEngine::UIElements::INavigationEvent*() noexcept;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::NavigationEventBase_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::INavigationEvent"
  constexpr ::UnityEngine::UIElements::INavigationEvent* i___UnityEngine__UIElements__INavigationEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationEventBase_1(NavigationEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationEventBase_1(NavigationEventBase_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::NavigationEventBase_1, "UnityEngine.UIElements", "NavigationEventBase`1");
