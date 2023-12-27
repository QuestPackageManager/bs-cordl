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
class __DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupFiltering;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__BasicBeatmapEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupDistribution;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBox__DistributionParamType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14724)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4165))
// CS Name: ::DefaultEnvironmentEvents::BasicBeatmapEvent*
class CORDL_TYPE __DefaultEnvironmentEvents__BasicBeatmapEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventType, offset 0x10, size 0x4
  __declspec(property(get = __get__eventType, put = __set__eventType))::GlobalNamespace::BasicBeatmapEventType _eventType;

  /// @brief Field _value, offset 0x14, size 0x4
  __declspec(property(get = __get__value, put = __set__value)) int32_t _value;

  /// @brief Field _floatValue, offset 0x18, size 0x4
  __declspec(property(get = __get__floatValue, put = __set__floatValue)) float_t _floatValue;

  __declspec(property(get = get_eventType))::GlobalNamespace::BasicBeatmapEventType eventType;

  __declspec(property(get = get_value)) int32_t value;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__eventType();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__eventType() const;

  constexpr void __set__eventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr int32_t& __get__value();

  constexpr int32_t const& __get__value() const;

  constexpr void __set__value(int32_t value);

  constexpr float_t& __get__floatValue();

  constexpr float_t const& __get__floatValue() const;

  constexpr void __set__floatValue(float_t value);

  /// @brief Method get_eventType addr 0x22401ac size 0x8 virtual false final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_eventType();

  /// @brief Method get_value addr 0x22401b4 size 0x8 virtual false final false
  inline int32_t get_value();

  /// @brief Method get_floatValue addr 0x22401bc size 0x8 virtual false final false
  inline float_t get_floatValue();

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent* New_ctor();

  /// @brief Method .ctor addr 0x22401c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__BasicBeatmapEvent(__DefaultEnvironmentEvents__BasicBeatmapEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__BasicBeatmapEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__BasicBeatmapEvent(__DefaultEnvironmentEvents__BasicBeatmapEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__BasicBeatmapEvent();

