#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPreviewPlayerPauseOnInputFocusLost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongPreviewPlayerPauseOnInputFocusLost)
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPreviewPlayerPauseOnInputFocusLost;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*, "", "SongPreviewPlayerPauseOnInputFocusLost");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPreviewPlayerPauseOnInputFocusLost
class CORDL_TYPE SongPreviewPlayerPauseOnInputFocusLost : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _songPreviewPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::AudioPlayerBase> _songPreviewPlayer;

  /// @brief Field _xrSystemState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__xrSystemState, put = __cordl_internal_set__xrSystemState)) ::GlobalNamespace::IXRSystemState* _xrSystemState;

  /// @brief Method HandleSystemStateChange, addr 0x58bb920, size 0x84, virtual false, abstract: false, final false
  inline void HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType);

  static inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* New_ctor();

  /// @brief Method OnDestroy, addr 0x58bb7e4, size 0x13c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x58bb6c4, size 0x120, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__xrSystemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__xrSystemState();

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value);

  constexpr void __cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value);

  /// @brief Method .ctor, addr 0x58bb9a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPreviewPlayerPauseOnInputFocusLost();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5586 };

  /// @brief Field _songPreviewPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPlayerBase> ____songPreviewPlayer;

  /// @brief Field _xrSystemState, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____xrSystemState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, ____songPreviewPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, ____xrSystemState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
