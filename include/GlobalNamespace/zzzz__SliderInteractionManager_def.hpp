#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderInteractionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderInteractionManager)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class SliderController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderInteractionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderInteractionManager);
// Dependencies ColorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderInteractionManager
class CORDL_TYPE SliderInteractionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeSliders, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__activeSliders,
                      put = __cordl_internal_set__activeSliders)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* _activeSliders;

  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _colorType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType, put = __cordl_internal_set__colorType)) ::GlobalNamespace::ColorType _colorType;

  /// @brief Field <saberInteractionParam>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__saberInteractionParam_k__BackingField,
                      put = __cordl_internal_set__saberInteractionParam_k__BackingField)) float_t _saberInteractionParam_k__BackingField;

  /// @brief Field allSliderWereRemovedFromActiveSlidersEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_allSliderWereRemovedFromActiveSlidersEvent,
      put = __cordl_internal_set_allSliderWereRemovedFromActiveSlidersEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* allSliderWereRemovedFromActiveSlidersEvent;

  __declspec(property(get = get_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_saberInteractionParam, put = set_saberInteractionParam)) float_t saberInteractionParam;

  /// @brief Field sliderWasAddedToActiveSlidersEvent, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_sliderWasAddedToActiveSlidersEvent,
      put = __cordl_internal_set_sliderWasAddedToActiveSlidersEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* sliderWasAddedToActiveSlidersEvent;

  /// @brief Method AddActiveSlider, addr 0x3b766ac, size 0x220, virtual false, abstract: false, final false
  inline void AddActiveSlider(::GlobalNamespace::SliderController* newSliderController);

  /// @brief Method HandleSliderWasDespawned, addr 0x3b7699c, size 0x34, virtual false, abstract: false, final false
  inline void HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleSliderWasSpawned, addr 0x3b76968, size 0x34, virtual false, abstract: false, final false
  inline void HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController);

  static inline ::GlobalNamespace::SliderInteractionManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b76460, size 0xe8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveActiveSlider, addr 0x3b768cc, size 0x9c, virtual false, abstract: false, final false
  inline void RemoveActiveSlider(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method Start, addr 0x3b76388, size 0xd8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b76548, size 0x164, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* const& __cordl_internal_get__activeSliders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>*& __cordl_internal_get__activeSliders();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get__colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get__colorType();

  constexpr float_t const& __cordl_internal_get__saberInteractionParam_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__saberInteractionParam_k__BackingField();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const& __cordl_internal_get_allSliderWereRemovedFromActiveSlidersEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*& __cordl_internal_get_allSliderWereRemovedFromActiveSlidersEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* const& __cordl_internal_get_sliderWasAddedToActiveSlidersEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*& __cordl_internal_get_sliderWasAddedToActiveSlidersEvent();

  constexpr void __cordl_internal_set__activeSliders(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set__saberInteractionParam_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  constexpr void __cordl_internal_set_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value);

  /// @brief Method .ctor, addr 0x3b769d0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_allSliderWereRemovedFromActiveSlidersEvent, addr 0x3b76064, size 0xb0, virtual false, abstract: false, final false
  inline void add_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  /// @brief Method add_sliderWasAddedToActiveSlidersEvent, addr 0x3b75fb4, size 0xb0, virtual false, abstract: false, final false
  inline void add_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value);

  /// @brief Method get_colorType, addr 0x3b76370, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_saberInteractionParam, addr 0x3b76378, size 0x8, virtual false, abstract: false, final false
  inline float_t get_saberInteractionParam();

  /// @brief Method remove_allSliderWereRemovedFromActiveSlidersEvent, addr 0x3b762a8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value);

  /// @brief Method remove_sliderWasAddedToActiveSlidersEvent, addr 0x3b761f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value);

  /// @brief Method set_saberInteractionParam, addr 0x3b76380, size 0x8, virtual false, abstract: false, final false
  inline void set_saberInteractionParam(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderInteractionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderInteractionManager(SliderInteractionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderInteractionManager(SliderInteractionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4175 };

  /// @brief Field _colorType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ____colorType;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field <saberInteractionParam>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____saberInteractionParam_k__BackingField;

  /// @brief Field sliderWasAddedToActiveSlidersEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* ___sliderWasAddedToActiveSlidersEvent;

  /// @brief Field allSliderWereRemovedFromActiveSlidersEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* ___allSliderWereRemovedFromActiveSlidersEvent;

  /// @brief Field _activeSliders, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* ____activeSliders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ____colorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ____saberInteractionParam_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ___sliderWasAddedToActiveSlidersEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ___allSliderWereRemovedFromActiveSlidersEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderInteractionManager, ____activeSliders) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderInteractionManager, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderInteractionManager*, "", "SliderInteractionManager");
