#pragma once
// IWYU pragma private; include "GlobalNamespace/SongTimeSyncedVideoPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongTimeSyncedVideoPlayer)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer;
}
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeSyncedVideoPlayer);
MARK_REF_PTR_T(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongTimeSyncedVideoPlayer/<WaitForDependenciesAndPlay>d__20
class CORDL_TYPE SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b35a5c, size 0x20c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b35c68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b35c70, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b35ca8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b35a58, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value);

  /// @brief Method .ctor, addr 0x3b35840, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20(SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20(SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5184 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentContext, LightWithIdMonoBehaviour, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongTimeSyncedVideoPlayer
class CORDL_TYPE SongTimeSyncedVideoPlayer : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using _WaitForDependenciesAndPlay_d__20 = ::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20;

  /// @brief Field _audioTimeSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _color, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  /// @brief Field _environmentContext, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentContext, put = __cordl_internal_set__environmentContext)) ::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _gamePause, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _materialPropertyBlockController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _textureId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__textureId, put = setStaticF__textureId)) int32_t _textureId;

  /// @brief Field _textureStId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__textureStId, put = setStaticF__textureStId)) int32_t _textureStId;

  /// @brief Field _videoPlayer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__videoPlayer, put = __cordl_internal_set__videoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer> _videoPlayer;

  /// @brief Field _waitForDependenciesAndPlayCoroutine, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__waitForDependenciesAndPlayCoroutine,
                      put = __cordl_internal_set__waitForDependenciesAndPlayCoroutine)) ::UnityEngine::Coroutine* _waitForDependenciesAndPlayCoroutine;

  /// @brief Method ColorWasSet, addr 0x3b354d8, size 0x8, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method HandleGamePauseDidPause, addr 0x3b35808, size 0x1c, virtual false, abstract: false, final false
  inline void HandleGamePauseDidPause();

  /// @brief Method HandleGamePauseDidResume, addr 0x3b35824, size 0x1c, virtual false, abstract: false, final false
  inline void HandleGamePauseDidResume();

  /// @brief Method LateUpdate, addr 0x3b3543c, size 0x9c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SongTimeSyncedVideoPlayer* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b34fd0, size 0x19c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetSpriteAndStopVideo, addr 0x3b35608, size 0x200, virtual false, abstract: false, final false
  inline void SetSpriteAndStopVideo(::UnityEngine::Sprite* sprite);

  /// @brief Method SetVideoClip, addr 0x3b354e0, size 0x128, virtual false, abstract: false, final false
  inline void SetVideoClip(::UnityEngine::Video::VideoClip* videoClip);

  /// @brief Method Start, addr 0x3b34da0, size 0x1d0, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StopVideoPlayer, addr 0x3b3516c, size 0xd0, virtual false, abstract: false, final false
  inline void StopVideoPlayer();

  /// @brief Method Update, addr 0x3b3523c, size 0x200, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method WaitForDependenciesAndPlay, addr 0x3b34f70, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* WaitForDependenciesAndPlay();

  /// @brief Method <WaitForDependenciesAndPlay>b__20_0, addr 0x3b35940, size 0x118, virtual false, abstract: false, final false
  inline bool _WaitForDependenciesAndPlay_b__20_0();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::GlobalNamespace::EnvironmentContext const& __cordl_internal_get__environmentContext() const;

  constexpr ::GlobalNamespace::EnvironmentContext& __cordl_internal_get__environmentContext();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get__videoPlayer() const;

  constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get__videoPlayer();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__waitForDependenciesAndPlayCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__waitForDependenciesAndPlayCoroutine();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer> value);

  constexpr void __cordl_internal_set__waitForDependenciesAndPlayCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method .ctor, addr 0x3b35868, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__colorId();

  static inline int32_t getStaticF__textureId();

  static inline int32_t getStaticF__textureStId();

  static inline void setStaticF__colorId(int32_t value);

  static inline void setStaticF__textureId(int32_t value);

  static inline void setStaticF__textureStId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeSyncedVideoPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5185 };

  /// @brief Field _videoPlayer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Video::VideoPlayer> ____videoPlayer;

  /// @brief Field _materialPropertyBlockController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _audioTimeSource, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gamePause, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _environmentContext, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _color, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _waitForDependenciesAndPlayCoroutine, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____waitForDependenciesAndPlayCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____videoPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____materialPropertyBlockController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____audioTimeSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____gamePause) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____environmentContext) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____color) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____waitForDependenciesAndPlayCoroutine) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeSyncedVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeSyncedVideoPlayer*, "", "SongTimeSyncedVideoPlayer");
NEED_NO_BOX(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeSyncedVideoPlayer__WaitForDependenciesAndPlay_d__20*, "", "SongTimeSyncedVideoPlayer/<WaitForDependenciesAndPlay>d__20");
