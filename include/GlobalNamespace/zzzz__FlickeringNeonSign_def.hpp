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
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __FlickeringNeonSign___FlickeringCoroutine_d__16;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5089))
// CS Name: ::FlickeringNeonSign::<FlickeringCoroutine>d__16*
class CORDL_TYPE __FlickeringNeonSign___FlickeringCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::FlickeringNeonSign* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::FlickeringNeonSign*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlickeringNeonSign*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::FlickeringNeonSign* value);

  static inline ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x227b4b0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x227b5fc size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x227b600 size 0x118 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x227b718 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x227b720 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x227b760 size 0x8 virtual true final true
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
  ::GlobalNamespace::FlickeringNeonSign* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5090))
// CS Name: ::FlickeringNeonSign*
class CORDL_TYPE FlickeringNeonSign : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FlickeringCoroutine_d__16 = ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16;

  /// @brief Field _flickeringSprite, offset 0x18, size 0x8
  __declspec(property(get = __get__flickeringSprite, put = __set__flickeringSprite))::UnityEngine::SpriteRenderer* _flickeringSprite;

  /// @brief Field _light, offset 0x20, size 0x8
  __declspec(property(get = __get__light, put = __set__light))::GlobalNamespace::TubeBloomPrePassLight* _light;

  /// @brief Field _particleSystems, offset 0x28, size 0x8
  __declspec(property(get = __get__particleSystems, put = __set__particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> _particleSystems;

  /// @brief Field _minOnDelay, offset 0x30, size 0x4
  __declspec(property(get = __get__minOnDelay, put = __set__minOnDelay)) float_t _minOnDelay;

  /// @brief Field _maxOnDelay, offset 0x34, size 0x4
  __declspec(property(get = __get__maxOnDelay, put = __set__maxOnDelay)) float_t _maxOnDelay;

  /// @brief Field _minOffDelay, offset 0x38, size 0x4
  __declspec(property(get = __get__minOffDelay, put = __set__minOffDelay)) float_t _minOffDelay;

  /// @brief Field _maxOffDelay, offset 0x3c, size 0x4
  __declspec(property(get = __get__maxOffDelay, put = __set__maxOffDelay)) float_t _maxOffDelay;

  /// @brief Field _spriteOnColor, offset 0x40, size 0x10
  __declspec(property(get = __get__spriteOnColor, put = __set__spriteOnColor))::UnityEngine::Color _spriteOnColor;

  /// @brief Field _lightOnColor, offset 0x50, size 0x10
  __declspec(property(get = __get__lightOnColor, put = __set__lightOnColor))::UnityEngine::Color _lightOnColor;

  /// @brief Field _onMaterial, offset 0x60, size 0x8
  __declspec(property(get = __get__onMaterial, put = __set__onMaterial))::UnityEngine::Material* _onMaterial;

  /// @brief Field _offMaterial, offset 0x68, size 0x8
  __declspec(property(get = __get__offMaterial, put = __set__offMaterial))::UnityEngine::Material* _offMaterial;

  /// @brief Field _sparksAudioClips, offset 0x70, size 0x8
  __declspec(property(get = __get__sparksAudioClips, put = __set__sparksAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _sparksAudioClips;

  /// @brief Field _sparksAudioClipPicker, offset 0x78, size 0x8
  __declspec(property(get = __get__sparksAudioClipPicker, put = __set__sparksAudioClipPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* _sparksAudioClipPicker;

  constexpr ::UnityEngine::SpriteRenderer*& __get__flickeringSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__flickeringSprite() const;

  constexpr void __set__flickeringSprite(::UnityEngine::SpriteRenderer* value);

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__light();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__light() const;

  constexpr void __set__light(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

  constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> value);

  constexpr float_t& __get__minOnDelay();

  constexpr float_t const& __get__minOnDelay() const;

  constexpr void __set__minOnDelay(float_t value);

  constexpr float_t& __get__maxOnDelay();

  constexpr float_t const& __get__maxOnDelay() const;

  constexpr void __set__maxOnDelay(float_t value);

  constexpr float_t& __get__minOffDelay();

  constexpr float_t const& __get__minOffDelay() const;

  constexpr void __set__minOffDelay(float_t value);

  constexpr float_t& __get__maxOffDelay();

  constexpr float_t const& __get__maxOffDelay() const;

  constexpr void __set__maxOffDelay(float_t value);

  constexpr ::UnityEngine::Color& __get__spriteOnColor();

  constexpr ::UnityEngine::Color const& __get__spriteOnColor() const;

  constexpr void __set__spriteOnColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__lightOnColor();

  constexpr ::UnityEngine::Color const& __get__lightOnColor() const;

  constexpr void __set__lightOnColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Material*& __get__onMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__onMaterial() const;

  constexpr void __set__onMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__offMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__offMaterial() const;

  constexpr void __set__offMaterial(::UnityEngine::Material* value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__sparksAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__sparksAudioClips() const;

  constexpr void __set__sparksAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& __get__sparksAudioClipPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& __get__sparksAudioClipPicker() const;

  constexpr void __set__sparksAudioClipPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value);

  /// @brief Method Awake addr 0x227b368 size 0x84 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x227b3ec size 0x3c virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x227b428 size 0x20 virtual false final false
  inline void OnEnable();

  /// @brief Method FlickeringCoroutine addr 0x227b448 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* FlickeringCoroutine();

  /// @brief Method SetOn addr 0x227b4d8 size 0x110 virtual false final false
  inline void SetOn(bool on);

  static inline ::GlobalNamespace::FlickeringNeonSign* New_ctor();

  /// @brief Method .ctor addr 0x227b5e8 size 0x14 virtual false final false
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
  ::UnityEngine::SpriteRenderer* ____flickeringSprite;

  /// @brief Field _light, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____light;

  /// @brief Field _particleSystems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> ____particleSystems;

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
  ::UnityEngine::Material* ____onMaterial;

  /// @brief Field _offMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Material* ____offMaterial;

  /// @brief Field _sparksAudioClips, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____sparksAudioClips;

  /// @brief Field _sparksAudioClipPicker, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* ____sparksAudioClipPicker;

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
