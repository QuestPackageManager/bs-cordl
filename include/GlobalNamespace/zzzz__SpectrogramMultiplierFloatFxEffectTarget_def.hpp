#pragma once
// IWYU pragma private; include "GlobalNamespace/SpectrogramMultiplierFloatFxEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpectrogramMultiplierFloatFxEffectTarget)
namespace GlobalNamespace {
class SpectrogramRowPropertyAnimator;
}
// Forward declare root types
namespace GlobalNamespace {
class SpectrogramMultiplierFloatFxEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget);
// Dependencies FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpectrogramMultiplierFloatFxEffectTarget
class CORDL_TYPE SpectrogramMultiplierFloatFxEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _spectrogram, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spectrogram, put = __cordl_internal_set__spectrogram)) ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> _spectrogram;

  static inline ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget* New_ctor();

  /// @brief Method SetValue, addr 0x577cc10, size 0x88, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577cc98, size 0x88, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> const& __cordl_internal_get__spectrogram() const;

  constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator>& __cordl_internal_get__spectrogram();

  constexpr void __cordl_internal_set__spectrogram(::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> value);

  /// @brief Method .ctor, addr 0x577cd20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpectrogramMultiplierFloatFxEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramMultiplierFloatFxEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpectrogramMultiplierFloatFxEffectTarget(SpectrogramMultiplierFloatFxEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramMultiplierFloatFxEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpectrogramMultiplierFloatFxEffectTarget(SpectrogramMultiplierFloatFxEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5856 };

  /// @brief Field _spectrogram, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> ____spectrogram;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget, ____spectrogram) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*, "", "SpectrogramMultiplierFloatFxEffectTarget");
