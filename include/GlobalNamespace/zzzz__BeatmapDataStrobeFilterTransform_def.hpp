#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataStrobeFilterTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataStrobeFilterTransform)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BeatmapDataStrobeFilterTransform__StrobeStreakData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataStrobeFilterTransform;
}
namespace GlobalNamespace {
class __BeatmapDataStrobeFilterTransform__StrobeStreakData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataStrobeFilterTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData);
// Type: ::StrobeStreakData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataStrobeFilterTransform::StrobeStreakData*
class CORDL_TYPE __BeatmapDataStrobeFilterTransform__StrobeStreakData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _foundFirstColoredEventData, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__foundFirstColoredEventData, put = __cordl_internal_set__foundFirstColoredEventData)) bool _foundFirstColoredEventData;

  /// @brief Field isActive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field lastColorType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastColorType, put = __cordl_internal_set_lastColorType)) ::GlobalNamespace::EnvironmentColorType lastColorType;

  /// @brief Field lastIsOn, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_lastIsOn, put = __cordl_internal_set_lastIsOn)) bool lastIsOn;

  /// @brief Field lastSwitchTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSwitchTime, put = __cordl_internal_set_lastSwitchTime)) float_t lastSwitchTime;

  /// @brief Field originalBasicBeatmapEventData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_originalBasicBeatmapEventData,
                      put = __cordl_internal_set_originalBasicBeatmapEventData)) ::GlobalNamespace::BasicBeatmapEventData* originalBasicBeatmapEventData;

  /// @brief Field startColorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startColorType, put = __cordl_internal_set_startColorType)) ::GlobalNamespace::EnvironmentColorType startColorType;

  /// @brief Field strobeStartTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_strobeStartTime, put = __cordl_internal_set_strobeStartTime)) float_t strobeStartTime;

  /// @brief Method AddStrobeData, addr 0x266c47c, size 0x78, virtual false, abstract: false, final false
  inline void AddStrobeData(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData* New_ctor();

  /// @brief Method StartPotentialStrobe, addr 0x266c538, size 0x80, virtual false, abstract: false, final false
  inline void StartPotentialStrobe(::GlobalNamespace::BasicBeatmapEventData* startBasicBeatmapEventData);

  constexpr bool const& __cordl_internal_get__foundFirstColoredEventData() const;

  constexpr bool& __cordl_internal_get__foundFirstColoredEventData();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get_lastColorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get_lastColorType();

  constexpr bool const& __cordl_internal_get_lastIsOn() const;

  constexpr bool& __cordl_internal_get_lastIsOn();

  constexpr float_t const& __cordl_internal_get_lastSwitchTime() const;

  constexpr float_t& __cordl_internal_get_lastSwitchTime();

  constexpr ::GlobalNamespace::BasicBeatmapEventData*& __cordl_internal_get_originalBasicBeatmapEventData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicBeatmapEventData*> const& __cordl_internal_get_originalBasicBeatmapEventData() const;

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get_startColorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get_startColorType();

  constexpr float_t const& __cordl_internal_get_strobeStartTime() const;

  constexpr float_t& __cordl_internal_get_strobeStartTime();

  constexpr void __cordl_internal_set__foundFirstColoredEventData(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_lastColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set_lastIsOn(bool value);

  constexpr void __cordl_internal_set_lastSwitchTime(float_t value);

  constexpr void __cordl_internal_set_originalBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* value);

  constexpr void __cordl_internal_set_startColorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set_strobeStartTime(float_t value);

  /// @brief Method .ctor, addr 0x266c3f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataStrobeFilterTransform__StrobeStreakData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataStrobeFilterTransform__StrobeStreakData(__BeatmapDataStrobeFilterTransform__StrobeStreakData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataStrobeFilterTransform__StrobeStreakData(__BeatmapDataStrobeFilterTransform__StrobeStreakData const&) = delete;

  /// @brief Field isActive, offset: 0x10, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field strobeStartTime, offset: 0x14, size: 0x4, def value: None
  float_t ___strobeStartTime;

  /// @brief Field startColorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___startColorType;

  /// @brief Field lastSwitchTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___lastSwitchTime;

  /// @brief Field lastColorType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___lastColorType;

  /// @brief Field lastIsOn, offset: 0x24, size: 0x1, def value: None
  bool ___lastIsOn;

  /// @brief Field originalBasicBeatmapEventData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BasicBeatmapEventData* ___originalBasicBeatmapEventData;

  /// @brief Field _foundFirstColoredEventData, offset: 0x30, size: 0x1, def value: None
  bool ____foundFirstColoredEventData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12754 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___isActive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___strobeStartTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___startColorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___lastSwitchTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___lastColorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___lastIsOn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ___originalBasicBeatmapEventData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData, ____foundFirstColoredEventData) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataStrobeFilterTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataStrobeFilterTransform*
class CORDL_TYPE BeatmapDataStrobeFilterTransform : public ::System::Object {
public:
  // Declarations
  using StrobeStreakData = ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData;

  /// @brief Method CreateTransformedData, addr 0x266b7ac, size 0xc44, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                               ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions);

  /// @brief Method GetFlashAndFadeToBlackEventDataValue, addr 0x266c518, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);

  /// @brief Method GetOnEventDataValue, addr 0x266c4f4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataStrobeFilterTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12755 };

  /// @brief Field kMaxSecondsToConsiderStrobe offset 0xffffffff size 0x4
  static constexpr float_t kMaxSecondsToConsiderStrobe{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataStrobeFilterTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataStrobeFilterTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStrobeFilterTransform*, "", "BeatmapDataStrobeFilterTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*, "", "BeatmapDataStrobeFilterTransform/StrobeStreakData");
