#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BombCutSoundEffect)
namespace GlobalNamespace {
class __BombCutSoundEffect__Pool;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class AudioSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class BombCutSoundEffect;
}
namespace GlobalNamespace {
class __BombCutSoundEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BombCutSoundEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BombCutSoundEffect__Pool);
// Type: ::BombCutSoundEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4058))
// CS Name: ::BombCutSoundEffect*
class CORDL_TYPE BombCutSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BombCutSoundEffect__Pool;

  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field didFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* didFinishEvent;

  /// @brief Field _saber, offset 0x28, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::Saber* _saber;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* value);

  constexpr ::GlobalNamespace::Saber*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::Saber* value);

  /// @brief Method add_didFinishEvent, addr 0x222c5d4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x222c684, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* value);

  /// @brief Method Init, addr 0x222c734, size 0x74, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::Saber* saber, float_t volume);

  /// @brief Method LateUpdate, addr 0x222c7a8, size 0x90, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method StopPlayingAndFinish, addr 0x222c838, size 0x50, virtual false, abstract: false, final false
  inline void StopPlayingAndFinish();

  static inline ::GlobalNamespace::BombCutSoundEffect* New_ctor();

  /// @brief Method .ctor, addr 0x222c888, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombCutSoundEffect(BombCutSoundEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombCutSoundEffect(BombCutSoundEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombCutSoundEffect();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field didFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* ___didFinishEvent;

  /// @brief Field _saber, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____saber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombCutSoundEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffect, ____audioSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffect, ___didFinishEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombCutSoundEffect, ____saber) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(4058)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 287 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4057)) CS Name: ::BombCutSoundEffect::Pool*
class CORDL_TYPE __BombCutSoundEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BombCutSoundEffect*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BombCutSoundEffect__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x222c890, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BombCutSoundEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BombCutSoundEffect__Pool(__BombCutSoundEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BombCutSoundEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BombCutSoundEffect__Pool(__BombCutSoundEffect__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BombCutSoundEffect__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BombCutSoundEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombCutSoundEffect*, "", "BombCutSoundEffect");
NEED_NO_BOX(::GlobalNamespace::__BombCutSoundEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BombCutSoundEffect__Pool*, "", "BombCutSoundEffect/Pool");
