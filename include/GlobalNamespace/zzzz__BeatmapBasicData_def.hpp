#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapBasicData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapBasicData)
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct EnvironmentName;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapBasicData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapBasicData);
// Dependencies EnvironmentName, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapBasicData
class CORDL_TYPE BeatmapBasicData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapColorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapColorScheme, put = __cordl_internal_set_beatmapColorScheme)) ::GlobalNamespace::ColorScheme* beatmapColorScheme;

  /// @brief Field bombsCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_bombsCount, put = __cordl_internal_set_bombsCount)) int32_t bombsCount;

  /// @brief Field cuttableObjectsCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_cuttableObjectsCount, put = __cordl_internal_set_cuttableObjectsCount)) int32_t cuttableObjectsCount;

  /// @brief Field environmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentName, put = __cordl_internal_set_environmentName)) ::GlobalNamespace::EnvironmentName environmentName;

  /// @brief Field lighters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lighters, put = __cordl_internal_set_lighters)) ::ArrayW<::StringW, ::Array<::StringW>*> lighters;

  /// @brief Field mappers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mappers, put = __cordl_internal_set_mappers)) ::ArrayW<::StringW, ::Array<::StringW>*> mappers;

  /// @brief Field noteJumpMovementSpeed, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpMovementSpeed, put = __cordl_internal_set_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  /// @brief Field noteJumpStartBeatOffset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpStartBeatOffset, put = __cordl_internal_set_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  /// @brief Field notesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_notesCount, put = __cordl_internal_set_notesCount)) int32_t notesCount;

  /// @brief Field obstaclesCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_obstaclesCount, put = __cordl_internal_set_obstaclesCount)) int32_t obstaclesCount;

  static inline ::GlobalNamespace::BeatmapBasicData* New_ctor(float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, ::GlobalNamespace::EnvironmentName environmentName,
                                                              ::GlobalNamespace::ColorScheme* beatmapColorScheme, int32_t notesCount, int32_t cuttableObjectsCount, int32_t obstaclesCount,
                                                              int32_t bombsCount, ::ArrayW<::StringW, ::Array<::StringW>*> mappers, ::ArrayW<::StringW, ::Array<::StringW>*> lighters);

  constexpr ::GlobalNamespace::ColorScheme* const& __cordl_internal_get_beatmapColorScheme() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get_beatmapColorScheme();

  constexpr int32_t const& __cordl_internal_get_bombsCount() const;

  constexpr int32_t& __cordl_internal_get_bombsCount();

  constexpr int32_t const& __cordl_internal_get_cuttableObjectsCount() const;

  constexpr int32_t& __cordl_internal_get_cuttableObjectsCount();

  constexpr ::GlobalNamespace::EnvironmentName const& __cordl_internal_get_environmentName() const;

  constexpr ::GlobalNamespace::EnvironmentName& __cordl_internal_get_environmentName();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_lighters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_lighters();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_mappers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_mappers();

  constexpr float_t const& __cordl_internal_get_noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get_noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get_noteJumpStartBeatOffset() const;

  constexpr float_t& __cordl_internal_get_noteJumpStartBeatOffset();

  constexpr int32_t const& __cordl_internal_get_notesCount() const;

  constexpr int32_t& __cordl_internal_get_notesCount();

  constexpr int32_t const& __cordl_internal_get_obstaclesCount() const;

  constexpr int32_t& __cordl_internal_get_obstaclesCount();

  constexpr void __cordl_internal_set_beatmapColorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set_bombsCount(int32_t value);

  constexpr void __cordl_internal_set_cuttableObjectsCount(int32_t value);

  constexpr void __cordl_internal_set_environmentName(::GlobalNamespace::EnvironmentName value);

  constexpr void __cordl_internal_set_lighters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_mappers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set_noteJumpStartBeatOffset(float_t value);

  constexpr void __cordl_internal_set_notesCount(int32_t value);

  constexpr void __cordl_internal_set_obstaclesCount(int32_t value);

  /// @brief Method .ctor, addr 0x26c3104, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, ::GlobalNamespace::EnvironmentName environmentName, ::GlobalNamespace::ColorScheme* beatmapColorScheme,
                    int32_t notesCount, int32_t cuttableObjectsCount, int32_t obstaclesCount, int32_t bombsCount, ::ArrayW<::StringW, ::Array<::StringW>*> mappers,
                    ::ArrayW<::StringW, ::Array<::StringW>*> lighters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapBasicData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBasicData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapBasicData(BeatmapBasicData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapBasicData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapBasicData(BeatmapBasicData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12934 };

  /// @brief Field noteJumpMovementSpeed, offset: 0x10, size: 0x4, def value: None
  float_t ___noteJumpMovementSpeed;

  /// @brief Field noteJumpStartBeatOffset, offset: 0x14, size: 0x4, def value: None
  float_t ___noteJumpStartBeatOffset;

  /// @brief Field environmentName, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentName ___environmentName;

  /// @brief Field beatmapColorScheme, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___beatmapColorScheme;

  /// @brief Field notesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___notesCount;

  /// @brief Field cuttableObjectsCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___cuttableObjectsCount;

  /// @brief Field obstaclesCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___obstaclesCount;

  /// @brief Field bombsCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___bombsCount;

  /// @brief Field mappers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___mappers;

  /// @brief Field lighters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___lighters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___noteJumpMovementSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___noteJumpStartBeatOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___environmentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___beatmapColorScheme) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___notesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___cuttableObjectsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___obstaclesCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___bombsCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___mappers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapBasicData, ___lighters) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapBasicData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapBasicData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapBasicData*, "", "BeatmapBasicData");
