#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
CORDL_MODULE_EXPORT(NavigationEventBase_1)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class INavigationEvent;
}
namespace UnityEngine::UIElements {
struct NavigationDeviceType;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class NavigationEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::NavigationEventBase_1);
// Dependencies UnityEngine.EventModifiers, UnityEngine.UIElements.EventBase`1<T>, UnityEngine.UIElements.NavigationDeviceType
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationEventBase`1<T>
class CORDL_TYPE NavigationEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <deviceType>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__deviceType_k__BackingField,
                      put = __cordl_internal_set__deviceType_k__BackingField)) ::UnityEngine::UIElements::NavigationDeviceType _deviceType_k__BackingField;

  /// @brief Field <modifiers>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__modifiers_k__BackingField, put = __cordl_internal_set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers _modifiers_k__BackingField;

  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_deviceType, put = set_deviceType)) ::UnityEngine::UIElements::NavigationDeviceType deviceType;

  __declspec(property(get = get_modifiers, put = set_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  /// @brief Convert operator to "::UnityEngine::UIElements::INavigationEvent"
  constexpr operator ::UnityEngine::UIElements::INavigationEvent*() noexcept;

  /// @brief Method Dispatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::NavigationDeviceType deviceType, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::EventModifiers modifiers);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::NavigationEventBase_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::NavigationDeviceType const& __cordl_internal_get__deviceType_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::NavigationDeviceType& __cordl_internal_get__deviceType_k__BackingField();

  constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get__modifiers_k__BackingField() const;

  constexpr ::UnityEngine::EventModifiers& __cordl_internal_get__modifiers_k__BackingField();

  constexpr void __cordl_internal_set__deviceType_k__BackingField(::UnityEngine::UIElements::NavigationDeviceType value);

  constexpr void __cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_altKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_altKey();

  /// @brief Method get_deviceType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationDeviceType get_deviceType();

  /// @brief Method get_modifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_shiftKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_shiftKey();

  /// @brief Convert to "::UnityEngine::UIElements::INavigationEvent"
  constexpr ::UnityEngine::UIElements::INavigationEvent* i___UnityEngine__UIElements__INavigationEvent() noexcept;

  /// @brief Method set_deviceType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_deviceType(::UnityEngine::UIElements::NavigationDeviceType value);

  /// @brief Method set_modifiers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4517 };

  /// @brief Field <modifiers>k__BackingField, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ____modifiers_k__BackingField;

  /// @brief Field <deviceType>k__BackingField, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::UIElements::NavigationDeviceType ____deviceType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::NavigationEventBase_1, "UnityEngine.UIElements", "NavigationEventBase`1");