public:
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

} // namespace GlobalNamespace
// Type: ::LightGroupDistribution
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4300)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4166))
// CS Name: ::DefaultEnvironmentEvents::LightGroupDistribution*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupDistribution : public ::System::Object {
public:
  // Declarations
  /// @brief Field _useDistribution, offset 0x10, size 0x1
  __declspec(property(get = __get__useDistribution, put = __set__useDistribution)) bool _useDistribution;

  /// @brief Field _distributionParam, offset 0x14, size 0x4
  __declspec(property(get = __get__distributionParam, put = __set__distributionParam)) float_t _distributionParam;

  /// @brief Field _distributionParamType, offset 0x18, size 0x4
  __declspec(property(get = __get__distributionParamType, put = __set__distributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType _distributionParamType;

  __declspec(property(get = get_useDistribution)) bool useDistribution;

  __declspec(property(get = get_distributionParam)) float_t distributionParam;

  __declspec(property(get = get_distributionParamType))::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType;

  constexpr bool& __get__useDistribution();

  constexpr bool const& __get__useDistribution() const;

  constexpr void __set__useDistribution(bool value);

  constexpr float_t& __get__distributionParam();

  constexpr float_t const& __get__distributionParam() const;

  constexpr void __set__distributionParam(float_t value);

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& __get__distributionParamType();

  constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& __get__distributionParamType() const;

  constexpr void __set__distributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value);

  /// @brief Method get_useDistribution addr 0x22401cc size 0x8 virtual false final false
  inline bool get_useDistribution();

  /// @brief Method get_distributionParam addr 0x22401d4 size 0x8 virtual false final false
  inline float_t get_distributionParam();

  /// @brief Method get_distributionParamType addr 0x22401dc size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType get_distributionParamType();

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* New_ctor();

  /// @brief Method .ctor addr 0x22401e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupDistribution(__DefaultEnvironmentEvents__LightGroupDistribution&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupDistribution", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupDistribution(__DefaultEnvironmentEvents__LightGroupDistribution const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupDistribution();

public:
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

} // namespace GlobalNamespace
// Type: ::LightGroupFiltering
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4316)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4315))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4167))
// CS Name: ::DefaultEnvironmentEvents::LightGroupFiltering*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupFiltering : public ::System::Object {
public:
  // Declarations
  /// @brief Field _useFiltering, offset 0x10, size 0x1
  __declspec(property(get = __get__useFiltering, put = __set__useFiltering)) bool _useFiltering;

  /// @brief Field _randomType, offset 0x14, size 0x4
  __declspec(property(get = __get__randomType, put = __set__randomType))::GlobalNamespace::__IndexFilter__IndexFilterRandomType _randomType;

  /// @brief Field _limit, offset 0x18, size 0x4
  __declspec(property(get = __get__limit, put = __set__limit)) float_t _limit;

  /// @brief Field _alsoAffectType, offset 0x1c, size 0x4
  __declspec(property(get = __get__alsoAffectType, put = __set__alsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType _alsoAffectType;

  /// @brief Field _seed, offset 0x20, size 0x4
  __declspec(property(get = __get__seed, put = __set__seed)) int32_t _seed;

  /// @brief Field _chunks, offset 0x24, size 0x4
  __declspec(property(get = __get__chunks, put = __set__chunks)) int32_t _chunks;

  __declspec(property(get = get_useFiltering)) bool useFiltering;

  __declspec(property(get = get_randomType))::GlobalNamespace::__IndexFilter__IndexFilterRandomType randomType;

  __declspec(property(get = get_limit)) float_t limit;

  __declspec(property(get = get_alsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType alsoAffectType;

  __declspec(property(get = get_seed)) int32_t seed;

  __declspec(property(get = get_chunks)) int32_t chunks;

  constexpr bool& __get__useFiltering();

  constexpr bool const& __get__useFiltering() const;

  constexpr void __set__useFiltering(bool value);

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType& __get__randomType();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const& __get__randomType() const;

  constexpr void __set__randomType(::GlobalNamespace::__IndexFilter__IndexFilterRandomType value);

  constexpr float_t& __get__limit();

  constexpr float_t const& __get__limit() const;

  constexpr void __set__limit(float_t value);

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType& __get__alsoAffectType();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const& __get__alsoAffectType() const;

  constexpr void __set__alsoAffectType(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType value);

  constexpr int32_t& __get__seed();

  constexpr int32_t const& __get__seed() const;

  constexpr void __set__seed(int32_t value);

  constexpr int32_t& __get__chunks();

  constexpr int32_t const& __get__chunks() const;

  constexpr void __set__chunks(int32_t value);

  /// @brief Method get_useFiltering addr 0x22401ec size 0x8 virtual false final false
  inline bool get_useFiltering();

  /// @brief Method get_randomType addr 0x22401f4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__IndexFilter__IndexFilterRandomType get_randomType();

  /// @brief Method get_limit addr 0x22401fc size 0x8 virtual false final false
  inline float_t get_limit();

  /// @brief Method get_alsoAffectType addr 0x2240204 size 0x8 virtual false final false
  inline ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType get_alsoAffectType();

  /// @brief Method get_seed addr 0x224020c size 0x8 virtual false final false
  inline int32_t get_seed();

  /// @brief Method get_chunks addr 0x2240214 size 0x8 virtual false final false
  inline int32_t get_chunks();

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* New_ctor();

  /// @brief Method .ctor addr 0x224021c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupFiltering(__DefaultEnvironmentEvents__LightGroupFiltering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupFiltering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupFiltering(__DefaultEnvironmentEvents__LightGroupFiltering const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupFiltering();

public:
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

} // namespace GlobalNamespace
// Type: ::LightGroupEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4168))
// CS Name: ::DefaultEnvironmentEvents::LightGroupEvent*
class CORDL_TYPE __DefaultEnvironmentEvents__LightGroupEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::GlobalNamespace::LightGroupSO* _lightGroup;

  /// @brief Field _environmentColorType, offset 0x18, size 0x4
  __declspec(property(get = __get__environmentColorType, put = __set__environmentColorType))::GlobalNamespace::EnvironmentColorType _environmentColorType;

  /// @brief Field _brightness, offset 0x1c, size 0x4
  __declspec(property(get = __get__brightness, put = __set__brightness)) float_t _brightness;

  /// @brief Field _brightnessDistribution, offset 0x20, size 0x8
  __declspec(property(get = __get__brightnessDistribution, put = __set__brightnessDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _brightnessDistribution;

  /// @brief Field _brightnessFiltering, offset 0x28, size 0x8
  __declspec(property(get = __get__brightnessFiltering, put = __set__brightnessFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _brightnessFiltering;

  /// @brief Field _rotationX, offset 0x30, size 0x4
  __declspec(property(get = __get__rotationX, put = __set__rotationX)) float_t _rotationX;

  /// @brief Field _rotationY, offset 0x34, size 0x4
  __declspec(property(get = __get__rotationY, put = __set__rotationY)) float_t _rotationY;

  /// @brief Field _rotationZ, offset 0x38, size 0x4
  __declspec(property(get = __get__rotationZ, put = __set__rotationZ)) float_t _rotationZ;

  /// @brief Field _rotationXDistribution, offset 0x40, size 0x8
  __declspec(property(get = __get__rotationXDistribution, put = __set__rotationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationXDistribution;

  /// @brief Field _rotationYDistribution, offset 0x48, size 0x8
  __declspec(property(get = __get__rotationYDistribution, put = __set__rotationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationYDistribution;

  /// @brief Field _rotationZDistribution, offset 0x50, size 0x8
  __declspec(property(get = __get__rotationZDistribution, put = __set__rotationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _rotationZDistribution;

  /// @brief Field _rotationFiltering, offset 0x58, size 0x8
  __declspec(property(get = __get__rotationFiltering, put = __set__rotationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _rotationFiltering;

  /// @brief Field _translationX, offset 0x60, size 0x4
  __declspec(property(get = __get__translationX, put = __set__translationX)) float_t _translationX;

  /// @brief Field _translationY, offset 0x64, size 0x4
  __declspec(property(get = __get__translationY, put = __set__translationY)) float_t _translationY;

  /// @brief Field _translationZ, offset 0x68, size 0x4
  __declspec(property(get = __get__translationZ, put = __set__translationZ)) float_t _translationZ;

  /// @brief Field _translationXDistribution, offset 0x70, size 0x8
  __declspec(property(get = __get__translationXDistribution, put = __set__translationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationXDistribution;

  /// @brief Field _translationYDistribution, offset 0x78, size 0x8
  __declspec(property(get = __get__translationYDistribution, put = __set__translationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationYDistribution;

  /// @brief Field _translationZDistribution, offset 0x80, size 0x8
  __declspec(property(get = __get__translationZDistribution, put = __set__translationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _translationZDistribution;

  /// @brief Field _translationFiltering, offset 0x88, size 0x8
  __declspec(property(get = __get__translationFiltering, put = __set__translationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _translationFiltering;

  /// @brief Field _floatFxValue, offset 0x90, size 0x4
  __declspec(property(get = __get__floatFxValue, put = __set__floatFxValue)) float_t _floatFxValue;

  /// @brief Field _floatFxDistribution, offset 0x98, size 0x8
  __declspec(property(get = __get__floatFxDistribution, put = __set__floatFxDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* _floatFxDistribution;

  /// @brief Field _floatFxFiltering, offset 0xa0, size 0x8
  __declspec(property(get = __get__floatFxFiltering, put = __set__floatFxFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* _floatFxFiltering;

  __declspec(property(get = get_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  __declspec(property(get = get_environmentColorType))::GlobalNamespace::EnvironmentColorType environmentColorType;

  __declspec(property(get = get_brightness)) float_t brightness;

  __declspec(property(get = get_brightnessDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* brightnessDistribution;

  __declspec(property(get = get_brightnessFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* brightnessFiltering;

  __declspec(property(get = get_rotationX)) float_t rotationX;

  __declspec(property(get = get_rotationY)) float_t rotationY;

  __declspec(property(get = get_rotationZ)) float_t rotationZ;

  __declspec(property(get = get_rotationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationXDistribution;

  __declspec(property(get = get_rotationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationYDistribution;

  __declspec(property(get = get_rotationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* rotationZDistribution;

  __declspec(property(get = get_rotationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* rotationFiltering;

  __declspec(property(get = get_translationX)) float_t translationX;

  __declspec(property(get = get_translationY)) float_t translationY;

  __declspec(property(get = get_translationZ)) float_t translationZ;

  __declspec(property(get = get_translationXDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationXDistribution;

  __declspec(property(get = get_translationYDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationYDistribution;

  __declspec(property(get = get_translationZDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* translationZDistribution;

  __declspec(property(get = get_translationFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* translationFiltering;

  __declspec(property(get = get_floatFxValue)) float_t floatFxValue;

  __declspec(property(get = get_floatFxDistribution))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* floatFxDistribution;

  __declspec(property(get = get_floatFxFiltering))::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* floatFxFiltering;

  constexpr ::GlobalNamespace::LightGroupSO*& __get__lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr ::GlobalNamespace::EnvironmentColorType& __get__environmentColorType();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __get__environmentColorType() const;

  constexpr void __set__environmentColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr float_t& __get__brightness();

  constexpr float_t const& __get__brightness() const;

  constexpr void __set__brightness(float_t value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__brightnessDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__brightnessDistribution() const;

  constexpr void __set__brightnessDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __get__brightnessFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __get__brightnessFiltering() const;

  constexpr void __set__brightnessFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr float_t& __get__rotationX();

  constexpr float_t const& __get__rotationX() const;

  constexpr void __set__rotationX(float_t value);

  constexpr float_t& __get__rotationY();

  constexpr float_t const& __get__rotationY() const;

  constexpr void __set__rotationY(float_t value);

  constexpr float_t& __get__rotationZ();

  constexpr float_t const& __get__rotationZ() const;

  constexpr void __set__rotationZ(float_t value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__rotationXDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__rotationXDistribution() const;

  constexpr void __set__rotationXDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__rotationYDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__rotationYDistribution() const;

  constexpr void __set__rotationYDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__rotationZDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__rotationZDistribution() const;

  constexpr void __set__rotationZDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __get__rotationFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __get__rotationFiltering() const;

  constexpr void __set__rotationFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr float_t& __get__translationX();

  constexpr float_t const& __get__translationX() const;

  constexpr void __set__translationX(float_t value);

  constexpr float_t& __get__translationY();

  constexpr float_t const& __get__translationY() const;

  constexpr void __set__translationY(float_t value);

  constexpr float_t& __get__translationZ();

  constexpr float_t const& __get__translationZ() const;

  constexpr void __set__translationZ(float_t value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__translationXDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__translationXDistribution() const;

  constexpr void __set__translationXDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__translationYDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__translationYDistribution() const;

  constexpr void __set__translationYDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__translationZDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__translationZDistribution() const;

  constexpr void __set__translationZDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __get__translationFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __get__translationFiltering() const;

  constexpr void __set__translationFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  constexpr float_t& __get__floatFxValue();

  constexpr float_t const& __get__floatFxValue() const;

  constexpr void __set__floatFxValue(float_t value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*& __get__floatFxDistribution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution*> const& __get__floatFxDistribution() const;

  constexpr void __set__floatFxDistribution(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* value);

  constexpr ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*& __get__floatFxFiltering();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*> const& __get__floatFxFiltering() const;

  constexpr void __set__floatFxFiltering(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* value);

  /// @brief Method get_lightGroup addr 0x2240224 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightGroupSO* get_lightGroup();

  /// @brief Method get_environmentColorType addr 0x224022c size 0x8 virtual false final false
  inline ::GlobalNamespace::EnvironmentColorType get_environmentColorType();

  /// @brief Method get_brightness addr 0x2240234 size 0x8 virtual false final false
  inline float_t get_brightness();

  /// @brief Method get_brightnessDistribution addr 0x224023c size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_brightnessDistribution();

  /// @brief Method get_brightnessFiltering addr 0x2240244 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_brightnessFiltering();

  /// @brief Method get_rotationX addr 0x224024c size 0x8 virtual false final false
  inline float_t get_rotationX();

  /// @brief Method get_rotationY addr 0x2240254 size 0x8 virtual false final false
  inline float_t get_rotationY();

  /// @brief Method get_rotationZ addr 0x224025c size 0x8 virtual false final false
  inline float_t get_rotationZ();

  /// @brief Method get_rotationXDistribution addr 0x2240264 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationXDistribution();

  /// @brief Method get_rotationYDistribution addr 0x224026c size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationYDistribution();

  /// @brief Method get_rotationZDistribution addr 0x2240274 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_rotationZDistribution();

  /// @brief Method get_rotationFiltering addr 0x224027c size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_rotationFiltering();

  /// @brief Method get_translationX addr 0x2240284 size 0x8 virtual false final false
  inline float_t get_translationX();

  /// @brief Method get_translationY addr 0x224028c size 0x8 virtual false final false
  inline float_t get_translationY();

  /// @brief Method get_translationZ addr 0x2240294 size 0x8 virtual false final false
  inline float_t get_translationZ();

  /// @brief Method get_translationXDistribution addr 0x224029c size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationXDistribution();

  /// @brief Method get_translationYDistribution addr 0x22402a4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationYDistribution();

  /// @brief Method get_translationZDistribution addr 0x22402ac size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_translationZDistribution();

  /// @brief Method get_translationFiltering addr 0x22402b4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_translationFiltering();

  /// @brief Method get_floatFxValue addr 0x22402bc size 0x8 virtual false final false
  inline float_t get_floatFxValue();

  /// @brief Method get_floatFxDistribution addr 0x22402c4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution* get_floatFxDistribution();

  /// @brief Method get_floatFxFiltering addr 0x22402cc size 0x8 virtual false final false
  inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* get_floatFxFiltering();

  static inline ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent* New_ctor();

  /// @brief Method .ctor addr 0x22402d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEnvironmentEvents__LightGroupEvent(__DefaultEnvironmentEvents__LightGroupEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEnvironmentEvents__LightGroupEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEnvironmentEvents__LightGroupEvent(__DefaultEnvironmentEvents__LightGroupEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEnvironmentEvents__LightGroupEvent();

public:
  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ____lightGroup;

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

} // namespace GlobalNamespace
// Type: ::DefaultEnvironmentEvents
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4169))
// CS Name: ::DefaultEnvironmentEvents*
class CORDL_TYPE DefaultEnvironmentEvents : public ::System::Object {
public:
  // Declarations
  using LightGroupEvent = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent;

  using LightGroupFiltering = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering;

  using LightGroupDistribution = ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupDistribution;

  using BasicBeatmapEvent = ::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent;

  /// @brief Field _basicBeatmapEvents, offset 0x10, size 0x8
  __declspec(property(get = __get__basicBeatmapEvents, put = __set__basicBeatmapEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*,
                                                                                                 ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> _basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroupEvents, put = __set__lightGroupEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*,
                                                                                             ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> _lightGroupEvents;

  __declspec(property(get = get_basicBeatmapEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*,
                                                             ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> basicBeatmapEvents;

  __declspec(property(
      get = get_lightGroupEvents))::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> lightGroupEvents;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*>& __get__basicBeatmapEvents();

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> const&
  __get__basicBeatmapEvents() const;

  constexpr void
  __set__basicBeatmapEvents(::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*>& __get__lightGroupEvents();

  constexpr ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> const& __get__lightGroupEvents() const;

  constexpr void __set__lightGroupEvents(::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> value);

  /// @brief Method get_basicBeatmapEvents addr 0x224015c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> get_basicBeatmapEvents();

  /// @brief Method get_lightGroupEvents addr 0x2240164 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> get_lightGroupEvents();

  /// @brief Method get_isEmpty addr 0x224016c size 0x38 virtual false final false
  inline bool get_isEmpty();

  static inline ::GlobalNamespace::DefaultEnvironmentEvents* New_ctor();

  /// @brief Method .ctor addr 0x22401a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEvents(DefaultEnvironmentEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEvents(DefaultEnvironmentEvents const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEvents();

public:
  /// @brief Field _basicBeatmapEvents, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__BasicBeatmapEvent*>*> ____basicBeatmapEvents;

  /// @brief Field _lightGroupEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*, ::Array<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>*> ____lightGroupEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEvents, 0x20>, "Size mismatch!");

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
