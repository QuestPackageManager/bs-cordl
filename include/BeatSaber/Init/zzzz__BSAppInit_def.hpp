#pragma once
// IWYU pragma private; include "BeatSaber/Init/BSAppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BSAppInit)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Init {
class BSAppInit;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::BSAppInit);
// Dependencies AppInit, BGLib.DotnetExtension.CommandLine.ArgumentOption, BGLib.DotnetExtension.CommandLine.CommandLineParserResult
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.BSAppInit
class CORDL_TYPE BSAppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field <commandLineArguments>k__BackingField, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineArguments_k__BackingField,
                      put = __cordl_internal_set__commandLineArguments_k__BackingField)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineArguments_k__BackingField;

  __declspec(property(get = get_commandLineArguments, put = set_commandLineArguments)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineArguments;

  /// @brief Field kAutoPlayOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kAutoPlayOption, put = setStaticF_kAutoPlayOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kAutoPlayOption;

  /// @brief Field kAutoRecOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kAutoRecOption, put = setStaticF_kAutoRecOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kAutoRecOption;

  /// @brief Field kCustomSettings, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kCustomSettings, put = setStaticF_kCustomSettings)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kCustomSettings;

  /// @brief Field kEditorModeOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kEditorModeOption, put = setStaticF_kEditorModeOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kEditorModeOption;

  /// @brief Field kFPFCOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kFPFCOption, put = setStaticF_kFPFCOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kFPFCOption;

  /// @brief Field kProgramArgumentOptions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kProgramArgumentOptions,
                      put = setStaticF_kProgramArgumentOptions)) ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>
      kProgramArgumentOptions;

  /// @brief Field kRecordingToolOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kRecordingToolOption, put = setStaticF_kRecordingToolOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kRecordingToolOption;

  /// @brief Field kRunCommandOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kRunCommandOption, put = setStaticF_kRunCommandOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kRunCommandOption;

  /// @brief Method InstallBindings, addr 0x2270284, size 0x1c4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::BeatSaber::Init::BSAppInit* New_ctor();

  /// @brief Method PreloadAsync, addr 0x22701dc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineArguments_k__BackingField() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineArguments_k__BackingField();

  constexpr void __cordl_internal_set__commandLineArguments_k__BackingField(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  /// @brief Method .ctor, addr 0x2270608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kAutoPlayOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kAutoRecOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kCustomSettings();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kEditorModeOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kFPFCOption();

  static inline ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> getStaticF_kProgramArgumentOptions();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kRecordingToolOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kRunCommandOption();

  /// @brief Method get_commandLineArguments, addr 0x22701b4, size 0x14, virtual false, abstract: false, final false
  inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult get_commandLineArguments();

  static inline void setStaticF_kAutoPlayOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kAutoRecOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kCustomSettings(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kEditorModeOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kFPFCOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kProgramArgumentOptions(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> value);

  static inline void setStaticF_kRecordingToolOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kRunCommandOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  /// @brief Method set_commandLineArguments, addr 0x22701c8, size 0x14, virtual false, abstract: false, final false
  inline void set_commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSAppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSAppInit(BSAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSAppInit(BSAppInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18376 };

  /// @brief Field kAutoPlayOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kAutoPlayOptionIdentifier{ u"--auto_play" };

  /// @brief Field kAutoRecOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kAutoRecOptionIdentifier{ u"--auto_rec" };

  /// @brief Field kCustomSettingsOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCustomSettingsOptionIdentifier{ u"--customSettings" };

  /// @brief Field kInBuildGameVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kInBuildGameVersion{ u"InBuildGameVersion" };

  /// @brief Field kRecordingToolOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolOptionIdentifier{ u"--enable_recording_tool" };

  /// @brief Field <commandLineArguments>k__BackingField, offset: 0x50, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineArguments_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::BSAppInit, ____commandLineArguments_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::BSAppInit, 0x68>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::BSAppInit);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::BSAppInit*, "BeatSaber.Init", "BSAppInit");
