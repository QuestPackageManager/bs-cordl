#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/PanelInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PanelInputModule)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Interface;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelInputModule_RaycastComparer;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelRaycaster;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_FramePressState;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseState;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelInputModule;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelInputModule_RaycastComparer;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule/RaycastComparer
class CORDL_TYPE PanelInputModule_RaycastComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*() noexcept;

  /// @brief Method Compare, addr 0x58a7480, size 0x234, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer* New_ctor();

  /// @brief Method .ctor, addr 0x58a747c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__EventSystems__RaycastResult_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelInputModule_RaycastComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelInputModule_RaycastComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelInputModule_RaycastComparer(PanelInputModule_RaycastComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelInputModule_RaycastComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelInputModule_RaycastComparer(PanelInputModule_RaycastComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
// Dependencies OVRInput::Controller, OVRPlugin::HandState, UnityEngine.EventSystems.OVRInputModule
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule
class CORDL_TYPE PanelInputModule : public ::UnityEngine::EventSystems::OVRInputModule {
public:
  // Declarations
  using RaycastComparer = ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer;

  /// @brief Field Processing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_Processing, put = setStaticF_Processing)) bool Processing;

  /// @brief Field _comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__comparer, put = setStaticF__comparer)) ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* _comparer;

  /// @brief Field _controller, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__controller, put = __cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller _controller;

  /// @brief Field _debugInterface, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__debugInterface, put = __cordl_internal_set__debugInterface)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface>
      _debugInterface;

  /// @brief Field _handState, offset 0xffffffff, size 0x80
  __declspec(property(get = getStaticF__handState, put = setStaticF__handState)) ::GlobalNamespace::OVRPlugin_HandState _handState;

  /// @brief Field _raycasters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__raycasters,
                      put = setStaticF__raycasters)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>* _raycasters;

  /// @brief Method Awake, addr 0x58a64d8, size 0xac, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ChooseBestController, addr 0x58a6fdc, size 0x128, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_Controller ChooseBestController(::GlobalNamespace::OVRInput_Controller previousController);

  /// @brief Method ComputeControllerState, addr 0x58a6e34, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventSystems::PointerEventData_FramePressState ComputeControllerState(::GlobalNamespace::OVRInput_Controller controller);

  /// @brief Method GetMouseStateFromRaycast, addr 0x58a68ec, size 0x548, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMouseStateFromRaycast(::GlobalNamespace::OVRInput_Controller controller, ::UnityEngine::Transform* rayOrigin);

  /// @brief Method IsModuleSupported, addr 0x58a658c, size 0x8, virtual true, abstract: false, final false
  inline bool IsModuleSupported();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* New_ctor();

  /// @brief Method Process, addr 0x58a6f04, size 0xd8, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method Raycast, addr 0x58a662c, size 0x244, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::EventSystems::PointerEventData* data, ::ByRef<::UnityEngine::EventSystems::RaycastResult> raycast);

  /// @brief Method RegisterRaycaster, addr 0x58a62d8, size 0x11c, virtual false, abstract: false, final false
  static inline void RegisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster);

  /// @brief Method SetDebugInterface, addr 0x58a64d0, size 0x8, virtual false, abstract: false, final false
  inline void SetDebugInterface(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface* debugInterface);

  /// @brief Method ShouldActivateModule, addr 0x58a6584, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldActivateModule();

  /// @brief Method UnregisterRaycaster, addr 0x58a63f4, size 0xdc, virtual false, abstract: false, final false
  static inline void UnregisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster);

  /// @brief Method Update, addr 0x58a6594, size 0x98, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRayTransform, addr 0x58a7104, size 0x234, virtual false, abstract: false, final false
  inline void UpdateRayTransform(::UnityEngine::Transform* rayTransform, ::GlobalNamespace::OVRInput_Controller controller);

  constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

  constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> const& __cordl_internal_get__debugInterface() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface>& __cordl_internal_get__debugInterface();

  constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller value);

  constexpr void __cordl_internal_set__debugInterface(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> value);

  /// @brief Method .ctor, addr 0x58a7338, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_Processing();

  static inline ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF__comparer();

  static inline ::GlobalNamespace::OVRPlugin_HandState getStaticF__handState();

  static inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>* getStaticF__raycasters();

  static inline void setStaticF_Processing(bool value);

  static inline void setStaticF__comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* value);

  static inline void setStaticF__handState(::GlobalNamespace::OVRPlugin_HandState value);

  static inline void setStaticF__raycasters(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelInputModule(PanelInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelInputModule(PanelInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18346 };

  /// @brief Field _debugInterface, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> ____debugInterface;

  /// @brief Field _controller, offset: 0x110, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Controller ____controller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule, ____debugInterface) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule, ____controller) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule, 0x118>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*, "Meta.XR.ImmersiveDebugger.UserInterface", "PanelInputModule");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*, "Meta.XR.ImmersiveDebugger.UserInterface", "PanelInputModule/RaycastComparer");
