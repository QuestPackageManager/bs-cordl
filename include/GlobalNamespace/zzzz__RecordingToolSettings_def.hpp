#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettings)
namespace GlobalNamespace {
class RecordingSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettings);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSettings
class CORDL_TYPE RecordingToolSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingSettings,
                      put = __cordl_internal_set_recordingSettings)) ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>
      recordingSettings;

  static inline ::GlobalNamespace::RecordingToolSettings* New_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> recordingSettings);

  constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> const& __cordl_internal_get_recordingSettings() const;

  constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>& __cordl_internal_get_recordingSettings();

  constexpr void __cordl_internal_set_recordingSettings(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> value);

  /// @brief Method .ctor, addr 0x3b29848, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> recordingSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettings(RecordingToolSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettings(RecordingToolSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5144 };

  /// @brief Field recordingSettings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> ___recordingSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSettings, ___recordingSettings) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettings, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettings*, "", "RecordingToolSettings");
