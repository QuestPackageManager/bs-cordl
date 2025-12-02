#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultEnvironmentEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEnvironmentEvents)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_BasicBeatmapEvent;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupDistribution;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupEvent;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupFiltering;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct IndexFilter_IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct IndexFilter_IndexFilterRandomType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_BasicBeatmapEvent;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupDistribution;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupEvent;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents_LightGroupFiltering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents);
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent);
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution);
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent);
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering);
// Dependencies BasicBeatmapEventType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEvents/BasicBeatmapEvent
class CORDL_TYPE DefaultEnvironmentEvents_BasicBeatmapEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__eventType, put = __cordl_internal_set__eventType)) ::GlobalNamespace::BasicBeatmapEventType _eventType;

  /// @brief Field _floatValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__floatValue, put = __cordl_internal_set__floatValue)) float_t _floatValue;

  /// @brief Field _value, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  __declspec(property(get = get_eventType)) ::GlobalNamespace::BasicBeatmapEventType eventType;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  __declspec(property(get = get_value)) int32_t value;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent* New_ctor();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventType();

  constexpr float_t const& __cordl_internal_get__floatValue() const;

  constexpr float_t& __cordl_internal_get__floatValue();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__eventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__value(int32_t value);

  /// @brief Method .ctor, addr 0x35e0b44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventType, addr 0x35e0b2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_eventType();

  /// @brief Method get_floatValue, addr 0x35e0b3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatValue();

  /// @brief Method get_value, addr 0x35e0b34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents_BasicBeatmapEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_BasicBeatmapEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents_BasicBeatmapEvent(DefaultEnvironmentEvents_BasicBeatmapEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_BasicBeatmapEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents_BasicBeatmapEvent(DefaultEnvironmentEvents_BasicBeatmapEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14797 };

  /// @brief Field _eventType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventType;

  /// @brief Field _value, offset: 0x14, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field _floatValue, offset: 0x18, size: 0x4, def value: None
  float_t ____floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent, ____eventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent, ____value) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent, ____floatValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEventDataBox::DistributionParamType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEvents/LightGroupDistribution
class CORDL_TYPE DefaultEnvironmentEvents_LightGroupDistribution : public ::System::Object {
public:
  // Declarations
  /// @brief Field _distributionParam, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__distributionParam, put = __cordl_internal_set__distributionParam)) float_t _distributionParam;

  /// @brief Field _distributionParamType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__distributionParamType,
                      put = __cordl_internal_set__distributionParamType)) ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType _distributionParamType;

  /// @brief Field _useDistribution, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useDistribution, put = __cordl_internal_set__useDistribution)) bool _useDistribution;

  __declspec(property(get = get_distributionParam)) float_t distributionParam;

  __declspec(property(get = get_distributionParamType)) ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType;

  __declspec(property(get = get_useDistribution)) bool useDistribution;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* New_ctor();

  constexpr float_t const& __cordl_internal_get__distributionParam() const;

  constexpr float_t& __cordl_internal_get__distributionParam();

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& __cordl_internal_get__distributionParamType() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& __cordl_internal_get__distributionParamType();

  constexpr bool const& __cordl_internal_get__useDistribution() const;

  constexpr bool& __cordl_internal_get__useDistribution();

  constexpr void __cordl_internal_set__distributionParam(float_t value);

  constexpr void __cordl_internal_set__distributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value);

  constexpr void __cordl_internal_set__useDistribution(bool value);

  /// @brief Method .ctor, addr 0x35e0b60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_distributionParam, addr 0x35e0b50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distributionParam();

  /// @brief Method get_distributionParamType, addr 0x35e0b58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType get_distributionParamType();

  /// @brief Method get_useDistribution, addr 0x35e0b48, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDistribution();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents_LightGroupDistribution();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupDistribution", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents_LightGroupDistribution(DefaultEnvironmentEvents_LightGroupDistribution&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupDistribution", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents_LightGroupDistribution(DefaultEnvironmentEvents_LightGroupDistribution const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14798 };

  /// @brief Field _useDistribution, offset: 0x10, size: 0x1, def value: None
  bool ____useDistribution;

  /// @brief Field _distributionParam, offset: 0x14, size: 0x4, def value: None
  float_t ____distributionParam;

  /// @brief Field _distributionParamType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType ____distributionParamType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution, ____useDistribution) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution, ____distributionParam) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution, ____distributionParamType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IndexFilter::IndexFilterLimitAlsoAffectType, IndexFilter::IndexFilterRandomType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEvents/LightGroupFiltering
