#pragma once
// IWYU pragma private; include "GlobalNamespace/IntroTutorialRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IntroTutorialRing)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class IntroTutorialRing;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntroTutorialRing);
// Dependencies SaberType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IntroTutorialRing
class CORDL_TYPE IntroTutorialRing : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activationDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__activationDuration, put = __cordl_internal_set__activationDuration)) float_t _activationDuration;

  /// @brief Field _activationProgress, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__activationProgress, put = __cordl_internal_set__activationProgress)) float_t _activationProgress;

  /// @brief Field _canvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _colorManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _emitNextParticleTimer, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__emitNextParticleTimer, put = __cordl_internal_set__emitNextParticleTimer)) float_t _emitNextParticleTimer;

  /// @brief Field _highlighted, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _particleSystem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _progressImages, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImages,
                      put = __cordl_internal_set__progressImages)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>
      _progressImages;

  /// @brief Field _ringGLowImages, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ringGLowImages,
                      put = __cordl_internal_set__ringGLowImages)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>
      _ringGLowImages;

  /// @brief Field _saberType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType)) ::GlobalNamespace::SaberType _saberType;

  /// @brief Field _sabersInside, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sabersInside, put = __cordl_internal_set__sabersInside)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* _sabersInside;

  /// @brief Field _sabersInsideAfterOnEnable, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__sabersInsideAfterOnEnable, put = __cordl_internal_set__sabersInsideAfterOnEnable)) bool _sabersInsideAfterOnEnable;

  __declspec(property(put = set_alpha)) float_t alpha;

  __declspec(property(get = get_fullyActivated)) bool fullyActivated;

  __declspec(property(get = get_saberType, put = set_saberType)) ::GlobalNamespace::SaberType saberType;

  static inline ::GlobalNamespace::IntroTutorialRing* New_ctor();

  /// @brief Method OnEnable, addr 0x3b4e504, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTriggerEnter, addr 0x3b4e6e0, size 0x10c, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit, addr 0x3b4e7ec, size 0x10c, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay, addr 0x3b4e8f8, size 0x10c, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  /// @brief Method SetProgressImagesfillAmount, addr 0x3b4e670, size 0x70, virtual false, abstract: false, final false
  inline void SetProgressImagesfillAmount(float_t fillAmount);

  /// @brief Method Start, addr 0x3b4e478, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b4e554, size 0x11c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__activationDuration() const;

  constexpr float_t& __cordl_internal_get__activationDuration();

  constexpr float_t const& __cordl_internal_get__activationProgress() const;

  constexpr float_t& __cordl_internal_get__activationProgress();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr float_t const& __cordl_internal_get__emitNextParticleTimer() const;

  constexpr float_t& __cordl_internal_get__emitNextParticleTimer();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__progressImages() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__progressImages();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__ringGLowImages() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__ringGLowImages();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* const& __cordl_internal_get__sabersInside() const;

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*& __cordl_internal_get__sabersInside();

  constexpr bool const& __cordl_internal_get__sabersInsideAfterOnEnable() const;

  constexpr bool& __cordl_internal_get__sabersInsideAfterOnEnable();

  constexpr void __cordl_internal_set__activationDuration(float_t value);

  constexpr void __cordl_internal_set__activationProgress(float_t value);

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__emitNextParticleTimer(float_t value);

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__progressImages(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set__ringGLowImages(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  constexpr void __cordl_internal_set__sabersInside(::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* value);

  constexpr void __cordl_internal_set__sabersInsideAfterOnEnable(bool value);

  /// @brief Method .ctor, addr 0x3b4ea04, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fullyActivated, addr 0x3b4e444, size 0x24, virtual false, abstract: false, final false
  inline bool get_fullyActivated();

  /// @brief Method get_saberType, addr 0x3b4e468, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberType get_saberType();

  /// @brief Method set_alpha, addr 0x3b4e428, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_saberType, addr 0x3b4e470, size 0x8, virtual false, abstract: false, final false
  inline void set_saberType(::GlobalNamespace::SaberType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntroTutorialRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntroTutorialRing(IntroTutorialRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntroTutorialRing(IntroTutorialRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5282 };

  /// @brief Field _progressImages, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____progressImages;

  /// @brief Field _saberType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  /// @brief Field _particleSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _canvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _activationDuration, offset: 0x40, size: 0x4, def value: None
  float_t ____activationDuration;

  /// @brief Field _ringGLowImages, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____ringGLowImages;

  /// @brief Field _colorManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _highlighted, offset: 0x58, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _emitNextParticleTimer, offset: 0x5c, size: 0x4, def value: None
  float_t ____emitNextParticleTimer;

  /// @brief Field _activationProgress, offset: 0x60, size: 0x4, def value: None
  float_t ____activationProgress;

  /// @brief Field _sabersInside, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* ____sabersInside;

  /// @brief Field _sabersInsideAfterOnEnable, offset: 0x70, size: 0x1, def value: None
  bool ____sabersInsideAfterOnEnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____progressImages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____saberType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____particleSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____canvasGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____activationDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____ringGLowImages) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____colorManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____highlighted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____emitNextParticleTimer) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____activationProgress) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____sabersInside) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____sabersInsideAfterOnEnable) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntroTutorialRing, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntroTutorialRing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntroTutorialRing*, "", "IntroTutorialRing");
