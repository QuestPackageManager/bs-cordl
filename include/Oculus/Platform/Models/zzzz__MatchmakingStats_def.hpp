#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingStats)
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingStats);
// Type: Oculus.Platform.Models::MatchmakingStats
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13404))
// CS Name: ::Oculus.Platform.Models::MatchmakingStats*
class CORDL_TYPE MatchmakingStats : public ::System::Object {
public:
  // Declarations
  /// @brief Field DrawCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_DrawCount, put = __cordl_internal_set_DrawCount)) uint32_t DrawCount;

  /// @brief Field LossCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LossCount, put = __cordl_internal_set_LossCount)) uint32_t LossCount;

  /// @brief Field SkillLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_SkillLevel, put = __cordl_internal_set_SkillLevel)) uint32_t SkillLevel;

  /// @brief Field SkillMean, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SkillMean, put = __cordl_internal_set_SkillMean)) double_t SkillMean;

  /// @brief Field SkillStandardDeviation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SkillStandardDeviation, put = __cordl_internal_set_SkillStandardDeviation)) double_t SkillStandardDeviation;

  /// @brief Field WinCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_WinCount, put = __cordl_internal_set_WinCount)) uint32_t WinCount;

  constexpr uint32_t& __cordl_internal_get_DrawCount();

  constexpr uint32_t const& __cordl_internal_get_DrawCount() const;

  constexpr void __cordl_internal_set_DrawCount(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_LossCount();

  constexpr uint32_t const& __cordl_internal_get_LossCount() const;

  constexpr void __cordl_internal_set_LossCount(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_SkillLevel();

  constexpr uint32_t const& __cordl_internal_get_SkillLevel() const;

  constexpr void __cordl_internal_set_SkillLevel(uint32_t value);

  constexpr double_t& __cordl_internal_get_SkillMean();

  constexpr double_t const& __cordl_internal_get_SkillMean() const;

  constexpr void __cordl_internal_set_SkillMean(double_t value);

  constexpr double_t& __cordl_internal_get_SkillStandardDeviation();

  constexpr double_t const& __cordl_internal_get_SkillStandardDeviation() const;

  constexpr void __cordl_internal_set_SkillStandardDeviation(double_t value);

  constexpr uint32_t& __cordl_internal_get_WinCount();

  constexpr uint32_t const& __cordl_internal_get_WinCount() const;

  constexpr void __cordl_internal_set_WinCount(uint32_t value);

  static inline ::Oculus::Platform::Models::MatchmakingStats* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273b3a8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingStats(MatchmakingStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingStats(MatchmakingStats const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingStats();

public:
  /// @brief Field DrawCount, offset: 0x10, size: 0x4, def value: None
  uint32_t ___DrawCount;

  /// @brief Field LossCount, offset: 0x14, size: 0x4, def value: None
  uint32_t ___LossCount;

  /// @brief Field SkillLevel, offset: 0x18, size: 0x4, def value: None
  uint32_t ___SkillLevel;

  /// @brief Field SkillMean, offset: 0x20, size: 0x8, def value: None
  double_t ___SkillMean;

  /// @brief Field SkillStandardDeviation, offset: 0x28, size: 0x8, def value: None
  double_t ___SkillStandardDeviation;

  /// @brief Field WinCount, offset: 0x30, size: 0x4, def value: None
  uint32_t ___WinCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingStats, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___DrawCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___LossCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___SkillLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___SkillMean) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___SkillStandardDeviation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingStats, ___WinCount) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingStats*, "Oculus.Platform.Models", "MatchmakingStats");
