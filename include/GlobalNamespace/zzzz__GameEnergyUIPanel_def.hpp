#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEnergyUIPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEnergyUIPanel)
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEnergyUIPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameEnergyUIPanel);
// Type: ::GameEnergyUIPanel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameEnergyUIPanel*
class CORDL_TYPE GameEnergyUIPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeBatteryLifeSegmentsCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__activeBatteryLifeSegmentsCount, put = __cordl_internal_set__activeBatteryLifeSegmentsCount)) int32_t _activeBatteryLifeSegmentsCount;

  /// @brief Field _batteryLifeSegmentPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__batteryLifeSegmentPrefab, put = __cordl_internal_set__batteryLifeSegmentPrefab))::UnityW<::UnityEngine::UI::Image> _batteryLifeSegmentPrefab;

  /// @brief Field _batteryLifeSegments, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__batteryLifeSegments,
                      put = __cordl_internal_set__batteryLifeSegments))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* _batteryLifeSegments;

  /// @brief Field _batterySegmentHorizontalPadding, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__batterySegmentHorizontalPadding, put = __cordl_internal_set__batterySegmentHorizontalPadding)) float_t _batterySegmentHorizontalPadding;

  /// @brief Field _batterySegmentSeparatorWidth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__batterySegmentSeparatorWidth, put = __cordl_internal_set__batterySegmentSeparatorWidth)) float_t _batterySegmentSeparatorWidth;

  /// @brief Field _energyBar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__energyBar, put = __cordl_internal_set__energyBar))::UnityW<::UnityEngine::UI::Image> _energyBar;

  /// @brief Field _energyBarRectTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__energyBarRectTransform, put = __cordl_internal_set__energyBarRectTransform))::UnityW<::UnityEngine::RectTransform> _energyBarRectTransform;

  /// @brief Field _gameEnergyCounter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter))::GlobalNamespace::IGameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _playableDirector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playableDirector, put = __cordl_internal_set__playableDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> _playableDirector;

  /// @brief Method CreateUIForBatteryEnergyType, addr 0x270b440, size 0x2e4, virtual false, abstract: false, final false
  inline void CreateUIForBatteryEnergyType(int32_t batteryLives);

  /// @brief Method HandleGameEnergyCounterDidInit, addr 0x270bbac, size 0x4, virtual false, abstract: false, final false
  inline void HandleGameEnergyCounterDidInit();

  /// @brief Method HandleGameEnergyDidChange, addr 0x270bbb0, size 0x4, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidChange(float_t energy);

  /// @brief Method Init, addr 0x270b0a0, size 0x3a0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GameEnergyUIPanel* New_ctor();

  /// @brief Method OnDestroy, addr 0x270b9f4, size 0x1b8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshEnergyUI, addr 0x270b724, size 0x2d0, virtual false, abstract: false, final false
  inline void RefreshEnergyUI(float_t energy);

  /// @brief Method Start, addr 0x270af1c, size 0x184, virtual false, abstract: false, final false
  inline void Start();

  constexpr int32_t const& __cordl_internal_get__activeBatteryLifeSegmentsCount() const;

  constexpr int32_t& __cordl_internal_get__activeBatteryLifeSegmentsCount();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__batteryLifeSegmentPrefab() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__batteryLifeSegmentPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get__batteryLifeSegments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__batteryLifeSegments() const;

  constexpr float_t const& __cordl_internal_get__batterySegmentHorizontalPadding() const;

  constexpr float_t& __cordl_internal_get__batterySegmentHorizontalPadding();

  constexpr float_t const& __cordl_internal_get__batterySegmentSeparatorWidth() const;

  constexpr float_t& __cordl_internal_get__batterySegmentSeparatorWidth();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__energyBar() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__energyBar();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__energyBarRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__energyBarRectTransform();

  constexpr ::GlobalNamespace::IGameEnergyCounter*& __cordl_internal_get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameEnergyCounter*> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__playableDirector() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__playableDirector();

  constexpr void __cordl_internal_set__activeBatteryLifeSegmentsCount(int32_t value);

  constexpr void __cordl_internal_set__batteryLifeSegmentPrefab(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__batteryLifeSegments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  constexpr void __cordl_internal_set__batterySegmentHorizontalPadding(float_t value);

  constexpr void __cordl_internal_set__batterySegmentSeparatorWidth(float_t value);

  constexpr void __cordl_internal_set__energyBar(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__energyBarRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter* value);

  constexpr void __cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  /// @brief Method .ctor, addr 0x270bbb4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameEnergyUIPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameEnergyUIPanel(GameEnergyUIPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameEnergyUIPanel(GameEnergyUIPanel const&) = delete;

  /// @brief Field _energyBar, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____energyBar;

  /// @brief Field _playableDirector, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____playableDirector;

  /// @brief Field _batteryLifeSegmentPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____batteryLifeSegmentPrefab;

  /// @brief Field _batterySegmentSeparatorWidth, offset: 0x30, size: 0x4, def value: None
  float_t ____batterySegmentSeparatorWidth;

  /// @brief Field _batterySegmentHorizontalPadding, offset: 0x34, size: 0x4, def value: None
  float_t ____batterySegmentHorizontalPadding;

  /// @brief Field _gameEnergyCounter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _batteryLifeSegments, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* ____batteryLifeSegments;

  /// @brief Field _activeBatteryLifeSegmentsCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____activeBatteryLifeSegmentsCount;

  /// @brief Field _energyBarRectTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____energyBarRectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameEnergyUIPanel, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____energyBar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____playableDirector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____batteryLifeSegmentPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____batterySegmentSeparatorWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____batterySegmentHorizontalPadding) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____gameEnergyCounter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____batteryLifeSegments) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____activeBatteryLifeSegmentsCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyUIPanel, ____energyBarRectTransform) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameEnergyUIPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyUIPanel*, "", "GameEnergyUIPanel");
