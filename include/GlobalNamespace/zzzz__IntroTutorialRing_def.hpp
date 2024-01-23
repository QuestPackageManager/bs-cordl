#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::IntroTutorialRing
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15036))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5337))
// CS Name: ::IntroTutorialRing*
class CORDL_TYPE IntroTutorialRing : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _progressImages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImages,
                      put = __cordl_internal_set__progressImages))::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> _progressImages;

  /// @brief Field _saberType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType))::GlobalNamespace::SaberType _saberType;

  /// @brief Field _particleSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _canvasGroup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _activationDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__activationDuration, put = __cordl_internal_set__activationDuration)) float_t _activationDuration;

  /// @brief Field _ringGLowImages, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ringGLowImages,
                      put = __cordl_internal_set__ringGLowImages))::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> _ringGLowImages;

  /// @brief Field _colorManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _highlighted, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _emitNextParticleTimer, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__emitNextParticleTimer, put = __cordl_internal_set__emitNextParticleTimer)) float_t _emitNextParticleTimer;

  /// @brief Field _activationProgress, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__activationProgress, put = __cordl_internal_set__activationProgress)) float_t _activationProgress;

  /// @brief Field _sabersInside, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sabersInside, put = __cordl_internal_set__sabersInside))::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* _sabersInside;

  /// @brief Field _sabersInsideAfterOnEnable, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__sabersInsideAfterOnEnable, put = __cordl_internal_set__sabersInsideAfterOnEnable)) bool _sabersInsideAfterOnEnable;

  __declspec(property(put = set_alpha)) float_t alpha;

  __declspec(property(get = get_fullyActivated)) bool fullyActivated;

  __declspec(property(get = get_saberType, put = set_saberType))::GlobalNamespace::SaberType saberType;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__progressImages();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__progressImages() const;

  constexpr void __cordl_internal_set__progressImages(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr float_t& __cordl_internal_get__activationDuration();

  constexpr float_t const& __cordl_internal_get__activationDuration() const;

  constexpr void __cordl_internal_set__activationDuration(float_t value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__ringGLowImages();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__ringGLowImages() const;

  constexpr void __cordl_internal_set__ringGLowImages(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr float_t& __cordl_internal_get__emitNextParticleTimer();

  constexpr float_t const& __cordl_internal_get__emitNextParticleTimer() const;

  constexpr void __cordl_internal_set__emitNextParticleTimer(float_t value);

  constexpr float_t& __cordl_internal_get__activationProgress();

  constexpr float_t const& __cordl_internal_get__activationProgress() const;

  constexpr void __cordl_internal_set__activationProgress(float_t value);

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*& __cordl_internal_get__sabersInside();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*> const& __cordl_internal_get__sabersInside() const;

  constexpr void __cordl_internal_set__sabersInside(::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* value);

  constexpr bool& __cordl_internal_get__sabersInsideAfterOnEnable();

  constexpr bool const& __cordl_internal_get__sabersInsideAfterOnEnable() const;

  constexpr void __cordl_internal_set__sabersInsideAfterOnEnable(bool value);

  /// @brief Method set_alpha, addr 0x2269230, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method get_fullyActivated, addr 0x2268fec, size 0x24, virtual false, abstract: false, final false
  inline bool get_fullyActivated();

  /// @brief Method get_saberType, addr 0x22693dc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberType get_saberType();

  /// @brief Method set_saberType, addr 0x22693e4, size 0x8, virtual false, abstract: false, final false
  inline void set_saberType(::GlobalNamespace::SaberType value);

  /// @brief Method Start, addr 0x22693ec, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x2269478, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x22694c8, size 0x11c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SetProgressImagesfillAmount, addr 0x22695e4, size 0x70, virtual false, abstract: false, final false
  inline void SetProgressImagesfillAmount(float_t fillAmount);

  /// @brief Method OnTriggerEnter, addr 0x2269654, size 0x108, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit, addr 0x226975c, size 0x108, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay, addr 0x2269864, size 0x108, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  static inline ::GlobalNamespace::IntroTutorialRing* New_ctor();

  /// @brief Method .ctor, addr 0x226996c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntroTutorialRing(IntroTutorialRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntroTutorialRing(IntroTutorialRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntroTutorialRing();

public:
  /// @brief Field _progressImages, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____progressImages;

  /// @brief Field _saberType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  /// @brief Field _particleSystem, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _canvasGroup, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _activationDuration, offset: 0x38, size: 0x4, def value: None
  float_t ____activationDuration;

  /// @brief Field _ringGLowImages, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____ringGLowImages;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _highlighted, offset: 0x50, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _emitNextParticleTimer, offset: 0x54, size: 0x4, def value: None
  float_t ____emitNextParticleTimer;

  /// @brief Field _activationProgress, offset: 0x58, size: 0x4, def value: None
  float_t ____activationProgress;

  /// @brief Field _sabersInside, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* ____sabersInside;

  /// @brief Field _sabersInsideAfterOnEnable, offset: 0x68, size: 0x1, def value: None
  bool ____sabersInsideAfterOnEnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntroTutorialRing, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____progressImages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____saberType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____particleSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____canvasGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____activationDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____ringGLowImages) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____colorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____highlighted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____emitNextParticleTimer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____activationProgress) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____sabersInside) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialRing, ____sabersInsideAfterOnEnable) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntroTutorialRing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntroTutorialRing*, "", "IntroTutorialRing");
