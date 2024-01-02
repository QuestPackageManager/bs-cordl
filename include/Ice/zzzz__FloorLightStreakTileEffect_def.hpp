#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloorLightStreakTileEffect)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace Ice {
class __FloorLightStreakTileEffect__Element;
}
namespace GlobalNamespace {
template <typename T> class SimpleMemoryPool_1;
}
namespace Ice {
class FloorLightTilesGrid;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace Ice {
class __FloorLightStreakTileEffect__Element;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightStreakTileEffect);
MARK_REF_PTR_T(::Ice::__FloorLightStreakTileEffect__Element);
// Type: ::Element
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16165))
// CS Name: ::FloorLightStreakTileEffect::Element*
class CORDL_TYPE __FloorLightStreakTileEffect__Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field didMoveToNextTile, offset 0x10, size 0x8
  __declspec(property(get = __get_didMoveToNextTile, put = __set_didMoveToNextTile))::System::Action_1<::Ice::__FloorLightStreakTileEffect__Element*>* didMoveToNextTile;

  /// @brief Field _currentTileY, offset 0x18, size 0x4
  __declspec(property(get = __get__currentTileY, put = __set__currentTileY)) int32_t _currentTileY;

  /// @brief Field _lineIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get__lineIndex, put = __set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _nextTileRemainingTime, offset 0x20, size 0x4
  __declspec(property(get = __get__nextTileRemainingTime, put = __set__nextTileRemainingTime)) float_t _nextTileRemainingTime;

  /// @brief Field _stayOnTileDuration, offset 0x24, size 0x4
  __declspec(property(get = __get__stayOnTileDuration, put = __set__stayOnTileDuration)) float_t _stayOnTileDuration;

  /// @brief Field _color, offset 0x28, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_currentTileY)) int32_t currentTileY;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::System::Action_1<::Ice::__FloorLightStreakTileEffect__Element*>*& __get_didMoveToNextTile();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Ice::__FloorLightStreakTileEffect__Element*>*> const& __get_didMoveToNextTile() const;

  constexpr void __set_didMoveToNextTile(::System::Action_1<::Ice::__FloorLightStreakTileEffect__Element*>* value);

  constexpr int32_t& __get__currentTileY();

  constexpr int32_t const& __get__currentTileY() const;

  constexpr void __set__currentTileY(int32_t value);

  constexpr int32_t& __get__lineIndex();

  constexpr int32_t const& __get__lineIndex() const;

  constexpr void __set__lineIndex(int32_t value);

  constexpr float_t& __get__nextTileRemainingTime();

  constexpr float_t const& __get__nextTileRemainingTime() const;

  constexpr void __set__nextTileRemainingTime(float_t value);

  constexpr float_t& __get__stayOnTileDuration();

  constexpr float_t const& __get__stayOnTileDuration() const;

  constexpr void __set__stayOnTileDuration(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method get_lineIndex, addr 0x129f878, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_currentTileY, addr 0x129f880, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentTileY();

  /// @brief Method get_color, addr 0x129f888, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method Setup, addr 0x129f40c, size 0x14, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Color color, int32_t lineIndex, float_t stayOnTileDuration);

  /// @brief Method ManualUpdate, addr 0x129f2e4, size 0x68, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t deltaTime);

  static inline ::Ice::__FloorLightStreakTileEffect__Element* New_ctor();

  /// @brief Method .ctor, addr 0x129f7c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightStreakTileEffect__Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloorLightStreakTileEffect__Element(__FloorLightStreakTileEffect__Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloorLightStreakTileEffect__Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloorLightStreakTileEffect__Element(__FloorLightStreakTileEffect__Element const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloorLightStreakTileEffect__Element();

public:
  /// @brief Field didMoveToNextTile, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::Ice::__FloorLightStreakTileEffect__Element*>* ___didMoveToNextTile;

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
static_assert(::cordl_internals::size_check_v<::Ice::__FloorLightStreakTileEffect__Element, 0x38>, "Size mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ___didMoveToNextTile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ____currentTileY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ____lineIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ____nextTileRemainingTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ____stayOnTileDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Ice::__FloorLightStreakTileEffect__Element, ____color) == 0x28, "Offset mismatch!");

} // namespace Ice
// Type: Ice::FloorLightStreakTileEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16166))
// CS Name: ::Ice::FloorLightStreakTileEffect*
class CORDL_TYPE FloorLightStreakTileEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Element = ::Ice::__FloorLightStreakTileEffect__Element;

  /// @brief Field _stayOnTileDuration, offset 0x18, size 0x4
  __declspec(property(get = __get__stayOnTileDuration, put = __set__stayOnTileDuration)) float_t _stayOnTileDuration;

  /// @brief Field _floorLightTilesGrid, offset 0x20, size 0x8
  __declspec(property(get = __get__floorLightTilesGrid, put = __set__floorLightTilesGrid))::Ice::FloorLightTilesGrid* _floorLightTilesGrid;

  /// @brief Field _audioTimeSource, offset 0x28, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _elementsPool, offset 0x30, size 0x8
  __declspec(property(get = __get__elementsPool, put = __set__elementsPool))::GlobalNamespace::SimpleMemoryPool_1<::Ice::__FloorLightStreakTileEffect__Element*>* _elementsPool;

  constexpr float_t& __get__stayOnTileDuration();

  constexpr float_t const& __get__stayOnTileDuration() const;

  constexpr void __set__stayOnTileDuration(float_t value);

  constexpr ::Ice::FloorLightTilesGrid*& __get__floorLightTilesGrid();

  constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTilesGrid*> const& __get__floorLightTilesGrid() const;

  constexpr void __set__floorLightTilesGrid(::Ice::FloorLightTilesGrid* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::SimpleMemoryPool_1<::Ice::__FloorLightStreakTileEffect__Element*>*& __get__elementsPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleMemoryPool_1<::Ice::__FloorLightStreakTileEffect__Element*>*> const& __get__elementsPool() const;

  constexpr void __set__elementsPool(::GlobalNamespace::SimpleMemoryPool_1<::Ice::__FloorLightStreakTileEffect__Element*>* value);

  /// @brief Method Start, addr 0x129f030, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x129f0f4, size 0x1f0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SpawnEffect, addr 0x129f34c, size 0xc0, virtual false, abstract: false, final false
  inline void SpawnEffect(int32_t x, ::UnityEngine::Color color);

  /// @brief Method DespawnAllEffects, addr 0x129f5d8, size 0xe4, virtual false, abstract: false, final false
  inline void DespawnAllEffects();

  /// @brief Method CreateNewElement, addr 0x129f6bc, size 0x104, virtual false, abstract: false, final false
  inline ::Ice::__FloorLightStreakTileEffect__Element* CreateNewElement();

  /// @brief Method HandleElementDidMoveToNextTile, addr 0x129f7c8, size 0x9c, virtual false, abstract: false, final false
  inline void HandleElementDidMoveToNextTile(::Ice::__FloorLightStreakTileEffect__Element* element);

  static inline ::Ice::FloorLightStreakTileEffect* New_ctor();

  /// @brief Method .ctor, addr 0x129f864, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightStreakTileEffect(FloorLightStreakTileEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightStreakTileEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightStreakTileEffect(FloorLightStreakTileEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightStreakTileEffect();

public:
  /// @brief Field _stayOnTileDuration, offset: 0x18, size: 0x4, def value: None
  float_t ____stayOnTileDuration;

  /// @brief Field _floorLightTilesGrid, offset: 0x20, size: 0x8, def value: None
  ::Ice::FloorLightTilesGrid* ____floorLightTilesGrid;

  /// @brief Field _audioTimeSource, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _elementsPool, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SimpleMemoryPool_1<::Ice::__FloorLightStreakTileEffect__Element*>* ____elementsPool;

  /// @brief Field kFadeInDuration offset 0xffffffff size 0x4
  static constexpr float_t kFadeInDuration{ 0.1 };

  /// @brief Field kFadeOutDuration offset 0xffffffff size 0x4
  static constexpr float_t kFadeOutDuration{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightStreakTileEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____stayOnTileDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____floorLightTilesGrid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____audioTimeSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightStreakTileEffect, ____elementsPool) == 0x30, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightStreakTileEffect);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightStreakTileEffect*, "Ice", "FloorLightStreakTileEffect");
NEED_NO_BOX(::Ice::__FloorLightStreakTileEffect__Element);
DEFINE_IL2CPP_ARG_TYPE(::Ice::__FloorLightStreakTileEffect__Element*, "Ice", "FloorLightStreakTileEffect/Element");
