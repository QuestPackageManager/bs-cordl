#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEnergyUIPanel)
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5033))
// CS Name: ::GameEnergyUIPanel*
class CORDL_TYPE GameEnergyUIPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _energyBar, offset 0x18, size 0x8
  __declspec(property(get = __get__energyBar, put = __set__energyBar))::UnityEngine::UI::Image* _energyBar;

  /// @brief Field _playableDirector, offset 0x20, size 0x8
  __declspec(property(get = __get__playableDirector, put = __set__playableDirector))::UnityEngine::Playables::PlayableDirector* _playableDirector;

  /// @brief Field _batteryLifeSegmentPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__batteryLifeSegmentPrefab, put = __set__batteryLifeSegmentPrefab))::UnityEngine::UI::Image* _batteryLifeSegmentPrefab;

  /// @brief Field _batterySegmentSeparatorWidth, offset 0x30, size 0x4
  __declspec(property(get = __get__batterySegmentSeparatorWidth, put = __set__batterySegmentSeparatorWidth)) float_t _batterySegmentSeparatorWidth;

  /// @brief Field _batterySegmentHorizontalPadding, offset 0x34, size 0x4
  __declspec(property(get = __get__batterySegmentHorizontalPadding, put = __set__batterySegmentHorizontalPadding)) float_t _batterySegmentHorizontalPadding;

  /// @brief Field _gameEnergyCounter, offset 0x38, size 0x8
  __declspec(property(get = __get__gameEnergyCounter, put = __set__gameEnergyCounter))::GlobalNamespace::IGameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _batteryLifeSegments, offset 0x40, size 0x8
  __declspec(property(get = __get__batteryLifeSegments, put = __set__batteryLifeSegments))::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* _batteryLifeSegments;

  /// @brief Field _activeBatteryLifeSegmentsCount, offset 0x48, size 0x4
  __declspec(property(get = __get__activeBatteryLifeSegmentsCount, put = __set__activeBatteryLifeSegmentsCount)) int32_t _activeBatteryLifeSegmentsCount;

  /// @brief Field _energyBarRectTransform, offset 0x50, size 0x8
  __declspec(property(get = __get__energyBarRectTransform, put = __set__energyBarRectTransform))::UnityEngine::RectTransform* _energyBarRectTransform;

  constexpr ::UnityEngine::UI::Image*& __get__energyBar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__energyBar() const;

  constexpr void __set__energyBar(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__playableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__playableDirector() const;

  constexpr void __set__playableDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::UnityEngine::UI::Image*& __get__batteryLifeSegmentPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__batteryLifeSegmentPrefab() const;

  constexpr void __set__batteryLifeSegmentPrefab(::UnityEngine::UI::Image* value);

  constexpr float_t& __get__batterySegmentSeparatorWidth();

  constexpr float_t const& __get__batterySegmentSeparatorWidth() const;

  constexpr void __set__batterySegmentSeparatorWidth(float_t value);

  constexpr float_t& __get__batterySegmentHorizontalPadding();

  constexpr float_t const& __get__batterySegmentHorizontalPadding() const;

  constexpr void __set__batterySegmentHorizontalPadding(float_t value);

  constexpr ::GlobalNamespace::IGameEnergyCounter*& __get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameEnergyCounter*> const& __get__gameEnergyCounter() const;

  constexpr void __set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*& __get__batteryLifeSegments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*> const& __get__batteryLifeSegments() const;

  constexpr void __set__batteryLifeSegments(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* value);

  constexpr int32_t& __get__activeBatteryLifeSegmentsCount();

  constexpr int32_t const& __get__activeBatteryLifeSegmentsCount() const;

  constexpr void __set__activeBatteryLifeSegmentsCount(int32_t value);

  constexpr ::UnityEngine::RectTransform*& __get__energyBarRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__energyBarRectTransform() const;

  constexpr void __set__energyBarRectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method Start, addr 0x23c00a8, size 0x184, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Init, addr 0x23c022c, size 0x3a0, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method OnDestroy, addr 0x23c0b80, size 0x1b8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method CreateUIForBatteryEnergyType, addr 0x23c05cc, size 0x2e4, virtual false, abstract: false, final false
  inline void CreateUIForBatteryEnergyType(int32_t batteryLives);

  /// @brief Method RefreshEnergyUI, addr 0x23c08b0, size 0x2d0, virtual false, abstract: false, final false
  inline void RefreshEnergyUI(float_t energy);

  /// @brief Method HandleGameEnergyCounterDidInit, addr 0x23c0d38, size 0x4, virtual false, abstract: false, final false
  inline void HandleGameEnergyCounterDidInit();

  /// @brief Method HandleGameEnergyDidChange, addr 0x23c0d3c, size 0x4, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidChange(float_t energy);

  static inline ::GlobalNamespace::GameEnergyUIPanel* New_ctor();

  /// @brief Method .ctor, addr 0x23c0d40, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameEnergyUIPanel(GameEnergyUIPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameEnergyUIPanel(GameEnergyUIPanel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameEnergyUIPanel();

public:
  /// @brief Field _energyBar, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____energyBar;

  /// @brief Field _playableDirector, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____playableDirector;

  /// @brief Field _batteryLifeSegmentPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____batteryLifeSegmentPrefab;

  /// @brief Field _batterySegmentSeparatorWidth, offset: 0x30, size: 0x4, def value: None
  float_t ____batterySegmentSeparatorWidth;

  /// @brief Field _batterySegmentHorizontalPadding, offset: 0x34, size: 0x4, def value: None
  float_t ____batterySegmentHorizontalPadding;

  /// @brief Field _gameEnergyCounter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _batteryLifeSegments, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* ____batteryLifeSegments;

  /// @brief Field _activeBatteryLifeSegmentsCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____activeBatteryLifeSegmentsCount;

  /// @brief Field _energyBarRectTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____energyBarRectTransform;

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
