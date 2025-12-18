#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/DebugManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugManager)
namespace GlobalNamespace {
class OVRSampledEventSender;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager_ShouldRetrieveInstanceDelegate;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager___c;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager_ShouldRetrieveInstanceDelegate;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager___c;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::DebugManager);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c);
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.DebugManager/ShouldRetrieveInstanceDelegate
class CORDL_TYPE DebugManager_ShouldRetrieveInstanceDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x58b3720, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x58b373c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x58b370c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x58b36a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager_ShouldRetrieveInstanceDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager_ShouldRetrieveInstanceDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager_ShouldRetrieveInstanceDelegate(DebugManager_ShouldRetrieveInstanceDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager_ShouldRetrieveInstanceDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager_ShouldRetrieveInstanceDelegate(DebugManager_ShouldRetrieveInstanceDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.DebugManager/<>c
class CORDL_TYPE DebugManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* __9;

  /// @brief Field <>9__43_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__43_0, put = setStaticF___9__43_0)) ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* __9__43_0;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* New_ctor();

  /// @brief Method <.ctor>b__43_0, addr 0x58b37b8, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker __ctor_b__43_0(::GlobalNamespace::OVRTelemetryMarker marker);

  /// @brief Method .ctor, addr 0x58b37b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* getStaticF___9__43_0();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* value);

  static inline void setStaticF___9__43_0(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager___c(DebugManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager___c(DebugManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.DebugManager
class CORDL_TYPE DebugManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ShouldRetrieveInstanceDelegate = ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate;

  using __c = ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c;

  /// @brief Field CustomShouldRetrieveInstanceCondition, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_CustomShouldRetrieveInstanceCondition,
      put = __cordl_internal_set_CustomShouldRetrieveInstanceCondition)) ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* CustomShouldRetrieveInstanceCondition;

  /// @brief Field InstanceCache, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_InstanceCache, put = __cordl_internal_set_InstanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* InstanceCache;

  /// @brief Field OnDisableAction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnDisableAction, put = __cordl_internal_set_OnDisableAction)) ::System::Action* OnDisableAction;

  /// @brief Field OnFocusLostAction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnFocusLostAction, put = __cordl_internal_set_OnFocusLostAction)) ::System::Action* OnFocusLostAction;

  /// @brief Field OnReady, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnReady, put = setStaticF_OnReady)) ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* OnReady;

  /// @brief Field OnUpdateAction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_OnUpdateAction, put = __cordl_internal_set_OnUpdateAction)) ::System::Action* OnUpdateAction;

  /// @brief Field ShouldRetrieveInstances, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_ShouldRetrieveInstances, put = __cordl_internal_set_ShouldRetrieveInstances)) bool ShouldRetrieveInstances;

  /// @brief Field SubDebugManagers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_SubDebugManagers,
                      put = __cordl_internal_set_SubDebugManagers)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* SubDebugManagers;

  __declspec(property(get = get_UiPanel, put = set_UiPanel)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* UiPanel;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> _Instance_k__BackingField;

  /// @brief Field <UiPanel>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__UiPanel_k__BackingField,
                      put = __cordl_internal_set__UiPanel_k__BackingField)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* _UiPanel_k__BackingField;

  /// @brief Field _frameUpdateRecorder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__frameUpdateRecorder, put = __cordl_internal_set__frameUpdateRecorder)) ::GlobalNamespace::OVRSampledEventSender* _frameUpdateRecorder;

  /// @brief Field _lastRetrievedTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__lastRetrievedTime, put = __cordl_internal_set__lastRetrievedTime)) float_t _lastRetrievedTime;

  /// @brief Method Awake, addr 0x58b2b20, size 0x164, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x58b2300, size 0x4c, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method InitSubManagers, addr 0x58b31a8, size 0xb8, virtual true, abstract: false, final false
  inline void InitSubManagers();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x58b3068, size 0x20, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDestroy, addr 0x58b30a4, size 0xac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x58b3088, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ProcessLoadedTypeBySubManagers, addr 0x58b3260, size 0x184, virtual false, abstract: false, final false
  inline void ProcessLoadedTypeBySubManagers(::System::Type* type);

  /// @brief Method RegisterManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TManagerType> inline void RegisterManager();

  /// @brief Method RegisterTypesFromInspectedData, addr 0x58b2e2c, size 0x16c, virtual false, abstract: false, final false
  inline void RegisterTypesFromInspectedData();

  /// @brief Method RetrieveInstancesIfNeeded, addr 0x58b2f98, size 0xd0, virtual false, abstract: false, final false
  inline void RetrieveInstancesIfNeeded();

  /// @brief Method Start, addr 0x58b2c84, size 0x1a8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterInspector, addr 0x58b33e4, size 0x128, virtual false, abstract: false, final false
  inline void UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  /// @brief Method Update, addr 0x58b3150, size 0x58, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* const& __cordl_internal_get_CustomShouldRetrieveInstanceCondition() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*& __cordl_internal_get_CustomShouldRetrieveInstanceCondition();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get_InstanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get_InstanceCache();

  constexpr ::System::Action* const& __cordl_internal_get_OnDisableAction() const;

  constexpr ::System::Action*& __cordl_internal_get_OnDisableAction();

  constexpr ::System::Action* const& __cordl_internal_get_OnFocusLostAction() const;

  constexpr ::System::Action*& __cordl_internal_get_OnFocusLostAction();

  constexpr ::System::Action* const& __cordl_internal_get_OnUpdateAction() const;

  constexpr ::System::Action*& __cordl_internal_get_OnUpdateAction();

  constexpr bool const& __cordl_internal_get_ShouldRetrieveInstances() const;

  constexpr bool& __cordl_internal_get_ShouldRetrieveInstances();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const& __cordl_internal_get_SubDebugManagers() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*& __cordl_internal_get_SubDebugManagers();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& __cordl_internal_get__UiPanel_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& __cordl_internal_get__UiPanel_k__BackingField();

  constexpr ::GlobalNamespace::OVRSampledEventSender* const& __cordl_internal_get__frameUpdateRecorder() const;

  constexpr ::GlobalNamespace::OVRSampledEventSender*& __cordl_internal_get__frameUpdateRecorder();

  constexpr float_t const& __cordl_internal_get__lastRetrievedTime() const;

  constexpr float_t& __cordl_internal_get__lastRetrievedTime();

  constexpr void __cordl_internal_set_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value);

  constexpr void __cordl_internal_set_InstanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set_OnDisableAction(::System::Action* value);

  constexpr void __cordl_internal_set_OnFocusLostAction(::System::Action* value);

  constexpr void __cordl_internal_set_OnUpdateAction(::System::Action* value);

  constexpr void __cordl_internal_set_ShouldRetrieveInstances(bool value);

  constexpr void __cordl_internal_set_SubDebugManagers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value);

  constexpr void __cordl_internal_set__UiPanel_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

  constexpr void __cordl_internal_set__frameUpdateRecorder(::GlobalNamespace::OVRSampledEventSender* value);

  constexpr void __cordl_internal_set__lastRetrievedTime(float_t value);

  /// @brief Method .ctor, addr 0x58b350c, size 0x198, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_CustomShouldRetrieveInstanceCondition, addr 0x58b29b8, size 0xac, virtual false, abstract: false, final false
  inline void add_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value);

  /// @brief Method add_OnDisableAction, addr 0x58b2708, size 0xac, virtual false, abstract: false, final false
  inline void add_OnDisableAction(::System::Action* value);

  /// @brief Method add_OnFocusLostAction, addr 0x58b25b0, size 0xac, virtual false, abstract: false, final false
  inline void add_OnFocusLostAction(::System::Action* value);

  /// @brief Method add_OnReady, addr 0x58b23e8, size 0xe4, virtual false, abstract: false, final false
  static inline void add_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value);

  /// @brief Method add_OnUpdateAction, addr 0x58b2860, size 0xac, virtual false, abstract: false, final false
  inline void add_OnUpdateAction(::System::Action* value);

  static inline ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* getStaticF_OnReady();

  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> getStaticF__Instance_k__BackingField();

  /// @brief Method get_Instance, addr 0x58b234c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> get_Instance();

  /// @brief Method get_UiPanel, addr 0x58b2b10, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* get_UiPanel();

  /// @brief Method remove_CustomShouldRetrieveInstanceCondition, addr 0x58b2a64, size 0xac, virtual false, abstract: false, final false
  inline void remove_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value);

  /// @brief Method remove_OnDisableAction, addr 0x58b27b4, size 0xac, virtual false, abstract: false, final false
  inline void remove_OnDisableAction(::System::Action* value);

  /// @brief Method remove_OnFocusLostAction, addr 0x58b265c, size 0xac, virtual false, abstract: false, final false
  inline void remove_OnFocusLostAction(::System::Action* value);

  /// @brief Method remove_OnReady, addr 0x58b24cc, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value);

  /// @brief Method remove_OnUpdateAction, addr 0x58b290c, size 0xac, virtual false, abstract: false, final false
  inline void remove_OnUpdateAction(::System::Action* value);

  static inline void setStaticF_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value);

  static inline void setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> value);

  /// @brief Method set_Instance, addr 0x58b2398, size 0x50, virtual false, abstract: false, final false
  static inline void set_Instance(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* value);

  /// @brief Method set_UiPanel, addr 0x58b2b18, size 0x8, virtual false, abstract: false, final false
  inline void set_UiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManager(DebugManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManager(DebugManager const&) = delete;

  /// @brief Field RetrievalIntervalInSec offset 0xffffffff size 0x4
  static constexpr float_t RetrievalIntervalInSec{ static_cast<float_t>(1.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18396 };

  /// @brief Field OnFocusLostAction, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___OnFocusLostAction;

  /// @brief Field OnDisableAction, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___OnDisableAction;

  /// @brief Field OnUpdateAction, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___OnUpdateAction;

  /// @brief Field CustomShouldRetrieveInstanceCondition, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* ___CustomShouldRetrieveInstanceCondition;

  /// @brief Field InstanceCache, offset: 0x40, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ___InstanceCache;

  /// @brief Field SubDebugManagers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* ___SubDebugManagers;

  /// @brief Field ShouldRetrieveInstances, offset: 0x50, size: 0x1, def value: None
  bool ___ShouldRetrieveInstances;

  /// @brief Field _lastRetrievedTime, offset: 0x54, size: 0x4, def value: None
  float_t ____lastRetrievedTime;

  /// @brief Field _frameUpdateRecorder, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OVRSampledEventSender* ____frameUpdateRecorder;

  /// @brief Field <UiPanel>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* ____UiPanel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___OnFocusLostAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___OnDisableAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___OnUpdateAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___CustomShouldRetrieveInstanceCondition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___InstanceCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___SubDebugManagers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ___ShouldRetrieveInstances) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ____lastRetrievedTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ____frameUpdateRecorder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::DebugManager, ____UiPanel_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::DebugManager, 0x68>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::DebugManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::DebugManager*, "Meta.XR.ImmersiveDebugger.Manager", "DebugManager");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*, "Meta.XR.ImmersiveDebugger.Manager", "DebugManager/ShouldRetrieveInstanceDelegate");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*, "Meta.XR.ImmersiveDebugger.Manager", "DebugManager/<>c");
