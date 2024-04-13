#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLeadPlayerProvider)
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLeadPlayerProvider);
// Type: ::MultiplayerLeadPlayerProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLeadPlayerProvider*
class CORDL_TYPE MultiplayerLeadPlayerProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _currentLeadingPlayerStartTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__currentLeadingPlayerStartTime, put = __cordl_internal_set__currentLeadingPlayerStartTime)) float_t _currentLeadingPlayerStartTime;

  /// @brief Field _currentlyDisplayedUser, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__currentlyDisplayedUser,
                      put = __cordl_internal_set__currentlyDisplayedUser))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _currentlyDisplayedUser;

  /// @brief Field _currentlyLeadingUser, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__currentlyLeadingUser,
                      put = __cordl_internal_set__currentlyLeadingUser))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _currentlyLeadingUser;

  /// @brief Field _multiplayerController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController))::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _scoreProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _timeToGainFirstLead, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToGainFirstLead, put = __cordl_internal_set__timeToGainFirstLead)) float_t _timeToGainFirstLead;

  /// @brief Field _timeToLooseLead, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToLooseLead, put = __cordl_internal_set__timeToLooseLead)) float_t _timeToLooseLead;

  /// @brief Field newLeaderWasSelectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_newLeaderWasSelectedEvent, put = __cordl_internal_set_newLeaderWasSelectedEvent))::System::Action_1<::StringW>* newLeaderWasSelectedEvent;

  /// @brief Method HandleFirstPlayerDidChange, addr 0x2610ac8, size 0xe8, virtual false, abstract: false, final false
  inline void HandleFirstPlayerDidChange(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* firstPlayer);

  /// @brief Method HandleStateChanged, addr 0x2610628, size 0x10, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerLeadPlayerProvider* New_ctor();

  /// @brief Method OnDestroy, addr 0x2610638, size 0x160, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2610578, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartProviding, addr 0x2610a2c, size 0x9c, virtual false, abstract: false, final false
  inline void StartProviding();

  /// @brief Method StopProviding, addr 0x2610994, size 0x98, virtual false, abstract: false, final false
  inline void StopProviding();

  /// @brief Method Update, addr 0x2610848, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__currentLeadingPlayerStartTime() const;

  constexpr float_t& __cordl_internal_get__currentLeadingPlayerStartTime();

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __cordl_internal_get__currentlyDisplayedUser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __cordl_internal_get__currentlyDisplayedUser() const;

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __cordl_internal_get__currentlyLeadingUser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __cordl_internal_get__currentlyLeadingUser() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr float_t const& __cordl_internal_get__timeToGainFirstLead() const;

  constexpr float_t& __cordl_internal_get__timeToGainFirstLead();

  constexpr float_t const& __cordl_internal_get__timeToLooseLead() const;

  constexpr float_t& __cordl_internal_get__timeToLooseLead();

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_newLeaderWasSelectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_newLeaderWasSelectedEvent() const;

  constexpr void __cordl_internal_set__currentLeadingPlayerStartTime(float_t value);

  constexpr void __cordl_internal_set__currentlyDisplayedUser(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  constexpr void __cordl_internal_set__currentlyLeadingUser(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__timeToGainFirstLead(float_t value);

  constexpr void __cordl_internal_set__timeToLooseLead(float_t value);

  constexpr void __cordl_internal_set_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2610cb0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_newLeaderWasSelectedEvent, addr 0x260d510, size 0xb0, virtual false, abstract: false, final false
  inline void add_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_newLeaderWasSelectedEvent, addr 0x260d2fc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeadPlayerProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider const&) = delete;

  /// @brief Field _timeToGainFirstLead, offset: 0x18, size: 0x4, def value: None
  float_t ____timeToGainFirstLead;

  /// @brief Field _timeToLooseLead, offset: 0x1c, size: 0x4, def value: None
  float_t ____timeToLooseLead;

  /// @brief Field _scoreProvider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _multiplayerController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field newLeaderWasSelectedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___newLeaderWasSelectedEvent;

  /// @brief Field _currentLeadingPlayerStartTime, offset: 0x38, size: 0x4, def value: None
  float_t ____currentLeadingPlayerStartTime;

  /// @brief Field _currentlyDisplayedUser, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* ____currentlyDisplayedUser;

  /// @brief Field _currentlyLeadingUser, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* ____currentlyLeadingUser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLeadPlayerProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____timeToGainFirstLead) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____timeToLooseLead) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____scoreProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____multiplayerController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ___newLeaderWasSelectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____currentLeadingPlayerStartTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____currentlyDisplayedUser) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeadPlayerProvider, ____currentlyLeadingUser) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeadPlayerProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeadPlayerProvider*, "", "MultiplayerLeadPlayerProvider");
