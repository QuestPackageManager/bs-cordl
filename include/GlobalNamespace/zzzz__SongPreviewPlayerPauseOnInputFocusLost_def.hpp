#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4083))
// CS Name: ::SongPreviewPlayerPauseOnInputFocusLost*
class CORDL_TYPE SongPreviewPlayerPauseOnInputFocusLost : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _songPreviewPlayer, offset 0x18, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::AudioPlayerBase* _songPreviewPlayer;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  constexpr ::GlobalNamespace::AudioPlayerBase*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method Start addr 0x223128c size 0x210 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x22314e0 size 0x1a4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleInputFocusCaptured addr 0x223149c size 0x44 virtual false final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased addr 0x2231684 size 0x44 virtual false final false
  inline void HandleInputFocusReleased();

  static inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* New_ctor();

  /// @brief Method .ctor addr 0x22316c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPreviewPlayerPauseOnInputFocusLost();

public:
  /// @brief Field _songPreviewPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AudioPlayerBase* ____songPreviewPlayer;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*, "", "SongPreviewPlayerPauseOnInputFocusLost");
