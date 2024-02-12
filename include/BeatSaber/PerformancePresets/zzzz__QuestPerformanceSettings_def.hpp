#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__ProcessorPerformanceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuestPerformanceSettings)
namespace BeatSaber::PerformancePresets {
struct ProcessorPerformanceLevel;
}
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class QuestPerformanceSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::QuestPerformanceSettings);
// Type: BeatSaber.PerformancePresets::QuestPerformanceSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(16237))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16239))
// CS Name: ::BeatSaber.PerformancePresets::QuestPerformanceSettings*
class CORDL_TYPE QuestPerformanceSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field gpuLevel, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_gpuLevel, put = __cordl_internal_set_gpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel gpuLevel;

  /// @brief Field cpuLevel, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cpuLevel, put = __cordl_internal_set_cpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel cpuLevel;

  /// @brief Field foveatedRenderingLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_foveatedRenderingLevel, put = __cordl_internal_set_foveatedRenderingLevel)) int32_t foveatedRenderingLevel;

  __declspec(property(get = get_gpuPerformanceLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel gpuPerformanceLevel;

  __declspec(property(get = get_cpuPerformanceLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel cpuPerformanceLevel;

  __declspec(property(get = get_useFoveatedRenderingDuringGameplay)) bool useFoveatedRenderingDuringGameplay;

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& __cordl_internal_get_gpuLevel();

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& __cordl_internal_get_gpuLevel() const;

  constexpr void __cordl_internal_set_gpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value);

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& __cordl_internal_get_cpuLevel();

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& __cordl_internal_get_cpuLevel() const;

  constexpr void __cordl_internal_set_cpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value);

  constexpr int32_t& __cordl_internal_get_foveatedRenderingLevel();

  constexpr int32_t const& __cordl_internal_get_foveatedRenderingLevel() const;

  constexpr void __cordl_internal_set_foveatedRenderingLevel(int32_t value);

  /// @brief Method get_gpuPerformanceLevel, addr 0xe3b808, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel get_gpuPerformanceLevel();

  /// @brief Method get_cpuPerformanceLevel, addr 0xe3b810, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel get_cpuPerformanceLevel();

  /// @brief Method get_useFoveatedRenderingDuringGameplay, addr 0xe3b818, size 0x10, virtual false, abstract: false, final false
  inline bool get_useFoveatedRenderingDuringGameplay();

  static inline ::BeatSaber::PerformancePresets::QuestPerformanceSettings* New_ctor();

  /// @brief Method .ctor, addr 0xe3b828, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestPerformanceSettings(QuestPerformanceSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestPerformanceSettings(QuestPerformanceSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestPerformanceSettings();

public:
  /// @brief Field gpuLevel, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel ___gpuLevel;

  /// @brief Field cpuLevel, offset: 0x14, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel ___cpuLevel;

  /// @brief Field foveatedRenderingLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ___foveatedRenderingLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::QuestPerformanceSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ___gpuLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ___cpuLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ___foveatedRenderingLevel) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::QuestPerformanceSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::QuestPerformanceSettings*, "BeatSaber.PerformancePresets", "QuestPerformanceSettings");
