#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSound)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberSound;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberSound);
// Type: ::SaberSound
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5300))
// CS Name: ::SaberSound*
class CORDL_TYPE SaberSound : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberTop, offset 0x18, size 0x8
  __declspec(property(get = __get__saberTop, put = __set__saberTop))::UnityEngine::Transform* _saberTop;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _pitchBySpeedCurve, offset 0x28, size 0x8
  __declspec(property(get = __get__pitchBySpeedCurve, put = __set__pitchBySpeedCurve))::UnityEngine::AnimationCurve* _pitchBySpeedCurve;

  /// @brief Field _gainBySpeedCurve, offset 0x30, size 0x8
  __declspec(property(get = __get__gainBySpeedCurve, put = __set__gainBySpeedCurve))::UnityEngine::AnimationCurve* _gainBySpeedCurve;

  /// @brief Field _speedMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __get__speedMultiplier, put = __set__speedMultiplier)) float_t _speedMultiplier;

  /// @brief Field _upSmooth, offset 0x3c, size 0x4
  __declspec(property(get = __get__upSmooth, put = __set__upSmooth)) float_t _upSmooth;

  /// @brief Field _downSmooth, offset 0x40, size 0x4
  __declspec(property(get = __get__downSmooth, put = __set__downSmooth)) float_t _downSmooth;

  /// @brief Field _noSoundTopThresholdSqr, offset 0x44, size 0x4
  __declspec(property(get = __get__noSoundTopThresholdSqr, put = __set__noSoundTopThresholdSqr)) float_t _noSoundTopThresholdSqr;

  /// @brief Field _prevPos, offset 0x48, size 0xc
  __declspec(property(get = __get__prevPos, put = __set__prevPos))::UnityEngine::Vector3 _prevPos;

  /// @brief Field _speed, offset 0x54, size 0x4
  __declspec(property(get = __get__speed, put = __set__speed)) float_t _speed;

  constexpr ::UnityEngine::Transform*& __get__saberTop();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__saberTop() const;

  constexpr void __set__saberTop(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__pitchBySpeedCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__pitchBySpeedCurve() const;

  constexpr void __set__pitchBySpeedCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__gainBySpeedCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__gainBySpeedCurve() const;

  constexpr void __set__gainBySpeedCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get__speedMultiplier();

  constexpr float_t const& __get__speedMultiplier() const;

  constexpr void __set__speedMultiplier(float_t value);

  constexpr float_t& __get__upSmooth();

  constexpr float_t const& __get__upSmooth() const;

  constexpr void __set__upSmooth(float_t value);

  constexpr float_t& __get__downSmooth();

  constexpr float_t const& __get__downSmooth() const;

  constexpr void __set__downSmooth(float_t value);

  constexpr float_t& __get__noSoundTopThresholdSqr();

  constexpr float_t const& __get__noSoundTopThresholdSqr() const;

  constexpr void __set__noSoundTopThresholdSqr(float_t value);

  constexpr ::UnityEngine::Vector3& __get__prevPos();

  constexpr ::UnityEngine::Vector3 const& __get__prevPos() const;

  constexpr void __set__prevPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__speed();

  constexpr float_t const& __get__speed() const;

  constexpr void __set__speed(float_t value);

  /// @brief Method Start, addr 0x226458c, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x22645b8, size 0x1cc, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::SaberSound* New_ctor();

  /// @brief Method .ctor, addr 0x2264784, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSound(SaberSound&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSound(SaberSound const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSound();

public:
  /// @brief Field _saberTop, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____saberTop;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _pitchBySpeedCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____pitchBySpeedCurve;

  /// @brief Field _gainBySpeedCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____gainBySpeedCurve;

  /// @brief Field _speedMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____speedMultiplier;

  /// @brief Field _upSmooth, offset: 0x3c, size: 0x4, def value: None
  float_t ____upSmooth;

  /// @brief Field _downSmooth, offset: 0x40, size: 0x4, def value: None
  float_t ____downSmooth;

  /// @brief Field _noSoundTopThresholdSqr, offset: 0x44, size: 0x4, def value: None
  float_t ____noSoundTopThresholdSqr;

  /// @brief Field _prevPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPos;

  /// @brief Field _speed, offset: 0x54, size: 0x4, def value: None
  float_t ____speed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSound, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____saberTop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____pitchBySpeedCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____gainBySpeedCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____speedMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____upSmooth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____downSmooth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____noSoundTopThresholdSqr) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____prevPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSound, ____speed) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSound);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSound*, "", "SaberSound");
