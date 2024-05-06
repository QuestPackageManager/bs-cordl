#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSound)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
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
// CS Name: ::SaberSound*
class CORDL_TYPE SaberSound : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _downSmooth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__downSmooth, put = __cordl_internal_set__downSmooth)) float_t _downSmooth;

  /// @brief Field _gainBySpeedCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gainBySpeedCurve, put = __cordl_internal_set__gainBySpeedCurve))::UnityEngine::AnimationCurve* _gainBySpeedCurve;

  /// @brief Field _noSoundTopThresholdSqr, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__noSoundTopThresholdSqr, put = __cordl_internal_set__noSoundTopThresholdSqr)) float_t _noSoundTopThresholdSqr;

  /// @brief Field _pitchBySpeedCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pitchBySpeedCurve, put = __cordl_internal_set__pitchBySpeedCurve))::UnityEngine::AnimationCurve* _pitchBySpeedCurve;

  /// @brief Field _prevPos, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__prevPos, put = __cordl_internal_set__prevPos))::UnityEngine::Vector3 _prevPos;

  /// @brief Field _saberTop, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTop, put = __cordl_internal_set__saberTop))::UnityW<::UnityEngine::Transform> _saberTop;

  /// @brief Field _speed, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _speedMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__speedMultiplier, put = __cordl_internal_set__speedMultiplier)) float_t _speedMultiplier;

  /// @brief Field _upSmooth, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__upSmooth, put = __cordl_internal_set__upSmooth)) float_t _upSmooth;

  static inline ::GlobalNamespace::SaberSound* New_ctor();

  /// @brief Method Start, addr 0x27265dc, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2726608, size 0x1cc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__downSmooth() const;

  constexpr float_t& __cordl_internal_get__downSmooth();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__gainBySpeedCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__gainBySpeedCurve() const;

  constexpr float_t const& __cordl_internal_get__noSoundTopThresholdSqr() const;

  constexpr float_t& __cordl_internal_get__noSoundTopThresholdSqr();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pitchBySpeedCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__pitchBySpeedCurve() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevPos();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__saberTop() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__saberTop();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr float_t const& __cordl_internal_get__speedMultiplier() const;

  constexpr float_t& __cordl_internal_get__speedMultiplier();

  constexpr float_t const& __cordl_internal_get__upSmooth() const;

  constexpr float_t& __cordl_internal_get__upSmooth();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__downSmooth(float_t value);

  constexpr void __cordl_internal_set__gainBySpeedCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__noSoundTopThresholdSqr(float_t value);

  constexpr void __cordl_internal_set__pitchBySpeedCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__prevPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__saberTop(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__speedMultiplier(float_t value);

  constexpr void __cordl_internal_set__upSmooth(float_t value);

  /// @brief Method .ctor, addr 0x27267d4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSound();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSound(SaberSound&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSound(SaberSound const&) = delete;

  /// @brief Field _saberTop, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____saberTop;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

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
