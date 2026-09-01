#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\RumbleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RumbleData)
// Forward declare root types
namespace BeatSaber::Haptics {
class RumbleData;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::RumbleData*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::RumbleData*, "BeatSaber.Haptics", "RumbleData");
// Dependencies System.Object
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.RumbleData
class CORDL_TYPE RumbleData : public ::System::Object {
public:
  // Declarations
  /// @brief Field active, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_active, put = __cordl_internal_set_active)) bool active;

  /// @brief Field continuous, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_continuous, put = __cordl_internal_set_continuous)) bool continuous;

  /// @brief Field endTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_endTime, put = __cordl_internal_set_endTime)) float_t endTime;

  /// @brief Field frequency, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_frequency, put = __cordl_internal_set_frequency)) float_t frequency;

  /// @brief Field strength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_strength, put = __cordl_internal_set_strength)) float_t strength;

  static inline ::BeatSaber::Haptics::RumbleData* New_ctor();

  constexpr bool const& __cordl_internal_get_active() const;

  constexpr bool& __cordl_internal_get_active();

  constexpr bool const& __cordl_internal_get_continuous() const;

  constexpr bool& __cordl_internal_get_continuous();

  constexpr float_t const& __cordl_internal_get_endTime() const;

  constexpr float_t& __cordl_internal_get_endTime();

  constexpr float_t const& __cordl_internal_get_frequency() const;

  constexpr float_t& __cordl_internal_get_frequency();

  constexpr float_t const& __cordl_internal_get_strength() const;

  constexpr float_t& __cordl_internal_get_strength();

  constexpr void __cordl_internal_set_active(bool value);

  constexpr void __cordl_internal_set_continuous(bool value);

  constexpr void __cordl_internal_set_endTime(float_t value);

  constexpr void __cordl_internal_set_frequency(float_t value);

  constexpr void __cordl_internal_set_strength(float_t value);

  /// @brief Method .ctor, addr 0x3298a4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RumbleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RumbleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RumbleData(RumbleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RumbleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RumbleData(RumbleData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23192 };

  /// @brief Field active, offset: 0x10, size: 0x1, def value: None
  bool ___active;

  /// @brief Field continuous, offset: 0x11, size: 0x1, def value: None
  bool ___continuous;

  /// @brief Field strength, offset: 0x14, size: 0x4, def value: None
  float_t ___strength;

  /// @brief Field endTime, offset: 0x18, size: 0x4, def value: None
  float_t ___endTime;

  /// @brief Field frequency, offset: 0x1c, size: 0x4, def value: None
  float_t ___frequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::RumbleData, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::RumbleData, ___continuous) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::RumbleData, ___strength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::RumbleData, ___endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::RumbleData, ___frequency) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::RumbleData) == 0x20, "Size mismatch!");

} // namespace BeatSaber::Haptics