class CORDL_TYPE DefaultEnvironmentEvents_LightGroupFiltering : public ::System::Object {
public:
  // Declarations
  /// @brief Field _alsoAffectType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__alsoAffectType, put = __cordl_internal_set__alsoAffectType)) ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType _alsoAffectType;

  /// @brief Field _chunks, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__chunks, put = __cordl_internal_set__chunks)) int32_t _chunks;

  /// @brief Field _limit, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit)) float_t _limit;

  /// @brief Field _randomType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__randomType, put = __cordl_internal_set__randomType)) ::GlobalNamespace::IndexFilter_IndexFilterRandomType _randomType;

  /// @brief Field _seed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int32_t _seed;

  /// @brief Field _useFiltering, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useFiltering, put = __cordl_internal_set__useFiltering)) bool _useFiltering;

  __declspec(property(get = get_alsoAffectType)) ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType alsoAffectType;

  __declspec(property(get = get_chunks)) int32_t chunks;

  __declspec(property(get = get_limit)) float_t limit;

  __declspec(property(get = get_randomType)) ::GlobalNamespace::IndexFilter_IndexFilterRandomType randomType;

  __declspec(property(get = get_seed)) int32_t seed;

  __declspec(property(get = get_useFiltering)) bool useFiltering;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* New_ctor();

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const& __cordl_internal_get__alsoAffectType() const;

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType& __cordl_internal_get__alsoAffectType();

  constexpr int32_t const& __cordl_internal_get__chunks() const;

  constexpr int32_t& __cordl_internal_get__chunks();

  constexpr float_t const& __cordl_internal_get__limit() const;

  constexpr float_t& __cordl_internal_get__limit();

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType const& __cordl_internal_get__randomType() const;

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType& __cordl_internal_get__randomType();

  constexpr int32_t const& __cordl_internal_get__seed() const;

  constexpr int32_t& __cordl_internal_get__seed();

  constexpr bool const& __cordl_internal_get__useFiltering() const;

  constexpr bool& __cordl_internal_get__useFiltering();

  constexpr void __cordl_internal_set__alsoAffectType(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType value);

  constexpr void __cordl_internal_set__chunks(int32_t value);

  constexpr void __cordl_internal_set__limit(float_t value);

  constexpr void __cordl_internal_set__randomType(::GlobalNamespace::IndexFilter_IndexFilterRandomType value);

  constexpr void __cordl_internal_set__seed(int32_t value);

  constexpr void __cordl_internal_set__useFiltering(bool value);

  /// @brief Method .ctor, addr 0x35e0b94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alsoAffectType, addr 0x35e0b7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType get_alsoAffectType();

  /// @brief Method get_chunks, addr 0x35e0b8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunks();

  /// @brief Method get_limit, addr 0x35e0b74, size 0x8, virtual false, abstract: false, final false
  inline float_t get_limit();

  /// @brief Method get_randomType, addr 0x35e0b6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IndexFilter_IndexFilterRandomType get_randomType();

  /// @brief Method get_seed, addr 0x35e0b84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_seed();

  /// @brief Method get_useFiltering, addr 0x35e0b64, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFiltering();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents_LightGroupFiltering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupFiltering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents_LightGroupFiltering(DefaultEnvironmentEvents_LightGroupFiltering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupFiltering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents_LightGroupFiltering(DefaultEnvironmentEvents_LightGroupFiltering const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14799 };

  /// @brief Field _useFiltering, offset: 0x10, size: 0x1, def value: None
  bool ____useFiltering;

  /// @brief Field _randomType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::IndexFilter_IndexFilterRandomType ____randomType;

  /// @brief Field _limit, offset: 0x18, size: 0x4, def value: None
  float_t ____limit;

  /// @brief Field _alsoAffectType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType ____alsoAffectType;

  /// @brief Field _seed, offset: 0x20, size: 0x4, def value: None
  int32_t ____seed;

  /// @brief Field _chunks, offset: 0x24, size: 0x4, def value: None
  int32_t ____chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____useFiltering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____randomType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____limit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____alsoAffectType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____seed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, ____chunks) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentColorType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEvents/LightGroupEvent
