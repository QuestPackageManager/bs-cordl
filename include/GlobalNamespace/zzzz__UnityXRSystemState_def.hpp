#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRSystemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UnityXRSystemState)
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityXRSystemState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityXRSystemState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityXRSystemState*, "", "UnityXRSystemState");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRSystemState
class CORDL_TYPE UnityXRSystemState : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hasInputFocus, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus_k__BackingField, put = __cordl_internal_set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _onChangeStateEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onChangeStateEvent, put = __cordl_internal_set__onChangeStateEvent)) ::System::Action_1<::GlobalNamespace::XRSystemEventType>* _onChangeStateEvent;

  /// @brief Field _userPresence, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresence, put = __cordl_internal_set__userPresence)) bool _userPresence;

  __declspec(property(get = get_hasHmdMounted)) bool hasHmdMounted;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus, put = set_hasVrFocus)) bool hasVrFocus;

  /// @brief Convert operator to "::GlobalNamespace::IXRSystemState"
  constexpr operator ::GlobalNamespace::IXRSystemState*() noexcept;

  /// @brief Method AddListener, addr 0x59f4070, size 0x9c, virtual true, abstract: false, final true
  inline void AddListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener, ::ArrayW<::GlobalNamespace::XRSystemEventType> initialStateChecks);

  /// @brief Method Awake, addr 0x59f41c8, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleRemovedXRNode, addr 0x59f43d0, size 0x30, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method InvokeStateChangeEventIfFocusEventsAreEnabled, addr 0x59f4188, size 0x1c, virtual false, abstract: false, final false
  static inline void InvokeStateChangeEventIfFocusEventsAreEnabled(::System::Action_1<::GlobalNamespace::XRSystemEventType>* action, ::GlobalNamespace::XRSystemEventType eventType);

  /// @brief Method IsCurrentStateMatchingEvent, addr 0x59f410c, size 0x7c, virtual false, abstract: false, final false
  inline bool IsCurrentStateMatchingEvent(::GlobalNamespace::XRSystemEventType eventType);

  static inline ::GlobalNamespace::UnityXRSystemState* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x59f4330, size 0x30, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method RefreshControllersReference, addr 0x59f41a8, size 0x20, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method RemoveListener, addr 0x59f41a4, size 0x4, virtual true, abstract: false, final true
  inline void RemoveListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener);

  /// @brief Method SetInputFocus, addr 0x59f4360, size 0x34, virtual false, abstract: false, final false
  inline void SetInputFocus(bool newInputFocus);

  /// @brief Method SetUserPresence, addr 0x59f4394, size 0x3c, virtual false, abstract: false, final false
  inline void SetUserPresence(bool newUserPresence);

  /// @brief Method Start, addr 0x59f4248, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x59f432c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateUserPresence, addr 0x59f4254, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateUserPresence();

  constexpr bool const& __cordl_internal_get__hasInputFocus() const;

  constexpr bool& __cordl_internal_get__hasInputFocus();

  constexpr bool const& __cordl_internal_get__hasVrFocus_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasVrFocus_k__BackingField();

  constexpr ::System::Action_1<::GlobalNamespace::XRSystemEventType>* const& __cordl_internal_get__onChangeStateEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::XRSystemEventType>*& __cordl_internal_get__onChangeStateEvent();

  constexpr bool const& __cordl_internal_get__userPresence() const;

  constexpr bool& __cordl_internal_get__userPresence();

  constexpr void __cordl_internal_set__hasInputFocus(bool value);

  constexpr void __cordl_internal_set__hasVrFocus_k__BackingField(bool value);

  constexpr void __cordl_internal_set__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value);

  constexpr void __cordl_internal_set__userPresence(bool value);

  /// @brief Method .ctor, addr 0x59f4400, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add__onChangeStateEvent, addr 0x59f3ed0, size 0xc0, virtual false, abstract: false, final false
  inline void add__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value);

  /// @brief Method get_hasHmdMounted, addr 0x59f4068, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasHmdMounted();

  /// @brief Method get_hasInputFocus, addr 0x59f4050, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x59f4058, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Convert to "::GlobalNamespace::IXRSystemState"
  constexpr ::GlobalNamespace::IXRSystemState* i___GlobalNamespace__IXRSystemState() noexcept;

  /// @brief Method remove__onChangeStateEvent, addr 0x59f3f90, size 0xc0, virtual false, abstract: false, final false
  inline void remove__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value);

  /// @brief Method set_hasVrFocus, addr 0x59f4060, size 0x8, virtual false, abstract: false, final false
  inline void set_hasVrFocus(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRSystemState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityXRSystemState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRSystemState(UnityXRSystemState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRSystemState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRSystemState(UnityXRSystemState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6270 };

  /// @brief Field _onChangeStateEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::XRSystemEventType>* ____onChangeStateEvent;

  /// @brief Field _userPresence, offset: 0x28, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field _hasInputFocus, offset: 0x29, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field <hasVrFocus>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____hasVrFocus_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRSystemState, ____onChangeStateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRSystemState, ____userPresence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRSystemState, ____hasInputFocus) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRSystemState, ____hasVrFocus_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityXRSystemState) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
