#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMultiplierUIController)
namespace GlobalNamespace {
class IScoreController;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMultiplierUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreMultiplierUIController);
// Type: ::ScoreMultiplierUIController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreMultiplierUIController*
class CORDL_TYPE ScoreMultiplierUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplierAnimator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierAnimator, put = __cordl_internal_set__multiplierAnimator))::UnityW<::UnityEngine::Animator> _multiplierAnimator;

  /// @brief Field _multiplierIncreasedTriggerId, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierIncreasedTriggerId, put = __cordl_internal_set__multiplierIncreasedTriggerId)) int32_t _multiplierIncreasedTriggerId;

  /// @brief Field _multiplierProgressImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierProgressImage, put = __cordl_internal_set__multiplierProgressImage))::UnityW<::UnityEngine::UI::Image> _multiplierProgressImage;

  /// @brief Field _multiplierTexts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierTexts,
                      put = __cordl_internal_set__multiplierTexts))::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> _multiplierTexts;

  /// @brief Field _prevMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMultiplier, put = __cordl_internal_set__prevMultiplier)) int32_t _prevMultiplier;

  /// @brief Field _progressTarget, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__progressTarget, put = __cordl_internal_set__progressTarget)) float_t _progressTarget;

  /// @brief Field _scoreController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Method HandleMultiplierDidChange, addr 0x25e22f4, size 0xcc, virtual false, abstract: false, final false
  inline void HandleMultiplierDidChange(int32_t multiplier, float_t progress);

  static inline ::GlobalNamespace::ScoreMultiplierUIController* New_ctor();

  /// @brief Method OnDisable, addr 0x25e2168, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25e2164, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterForEvents, addr 0x25e1fc8, size 0x19c, virtual false, abstract: false, final false
  inline void RegisterForEvents();

  /// @brief Method Start, addr 0x25e1ee4, size 0xe4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromEvents, addr 0x25e216c, size 0x108, virtual false, abstract: false, final false
  inline void UnregisterFromEvents();

  /// @brief Method Update, addr 0x25e2274, size 0x80, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__multiplierAnimator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__multiplierAnimator();

  constexpr int32_t const& __cordl_internal_get__multiplierIncreasedTriggerId() const;

  constexpr int32_t& __cordl_internal_get__multiplierIncreasedTriggerId();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__multiplierProgressImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__multiplierProgressImage();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> const& __cordl_internal_get__multiplierTexts() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>& __cordl_internal_get__multiplierTexts();

  constexpr int32_t const& __cordl_internal_get__prevMultiplier() const;

  constexpr int32_t& __cordl_internal_get__prevMultiplier();

  constexpr float_t const& __cordl_internal_get__progressTarget() const;

  constexpr float_t& __cordl_internal_get__progressTarget();

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __cordl_internal_get__scoreController() const;

  constexpr void __cordl_internal_set__multiplierAnimator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__multiplierIncreasedTriggerId(int32_t value);

  constexpr void __cordl_internal_set__multiplierProgressImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__multiplierTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr void __cordl_internal_set__prevMultiplier(int32_t value);

  constexpr void __cordl_internal_set__progressTarget(float_t value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x25e23c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreMultiplierUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreMultiplierUIController(ScoreMultiplierUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreMultiplierUIController(ScoreMultiplierUIController const&) = delete;

  /// @brief Field _multiplierTexts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____multiplierTexts;

  /// @brief Field _multiplierProgressImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____multiplierProgressImage;

  /// @brief Field _multiplierAnimator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____multiplierAnimator;

  /// @brief Field _scoreController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _prevMultiplier, offset: 0x38, size: 0x4, def value: None
  int32_t ____prevMultiplier;

  /// @brief Field _multiplierIncreasedTriggerId, offset: 0x3c, size: 0x4, def value: None
  int32_t ____multiplierIncreasedTriggerId;

  /// @brief Field _progressTarget, offset: 0x40, size: 0x4, def value: None
  float_t ____progressTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierUIController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierTexts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierProgressImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierAnimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____scoreController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____prevMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierIncreasedTriggerId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____progressTarget) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
