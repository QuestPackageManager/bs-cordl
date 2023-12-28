#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLeadPlayerProvider)
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5216))
// CS Name: ::MultiplayerLeadPlayerProvider*
class CORDL_TYPE MultiplayerLeadPlayerProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _timeToGainFirstLead, offset 0x18, size 0x4
  __declspec(property(get = __get__timeToGainFirstLead, put = __set__timeToGainFirstLead)) float_t _timeToGainFirstLead;

  /// @brief Field _timeToLooseLead, offset 0x1c, size 0x4
  __declspec(property(get = __get__timeToLooseLead, put = __set__timeToLooseLead)) float_t _timeToLooseLead;

  /// @brief Field _scoreProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _multiplayerController, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field newLeaderWasSelectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_newLeaderWasSelectedEvent, put = __set_newLeaderWasSelectedEvent))::System::Action_1<::StringW>* newLeaderWasSelectedEvent;

  /// @brief Field _currentLeadingPlayerStartTime, offset 0x38, size 0x4
  __declspec(property(get = __get__currentLeadingPlayerStartTime, put = __set__currentLeadingPlayerStartTime)) float_t _currentLeadingPlayerStartTime;

  /// @brief Field _currentlyDisplayedUser, offset 0x40, size 0x8
  __declspec(property(get = __get__currentlyDisplayedUser, put = __set__currentlyDisplayedUser))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _currentlyDisplayedUser;

  /// @brief Field _currentlyLeadingUser, offset 0x48, size 0x8
  __declspec(property(get = __get__currentlyLeadingUser, put = __set__currentlyLeadingUser))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _currentlyLeadingUser;

  constexpr float_t& __get__timeToGainFirstLead();

  constexpr float_t const& __get__timeToGainFirstLead() const;

  constexpr void __set__timeToGainFirstLead(float_t value);

  constexpr float_t& __get__timeToLooseLead();

  constexpr float_t const& __get__timeToLooseLead() const;

  constexpr void __set__timeToLooseLead(float_t value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::System::Action_1<::StringW>*& __get_newLeaderWasSelectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_newLeaderWasSelectedEvent() const;

  constexpr void __set_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

  constexpr float_t& __get__currentLeadingPlayerStartTime();

  constexpr float_t const& __get__currentLeadingPlayerStartTime() const;

  constexpr void __set__currentLeadingPlayerStartTime(float_t value);

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __get__currentlyDisplayedUser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __get__currentlyDisplayedUser() const;

  constexpr void __set__currentlyDisplayedUser(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __get__currentlyLeadingUser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __get__currentlyLeadingUser() const;

  constexpr void __set__currentlyLeadingUser(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  /// @brief Method add_newLeaderWasSelectedEvent addr 0x224ccf8 size 0xb0 virtual false final false
  inline void add_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_newLeaderWasSelectedEvent addr 0x224cae4 size 0xb0 virtual false final false
  inline void remove_newLeaderWasSelectedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method Start addr 0x224fd60 size 0xb0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x224fe20 size 0x160 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x2250030 size 0x94 virtual false final false
  inline void Update();

  /// @brief Method StopProviding addr 0x225017c size 0x98 virtual false final false
  inline void StopProviding();

  /// @brief Method StartProviding addr 0x2250214 size 0x9c virtual false final false
  inline void StartProviding();

  /// @brief Method HandleStateChanged addr 0x224fe10 size 0x10 virtual false final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method HandleFirstPlayerDidChange addr 0x22502b0 size 0xe8 virtual false final false
  inline void HandleFirstPlayerDidChange(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* firstPlayer);

  static inline ::GlobalNamespace::MultiplayerLeadPlayerProvider* New_ctor();

  /// @brief Method .ctor addr 0x2250498 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeadPlayerProvider();

public:
  /// @brief Field _timeToGainFirstLead, offset: 0x18, size: 0x4, def value: None
  float_t ____timeToGainFirstLead;

  /// @brief Field _timeToLooseLead, offset: 0x1c, size: 0x4, def value: None
  float_t ____timeToLooseLead;

  /// @brief Field _scoreProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _multiplayerController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeadPlayerProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeadPlayerProvider*, "", "MultiplayerLeadPlayerProvider");