class CORDL_TYPE DefaultEnvironmentEvents_LightGroupEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _brightness, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__brightness, put = __cordl_internal_set__brightness)) float_t _brightness;

  /// @brief Field _brightnessDistribution, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__brightnessDistribution,
                      put = __cordl_internal_set__brightnessDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _brightnessDistribution;

  /// @brief Field _brightnessFiltering, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__brightnessFiltering,
                      put = __cordl_internal_set__brightnessFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* _brightnessFiltering;

  /// @brief Field _environmentColorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentColorType, put = __cordl_internal_set__environmentColorType)) ::GlobalNamespace::EnvironmentColorType _environmentColorType;

  /// @brief Field _floatFxDistribution, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxDistribution,
                      put = __cordl_internal_set__floatFxDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _floatFxDistribution;

  /// @brief Field _floatFxFiltering, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxFiltering, put = __cordl_internal_set__floatFxFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* _floatFxFiltering;

  /// @brief Field _floatFxValue, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__floatFxValue, put = __cordl_internal_set__floatFxValue)) float_t _floatFxValue;

  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  /// @brief Field _rotationFiltering, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationFiltering,
                      put = __cordl_internal_set__rotationFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* _rotationFiltering;

  /// @brief Field _rotationX, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationX, put = __cordl_internal_set__rotationX)) float_t _rotationX;

  /// @brief Field _rotationXDistribution, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationXDistribution,
                      put = __cordl_internal_set__rotationXDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _rotationXDistribution;

  /// @brief Field _rotationY, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationY, put = __cordl_internal_set__rotationY)) float_t _rotationY;

  /// @brief Field _rotationYDistribution, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationYDistribution,
                      put = __cordl_internal_set__rotationYDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _rotationYDistribution;

  /// @brief Field _rotationZ, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationZ, put = __cordl_internal_set__rotationZ)) float_t _rotationZ;

  /// @brief Field _rotationZDistribution, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationZDistribution,
                      put = __cordl_internal_set__rotationZDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _rotationZDistribution;

  /// @brief Field _translationFiltering, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__translationFiltering,
                      put = __cordl_internal_set__translationFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* _translationFiltering;

  /// @brief Field _translationX, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__translationX, put = __cordl_internal_set__translationX)) float_t _translationX;

  /// @brief Field _translationXDistribution, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__translationXDistribution,
                      put = __cordl_internal_set__translationXDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _translationXDistribution;

  /// @brief Field _translationY, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__translationY, put = __cordl_internal_set__translationY)) float_t _translationY;

  /// @brief Field _translationYDistribution, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__translationYDistribution,
                      put = __cordl_internal_set__translationYDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _translationYDistribution;

  /// @brief Field _translationZ, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__translationZ, put = __cordl_internal_set__translationZ)) float_t _translationZ;

  /// @brief Field _translationZDistribution, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__translationZDistribution,
                      put = __cordl_internal_set__translationZDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* _translationZDistribution;

  __declspec(property(get = get_brightness)) float_t brightness;

  __declspec(property(get = get_brightnessDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* brightnessDistribution;

  __declspec(property(get = get_brightnessFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* brightnessFiltering;

  __declspec(property(get = get_environmentColorType)) ::GlobalNamespace::EnvironmentColorType environmentColorType;

  __declspec(property(get = get_floatFxDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* floatFxDistribution;

  __declspec(property(get = get_floatFxFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* floatFxFiltering;

  __declspec(property(get = get_floatFxValue)) float_t floatFxValue;

  __declspec(property(get = get_lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  __declspec(property(get = get_rotationFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* rotationFiltering;

  __declspec(property(get = get_rotationX)) float_t rotationX;

  __declspec(property(get = get_rotationXDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* rotationXDistribution;

  __declspec(property(get = get_rotationY)) float_t rotationY;

  __declspec(property(get = get_rotationYDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* rotationYDistribution;

  __declspec(property(get = get_rotationZ)) float_t rotationZ;

  __declspec(property(get = get_rotationZDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* rotationZDistribution;

  __declspec(property(get = get_translationFiltering)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* translationFiltering;

  __declspec(property(get = get_translationX)) float_t translationX;

  __declspec(property(get = get_translationXDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* translationXDistribution;

  __declspec(property(get = get_translationY)) float_t translationY;

  __declspec(property(get = get_translationYDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* translationYDistribution;

  __declspec(property(get = get_translationZ)) float_t translationZ;

  __declspec(property(get = get_translationZDistribution)) ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* translationZDistribution;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent* New_ctor();

  constexpr float_t const& __cordl_internal_get__brightness() const;

  constexpr float_t& __cordl_internal_get__brightness();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__brightnessDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__brightnessDistribution();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& __cordl_internal_get__brightnessFiltering() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& __cordl_internal_get__brightnessFiltering();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get__environmentColorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get__environmentColorType();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__floatFxDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__floatFxDistribution();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& __cordl_internal_get__floatFxFiltering() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& __cordl_internal_get__floatFxFiltering();

  constexpr float_t const& __cordl_internal_get__floatFxValue() const;

  constexpr float_t& __cordl_internal_get__floatFxValue();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& __cordl_internal_get__rotationFiltering() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& __cordl_internal_get__rotationFiltering();

  constexpr float_t const& __cordl_internal_get__rotationX() const;

  constexpr float_t& __cordl_internal_get__rotationX();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__rotationXDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__rotationXDistribution();

  constexpr float_t const& __cordl_internal_get__rotationY() const;

  constexpr float_t& __cordl_internal_get__rotationY();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__rotationYDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__rotationYDistribution();

  constexpr float_t const& __cordl_internal_get__rotationZ() const;

  constexpr float_t& __cordl_internal_get__rotationZ();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__rotationZDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__rotationZDistribution();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& __cordl_internal_get__translationFiltering() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& __cordl_internal_get__translationFiltering();

  constexpr float_t const& __cordl_internal_get__translationX() const;

  constexpr float_t& __cordl_internal_get__translationX();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__translationXDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__translationXDistribution();

  constexpr float_t const& __cordl_internal_get__translationY() const;

  constexpr float_t& __cordl_internal_get__translationY();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__translationYDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__translationYDistribution();

  constexpr float_t const& __cordl_internal_get__translationZ() const;

  constexpr float_t& __cordl_internal_get__translationZ();

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& __cordl_internal_get__translationZDistribution() const;

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& __cordl_internal_get__translationZDistribution();

  constexpr void __cordl_internal_set__brightness(float_t value);

  constexpr void __cordl_internal_set__brightnessDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__brightnessFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value);

  constexpr void __cordl_internal_set__environmentColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set__floatFxDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__floatFxFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value);

  constexpr void __cordl_internal_set__floatFxValue(float_t value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set__rotationFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value);

  constexpr void __cordl_internal_set__rotationX(float_t value);

  constexpr void __cordl_internal_set__rotationXDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__rotationY(float_t value);

  constexpr void __cordl_internal_set__rotationYDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__rotationZ(float_t value);

  constexpr void __cordl_internal_set__rotationZDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value);

  constexpr void __cordl_internal_set__translationX(float_t value);

  constexpr void __cordl_internal_set__translationXDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationY(float_t value);

  constexpr void __cordl_internal_set__translationYDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationZ(float_t value);

  constexpr void __cordl_internal_set__translationZDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value);

  /// @brief Method .ctor, addr 0x35e0c48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_brightness, addr 0x35e0ba8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightness();

  /// @brief Method get_brightnessDistribution, addr 0x35e0bb0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_brightnessDistribution();

  /// @brief Method get_brightnessFiltering, addr 0x35e0bb8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* get_brightnessFiltering();

  /// @brief Method get_environmentColorType, addr 0x35e0ba0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentColorType get_environmentColorType();

  /// @brief Method get_floatFxDistribution, addr 0x35e0c38, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_floatFxDistribution();

  /// @brief Method get_floatFxFiltering, addr 0x35e0c40, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* get_floatFxFiltering();

  /// @brief Method get_floatFxValue, addr 0x35e0c30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatFxValue();

  /// @brief Method get_lightGroup, addr 0x35e0b98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

  /// @brief Method get_rotationFiltering, addr 0x35e0bf0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* get_rotationFiltering();

  /// @brief Method get_rotationX, addr 0x35e0bc0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationX();

  /// @brief Method get_rotationXDistribution, addr 0x35e0bd8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_rotationXDistribution();

  /// @brief Method get_rotationY, addr 0x35e0bc8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationY();

  /// @brief Method get_rotationYDistribution, addr 0x35e0be0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_rotationYDistribution();

  /// @brief Method get_rotationZ, addr 0x35e0bd0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationZ();

  /// @brief Method get_rotationZDistribution, addr 0x35e0be8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_rotationZDistribution();

  /// @brief Method get_translationFiltering, addr 0x35e0c28, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* get_translationFiltering();

  /// @brief Method get_translationX, addr 0x35e0bf8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationX();

  /// @brief Method get_translationXDistribution, addr 0x35e0c10, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_translationXDistribution();

  /// @brief Method get_translationY, addr 0x35e0c00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationY();

  /// @brief Method get_translationYDistribution, addr 0x35e0c18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_translationYDistribution();

  /// @brief Method get_translationZ, addr 0x35e0c08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationZ();

  /// @brief Method get_translationZDistribution, addr 0x35e0c20, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* get_translationZDistribution();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents_LightGroupEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents_LightGroupEvent(DefaultEnvironmentEvents_LightGroupEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents_LightGroupEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents_LightGroupEvent(DefaultEnvironmentEvents_LightGroupEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14800 };

  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _environmentColorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ____environmentColorType;

  /// @brief Field _brightness, offset: 0x1c, size: 0x4, def value: None
  float_t ____brightness;

  /// @brief Field _brightnessDistribution, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____brightnessDistribution;

  /// @brief Field _brightnessFiltering, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* ____brightnessFiltering;

  /// @brief Field _rotationX, offset: 0x30, size: 0x4, def value: None
  float_t ____rotationX;

  /// @brief Field _rotationY, offset: 0x34, size: 0x4, def value: None
  float_t ____rotationY;

  /// @brief Field _rotationZ, offset: 0x38, size: 0x4, def value: None
  float_t ____rotationZ;

  /// @brief Field _rotationXDistribution, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____rotationXDistribution;

  /// @brief Field _rotationYDistribution, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____rotationYDistribution;

  /// @brief Field _rotationZDistribution, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____rotationZDistribution;

  /// @brief Field _rotationFiltering, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* ____rotationFiltering;

  /// @brief Field _translationX, offset: 0x60, size: 0x4, def value: None
  float_t ____translationX;

  /// @brief Field _translationY, offset: 0x64, size: 0x4, def value: None
  float_t ____translationY;

  /// @brief Field _translationZ, offset: 0x68, size: 0x4, def value: None
  float_t ____translationZ;

  /// @brief Field _translationXDistribution, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____translationXDistribution;

  /// @brief Field _translationYDistribution, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____translationYDistribution;

  /// @brief Field _translationZDistribution, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____translationZDistribution;

  /// @brief Field _translationFiltering, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* ____translationFiltering;

  /// @brief Field _floatFxValue, offset: 0x90, size: 0x4, def value: None
  float_t ____floatFxValue;

  /// @brief Field _floatFxDistribution, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* ____floatFxDistribution;

  /// @brief Field _floatFxFiltering, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* ____floatFxFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____environmentColorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____brightness) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____brightnessDistribution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____brightnessFiltering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationY) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationXDistribution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationYDistribution) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationZDistribution) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____rotationFiltering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationZ) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationXDistribution) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationYDistribution) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationZDistribution) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____translationFiltering) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____floatFxValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____floatFxDistribution) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, ____floatFxFiltering) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEvents
class CORDL_TYPE DefaultEnvironmentEvents : public ::System::Object {
public:
  // Declarations
  using BasicBeatmapEvent = ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent;

  using LightGroupDistribution = ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution;

  using LightGroupEvent = ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent;

  using LightGroupFiltering = ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering;

  /// @brief Field _basicBeatmapEvents, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__basicBeatmapEvents,
      put =
          __cordl_internal_set__basicBeatmapEvents)) ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>
      _basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lightGroupEvents,
      put = __cordl_internal_set__lightGroupEvents)) ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>
      _lightGroupEvents;

  __declspec(property(get = get_basicBeatmapEvents)) ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>
      basicBeatmapEvents;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_lightGroupEvents)) ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>
      lightGroupEvents;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> const&
  __cordl_internal_get__basicBeatmapEvents() const;

  constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>&
  __cordl_internal_get__basicBeatmapEvents();

  constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> const&
  __cordl_internal_get__lightGroupEvents() const;

  constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>& __cordl_internal_get__lightGroupEvents();

  constexpr void
  __cordl_internal_set__basicBeatmapEvents(::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> value);

  constexpr void
  __cordl_internal_set__lightGroupEvents(::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> value);

  /// @brief Method .ctor, addr 0x35e0b28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicBeatmapEvents, addr 0x35e0ae0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> get_basicBeatmapEvents();

  /// @brief Method get_isEmpty, addr 0x35e0af0, size 0x38, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_lightGroupEvents, addr 0x35e0ae8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> get_lightGroupEvents();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents(DefaultEnvironmentEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents(DefaultEnvironmentEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14801 };

  /// @brief Field _basicBeatmapEvents, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> ____basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> ____lightGroupEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents, ____basicBeatmapEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents, ____lightGroupEvents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents*, "", "DefaultEnvironmentEvents");
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, "", "DefaultEnvironmentEvents/BasicBeatmapEvent");
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, "", "DefaultEnvironmentEvents/LightGroupDistribution");
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, "", "DefaultEnvironmentEvents/LightGroupEvent");
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*, "", "DefaultEnvironmentEvents/LightGroupFiltering");
