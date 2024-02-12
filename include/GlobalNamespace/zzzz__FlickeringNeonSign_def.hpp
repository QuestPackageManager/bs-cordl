#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlickeringNeonSign)
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __FlickeringNeonSign___FlickeringCoroutine_d__16;
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
class __FlickeringNeonSign___FlickeringCoroutine_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlickeringNeonSign);
MARK_REF_PTR_T(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16);
// Type: ::<FlickeringCoroutine>d__16
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4338))
// CS Name: ::FlickeringNeonSign::<FlickeringCoroutine>d__16*
class CORDL_TYPE __FlickeringNeonSign___FlickeringCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FlickeringNeonSign> __4__this;

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

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::FlickeringNeonSign>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::FlickeringNeonSign> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FlickeringNeonSign> value);

  static inline ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2373408, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2373554, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2373558, size 0x118, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2373670, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2373678, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23736b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlickeringNeonSign___FlickeringCoroutine_d__16(__FlickeringNeonSign___FlickeringCoroutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlickeringNeonSign___FlickeringCoroutine_d__16(__FlickeringNeonSign___FlickeringCoroutine_d__16 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlickeringNeonSign___FlickeringCoroutine_d__16();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlickeringNeonSign> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FlickeringNeonSign
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8995))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4339))
// CS Name: ::FlickeringNeonSign*
class CORDL_TYPE FlickeringNeonSign : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FlickeringCoroutine_d__16 = ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16;

  /// @brief Field _flickeringSprite, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__flickeringSprite, put = __cordl_internal_set__flickeringSprite))::UnityW<::UnityEngine::SpriteRenderer> _flickeringSprite;

  /// @brief Field _light, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__light, put = __cordl_internal_set__light))::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _light;

  /// @brief Field _particleSystems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems))::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> _particleSystems;

  /// @brief Field _minOnDelay, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minOnDelay, put = __cordl_internal_set__minOnDelay)) float_t _minOnDelay;

  /// @brief Field _maxOnDelay, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__maxOnDelay, put = __cordl_internal_set__maxOnDelay)) float_t _maxOnDelay;

  /// @brief Field _minOffDelay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__minOffDelay, put = __cordl_internal_set__minOffDelay)) float_t _minOffDelay;

  /// @brief Field _maxOffDelay, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxOffDelay, put = __cordl_internal_set__maxOffDelay)) float_t _maxOffDelay;

  /// @brief Field _spriteOnColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__spriteOnColor, put = __cordl_internal_set__spriteOnColor))::UnityEngine::Color _spriteOnColor;

  /// @brief Field _lightOnColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__lightOnColor, put = __cordl_internal_set__lightOnColor))::UnityEngine::Color _lightOnColor;

  /// @brief Field _onMaterial, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__onMaterial, put = __cordl_internal_set__onMaterial))::UnityW<::UnityEngine::Material> _onMaterial;

  /// @brief Field _offMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__offMaterial, put = __cordl_internal_set__offMaterial))::UnityW<::UnityEngine::Material> _offMaterial;

  /// @brief Field _sparksAudioClips, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sparksAudioClips,
                      put = __cordl_internal_set__sparksAudioClips))::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> _sparksAudioClips;

  /// @brief Field _sparksAudioClipPicker, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sparksAudioClipPicker,
                      put = __cordl_internal_set__sparksAudioClipPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _sparksAudioClipPicker;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__flickeringSprite();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__flickeringSprite() const;

  constexpr void __cordl_internal_set__flickeringSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__light();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__light() const;

  constexpr void __cordl_internal_set__light(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  constexpr float_t& __cordl_internal_get__minOnDelay();

  constexpr float_t const& __cordl_internal_get__minOnDelay() const;

  constexpr void __cordl_internal_set__minOnDelay(float_t value);

  constexpr float_t& __cordl_internal_get__maxOnDelay();

  constexpr float_t const& __cordl_internal_get__maxOnDelay() const;

  constexpr void __cordl_internal_set__maxOnDelay(float_t value);

  constexpr float_t& __cordl_internal_get__minOffDelay();

  constexpr float_t const& __cordl_internal_get__minOffDelay() const;

  constexpr void __cordl_internal_set__minOffDelay(float_t value);

  constexpr float_t& __cordl_internal_get__maxOffDelay();

  constexpr float_t const& __cordl_internal_get__maxOffDelay() const;

  constexpr void __cordl_internal_set__maxOffDelay(float_t value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__spriteOnColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__spriteOnColor() const;

  constexpr void __cordl_internal_set__spriteOnColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightOnColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightOnColor() const;

  constexpr void __cordl_internal_set__lightOnColor(::UnityEngine::Color value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__onMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__onMaterial() const;

  constexpr void __cordl_internal_set__onMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__offMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__offMaterial() const;

  constexpr void __cordl_internal_set__offMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__sparksAudioClips();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__sparksAudioClips() const;

  constexpr void __cordl_internal_set__sparksAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__sparksAudioClipPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__sparksAudioClipPicker() const;

  constexpr void __cordl_internal_set__sparksAudioClipPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  /// @brief Method Awake, addr 0x23732c0, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x2373344, size 0x3c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x2373380, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method FlickeringCoroutine, addr 0x23733a0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FlickeringCoroutine();

  /// @brief Method SetOn, addr 0x2373430, size 0x110, virtual false, abstract: false, final false
  inline void SetOn(bool on);

  static inline ::GlobalNamespace::FlickeringNeonSign* New_ctor();

  /// @brief Method .ctor, addr 0x2373540, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlickeringNeonSign(FlickeringNeonSign&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlickeringNeonSign(FlickeringNeonSign const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlickeringNeonSign();

public:
  /// @brief Field _flickeringSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____flickeringSprite;

  /// @brief Field _light, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____light;

  /// @brief Field _particleSystems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _minOnDelay, offset: 0x30, size: 0x4, def value: None
  float_t ____minOnDelay;

  /// @brief Field _maxOnDelay, offset: 0x34, size: 0x4, def value: None
  float_t ____maxOnDelay;

  /// @brief Field _minOffDelay, offset: 0x38, size: 0x4, def value: None
  float_t ____minOffDelay;

  /// @brief Field _maxOffDelay, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxOffDelay;

  /// @brief Field _spriteOnColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____spriteOnColor;

  /// @brief Field _lightOnColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____lightOnColor;

  /// @brief Field _onMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____onMaterial;

  /// @brief Field _offMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____offMaterial;

  /// @brief Field _sparksAudioClips, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____sparksAudioClips;

  /// @brief Field _sparksAudioClipPicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____sparksAudioClipPicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlickeringNeonSign, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____flickeringSprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____light) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____particleSystems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____minOnDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____maxOnDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____minOffDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____maxOffDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____spriteOnColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____lightOnColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____onMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____offMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____sparksAudioClips) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickeringNeonSign, ____sparksAudioClipPicker) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlickeringNeonSign);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickeringNeonSign*, "", "FlickeringNeonSign");
NEED_NO_BOX(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16*, "", "FlickeringNeonSign/<FlickeringCoroutine>d__16");
