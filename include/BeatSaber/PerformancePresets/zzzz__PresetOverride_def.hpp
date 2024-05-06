#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PresetOverride)
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class PresetOverride;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::PresetOverride);
// Type: BeatSaber.PerformancePresets::PresetOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::PresetOverride*
class CORDL_TYPE PresetOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field depthTexture, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) bool depthTexture;

  /// @brief Field presetName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_presetName, put = __cordl_internal_set_presetName))::StringW presetName;

  static inline ::BeatSaber::PerformancePresets::PresetOverride* New_ctor();

  constexpr bool const& __cordl_internal_get_depthTexture() const;

  constexpr bool& __cordl_internal_get_depthTexture();

  constexpr ::StringW const& __cordl_internal_get_presetName() const;

  constexpr ::StringW& __cordl_internal_get_presetName();

  constexpr void __cordl_internal_set_depthTexture(bool value);

  constexpr void __cordl_internal_set_presetName(::StringW value);

  /// @brief Method .ctor, addr 0x1066e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresetOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresetOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresetOverride(PresetOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresetOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresetOverride(PresetOverride const&) = delete;

  /// @brief Field presetName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___presetName;

  /// @brief Field depthTexture, offset: 0x18, size: 0x1, def value: None
  bool ___depthTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::PresetOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PresetOverride, ___presetName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::PresetOverride, ___depthTexture) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::PresetOverride);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::PresetOverride*, "BeatSaber.PerformancePresets", "PresetOverride");
