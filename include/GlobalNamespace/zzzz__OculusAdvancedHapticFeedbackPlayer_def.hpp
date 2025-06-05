#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusAdvancedHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusAdvancedHapticFeedbackPlayer)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;
}
namespace GlobalNamespace {
class OculusVRHelper;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
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
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusAdvancedHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer);
MARK_REF_PTR_T(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusAdvancedHapticFeedbackPlayer/HapticPlayerState
class CORDL_TYPE OculusAdvancedHapticFeedbackPlayer_HapticPlayerState : public ::System::Object {
public:
  // Declarations
  /// @brief Field isPlayingLoopingClip, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isPlayingLoopingClip, put = __cordl_internal_set_isPlayingLoopingClip)) bool isPlayingLoopingClip;

  /// @brief Field lastFrameTriggered, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lastFrameTriggered, put = __cordl_internal_set_lastFrameTriggered)) int32_t lastFrameTriggered;

  /// @brief Field player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player)) ::Oculus::Haptics::HapticClipPlayer* player;

  static inline ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState* New_ctor();

  constexpr bool const& __cordl_internal_get_isPlayingLoopingClip() const;

  constexpr bool& __cordl_internal_get_isPlayingLoopingClip();

  constexpr int32_t const& __cordl_internal_get_lastFrameTriggered() const;

  constexpr int32_t& __cordl_internal_get_lastFrameTriggered();

  constexpr ::Oculus::Haptics::HapticClipPlayer* const& __cordl_internal_get_player() const;

  constexpr ::Oculus::Haptics::HapticClipPlayer*& __cordl_internal_get_player();

  constexpr void __cordl_internal_set_isPlayingLoopingClip(bool value);

  constexpr void __cordl_internal_set_lastFrameTriggered(int32_t value);

  constexpr void __cordl_internal_set_player(::Oculus::Haptics::HapticClipPlayer* value);

  /// @brief Method .ctor, addr 0x39c7a7c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16475 };

  /// @brief Field player, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Haptics::HapticClipPlayer* ___player;

  /// @brief Field lastFrameTriggered, offset: 0x18, size: 0x4, def value: None
  int32_t ___lastFrameTriggered;

  /// @brief Field isPlayingLoopingClip, offset: 0x1c, size: 0x1, def value: None
  bool ___isPlayingLoopingClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___lastFrameTriggered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, ___isPlayingLoopingClip) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IHapticFeedbackPlayer, System.IDisposable, System.Nullable`1<T>, System.Object, Zenject.IInitializable, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusAdvancedHapticFeedbackPlayer
class CORDL_TYPE OculusAdvancedHapticFeedbackPlayer : public ::System::Object {
public:
  // Declarations
  using HapticPlayerState = ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState;

  /// @brief Field _hapticPlayerStatesDictionary, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticPlayerStatesDictionary, put = __cordl_internal_set__hapticPlayerStatesDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>, ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*
      _hapticPlayerStatesDictionary;

  /// @brief Field _hasAtLeastOneLoopingClipPlaying, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__hasAtLeastOneLoopingClipPlaying, put = __cordl_internal_set__hasAtLeastOneLoopingClipPlaying)) bool _hasAtLeastOneLoopingClipPlaying;

  /// @brief Field _isLeftHandSupported, offset 0x29, size 0x2
  __declspec(property(get = __cordl_internal_get__isLeftHandSupported, put = __cordl_internal_set__isLeftHandSupported)) ::System::Nullable_1<bool> _isLeftHandSupported;

  /// @brief Field _isRightHandSupported, offset 0x2b, size 0x2
  __declspec(property(get = __cordl_internal_get__isRightHandSupported, put = __cordl_internal_set__isRightHandSupported)) ::System::Nullable_1<bool> _isRightHandSupported;

  /// @brief Field _oculusVRHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusVRHelper, put = __cordl_internal_set__oculusVRHelper)) ::UnityW<::GlobalNamespace::OculusVRHelper> _oculusVRHelper;

  /// @brief Field _vrPlatformHelper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x39c7b34, size 0x1f0, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method Dispose, addr 0x39c7eac, size 0x20c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetHapticClip, addr 0x39c7a84, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::Oculus::Haptics::HapticClip> GetHapticClip(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method HandleApplicationQuitting, addr 0x39c82f8, size 0x68, virtual false, abstract: false, final false
  inline void HandleApplicationQuitting();

  /// @brief Method Initialize, addr 0x39c7e08, size 0xa4, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x39c77d4, size 0x2a8, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method Tick, addr 0x39c80b8, size 0x1c4, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                         ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* const&
  __cordl_internal_get__hapticPlayerStatesDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                         ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>*&
  __cordl_internal_get__hapticPlayerStatesDictionary();

  constexpr bool const& __cordl_internal_get__hasAtLeastOneLoopingClipPlaying() const;

  constexpr bool& __cordl_internal_get__hasAtLeastOneLoopingClipPlaying();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isLeftHandSupported() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isLeftHandSupported();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isRightHandSupported() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isRightHandSupported();

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper> const& __cordl_internal_get__oculusVRHelper() const;

  constexpr ::UnityW<::GlobalNamespace::OculusVRHelper>& __cordl_internal_get__oculusVRHelper();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__hapticPlayerStatesDictionary(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                                   ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* value);

  constexpr void __cordl_internal_set__hasAtLeastOneLoopingClipPlaying(bool value);

  constexpr void __cordl_internal_set__isLeftHandSupported(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__isRightHandSupported(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__oculusVRHelper(::UnityW<::GlobalNamespace::OculusVRHelper> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x39c8360, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16476 };

  /// @brief Field _vrPlatformHelper, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _oculusVRHelper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusVRHelper> ____oculusVRHelper;

  /// @brief Field _hapticPlayerStatesDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>, ::UnityEngine::XR::XRNode>,
                                               ::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*>* ____hapticPlayerStatesDictionary;

  /// @brief Field _hasAtLeastOneLoopingClipPlaying, offset: 0x28, size: 0x1, def value: None
  bool ____hasAtLeastOneLoopingClipPlaying;

  /// @brief Field _isLeftHandSupported, offset: 0x29, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isLeftHandSupported;

  /// @brief Field _isRightHandSupported, offset: 0x2b, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isRightHandSupported;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____vrPlatformHelper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____oculusVRHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____hapticPlayerStatesDictionary) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____hasAtLeastOneLoopingClipPlaying) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____isLeftHandSupported) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, ____isRightHandSupported) == 0x2b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer*, "", "OculusAdvancedHapticFeedbackPlayer");
NEED_NO_BOX(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAdvancedHapticFeedbackPlayer_HapticPlayerState*, "", "OculusAdvancedHapticFeedbackPlayer/HapticPlayerState");
