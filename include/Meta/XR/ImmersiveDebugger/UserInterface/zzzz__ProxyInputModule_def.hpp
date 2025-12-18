#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/ProxyInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProxyInputModule)
namespace GlobalNamespace {
class OVRCursor;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelInputModule;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyInputModule;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.ProxyInputModule
class CORDL_TYPE ProxyInputModule : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InputModule, put = set_InputModule)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> InputModule;

  /// @brief Field <InputModule>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InputModule_k__BackingField,
                      put = __cordl_internal_set__InputModule_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule>
      _InputModule_k__BackingField;

  /// @brief Field _cursor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cursor, put = __cordl_internal_set__cursor)) ::UnityW<::GlobalNamespace::OVRCursor> _cursor;

  /// @brief Field _eventSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSystem, put = __cordl_internal_set__eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> _eventSystem;

  /// @brief Field _owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__owner, put = __cordl_internal_set__owner)) ::UnityW<::UnityEngine::GameObject> _owner;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* New_ctor(::UnityEngine::GameObject* owner, ::GlobalNamespace::OVRCursor* cursor);

  /// @brief Method Refresh, addr 0x58a7cdc, size 0xb8, virtual false, abstract: false, final false
  inline bool Refresh();

  /// @brief Method SearchForEventSystem, addr 0x58a7d94, size 0xf4, virtual false, abstract: false, final false
  inline void SearchForEventSystem();

  /// @brief Method SetupEventSystem, addr 0x58a7e88, size 0xdc, virtual false, abstract: false, final false
  inline void SetupEventSystem(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method SetupInputModule, addr 0x58a7f64, size 0xc4, virtual false, abstract: false, final false
  inline void SetupInputModule(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* inputModule);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> const& __cordl_internal_get__InputModule_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule>& __cordl_internal_get__InputModule_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRCursor> const& __cordl_internal_get__cursor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCursor>& __cordl_internal_get__cursor();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__eventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__eventSystem();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__owner() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__owner();

  constexpr void __cordl_internal_set__InputModule_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> value);

  constexpr void __cordl_internal_set__cursor(::UnityW<::GlobalNamespace::OVRCursor> value);

  constexpr void __cordl_internal_set__eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set__owner(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x58a7cd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* owner, ::GlobalNamespace::OVRCursor* cursor);

  /// @brief Method get_InputModule, addr 0x58a7cc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> get_InputModule();

  /// @brief Method set_InputModule, addr 0x58a7ccc, size 0x8, virtual false, abstract: false, final false
  inline void set_InputModule(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyInputModule(ProxyInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyInputModule(ProxyInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18350 };

  /// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____owner;

  /// @brief Field _cursor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCursor> ____cursor;

  /// @brief Field _eventSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____eventSystem;

  /// @brief Field <InputModule>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule> ____InputModule_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule, ____owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule, ____cursor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule, ____eventSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule, ____InputModule_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule, 0x30>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*, "Meta.XR.ImmersiveDebugger.UserInterface", "ProxyInputModule");
