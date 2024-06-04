#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/EnvironmentOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentOverride)
namespace BeatSaber::PerformancePresets {
class PresetOverride;
}
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class EnvironmentOverride;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::EnvironmentOverride);
// Type: BeatSaber.PerformancePresets::EnvironmentOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::EnvironmentOverride*
class CORDL_TYPE EnvironmentOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field preset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_preset, put = __cordl_internal_set_preset))::BeatSaber::PerformancePresets::PresetOverride* preset;

  /// @brief Field serializedEnvironmentName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedEnvironmentName, put = __cordl_internal_set_serializedEnvironmentName))::StringW serializedEnvironmentName;

  static inline ::BeatSaber::PerformancePresets::EnvironmentOverride* New_ctor();

  constexpr ::BeatSaber::PerformancePresets::PresetOverride*& __cordl_internal_get_preset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::PresetOverride*> const& __cordl_internal_get_preset() const;

  constexpr ::StringW const& __cordl_internal_get_serializedEnvironmentName() const;

  constexpr ::StringW& __cordl_internal_get_serializedEnvironmentName();

  constexpr void __cordl_internal_set_preset(::BeatSaber::PerformancePresets::PresetOverride* value);

  constexpr void __cordl_internal_set_serializedEnvironmentName(::StringW value);

  /// @brief Method .ctor, addr 0x106d574, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentOverride(EnvironmentOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentOverride(EnvironmentOverride const&) = delete;

  /// @brief Field serializedEnvironmentName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedEnvironmentName;

  /// @brief Field preset, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::PresetOverride* ___preset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::EnvironmentOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::EnvironmentOverride, ___serializedEnvironmentName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::EnvironmentOverride, ___preset) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::EnvironmentOverride);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::EnvironmentOverride*, "BeatSaber.PerformancePresets", "EnvironmentOverride");
