#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEnvironmentEvents)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__BasicBeatmapEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupDistribution;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupFiltering;
}
namespace GlobalNamespace {
struct __IndexFilter__IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct __IndexFilter__IndexFilterRandomType;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__BasicBeatmapEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupDistribution;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupFiltering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEvents);
MARK_REF_PTR_T(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent);
MARK_REF_PTR_T(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution);
MARK_REF_PTR_T(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent);
MARK_REF_PTR_T(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering);
// Type: ::BasicBeatmapEvent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultEnvironmentEvents::BasicBeatmapEvent*
class CORDL_TYPE __DefaultEnvironmentEvents__BasicBeatmapEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__eventType, put = __cordl_internal_set__eventType))::GlobalNamespace::BasicBeatmapEventType _eventType;

  /// @brief Field _floatValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__floatValue, put = __cordl_internal_set__floatValue)) float_t _floatValue;

  /// @brief Field _value, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  __declspec(property(get = get_eventType))::GlobalNamespace::BasicBeatmapEventType eventType;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  __declspec(property(get = get_value)) int32_t value;

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent* New_ctor();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventType();

  constexpr float_t const& __cordl_internal_get__floatValue() const;

  constexpr float_t& __cordl_internal_get__floatValue();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__eventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__value(int32_t value);

  /// @brief Method .ctor, addr 0x12d0360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventType, addr 0x12d0348, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_eventType();

  /// @brief Method get_floatValue, addr 0x12d0358, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatValue();

  /// @brief Method get_value, addr 0x12d0350, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__BasicBeatmapEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__BasicBeatmapEvent(__DefaultEnvironmentEvents__BasicBeatmapEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__BasicBeatmapEvent(__DefaultEnvironmentEvents__BasicBeatmapEvent const&) = delete;

  /// @brief Field _eventType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventType;

  /// @brief Field _value, offset: 0x14, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field _floatValue, offset: 0x18, size: 0x4, def value: None
  float_t ____floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent, ____eventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent, ____value) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent, ____floatValue) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightGroupDistribution
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultEnvironmentEvents::LightGroupDistribution*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupDistribution : public ::System::Object {
public:
  // Declarations
  /// @brief Field _distributionParam, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__distributionParam, put = __cordl_internal_set__distributionParam)) float_t _distributionParam;

  /// @brief Field _distributionParamType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__distributionParamType,
                      put = __cordl_internal_set__distributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType _distributionParamType;

  /// @brief Field _useDistribution, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useDistribution, put = __cordl_internal_set__useDistribution)) bool _useDistribution;

  __declspec(property(get = get_distributionParam)) float_t distributionParam;

  __declspec(property(get = get_distributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType;

  __declspec(property(get = get_useDistribution)) bool useDistribution;

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* New_ctor();

  constexpr float_t const& __cordl_internal_get__distributionParam() const;

  constexpr float_t& __cordl_internal_get__distributionParam();

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __cordl_internal_get__distributionParamType() const;

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __cordl_internal_get__distributionParamType();

  constexpr bool const& __cordl_internal_get__useDistribution() const;

  constexpr bool& __cordl_internal_get__useDistribution();

  constexpr void __cordl_internal_set__distributionParam(float_t value);

  constexpr void __cordl_internal_set__distributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value);

  constexpr void __cordl_internal_set__useDistribution(bool value);

  /// @brief Method .ctor, addr 0x12d0380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_distributionParam, addr 0x12d0370, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distributionParam();

  /// @brief Method get_distributionParamType, addr 0x12d0378, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType get_distributionParamType();

  /// @brief Method get_useDistribution, addr 0x12d0368, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDistribution();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupDistribution();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupDistribution(__DefaultEnvironmentEvents__LightGroupDistribution&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupDistribution(__DefaultEnvironmentEvents__LightGroupDistribution const&) = delete;

  /// @brief Field _useDistribution, offset: 0x10, size: 0x1, def value: None
  bool ____useDistribution;

  /// @brief Field _distributionParam, offset: 0x14, size: 0x4, def value: None
  float_t ____distributionParam;

  /// @brief Field _distributionParamType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType ____distributionParamType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution, ____useDistribution) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution, ____distributionParam) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution, ____distributionParamType) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightGroupFiltering
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultEnvironmentEvents::LightGroupFiltering*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupFiltering : public ::System::Object {
public:
  // Declarations
  /// @brief Field _alsoAffectType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__alsoAffectType, put = __cordl_internal_set__alsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType _alsoAffectType;

  /// @brief Field _chunks, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__chunks, put = __cordl_internal_set__chunks)) int32_t _chunks;

  /// @brief Field _limit, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit)) float_t _limit;

  /// @brief Field _randomType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__randomType, put = __cordl_internal_set__randomType))::GlobalNamespace::__IndexFilter__IndexFilterRandomType _randomType;

  /// @brief Field _seed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int32_t _seed;

  /// @brief Field _useFiltering, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useFiltering, put = __cordl_internal_set__useFiltering)) bool _useFiltering;

  __declspec(property(get = get_alsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType alsoAffectType;

  __declspec(property(get = get_chunks)) int32_t chunks;

  __declspec(property(get = get_limit)) float_t limit;

  __declspec(property(get = get_randomType))::GlobalNamespace::__IndexFilter__IndexFilterRandomType randomType;

  __declspec(property(get = get_seed)) int32_t seed;

  __declspec(property(get = get_useFiltering)) bool useFiltering;

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* New_ctor();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const& __cordl_internal_get__alsoAffectType() const;

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType& __cordl_internal_get__alsoAffectType();

  constexpr int32_t const& __cordl_internal_get__chunks() const;

  constexpr int32_t& __cordl_internal_get__chunks();

  constexpr float_t const& __cordl_internal_get__limit() const;

  constexpr float_t& __cordl_internal_get__limit();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const& __cordl_internal_get__randomType() const;

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType& __cordl_internal_get__randomType();

  constexpr int32_t const& __cordl_internal_get__seed() const;

  constexpr int32_t& __cordl_internal_get__seed();

  constexpr bool const& __cordl_internal_get__useFiltering() const;

  constexpr bool& __cordl_internal_get__useFiltering();

  constexpr void __cordl_internal_set__alsoAffectType(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType value);

  constexpr void __cordl_internal_set__chunks(int32_t value);

  constexpr void __cordl_internal_set__limit(float_t value);

  constexpr void __cordl_internal_set__randomType(::GlobalNamespace::__IndexFilter__IndexFilterRandomType value);

  constexpr void __cordl_internal_set__seed(int32_t value);

  constexpr void __cordl_internal_set__useFiltering(bool value);

  /// @brief Method .ctor, addr 0x12d03b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alsoAffectType, addr 0x12d03a0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType get_alsoAffectType();

  /// @brief Method get_chunks, addr 0x12d03b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunks();

  /// @brief Method get_limit, addr 0x12d0398, size 0x8, virtual false, abstract: false, final false
  inline float_t get_limit();

  /// @brief Method get_randomType, addr 0x12d0390, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__IndexFilter__IndexFilterRandomType get_randomType();

  /// @brief Method get_seed, addr 0x12d03a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_seed();

  /// @brief Method get_useFiltering, addr 0x12d0388, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFiltering();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupFiltering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupFiltering(__DefaultEnvironmentEvents__LightGroupFiltering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupFiltering(__DefaultEnvironmentEvents__LightGroupFiltering const&) = delete;

  /// @brief Field _useFiltering, offset: 0x10, size: 0x1, def value: None
  bool ____useFiltering;

  /// @brief Field _randomType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__IndexFilter__IndexFilterRandomType ____randomType;

  /// @brief Field _limit, offset: 0x18, size: 0x4, def value: None
  float_t ____limit;

  /// @brief Field _alsoAffectType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType ____alsoAffectType;

  /// @brief Field _seed, offset: 0x20, size: 0x4, def value: None
  int32_t ____seed;

  /// @brief Field _chunks, offset: 0x24, size: 0x4, def value: None
  int32_t ____chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____useFiltering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____randomType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____limit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____alsoAffectType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____seed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering, ____chunks) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightGroupEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultEnvironmentEvents::LightGroupEvent*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _brightness, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__brightness, put = __cordl_internal_set__brightness)) float_t _brightness;

  /// @brief Field _brightnessDistribution, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__brightnessDistribution,
                      put = __cordl_internal_set__brightnessDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _brightnessDistribution;

  /// @brief Field _brightnessFiltering, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__brightnessFiltering,
                      put = __cordl_internal_set__brightnessFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _brightnessFiltering;

  /// @brief Field _environmentColorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentColorType, put = __cordl_internal_set__environmentColorType))::GlobalNamespace::EnvironmentColorType _environmentColorType;

  /// @brief Field _floatFxDistribution, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxDistribution,
                      put = __cordl_internal_set__floatFxDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _floatFxDistribution;

  /// @brief Field _floatFxFiltering, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxFiltering, put = __cordl_internal_set__floatFxFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _floatFxFiltering;

  /// @brief Field _floatFxValue, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__floatFxValue, put = __cordl_internal_set__floatFxValue)) float_t _floatFxValue;

  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  /// @brief Field _rotationFiltering, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationFiltering,
                      put = __cordl_internal_set__rotationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _rotationFiltering;

  /// @brief Field _rotationX, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationX, put = __cordl_internal_set__rotationX)) float_t _rotationX;

  /// @brief Field _rotationXDistribution, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationXDistribution,
                      put = __cordl_internal_set__rotationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationXDistribution;

  /// @brief Field _rotationY, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationY, put = __cordl_internal_set__rotationY)) float_t _rotationY;

  /// @brief Field _rotationYDistribution, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationYDistribution,
                      put = __cordl_internal_set__rotationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationYDistribution;

  /// @brief Field _rotationZ, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationZ, put = __cordl_internal_set__rotationZ)) float_t _rotationZ;

  /// @brief Field _rotationZDistribution, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationZDistribution,
                      put = __cordl_internal_set__rotationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationZDistribution;

  /// @brief Field _translationFiltering, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__translationFiltering,
                      put = __cordl_internal_set__translationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _translationFiltering;

  /// @brief Field _translationX, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__translationX, put = __cordl_internal_set__translationX)) float_t _translationX;

  /// @brief Field _translationXDistribution, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__translationXDistribution,
                      put = __cordl_internal_set__translationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationXDistribution;

  /// @brief Field _translationY, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__translationY, put = __cordl_internal_set__translationY)) float_t _translationY;

  /// @brief Field _translationYDistribution, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__translationYDistribution,
                      put = __cordl_internal_set__translationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationYDistribution;

  /// @brief Field _translationZ, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__translationZ, put = __cordl_internal_set__translationZ)) float_t _translationZ;

  /// @brief Field _translationZDistribution, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__translationZDistribution,
                      put = __cordl_internal_set__translationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationZDistribution;

  __declspec(property(get = get_brightness)) float_t brightness;

  __declspec(property(get = get_brightnessDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* brightnessDistribution;

  __declspec(property(get = get_brightnessFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* brightnessFiltering;

  __declspec(property(get = get_environmentColorType))::GlobalNamespace::EnvironmentColorType environmentColorType;

  __declspec(property(get = get_floatFxDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* floatFxDistribution;

  __declspec(property(get = get_floatFxFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* floatFxFiltering;

  __declspec(property(get = get_floatFxValue)) float_t floatFxValue;

  __declspec(property(get = get_lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  __declspec(property(get = get_rotationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* rotationFiltering;

  __declspec(property(get = get_rotationX)) float_t rotationX;

  __declspec(property(get = get_rotationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationXDistribution;

  __declspec(property(get = get_rotationY)) float_t rotationY;

  __declspec(property(get = get_rotationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationYDistribution;

  __declspec(property(get = get_rotationZ)) float_t rotationZ;

  __declspec(property(get = get_rotationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationZDistribution;

  __declspec(property(get = get_translationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* translationFiltering;

  __declspec(property(get = get_translationX)) float_t translationX;

  __declspec(property(get = get_translationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationXDistribution;

  __declspec(property(get = get_translationY)) float_t translationY;

  __declspec(property(get = get_translationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationYDistribution;

  __declspec(property(get = get_translationZ)) float_t translationZ;

  __declspec(property(get = get_translationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationZDistribution;

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent* New_ctor();

  constexpr float_t const& __cordl_internal_get__brightness() const;

  constexpr float_t& __cordl_internal_get__brightness();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__brightnessDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__brightnessDistribution() const;

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __cordl_internal_get__brightnessFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __cordl_internal_get__brightnessFiltering() const;

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get__environmentColorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get__environmentColorType();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__floatFxDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__floatFxDistribution() const;

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __cordl_internal_get__floatFxFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __cordl_internal_get__floatFxFiltering() const;

  constexpr float_t const& __cordl_internal_get__floatFxValue() const;

  constexpr float_t& __cordl_internal_get__floatFxValue();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __cordl_internal_get__rotationFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __cordl_internal_get__rotationFiltering() const;

  constexpr float_t const& __cordl_internal_get__rotationX() const;

  constexpr float_t& __cordl_internal_get__rotationX();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__rotationXDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__rotationXDistribution() const;

  constexpr float_t const& __cordl_internal_get__rotationY() const;

  constexpr float_t& __cordl_internal_get__rotationY();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__rotationYDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__rotationYDistribution() const;

  constexpr float_t const& __cordl_internal_get__rotationZ() const;

  constexpr float_t& __cordl_internal_get__rotationZ();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__rotationZDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__rotationZDistribution() const;

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __cordl_internal_get__translationFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __cordl_internal_get__translationFiltering() const;

  constexpr float_t const& __cordl_internal_get__translationX() const;

  constexpr float_t& __cordl_internal_get__translationX();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__translationXDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__translationXDistribution() const;

  constexpr float_t const& __cordl_internal_get__translationY() const;

  constexpr float_t& __cordl_internal_get__translationY();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__translationYDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__translationYDistribution() const;

  constexpr float_t const& __cordl_internal_get__translationZ() const;

  constexpr float_t& __cordl_internal_get__translationZ();

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __cordl_internal_get__translationZDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __cordl_internal_get__translationZDistribution() const;

  constexpr void __cordl_internal_set__brightness(float_t value);

  constexpr void __cordl_internal_set__brightnessDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__brightnessFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr void __cordl_internal_set__environmentColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set__floatFxDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__floatFxFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr void __cordl_internal_set__floatFxValue(float_t value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set__rotationFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr void __cordl_internal_set__rotationX(float_t value);

  constexpr void __cordl_internal_set__rotationXDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__rotationY(float_t value);

  constexpr void __cordl_internal_set__rotationYDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__rotationZ(float_t value);

  constexpr void __cordl_internal_set__rotationZDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr void __cordl_internal_set__translationX(float_t value);

  constexpr void __cordl_internal_set__translationXDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationY(float_t value);

  constexpr void __cordl_internal_set__translationYDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr void __cordl_internal_set__translationZ(float_t value);

  constexpr void __cordl_internal_set__translationZDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  /// @brief Method .ctor, addr 0x12d0470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_brightness, addr 0x12d03d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightness();

  /// @brief Method get_brightnessDistribution, addr 0x12d03d8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_brightnessDistribution();

  /// @brief Method get_brightnessFiltering, addr 0x12d03e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_brightnessFiltering();

  /// @brief Method get_environmentColorType, addr 0x12d03c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentColorType get_environmentColorType();

  /// @brief Method get_floatFxDistribution, addr 0x12d0460, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_floatFxDistribution();

  /// @brief Method get_floatFxFiltering, addr 0x12d0468, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_floatFxFiltering();

  /// @brief Method get_floatFxValue, addr 0x12d0458, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatFxValue();

  /// @brief Method get_lightGroup, addr 0x12d03c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

  /// @brief Method get_rotationFiltering, addr 0x12d0418, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_rotationFiltering();

  /// @brief Method get_rotationX, addr 0x12d03e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationX();

  /// @brief Method get_rotationXDistribution, addr 0x12d0400, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationXDistribution();

  /// @brief Method get_rotationY, addr 0x12d03f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationY();

  /// @brief Method get_rotationYDistribution, addr 0x12d0408, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationYDistribution();

  /// @brief Method get_rotationZ, addr 0x12d03f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationZ();

  /// @brief Method get_rotationZDistribution, addr 0x12d0410, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationZDistribution();

  /// @brief Method get_translationFiltering, addr 0x12d0450, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_translationFiltering();

  /// @brief Method get_translationX, addr 0x12d0420, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationX();

  /// @brief Method get_translationXDistribution, addr 0x12d0438, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationXDistribution();

  /// @brief Method get_translationY, addr 0x12d0428, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationY();

  /// @brief Method get_translationYDistribution, addr 0x12d0440, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationYDistribution();

  /// @brief Method get_translationZ, addr 0x12d0430, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translationZ();

  /// @brief Method get_translationZDistribution, addr 0x12d0448, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationZDistribution();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupEvent(__DefaultEnvironmentEvents__LightGroupEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupEvent(__DefaultEnvironmentEvents__LightGroupEvent const&) = delete;

  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _environmentColorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ____environmentColorType;

  /// @brief Field _brightness, offset: 0x1c, size: 0x4, def value: None
  float_t ____brightness;

  /// @brief Field _brightnessDistribution, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____brightnessDistribution;

  /// @brief Field _brightnessFiltering, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* ____brightnessFiltering;

  /// @brief Field _rotationX, offset: 0x30, size: 0x4, def value: None
  float_t ____rotationX;

  /// @brief Field _rotationY, offset: 0x34, size: 0x4, def value: None
  float_t ____rotationY;

  /// @brief Field _rotationZ, offset: 0x38, size: 0x4, def value: None
  float_t ____rotationZ;

  /// @brief Field _rotationXDistribution, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____rotationXDistribution;

  /// @brief Field _rotationYDistribution, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____rotationYDistribution;

  /// @brief Field _rotationZDistribution, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____rotationZDistribution;

  /// @brief Field _rotationFiltering, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* ____rotationFiltering;

  /// @brief Field _translationX, offset: 0x60, size: 0x4, def value: None
  float_t ____translationX;

  /// @brief Field _translationY, offset: 0x64, size: 0x4, def value: None
  float_t ____translationY;

  /// @brief Field _translationZ, offset: 0x68, size: 0x4, def value: None
  float_t ____translationZ;

  /// @brief Field _translationXDistribution, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____translationXDistribution;

  /// @brief Field _translationYDistribution, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____translationYDistribution;

  /// @brief Field _translationZDistribution, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____translationZDistribution;

  /// @brief Field _translationFiltering, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* ____translationFiltering;

  /// @brief Field _floatFxValue, offset: 0x90, size: 0x4, def value: None
  float_t ____floatFxValue;

  /// @brief Field _floatFxDistribution, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* ____floatFxDistribution;

  /// @brief Field _floatFxFiltering, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* ____floatFxFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____environmentColorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____brightness) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____brightnessDistribution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____brightnessFiltering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationY) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationXDistribution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationYDistribution) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationZDistribution) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____rotationFiltering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationZ) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationXDistribution) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationYDistribution) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationZDistribution) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____translationFiltering) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____floatFxValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____floatFxDistribution) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent, ____floatFxFiltering) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DefaultEnvironmentEvents
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultEnvironmentEvents*
class CORDL_TYPE DefaultEnvironmentEvents : public ::System::Object {
public:
  // Declarations
  using BasicBeatmapEvent = ::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent;

  using LightGroupDistribution = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution;

  using LightGroupEvent = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent;

  using LightGroupFiltering = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering;

  /// @brief Field _basicBeatmapEvents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__basicBeatmapEvents,
                      put = __cordl_internal_set__basicBeatmapEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*,
                                                                               ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> _basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupEvents,
                      put = __cordl_internal_set__lightGroupEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*,
                                                                             ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> _lightGroupEvents;

  __declspec(property(get = get_basicBeatmapEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*,
                                                             ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> basicBeatmapEvents;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(
      get = get_lightGroupEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> lightGroupEvents;

  static inline ::GlobalNamespace::DefaultEnvironmentEvents* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> const&
  __cordl_internal_get__basicBeatmapEvents() const;

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*>&
  __cordl_internal_get__basicBeatmapEvents();

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> const&
  __cordl_internal_get__lightGroupEvents() const;

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*>&
  __cordl_internal_get__lightGroupEvents();

  constexpr void __cordl_internal_set__basicBeatmapEvents(
      ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> value);

  constexpr void
  __cordl_internal_set__lightGroupEvents(::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> value);

  /// @brief Method .ctor, addr 0x12d0340, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicBeatmapEvents, addr 0x12d02f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> get_basicBeatmapEvents();

  /// @brief Method get_isEmpty, addr 0x12d0308, size 0x38, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_lightGroupEvents, addr 0x12d0300, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> get_lightGroupEvents();

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

  /// @brief Field _basicBeatmapEvents, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> ____basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> ____lightGroupEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents, ____basicBeatmapEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultEnvironmentEvents, ____lightGroupEvents) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents*, "", "DefaultEnvironmentEvents");
NEED_NO_BOX(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, "", "DefaultEnvironmentEvents/BasicBeatmapEvent");
NEED_NO_BOX(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*, "", "DefaultEnvironmentEvents/LightGroupDistribution");
NEED_NO_BOX(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, "", "DefaultEnvironmentEvents/LightGroupEvent");
NEED_NO_BOX(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*, "", "DefaultEnvironmentEvents/LightGroupFiltering");
