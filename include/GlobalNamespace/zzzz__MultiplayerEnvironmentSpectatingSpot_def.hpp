#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerEnvironmentSpectatingSpot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerEnvironmentSpectatingSpot)
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerEnvironmentSpectatingSpot;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerEnvironmentSpectatingSpot
class CORDL_TYPE MultiplayerEnvironmentSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activePlayersTimeOffsetAverage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__activePlayersTimeOffsetAverage,
                      put = __cordl_internal_set__activePlayersTimeOffsetAverage)) ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* _activePlayersTimeOffsetAverage;

  /// @brief Field _displaySpotNumber, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__displaySpotNumber, put = __cordl_internal_set__displaySpotNumber)) bool _displaySpotNumber;

  /// @brief Field _preferredSpectatingSpot, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__preferredSpectatingSpot, put = __cordl_internal_set__preferredSpectatingSpot)) bool _preferredSpectatingSpot;

  /// @brief Field _spectatingSpotManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatingSpotManager,
                      put = __cordl_internal_set__spectatingSpotManager)) ::GlobalNamespace::MultiplayerSpectatingSpotManager* _spectatingSpotManager;

  /// @brief Field _spotNumber, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__spotNumber, put = __cordl_internal_set__spotNumber)) int32_t _spotNumber;

  /// @brief Field hasBeenRemovedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hasBeenRemovedEvent,
                      put = __cordl_internal_set_hasBeenRemovedEvent)) ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;

  __declspec(property(get = get_isMain)) bool isMain;

  __declspec(property(get = get_observable)) ::GlobalNamespace::IMultiplayerObservable* observable;

  __declspec(property(get = get_spotName)) ::StringW spotName;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr operator ::GlobalNamespace::IMultiplayerSpectatingSpot*() noexcept;

  /// @brief Method IMultiplayerSpectatingSpot.get_transform, addr 0x57d7d4c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> IMultiplayerSpectatingSpot_get_transform();

  static inline ::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot* New_ctor();

  /// @brief Method OnDisable, addr 0x57d7d24, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetIsObserved, addr 0x57d7d44, size 0x4, virtual true, abstract: false, final true
  inline void SetIsObserved(bool isObserved);

  /// @brief Method Start, addr 0x57d7d0c, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* const& __cordl_internal_get__activePlayersTimeOffsetAverage() const;

  constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*& __cordl_internal_get__activePlayersTimeOffsetAverage();

  constexpr bool const& __cordl_internal_get__displaySpotNumber() const;

  constexpr bool& __cordl_internal_get__displaySpotNumber();

  constexpr bool const& __cordl_internal_get__preferredSpectatingSpot() const;

  constexpr bool& __cordl_internal_get__preferredSpectatingSpot();

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager* const& __cordl_internal_get__spectatingSpotManager() const;

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& __cordl_internal_get__spectatingSpotManager();

  constexpr int32_t const& __cordl_internal_get__spotNumber() const;

  constexpr int32_t& __cordl_internal_get__spotNumber();

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const& __cordl_internal_get_hasBeenRemovedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __cordl_internal_get_hasBeenRemovedEvent();

  constexpr void __cordl_internal_set__activePlayersTimeOffsetAverage(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* value);

  constexpr void __cordl_internal_set__displaySpotNumber(bool value);

  constexpr void __cordl_internal_set__preferredSpectatingSpot(bool value);

  constexpr void __cordl_internal_set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value);

  constexpr void __cordl_internal_set__spotNumber(int32_t value);

  constexpr void __cordl_internal_set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method .ctor, addr 0x57d7d48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_hasBeenRemovedEvent, addr 0x57d7aa8, size 0xc0, virtual true, abstract: false, final true
  inline void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method get_isMain, addr 0x57d7d04, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMain();

  /// @brief Method get_observable, addr 0x57d7c28, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IMultiplayerObservable* get_observable();

  /// @brief Method get_spotName, addr 0x57d7c30, size 0xd4, virtual true, abstract: false, final true
  inline ::StringW get_spotName();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* i___GlobalNamespace__IMultiplayerSpectatingSpot() noexcept;

  /// @brief Method remove_hasBeenRemovedEvent, addr 0x57d7b68, size 0xc0, virtual true, abstract: false, final true
  inline void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEnvironmentSpectatingSpot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6203 };

  /// @brief Field _preferredSpectatingSpot, offset: 0x20, size: 0x1, def value: None
  bool ____preferredSpectatingSpot;

  /// @brief Field _displaySpotNumber, offset: 0x21, size: 0x1, def value: None
  bool ____displaySpotNumber;

  /// @brief Field _spotNumber, offset: 0x24, size: 0x4, def value: None
  int32_t ____spotNumber;

  /// @brief Field _spectatingSpotManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatingSpotManager* ____spectatingSpotManager;

  /// @brief Field _activePlayersTimeOffsetAverage, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* ____activePlayersTimeOffsetAverage;

  /// @brief Field hasBeenRemovedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ___hasBeenRemovedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ____preferredSpectatingSpot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ____displaySpotNumber) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ____spotNumber) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ____spectatingSpotManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ____activePlayersTimeOffsetAverage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, ___hasBeenRemovedEvent) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*, "", "MultiplayerEnvironmentSpectatingSpot");
