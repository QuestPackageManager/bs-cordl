#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\OculusAdvancedHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusAdvancedHapticFeedbackPlayer)
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace BeatSaber::Haptics {
class IHapticFeedbackPlayer;
}
namespace BeatSaber::Haptics {
class OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace Oculus::Haptics {
class HapticClipPlayer;
}
namespace Oculus::Haptics {
class HapticClip;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class OculusAdvancedHapticFeedbackPlayer;
}
namespace BeatSaber::Haptics {
class OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*);
MARK_REF_T(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer*, "BeatSaber.Haptics", "OculusAdvancedHapticFeedbackPlayer");
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*, "BeatSaber.Haptics", "OculusAdvancedHapticFeedbackPlayer/HapticPlayerState");
// Dependencies System.Object
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.OculusAdvancedHapticFeedbackPlayer/HapticPlayerState
class CORDL_TYPE OculusAdvancedHapticFeedbackPlayer_HapticPlayerState : public ::System::Object {
public:
  // Declarations
  /// @brief Field isPlayingLoopingClip, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isPlayingLoopingClip, put = __cordl_internal_set_isPlayingLoopingClip)) bool isPlayingLoopingClip;

  /// @brief Field lastFrameTriggered, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lastFrameTriggered, put = __cordl_internal_set_lastFrameTriggered)) int32_t lastFrameTriggered;

  /// @brief Field player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player)) ::Oculus::Haptics::HapticClipPlayer* player;

  static inline ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState* New_ctor();

  constexpr bool const& __cordl_internal_get_isPlayingLoopingClip() const;

  constexpr bool& __cordl_internal_get_isPlayingLoopingClip();

  constexpr int32_t const& __cordl_internal_get_lastFrameTriggered() const;

  constexpr int32_t& __cordl_internal_get_lastFrameTriggered();

  constexpr ::Oculus::Haptics::HapticClipPlayer* const& __cordl_internal_get_player() const;

  constexpr ::Oculus::Haptics::HapticClipPlayer*& __cordl_internal_get_player();

  constexpr void __cordl_internal_set_isPlayingLoopingClip(bool value);

  constexpr void __cordl_internal_set_lastFrameTriggered(int32_t value);

  constexpr void __cordl_internal_set_player(::Oculus::Haptics::HapticClipPlayer* value);

  /// @brief Method .ctor, addr 0x3298180, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusAdvancedHapticFeedbackPlayer_HapticPlayerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusAdvancedHapticFeedbackPlayer_HapticPlayerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusAdvancedHapticFeedbackPlayer_HapticPlayerState(OculusAdvancedHapticFeedbackPlayer_HapticPlayerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusAdvancedHapticFeedbackPlayer_HapticPlayerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusAdvancedHapticFeedbackPlayer_HapticPlayerState(OculusAdvancedHapticFeedbackPlayer_HapticPlayerState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23190 };

  /// @brief Field player, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Haptics::HapticClipPlayer* ___player;

  /// @brief Field lastFrameTriggered, offset: 0x18, size: 0x4, def value: None
  int32_t ___lastFrameTriggered;

  /// @brief Field isPlayingLoopingClip, offset: 0x1c, size: 0x1, def value: None
  bool ___isPlayingLoopingClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___lastFrameTriggered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___isPlayingLoopingClip) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Haptics
// Dependencies System.Nullable`1<T>, System.Object
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.OculusAdvancedHapticFeedbackPlayer
class CORDL_TYPE OculusAdvancedHapticFeedbackPlayer : public ::System::Object {
public:
  // Declarations
  using HapticPlayerState = ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;

  /// @brief Field _hapticPlayerStatesDictionary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticPlayerStatesDictionary, put = __cordl_internal_set__hapticPlayerStatesDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>, ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*
      _hapticPlayerStatesDictionary;

  /// @brief Field _hasAtLeastOneLoopingClipPlaying, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__hasAtLeastOneLoopingClipPlaying, put = __cordl_internal_set__hasAtLeastOneLoopingClipPlaying)) bool _hasAtLeastOneLoopingClipPlaying;

  /// @brief Field _isLeftHandSupported, offset 0x21, size 0x2
  __declspec(property(get = __cordl_internal_get__isLeftHandSupported, put = __cordl_internal_set__isLeftHandSupported)) ::System::Nullable_1<bool> _isLeftHandSupported;

  /// @brief Field _isRightHandSupported, offset 0x23, size 0x2
  __declspec(property(get = __cordl_internal_get__isRightHandSupported, put = __cordl_internal_set__isRightHandSupported)) ::System::Nullable_1<bool> _isRightHandSupported;

  /// @brief Field _vrPlatformHelper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Convert operator to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
  constexpr operator ::BeatSaber::Haptics::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x32981bc, size 0x1d4, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method Dispose, addr 0x329851c, size 0x1ec, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetHapticClip, addr 0x3298184, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityW<::Oculus::Haptics::HapticClip> GetHapticClip(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  /// @brief Method HandleApplicationQuitting, addr 0x3298944, size 0x70, virtual false, abstract: false, final false
  inline void HandleApplicationQuitting();

  /// @brief Method Initialize, addr 0x3298474, size 0xa8, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method IsOculusTouchController, addr 0x32988bc, size 0x88, virtual false, abstract: false, final false
  static inline bool IsOculusTouchController(::UnityEngine::XR::XRNode node);

  static inline ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x3297ea4, size 0x2dc, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  /// @brief Method Tick, addr 0x3298708, size 0x1b4, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                         ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* const&
  __cordl_internal_get__hapticPlayerStatesDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                         ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*&
  __cordl_internal_get__hapticPlayerStatesDictionary();

  constexpr bool const& __cordl_internal_get__hasAtLeastOneLoopingClipPlaying() const;

  constexpr bool& __cordl_internal_get__hasAtLeastOneLoopingClipPlaying();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isLeftHandSupported() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isLeftHandSupported();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isRightHandSupported() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isRightHandSupported();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void
  __cordl_internal_set__hapticPlayerStatesDictionary(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                                                                  ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* value);

  constexpr void __cordl_internal_set__hasAtLeastOneLoopingClipPlaying(bool value);

  constexpr void __cordl_internal_set__isLeftHandSupported(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__isRightHandSupported(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x32989b4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
  constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* i___BeatSaber__Haptics__IHapticFeedbackPlayer() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusAdvancedHapticFeedbackPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusAdvancedHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusAdvancedHapticFeedbackPlayer(OculusAdvancedHapticFeedbackPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusAdvancedHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusAdvancedHapticFeedbackPlayer(OculusAdvancedHapticFeedbackPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23191 };

  /// @brief Field _vrPlatformHelper, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _hapticPlayerStatesDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::BeatSaber::Haptics::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                               ::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* ____hapticPlayerStatesDictionary;

  /// @brief Field _hasAtLeastOneLoopingClipPlaying, offset: 0x20, size: 0x1, def value: None
  bool ____hasAtLeastOneLoopingClipPlaying;

  /// @brief Field _isLeftHandSupported, offset: 0x21, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isLeftHandSupported;

  /// @brief Field _isRightHandSupported, offset: 0x23, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isRightHandSupported;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer, ____vrPlatformHelper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer, ____hapticPlayerStatesDictionary) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer, ____hasAtLeastOneLoopingClipPlaying) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer, ____isLeftHandSupported) == 0x21, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer, ____isRightHandSupported) == 0x23, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::OculusAdvancedHapticFeedbackPlayer) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Haptics
