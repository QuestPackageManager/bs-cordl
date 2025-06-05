#pragma once
// IWYU pragma private; include "Ice/FloorLightStreakTileEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbstractPoolContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloorLightStreakTileEffect)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
template <typename T> class SimpleMemoryPool_1;
}
namespace Ice {
class FloorLightStreakTileEffect_Element;
}
namespace Ice {
class FloorLightTilesGrid;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace Ice {
class FloorLightStreakTileEffect_Element;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightStreakTileEffect);
MARK_REF_PTR_T(::Ice::FloorLightStreakTileEffect_Element);
// Dependencies System.Object, UnityEngine.Color
namespace Ice {
// Is value type: false
// CS Name: Ice.FloorLightStreakTileEffect/Element
class CORDL_TYPE FloorLightStreakTileEffect_Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field _color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _currentTileY, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentTileY, put = __cordl_internal_set__currentTileY)) int32_t _currentTileY;

  /// @brief Field _lineIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex, put = __cordl_internal_set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _nextTileRemainingTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__nextTileRemainingTime, put = __cordl_internal_set__nextTileRemainingTime)) float_t _nextTileRemainingTime;

  /// @brief Field _stayOnTileDuration, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__stayOnTileDuration, put = __cordl_internal_set__stayOnTileDuration)) float_t _stayOnTileDuration;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_currentTileY)) int32_t currentTileY;

  /// @brief Field didMoveToNextTile, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didMoveToNextTile, put = __cordl_internal_set_didMoveToNextTile)) ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* didMoveToNextTile;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  /// @brief Method ManualUpdate, addr 0x2268fec, size 0x68, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t deltaTime);

  static inline ::Ice::FloorLightStreakTileEffect_Element* New_ctor();

  /// @brief Method Setup, addr 0x2269114, size 0x14, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Color color, int32_t lineIndex, float_t stayOnTileDuration);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr int32_t const& __cordl_internal_get__currentTileY() const;

  constexpr int32_t& __cordl_internal_get__currentTileY();

  constexpr int32_t const& __cordl_internal_get__lineIndex() const;

  constexpr int32_t& __cordl_internal_get__lineIndex();

  constexpr float_t const& __cordl_internal_get__nextTileRemainingTime() const;

  constexpr float_t& __cordl_internal_get__nextTileRemainingTime();

  constexpr float_t const& __cordl_internal_get__stayOnTileDuration() const;

  constexpr float_t& __cordl_internal_get__stayOnTileDuration();

  constexpr ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* const& __cordl_internal_get_didMoveToNextTile() const;

  constexpr ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>*& __cordl_internal_get_didMoveToNextTile();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__currentTileY(int32_t value);

  constexpr void __cordl_internal_set__lineIndex(int32_t value);

  constexpr void __cordl_internal_set__nextTileRemainingTime(float_t value);

  constexpr void __cordl_internal_set__stayOnTileDuration(float_t value);

  constexpr void __cordl_internal_set_didMoveToNextTile(::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* value);

  /// @brief Method .ctor, addr 0x22694c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x2269588, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_currentTileY, addr 0x2269580, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentTileY();

  /// @brief Method get_lineIndex, addr 0x2269578, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightStreakTileEffect_Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect_Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightStreakTileEffect_Element(FloorLightStreakTileEffect_Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect_Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightStreakTileEffect_Element(FloorLightStreakTileEffect_Element const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18945 };

  /// @brief Field didMoveToNextTile, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* ___didMoveToNextTile;

  /// @brief Field _currentTileY, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentTileY;

  /// @brief Field _lineIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _nextTileRemainingTime, offset: 0x20, size: 0x4, def value: None
  float_t ____nextTileRemainingTime;

  /// @brief Field _stayOnTileDuration, offset: 0x24, size: 0x4, def value: None
  float_t ____stayOnTileDuration;

  /// @brief Field _color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ___didMoveToNextTile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ____currentTileY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ____lineIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ____nextTileRemainingTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ____stayOnTileDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect_Element, ____color) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::FloorLightStreakTileEffect_Element, 0x38>, "Size mismatch!");

} // namespace Ice
// Dependencies AbstractPoolContainer
namespace Ice {
// Is value type: false
// CS Name: Ice.FloorLightStreakTileEffect
class CORDL_TYPE FloorLightStreakTileEffect : public ::GlobalNamespace::AbstractPoolContainer {
public:
  // Declarations
  using Element = ::Ice::FloorLightStreakTileEffect_Element;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _elementsPool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__elementsPool,
                      put = __cordl_internal_set__elementsPool)) ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* _elementsPool;

  /// @brief Field _floorLightTilesGrid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightTilesGrid, put = __cordl_internal_set__floorLightTilesGrid)) ::UnityW<::Ice::FloorLightTilesGrid> _floorLightTilesGrid;

  /// @brief Field _stayOnTileDuration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__stayOnTileDuration, put = __cordl_internal_set__stayOnTileDuration)) float_t _stayOnTileDuration;

  /// @brief Method CreateNewElement, addr 0x22693c0, size 0x100, virtual false, abstract: false, final false
  inline ::Ice::FloorLightStreakTileEffect_Element* CreateNewElement();

  /// @brief Method DespawnAll, addr 0x22692dc, size 0xe4, virtual true, abstract: false, final false
  inline void DespawnAll();

  /// @brief Method HandleElementDidMoveToNextTile, addr 0x22694c8, size 0x9c, virtual false, abstract: false, final false
  inline void HandleElementDidMoveToNextTile(::Ice::FloorLightStreakTileEffect_Element* element);

  static inline ::Ice::FloorLightStreakTileEffect* New_ctor();

  /// @brief Method SpawnEffect, addr 0x2269054, size 0xc0, virtual false, abstract: false, final false
  inline void SpawnEffect(int32_t x, ::UnityEngine::Color color);

  /// @brief Method Start, addr 0x2268d34, size 0xc8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2268dfc, size 0x1f0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* const& __cordl_internal_get__elementsPool() const;

  constexpr ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>*& __cordl_internal_get__elementsPool();

  constexpr ::UnityW<::Ice::FloorLightTilesGrid> const& __cordl_internal_get__floorLightTilesGrid() const;

  constexpr ::UnityW<::Ice::FloorLightTilesGrid>& __cordl_internal_get__floorLightTilesGrid();

  constexpr float_t const& __cordl_internal_get__stayOnTileDuration() const;

  constexpr float_t& __cordl_internal_get__stayOnTileDuration();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__elementsPool(::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* value);

  constexpr void __cordl_internal_set__floorLightTilesGrid(::UnityW<::Ice::FloorLightTilesGrid> value);

  constexpr void __cordl_internal_set__stayOnTileDuration(float_t value);

  /// @brief Method .ctor, addr 0x2269564, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightStreakTileEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightStreakTileEffect(FloorLightStreakTileEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightStreakTileEffect(FloorLightStreakTileEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18946 };

  /// @brief Field kFadeInDuration offset 0xffffffff size 0x4
  static constexpr float_t kFadeInDuration{ static_cast<float_t>(0.1f) };

  /// @brief Field kFadeOutDuration offset 0xffffffff size 0x4
  static constexpr float_t kFadeOutDuration{ static_cast<float_t>(0.4f) };

  /// @brief Field _stayOnTileDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____stayOnTileDuration;

  /// @brief Field _floorLightTilesGrid, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Ice::FloorLightTilesGrid> ____floorLightTilesGrid;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _elementsPool, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* ____elementsPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____stayOnTileDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____floorLightTilesGrid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____elementsPool) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::FloorLightStreakTileEffect, 0x40>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightStreakTileEffect);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightStreakTileEffect*, "Ice", "FloorLightStreakTileEffect");
NEED_NO_BOX(::Ice::FloorLightStreakTileEffect_Element);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightStreakTileEffect_Element*, "Ice", "FloorLightStreakTileEffect/Element");
