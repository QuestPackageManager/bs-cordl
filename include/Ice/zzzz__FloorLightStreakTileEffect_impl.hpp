#pragma once
// IWYU pragma private; include "Ice/FloorLightStreakTileEffect.hpp"
#include "GlobalNamespace/zzzz__AbstractPoolContainer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Ice/zzzz__FloorLightStreakTileEffect_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__SimpleMemoryPool_1_def.hpp"
#include "Ice/zzzz__FloorLightStreakTileEffect_def.hpp"
#include "Ice/zzzz__FloorLightTilesGrid_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ice::FloorLightStreakTileEffect_Element::*)()>(&::Ice::FloorLightStreakTileEffect_Element::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3288ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element.get_currentTileY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ice::FloorLightStreakTileEffect_Element::*)()>(&::Ice::FloorLightStreakTileEffect_Element::get_currentTileY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3288ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_currentTileY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Ice::FloorLightStreakTileEffect_Element::*)()>(&::Ice::FloorLightStreakTileEffect_Element::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3288cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect_Element::*)(::UnityEngine::Color, int32_t, float_t)>(
    &::Ice::FloorLightStreakTileEffect_Element::Setup)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3288848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(),
                                                             { "Setup", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect_Element::*)(float_t)>(&::Ice::FloorLightStreakTileEffect_Element::ManualUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3288710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect_Element._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect_Element::*)()>(&::Ice::FloorLightStreakTileEffect_Element::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>*& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get_didMoveToNextTile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didMoveToNextTile;
}
constexpr ::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get_didMoveToNextTile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didMoveToNextTile;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set_didMoveToNextTile(::System::Action_1<::Ice::FloorLightStreakTileEffect_Element*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didMoveToNextTile = value;
}
constexpr int32_t& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__currentTileY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTileY;
}
constexpr int32_t const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__currentTileY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTileY;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set__currentTileY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTileY = value;
}
constexpr int32_t& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr int32_t const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set__lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex = value;
}
constexpr float_t& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__nextTileRemainingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextTileRemainingTime;
}
constexpr float_t const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__nextTileRemainingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextTileRemainingTime;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set__nextTileRemainingTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextTileRemainingTime = value;
}
constexpr float_t& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__stayOnTileDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOnTileDuration;
}
constexpr float_t const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__stayOnTileDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOnTileDuration;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set__stayOnTileDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stayOnTileDuration = value;
}
constexpr ::UnityEngine::Color& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& Ice::FloorLightStreakTileEffect_Element::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void Ice::FloorLightStreakTileEffect_Element::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
inline int32_t Ice::FloorLightStreakTileEffect_Element::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ice::FloorLightStreakTileEffect_Element::get_currentTileY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_currentTileY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Color Ice::FloorLightStreakTileEffect_Element::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Ice::FloorLightStreakTileEffect_Element::Setup(::UnityEngine::Color color, int32_t lineIndex, float_t stayOnTileDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(),
                                                           { "Setup", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, lineIndex, stayOnTileDuration);
}
inline void Ice::FloorLightStreakTileEffect_Element::ManualUpdate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Ice::FloorLightStreakTileEffect_Element::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect_Element*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightStreakTileEffect_Element* Ice::FloorLightStreakTileEffect_Element::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightStreakTileEffect_Element*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightStreakTileEffect_Element::FloorLightStreakTileEffect_Element() {}
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)()>(&::Ice::FloorLightStreakTileEffect::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3288494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)()>(&::Ice::FloorLightStreakTileEffect::Update)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x328855c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.SpawnEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)(int32_t, ::UnityEngine::Color)>(&::Ice::FloorLightStreakTileEffect::SpawnEffect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3288778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "SpawnEffect", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.DespawnAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)()>(&::Ice::FloorLightStreakTileEffect::DespawnAll)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3288a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { ::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.CreateNewElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ice::FloorLightStreakTileEffect_Element* (::Ice::FloorLightStreakTileEffect::*)()>(&::Ice::FloorLightStreakTileEffect::CreateNewElement)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3288b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "CreateNewElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect.HandleElementDidMoveToNextTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)(::Ice::FloorLightStreakTileEffect_Element*)>(
    &::Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3288c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "HandleElementDidMoveToNextTile", {}, { ::i2c::type_of<::Ice::FloorLightStreakTileEffect_Element*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightStreakTileEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightStreakTileEffect::*)()>(&::Ice::FloorLightStreakTileEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3288cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& Ice::FloorLightStreakTileEffect::__cordl_internal_get__stayOnTileDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOnTileDuration;
}
constexpr float_t const& Ice::FloorLightStreakTileEffect::__cordl_internal_get__stayOnTileDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOnTileDuration;
}
constexpr void Ice::FloorLightStreakTileEffect::__cordl_internal_set__stayOnTileDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stayOnTileDuration = value;
}
constexpr ::UnityW<::Ice::FloorLightTilesGrid>& Ice::FloorLightStreakTileEffect::__cordl_internal_get__floorLightTilesGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr ::UnityW<::Ice::FloorLightTilesGrid> const& Ice::FloorLightStreakTileEffect::__cordl_internal_get__floorLightTilesGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr void Ice::FloorLightStreakTileEffect::__cordl_internal_set__floorLightTilesGrid(::UnityW<::Ice::FloorLightTilesGrid> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightTilesGrid = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& Ice::FloorLightStreakTileEffect::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& Ice::FloorLightStreakTileEffect::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void Ice::FloorLightStreakTileEffect::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>*& Ice::FloorLightStreakTileEffect::__cordl_internal_get__elementsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsPool;
}
constexpr ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* const& Ice::FloorLightStreakTileEffect::__cordl_internal_get__elementsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsPool;
}
constexpr void Ice::FloorLightStreakTileEffect::__cordl_internal_set__elementsPool(::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect_Element*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementsPool = value;
}
inline void Ice::FloorLightStreakTileEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightStreakTileEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightStreakTileEffect::SpawnEffect(int32_t x, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "SpawnEffect", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, color);
}
inline void Ice::FloorLightStreakTileEffect::DespawnAll() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightStreakTileEffect_Element* Ice::FloorLightStreakTileEffect::CreateNewElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { "CreateNewElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Ice::FloorLightStreakTileEffect_Element*>(this, ___internal_method);
}
inline void Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile(::Ice::FloorLightStreakTileEffect_Element* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(),
                                                                                         { "HandleElementDidMoveToNextTile", {}, { ::i2c::type_of<::Ice::FloorLightStreakTileEffect_Element*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Ice::FloorLightStreakTileEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightStreakTileEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightStreakTileEffect* Ice::FloorLightStreakTileEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightStreakTileEffect*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightStreakTileEffect::FloorLightStreakTileEffect() {}
