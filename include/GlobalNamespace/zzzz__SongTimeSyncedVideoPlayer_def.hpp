#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongTimeSyncedVideoPlayer)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
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
class __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeSyncedVideoPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17);
// Type: ::<WaitForDependenciesAndPlay>d__17
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5975))
// CS Name: ::SongTimeSyncedVideoPlayer::<WaitForDependenciesAndPlay>d__17*
class CORDL_TYPE __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SongTimeSyncedVideoPlayer* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeSyncedVideoPlayer*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SongTimeSyncedVideoPlayer* value);

  static inline ::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x230d6c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x230d8c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x230d8c8, size 0xfc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x230d9c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x230d9cc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x230da0c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongTimeSyncedVideoPlayer* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongTimeSyncedVideoPlayer
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4982)), TypeDefinitionIndex(TypeDefinitionIndex(14542)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5976))
// CS Name: ::SongTimeSyncedVideoPlayer*
class CORDL_TYPE SongTimeSyncedVideoPlayer : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using _WaitForDependenciesAndPlay_d__17 = ::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17;

  /// @brief Field _videoPlayer, offset 0x30, size 0x8
  __declspec(property(get = __get__videoPlayer, put = __set__videoPlayer))::UnityEngine::Video::VideoPlayer* _videoPlayer;

  /// @brief Field _materialPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _audioTimeSource, offset 0x40, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _environmentContext, offset 0x48, size 0x4
  __declspec(property(get = __get__environmentContext, put = __set__environmentContext))::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _color, offset 0x4c, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _waitForDependenciesAndPlayCoroutine, offset 0x60, size 0x8
  __declspec(property(get = __get__waitForDependenciesAndPlayCoroutine, put = __set__waitForDependenciesAndPlayCoroutine))::UnityEngine::Coroutine* _waitForDependenciesAndPlayCoroutine;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  /// @brief Field _textureId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__textureId, put = setStaticF__textureId)) int32_t _textureId;

  /// @brief Field _textureStId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__textureStId, put = setStaticF__textureStId)) int32_t _textureStId;

  constexpr ::UnityEngine::Video::VideoPlayer*& __get__videoPlayer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::VideoPlayer*> const& __get__videoPlayer() const;

  constexpr void __set__videoPlayer(::UnityEngine::Video::VideoPlayer* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::EnvironmentContext& __get__environmentContext();

  constexpr ::GlobalNamespace::EnvironmentContext const& __get__environmentContext() const;

  constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Coroutine*& __get__waitForDependenciesAndPlayCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__waitForDependenciesAndPlayCoroutine() const;

  constexpr void __set__waitForDependenciesAndPlayCoroutine(::UnityEngine::Coroutine* value);

  static inline void setStaticF__colorId(int32_t value);

  static inline int32_t getStaticF__colorId();

  static inline void setStaticF__textureId(int32_t value);

  static inline int32_t getStaticF__textureId();

  static inline void setStaticF__textureStId(int32_t value);

  static inline int32_t getStaticF__textureStId();

  /// @brief Method Start, addr 0x230cfc8, size 0x60, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x230d090, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x230d0e0, size 0x1f8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x230d2d8, size 0x164, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method ColorWasSet, addr 0x230d43c, size 0x8, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method SetVideoClip, addr 0x230d444, size 0x1c, virtual false, abstract: false, final false
  inline void SetVideoClip(::UnityEngine::Video::VideoClip* videoClip);

  /// @brief Method SetSpriteAndStopVideo, addr 0x230d460, size 0x260, virtual false, abstract: false, final false
  inline void SetSpriteAndStopVideo(::UnityEngine::Sprite* sprite);

  /// @brief Method StopVideoPlayer, addr 0x230d094, size 0x4c, virtual false, abstract: false, final false
  inline void StopVideoPlayer();

  /// @brief Method WaitForDependenciesAndPlay, addr 0x230d028, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* WaitForDependenciesAndPlay();

  static inline ::GlobalNamespace::SongTimeSyncedVideoPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x230d6e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WaitForDependenciesAndPlay>b__17_0, addr 0x230d7c0, size 0x104, virtual false, abstract: false, final false
  inline bool _WaitForDependenciesAndPlay_b__17_0();

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeSyncedVideoPlayer();

public:
  /// @brief Field _videoPlayer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer* ____videoPlayer;

  /// @brief Field _materialPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _audioTimeSource, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _environmentContext, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _color, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _waitForDependenciesAndPlayCoroutine, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____waitForDependenciesAndPlayCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeSyncedVideoPlayer, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____videoPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____materialPropertyBlockController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____audioTimeSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____environmentContext) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____color) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeSyncedVideoPlayer, ____waitForDependenciesAndPlayCoroutine) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeSyncedVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeSyncedVideoPlayer*, "", "SongTimeSyncedVideoPlayer");
NEED_NO_BOX(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17*, "", "SongTimeSyncedVideoPlayer/<WaitForDependenciesAndPlay>d__17");
