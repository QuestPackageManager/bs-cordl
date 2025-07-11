#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreMultiplierUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreMultiplierUIController
class CORDL_TYPE ScoreMultiplierUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplierAnimator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierAnimator, put = __cordl_internal_set__multiplierAnimator)) ::UnityW<::UnityEngine::Animator> _multiplierAnimator;

  /// @brief Field _multiplierIncreasedTriggerId, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplierIncreasedTriggerId, put = __cordl_internal_set__multiplierIncreasedTriggerId)) int32_t _multiplierIncreasedTriggerId;

  /// @brief Field _multiplierProgressImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierProgressImage, put = __cordl_internal_set__multiplierProgressImage)) ::UnityW<::UnityEngine::UI::Image> _multiplierProgressImage;

  /// @brief Field _multiplierTexts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierTexts,
                      put = __cordl_internal_set__multiplierTexts)) ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>
      _multiplierTexts;

  /// @brief Field _prevMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMultiplier, put = __cordl_internal_set__prevMultiplier)) int32_t _prevMultiplier;

  /// @brief Field _progressTarget, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__progressTarget, put = __cordl_internal_set__progressTarget)) float_t _progressTarget;

  /// @brief Field _scoreController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Method HandleMultiplierDidChange, addr 0x3ba9424, size 0xcc, virtual false, abstract: false, final false
  inline void HandleMultiplierDidChange(int32_t multiplier, float_t progress);

  static inline ::GlobalNamespace::ScoreMultiplierUIController* New_ctor();

  /// @brief Method OnDisable, addr 0x3ba92a0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3ba929c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterForEvents, addr 0x3ba9108, size 0x194, virtual false, abstract: false, final false
  inline void RegisterForEvents();

  /// @brief Method Start, addr 0x3ba9024, size 0xe4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromEvents, addr 0x3ba92a4, size 0x100, virtual false, abstract: false, final false
  inline void UnregisterFromEvents();

  /// @brief Method Update, addr 0x3ba93a4, size 0x80, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr void __cordl_internal_set__multiplierAnimator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__multiplierIncreasedTriggerId(int32_t value);

  constexpr void __cordl_internal_set__multiplierProgressImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__multiplierTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr void __cordl_internal_set__prevMultiplier(int32_t value);

  constexpr void __cordl_internal_set__progressTarget(float_t value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x3ba94f0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4419 };

  /// @brief Field _multiplierTexts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____multiplierTexts;

  /// @brief Field _multiplierProgressImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____multiplierProgressImage;

  /// @brief Field _multiplierAnimator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____multiplierAnimator;

  /// @brief Field _scoreController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _prevMultiplier, offset: 0x40, size: 0x4, def value: None
  int32_t ____prevMultiplier;

  /// @brief Field _multiplierIncreasedTriggerId, offset: 0x44, size: 0x4, def value: None
  int32_t ____multiplierIncreasedTriggerId;

  /// @brief Field _progressTarget, offset: 0x48, size: 0x4, def value: None
  float_t ____progressTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierTexts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierProgressImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierAnimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____scoreController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____prevMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____multiplierIncreasedTriggerId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreMultiplierUIController, ____progressTarget) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierUIController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
