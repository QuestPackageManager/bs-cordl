#pragma once
// IWYU pragma private; include "BeatSaber/Init/InitArguments.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitArguments)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace BeatSaber::Init {
class InitArguments;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::InitArguments);
// Dependencies BGLib.DotnetExtension.CommandLine.ArgumentOption, System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.InitArguments
class CORDL_TYPE InitArguments : public ::System::Object {
public:
  // Declarations
  /// @brief Field kAutoPlayOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kAutoPlayOption, put = setStaticF_kAutoPlayOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kAutoPlayOption;

  /// @brief Field kAutoRecOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kAutoRecOption, put = setStaticF_kAutoRecOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kAutoRecOption;

  /// @brief Field kCustomSettings, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kCustomSettings, put = setStaticF_kCustomSettings)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kCustomSettings;

  /// @brief Field kFPFCOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kFPFCOption, put = setStaticF_kFPFCOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kFPFCOption;

  /// @brief Field kProgramArgumentOptions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kProgramArgumentOptions,
                      put = setStaticF_kProgramArgumentOptions)) ::System::Collections::Generic::IReadOnlyList_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* kProgramArgumentOptions;

  /// @brief Field kRecordingToolOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kRecordingToolOption, put = setStaticF_kRecordingToolOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kRecordingToolOption;

  /// @brief Field kRunCommandOption, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_kRunCommandOption, put = setStaticF_kRunCommandOption)) ::BGLib::DotnetExtension::CommandLine::ArgumentOption kRunCommandOption;

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kAutoPlayOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kAutoRecOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kCustomSettings();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kFPFCOption();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* getStaticF_kProgramArgumentOptions();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kRecordingToolOption();

  static inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption getStaticF_kRunCommandOption();

  static inline void setStaticF_kAutoPlayOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kAutoRecOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kCustomSettings(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kFPFCOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kProgramArgumentOptions(::System::Collections::Generic::IReadOnlyList_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value);

  static inline void setStaticF_kRecordingToolOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

  static inline void setStaticF_kRunCommandOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitArguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitArguments(InitArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitArguments(InitArguments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22370 };

  /// @brief Field kAutoPlayOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kAutoPlayOptionIdentifier{ u"--auto_play" };

  /// @brief Field kAutoRecOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kAutoRecOptionIdentifier{ u"--auto_rec" };

  /// @brief Field kCustomSettingsOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCustomSettingsOptionIdentifier{ u"--customSettings" };

  /// @brief Field kRecordingToolOptionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolOptionIdentifier{ u"--enable_recording_tool" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::InitArguments, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::InitArguments);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::InitArguments*, "BeatSaber.Init", "InitArguments");
