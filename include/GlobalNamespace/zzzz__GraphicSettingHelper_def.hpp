#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GraphicSettingHelper)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicSettingHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingHelper);
// Type: ::GraphicSettingHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GraphicSettingHelper*
class CORDL_TYPE GraphicSettingHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromPreset, addr 0x26b5f34, size 0xb0, virtual false, abstract: false, final false
  static inline bool FromPreset(::BeatSaber::GameSettings::GraphicSettingsHandler* settingsHandler, ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> preset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettingHelper(GraphicSettingHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettingHelper(GraphicSettingHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphicSettingHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingHelper*, "", "GraphicSettingHelper");
