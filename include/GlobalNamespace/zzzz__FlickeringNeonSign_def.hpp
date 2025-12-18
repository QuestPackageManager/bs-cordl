#pragma once
// IWYU pragma private; include "GlobalNamespace/FlickeringNeonSign.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlickeringNeonSign)
namespace GlobalNamespace {
class FlickeringNeonSign__FlickeringCoroutine_d__16;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
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
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class FlickeringNeonSign;
}
namespace GlobalNamespace {
class FlickeringNeonSign__FlickeringCoroutine_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlickeringNeonSign);
MARK_REF_PTR_T(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlickeringNeonSign/<FlickeringCoroutine>d__16
class CORDL_TYPE FlickeringNeonSign__FlickeringCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FlickeringNeonSign> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57f14ec, size 0x138, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57f1624, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x57f162c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57f1664, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57f14e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::FlickeringNeonSign> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FlickeringNeonSign>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FlickeringNeonSign> value);

  /// @brief Method .ctor, addr 0x57f13ac, size 0x8, virtual false, abstract: false, final false
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
  constexpr FlickeringNeonSign__FlickeringCoroutine_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign__FlickeringCoroutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlickeringNeonSign__FlickeringCoroutine_d__16(FlickeringNeonSign__FlickeringCoroutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign__FlickeringCoroutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlickeringNeonSign__FlickeringCoroutine_d__16(FlickeringNeonSign__FlickeringCoroutine_d__16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5942 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlickeringNeonSign> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlickeringNeonSign
class CORDL_TYPE FlickeringNeonSign : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FlickeringCoroutine_d__16 = ::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16;

  /// @brief Field _flickeringSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flickeringSprite, put = __cordl_internal_set__flickeringSprite)) ::UnityW<::UnityEngine::SpriteRenderer> _flickeringSprite;

  /// @brief Field _light, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__light, put = __cordl_internal_set__light)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _light;

  /// @brief Field _lightOnColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__lightOnColor, put = __cordl_internal_set__lightOnColor)) ::UnityEngine::Color _lightOnColor;

  /// @brief Field _maxOffDelay, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__maxOffDelay, put = __cordl_internal_set__maxOffDelay)) float_t _maxOffDelay;

  /// @brief Field _maxOnDelay, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxOnDelay, put = __cordl_internal_set__maxOnDelay)) float_t _maxOnDelay;

  /// @brief Field _minOffDelay, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__minOffDelay, put = __cordl_internal_set__minOffDelay)) float_t _minOffDelay;

  /// @brief Field _minOnDelay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__minOnDelay, put = __cordl_internal_set__minOnDelay)) float_t _minOnDelay;

  /// @brief Field _offMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__offMaterial, put = __cordl_internal_set__offMaterial)) ::UnityW<::UnityEngine::Material> _offMaterial;

  /// @brief Field _onMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__onMaterial, put = __cordl_internal_set__onMaterial)) ::UnityW<::UnityEngine::Material> _onMaterial;

  /// @brief Field _particleSystems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>
      _particleSystems;

  /// @brief Field _sparksAudioClipPicker, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sparksAudioClipPicker,
                      put = __cordl_internal_set__sparksAudioClipPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _sparksAudioClipPicker;

  /// @brief Field _sparksAudioClips, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sparksAudioClips,
                      put = __cordl_internal_set__sparksAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _sparksAudioClips;

  /// @brief Field _spriteOnColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__spriteOnColor, put = __cordl_internal_set__spriteOnColor)) ::UnityEngine::Color _spriteOnColor;

  /// @brief Method Awake, addr 0x57f1278, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FlickeringCoroutine, addr 0x57f1358, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FlickeringCoroutine();

  static inline ::GlobalNamespace::FlickeringNeonSign* New_ctor();

  /// @brief Method OnEnable, addr 0x57f1338, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetOn, addr 0x57f13b4, size 0x124, virtual false, abstract: false, final false
  inline void SetOn(bool on);

  /// @brief Method Start, addr 0x57f12fc, size 0x3c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__flickeringSprite() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__flickeringSprite();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__light() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__light();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightOnColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightOnColor();

  constexpr float_t const& __cordl_internal_get__maxOffDelay() const;

  constexpr float_t& __cordl_internal_get__maxOffDelay();

  constexpr float_t const& __cordl_internal_get__maxOnDelay() const;

  constexpr float_t& __cordl_internal_get__maxOnDelay();

  constexpr float_t const& __cordl_internal_get__minOffDelay() const;

  constexpr float_t& __cordl_internal_get__minOffDelay();

  constexpr float_t const& __cordl_internal_get__minOnDelay() const;

  constexpr float_t& __cordl_internal_get__minOnDelay();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__offMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__offMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__onMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__onMaterial();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__sparksAudioClipPicker() const;

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__sparksAudioClipPicker();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__sparksAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__sparksAudioClips();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__spriteOnColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__spriteOnColor();

  constexpr void __cordl_internal_set__flickeringSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__light(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__lightOnColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__maxOffDelay(float_t value);

  constexpr void __cordl_internal_set__maxOnDelay(float_t value);

  constexpr void __cordl_internal_set__minOffDelay(float_t value);

  constexpr void __cordl_internal_set__minOnDelay(float_t value);

  constexpr void __cordl_internal_set__offMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__onMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  constexpr void __cordl_internal_set__sparksAudioClipPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__sparksAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__spriteOnColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x57f14d8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlickeringNeonSign();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlickeringNeonSign(FlickeringNeonSign&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlickeringNeonSign(FlickeringNeonSign const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5943 };

  /// @brief Field _flickeringSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____flickeringSprite;

  /// @brief Field _light, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____light;

  /// @brief Field _particleSystems, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _minOnDelay, offset: 0x38, size: 0x4, def value: None
  float_t ____minOnDelay;

  /// @brief Field _maxOnDelay, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxOnDelay;

  /// @brief Field _minOffDelay, offset: 0x40, size: 0x4, def value: None
  float_t ____minOffDelay;

  /// @brief Field _maxOffDelay, offset: 0x44, size: 0x4, def value: None
  float_t ____maxOffDelay;

  /// @brief Field _spriteOnColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____spriteOnColor;

  /// @brief Field _lightOnColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____lightOnColor;

  /// @brief Field _onMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____onMaterial;

  /// @brief Field _offMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____offMaterial;

  /// @brief Field _sparksAudioClips, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____sparksAudioClips;

  /// @brief Field _sparksAudioClipPicker, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____sparksAudioClipPicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____flickeringSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____light) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____particleSystems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____minOnDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____maxOnDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____minOffDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____maxOffDelay) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____spriteOnColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____lightOnColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____onMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____offMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____sparksAudioClips) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____sparksAudioClipPicker) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlickeringNeonSign, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlickeringNeonSign);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickeringNeonSign*, "", "FlickeringNeonSign");
NEED_NO_BOX(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickeringNeonSign__FlickeringCoroutine_d__16*, "", "FlickeringNeonSign/<FlickeringCoroutine>d__16");
