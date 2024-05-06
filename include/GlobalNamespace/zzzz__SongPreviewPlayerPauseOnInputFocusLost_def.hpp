#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPreviewPlayerPauseOnInputFocusLost.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongPreviewPlayerPauseOnInputFocusLost)
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPreviewPlayerPauseOnInputFocusLost;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost);
// Type: ::SongPreviewPlayerPauseOnInputFocusLost
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPreviewPlayerPauseOnInputFocusLost*
class CORDL_TYPE SongPreviewPlayerPauseOnInputFocusLost : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _songPreviewPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::AudioPlayerBase> _songPreviewPlayer;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method HandleInputFocusCaptured, addr 0x260b96c, size 0x44, virtual false, abstract: false, final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased, addr 0x260bb54, size 0x44, virtual false, abstract: false, final false
  inline void HandleInputFocusReleased();

  static inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* New_ctor();

  /// @brief Method OnDestroy, addr 0x260b9b0, size 0x1a4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x260b75c, size 0x210, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x260bb98, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _songPreviewPlayer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPlayerBase> ____songPreviewPlayer;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, ____songPreviewPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*, "", "SongPreviewPlayerPauseOnInputFocusLost");
