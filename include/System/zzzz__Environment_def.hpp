#pragma once
// IWYU pragma private; include "System/Environment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Environment)
namespace System::Collections {
class IDictionary;
}
namespace System {
struct EnvironmentVariableTarget;
}
namespace System {
struct Environment_SpecialFolderOption;
}
namespace System {
struct Environment_SpecialFolder;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class OperatingSystem;
}
namespace System {
struct PlatformID;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System {
struct Environment_SpecialFolder;
}
namespace System {
struct Environment_SpecialFolderOption;
}
namespace System {
class Environment;
}
// Write type traits
MARK_VAL_T(::System::Environment_SpecialFolder);
MARK_VAL_T(::System::Environment_SpecialFolderOption);
MARK_REF_PTR_T(::System::Environment);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Environment/SpecialFolder
struct CORDL_TYPE Environment_SpecialFolder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Environment_SpecialFolder_Unwrapped
  enum struct __Environment_SpecialFolder_Unwrapped : int32_t {
    __E_MyDocuments = static_cast<int32_t>(0x5),
    __E_Desktop = static_cast<int32_t>(0x0),
    __E_MyComputer = static_cast<int32_t>(0x11),
    __E_Programs = static_cast<int32_t>(0x2),
    __E_Personal = static_cast<int32_t>(0x5),
    __E_Favorites = static_cast<int32_t>(0x6),
    __E_Startup = static_cast<int32_t>(0x7),
    __E_Recent = static_cast<int32_t>(0x8),
    __E_SendTo = static_cast<int32_t>(0x9),
    __E_StartMenu = static_cast<int32_t>(0xb),
    __E_MyMusic = static_cast<int32_t>(0xd),
    __E_DesktopDirectory = static_cast<int32_t>(0x10),
    __E_Templates = static_cast<int32_t>(0x15),
    __E_ApplicationData = static_cast<int32_t>(0x1a),
    __E_LocalApplicationData = static_cast<int32_t>(0x1c),
    __E_InternetCache = static_cast<int32_t>(0x20),
    __E_Cookies = static_cast<int32_t>(0x21),
    __E_History = static_cast<int32_t>(0x22),
    __E_CommonApplicationData = static_cast<int32_t>(0x23),
    __E_System = static_cast<int32_t>(0x25),
    __E_ProgramFiles = static_cast<int32_t>(0x26),
    __E_MyPictures = static_cast<int32_t>(0x27),
    __E_CommonProgramFiles = static_cast<int32_t>(0x2b),
    __E_MyVideos = static_cast<int32_t>(0xe),
    __E_NetworkShortcuts = static_cast<int32_t>(0x13),
    __E_Fonts = static_cast<int32_t>(0x14),
    __E_CommonStartMenu = static_cast<int32_t>(0x16),
    __E_CommonPrograms = static_cast<int32_t>(0x17),
    __E_CommonStartup = static_cast<int32_t>(0x18),
    __E_CommonDesktopDirectory = static_cast<int32_t>(0x19),
    __E_PrinterShortcuts = static_cast<int32_t>(0x1b),
    __E_Windows = static_cast<int32_t>(0x24),
    __E_UserProfile = static_cast<int32_t>(0x28),
    __E_SystemX86 = static_cast<int32_t>(0x29),
    __E_ProgramFilesX86 = static_cast<int32_t>(0x2a),
    __E_CommonProgramFilesX86 = static_cast<int32_t>(0x2c),
    __E_CommonTemplates = static_cast<int32_t>(0x2d),
    __E_CommonDocuments = static_cast<int32_t>(0x2e),
    __E_CommonAdminTools = static_cast<int32_t>(0x2f),
    __E_AdminTools = static_cast<int32_t>(0x30),
    __E_CommonMusic = static_cast<int32_t>(0x35),
    __E_CommonPictures = static_cast<int32_t>(0x36),
    __E_CommonVideos = static_cast<int32_t>(0x37),
    __E_Resources = static_cast<int32_t>(0x38),
    __E_LocalizedResources = static_cast<int32_t>(0x39),
    __E_CommonOemLinks = static_cast<int32_t>(0x3a),
    __E_CDBurning = static_cast<int32_t>(0x3b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Environment_SpecialFolder_Unwrapped() const noexcept {
    return static_cast<__Environment_SpecialFolder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Environment_SpecialFolder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Environment_SpecialFolder(int32_t value__) noexcept;

  /// @brief Field AdminTools value: I32(48)
  static ::System::Environment_SpecialFolder const AdminTools;

  /// @brief Field ApplicationData value: I32(26)
  static ::System::Environment_SpecialFolder const ApplicationData;

  /// @brief Field CDBurning value: I32(59)
  static ::System::Environment_SpecialFolder const CDBurning;

  /// @brief Field CommonAdminTools value: I32(47)
  static ::System::Environment_SpecialFolder const CommonAdminTools;

  /// @brief Field CommonApplicationData value: I32(35)
  static ::System::Environment_SpecialFolder const CommonApplicationData;

  /// @brief Field CommonDesktopDirectory value: I32(25)
  static ::System::Environment_SpecialFolder const CommonDesktopDirectory;

  /// @brief Field CommonDocuments value: I32(46)
  static ::System::Environment_SpecialFolder const CommonDocuments;

  /// @brief Field CommonMusic value: I32(53)
  static ::System::Environment_SpecialFolder const CommonMusic;

  /// @brief Field CommonOemLinks value: I32(58)
  static ::System::Environment_SpecialFolder const CommonOemLinks;

  /// @brief Field CommonPictures value: I32(54)
  static ::System::Environment_SpecialFolder const CommonPictures;

  /// @brief Field CommonProgramFiles value: I32(43)
  static ::System::Environment_SpecialFolder const CommonProgramFiles;

  /// @brief Field CommonProgramFilesX86 value: I32(44)
  static ::System::Environment_SpecialFolder const CommonProgramFilesX86;

  /// @brief Field CommonPrograms value: I32(23)
  static ::System::Environment_SpecialFolder const CommonPrograms;

  /// @brief Field CommonStartMenu value: I32(22)
  static ::System::Environment_SpecialFolder const CommonStartMenu;

  /// @brief Field CommonStartup value: I32(24)
  static ::System::Environment_SpecialFolder const CommonStartup;

  /// @brief Field CommonTemplates value: I32(45)
  static ::System::Environment_SpecialFolder const CommonTemplates;

  /// @brief Field CommonVideos value: I32(55)
  static ::System::Environment_SpecialFolder const CommonVideos;

  /// @brief Field Cookies value: I32(33)
  static ::System::Environment_SpecialFolder const Cookies;

  /// @brief Field Desktop value: I32(0)
  static ::System::Environment_SpecialFolder const Desktop;

  /// @brief Field DesktopDirectory value: I32(16)
  static ::System::Environment_SpecialFolder const DesktopDirectory;

  /// @brief Field Favorites value: I32(6)
  static ::System::Environment_SpecialFolder const Favorites;

  /// @brief Field Fonts value: I32(20)
  static ::System::Environment_SpecialFolder const Fonts;

  /// @brief Field History value: I32(34)
  static ::System::Environment_SpecialFolder const History;

  /// @brief Field InternetCache value: I32(32)
  static ::System::Environment_SpecialFolder const InternetCache;

  /// @brief Field LocalApplicationData value: I32(28)
  static ::System::Environment_SpecialFolder const LocalApplicationData;

  /// @brief Field LocalizedResources value: I32(57)
  static ::System::Environment_SpecialFolder const LocalizedResources;

  /// @brief Field MyComputer value: I32(17)
  static ::System::Environment_SpecialFolder const MyComputer;

  /// @brief Field MyDocuments value: I32(5)
  static ::System::Environment_SpecialFolder const MyDocuments;

  /// @brief Field MyMusic value: I32(13)
  static ::System::Environment_SpecialFolder const MyMusic;

  /// @brief Field MyPictures value: I32(39)
  static ::System::Environment_SpecialFolder const MyPictures;

  /// @brief Field MyVideos value: I32(14)
  static ::System::Environment_SpecialFolder const MyVideos;

  /// @brief Field NetworkShortcuts value: I32(19)
  static ::System::Environment_SpecialFolder const NetworkShortcuts;

  /// @brief Field Personal value: I32(5)
  static ::System::Environment_SpecialFolder const Personal;

  /// @brief Field PrinterShortcuts value: I32(27)
  static ::System::Environment_SpecialFolder const PrinterShortcuts;

  /// @brief Field ProgramFiles value: I32(38)
  static ::System::Environment_SpecialFolder const ProgramFiles;

  /// @brief Field ProgramFilesX86 value: I32(42)
  static ::System::Environment_SpecialFolder const ProgramFilesX86;

  /// @brief Field Programs value: I32(2)
  static ::System::Environment_SpecialFolder const Programs;

  /// @brief Field Recent value: I32(8)
  static ::System::Environment_SpecialFolder const Recent;

  /// @brief Field Resources value: I32(56)
  static ::System::Environment_SpecialFolder const Resources;

  /// @brief Field SendTo value: I32(9)
  static ::System::Environment_SpecialFolder const SendTo;

  /// @brief Field StartMenu value: I32(11)
  static ::System::Environment_SpecialFolder const StartMenu;

  /// @brief Field Startup value: I32(7)
  static ::System::Environment_SpecialFolder const Startup;

  /// @brief Field System value: I32(37)
  static ::System::Environment_SpecialFolder const System;

  /// @brief Field SystemX86 value: I32(41)
  static ::System::Environment_SpecialFolder const SystemX86;

  /// @brief Field Templates value: I32(21)
  static ::System::Environment_SpecialFolder const Templates;

  /// @brief Field UserProfile value: I32(40)
  static ::System::Environment_SpecialFolder const UserProfile;

  /// @brief Field Windows value: I32(36)
  static ::System::Environment_SpecialFolder const Windows;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Environment_SpecialFolder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Environment_SpecialFolder, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Environment/SpecialFolderOption
struct CORDL_TYPE Environment_SpecialFolderOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Environment_SpecialFolderOption_Unwrapped
  enum struct __Environment_SpecialFolderOption_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DoNotVerify = static_cast<int32_t>(0x4000),
    __E_Create = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Environment_SpecialFolderOption_Unwrapped() const noexcept {
    return static_cast<__Environment_SpecialFolderOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Environment_SpecialFolderOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Environment_SpecialFolderOption(int32_t value__) noexcept;

  /// @brief Field Create value: I32(32768)
  static ::System::Environment_SpecialFolderOption const Create;

  /// @brief Field DoNotVerify value: I32(16384)
  static ::System::Environment_SpecialFolderOption const DoNotVerify;

  /// @brief Field None value: I32(0)
  static ::System::Environment_SpecialFolderOption const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Environment_SpecialFolderOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Environment_SpecialFolderOption, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Environment
class CORDL_TYPE Environment : public ::System::Object {
public:
  // Declarations
  using SpecialFolder = ::System::Environment_SpecialFolder;

  using SpecialFolderOption = ::System::Environment_SpecialFolderOption;

  /// @brief Field nl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nl, put = setStaticF_nl)) ::StringW nl;

  /// @brief Field os, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_os, put = setStaticF_os)) ::System::OperatingSystem* os;

  /// @brief Method CreateVersionFromString, addr 0x3e333fc, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Version* CreateVersionFromString(::StringW info);

  /// @brief Method Exit, addr 0x3e33690, size 0x4, virtual false, abstract: false, final false
  static inline void Exit(int32_t exitCode);

  /// @brief Method FailFast, addr 0x3e343b4, size 0x8, virtual false, abstract: false, final false
  static inline void FailFast(::StringW message, ::System::Exception* exception);

  /// @brief Method FailFast, addr 0x3e343bc, size 0x4, virtual false, abstract: false, final false
  static inline void FailFast(::StringW message, ::System::Exception* exception, ::StringW errorSource);

  /// @brief Method GetCommandLineArgs, addr 0x3e33694, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  /// @brief Method GetEnvironmentVariable, addr 0x3e33760, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable);

  /// @brief Method GetEnvironmentVariable, addr 0x3e341c4, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable, ::System::EnvironmentVariableTarget target);

  /// @brief Method GetEnvironmentVariableNames, addr 0x3e33830, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnvironmentVariableNames();

  /// @brief Method GetEnvironmentVariables, addr 0x3e33764, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetEnvironmentVariables();

  /// @brief Method GetFolderPath, addr 0x3e33834, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetFolderPath(::System::Environment_SpecialFolder folder);

  /// @brief Method GetFolderPath, addr 0x3e3383c, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW GetFolderPath(::System::Environment_SpecialFolder folder, ::System::Environment_SpecialFolderOption option);

  /// @brief Method GetIs64BitOperatingSystem, addr 0x3e343c0, size 0x4, virtual false, abstract: false, final false
  static inline bool GetIs64BitOperatingSystem();

  /// @brief Method GetLogicalDrivesInternal, addr 0x3e343dc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrivesInternal();

  /// @brief Method GetMachineConfigPath, addr 0x3e343e0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetMachineConfigPath();

  /// @brief Method GetNewLine, addr 0x3e332d4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetNewLine();

  /// @brief Method GetOSVersionString, addr 0x3e33344, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetOSVersionString();

  /// @brief Method GetPageSize, addr 0x3e343e4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetPageSize();

  /// @brief Method GetResourceString, addr 0x3e2fa50, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW key);

  /// @brief Method GetResourceString, addr 0x3e3180c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method GetResourceStringEncodingName, addr 0x3e33128, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW GetResourceStringEncodingName(int32_t codePage);

  /// @brief Method GetStackTrace, addr 0x3e34420, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GetStackTrace(::System::Exception* e, bool needFileInfo);

  /// @brief Method GetWindowsFolderPath, addr 0x3e33870, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetWindowsFolderPath(int32_t folder);

  /// @brief Method InternalSetEnvironmentVariable, addr 0x3e34340, size 0x70, virtual false, abstract: false, final false
  static inline void InternalSetEnvironmentVariable(::StringW variable, ::StringW value);

  /// @brief Method InternalSetEnvironmentVariable, addr 0x3e343b0, size 0x4, virtual false, abstract: false, final false
  static inline void InternalSetEnvironmentVariable(::cordl_internals::Ptr<char16_t> variable, int32_t variable_length, ::cordl_internals::Ptr<char16_t> value, int32_t value_length);

  /// @brief Method ReadXdgUserDir, addr 0x3e33d4c, size 0x474, virtual false, abstract: false, final false
  static inline ::StringW ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback);

  /// @brief Method SetEnvironmentVariable, addr 0x3e341d4, size 0x16c, virtual false, abstract: false, final false
  static inline void SetEnvironmentVariable(::StringW variable, ::StringW value);

  /// @brief Method UnixGetFolderPath, addr 0x3e3388c, size 0x4c0, virtual false, abstract: false, final false
  static inline ::StringW UnixGetFolderPath(::System::Environment_SpecialFolder folder, ::System::Environment_SpecialFolderOption option);

  static inline ::StringW getStaticF_nl();

  static inline ::System::OperatingSystem* getStaticF_os();

  /// @brief Method get_CurrentDirectory, addr 0x3e332a4, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_CurrentDirectory();

  /// @brief Method get_CurrentManagedThreadId, addr 0x3e332ac, size 0x20, virtual false, abstract: false, final false
  static inline int32_t get_CurrentManagedThreadId();

  /// @brief Method get_HasShutdownStarted, addr 0x3e332cc, size 0x4, virtual false, abstract: false, final false
  static inline bool get_HasShutdownStarted();

  /// @brief Method get_Is64BitOperatingSystem, addr 0x3e343c4, size 0x4, virtual false, abstract: false, final false
  static inline bool get_Is64BitOperatingSystem();

  /// @brief Method get_Is64BitProcess, addr 0x3e343c8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_Is64BitProcess();

  /// @brief Method get_IsRunningOnWindows, addr 0x3e33874, size 0x18, virtual false, abstract: false, final false
  static inline bool get_IsRunningOnWindows();

  /// @brief Method get_IsUnix, addr 0x3e343e8, size 0x38, virtual false, abstract: false, final false
  static inline bool get_IsUnix();

  /// @brief Method get_MachineName, addr 0x3e332d0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_MachineName();

  /// @brief Method get_NewLine, addr 0x3e332d8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW get_NewLine();

  /// @brief Method get_OSVersion, addr 0x3e33348, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::OperatingSystem* get_OSVersion();

  /// @brief Method get_Platform, addr 0x3e33340, size 0x4, virtual false, abstract: false, final false
  static inline ::System::PlatformID get_Platform();

  /// @brief Method get_ProcessorCount, addr 0x3e343d8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_ProcessorCount();

  /// @brief Method get_StackTrace, addr 0x3e33618, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW get_StackTrace();

  /// @brief Method get_TickCount, addr 0x3e33684, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_TickCount();

  /// @brief Method get_UserDomainName, addr 0x3e33688, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_UserDomainName();

  /// @brief Method get_UserName, addr 0x3e3368c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_UserName();

  /// @brief Method internalGetEnvironmentVariable, addr 0x3e3369c, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW internalGetEnvironmentVariable(::StringW variable);

  /// @brief Method internalGetEnvironmentVariable_native, addr 0x3e33698, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW internalGetEnvironmentVariable_native(::System::IntPtr variable);

  /// @brief Method internalGetHome, addr 0x3e341c0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW internalGetHome();

  static inline void setStaticF_nl(::StringW value);

  static inline void setStaticF_os(::System::OperatingSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Environment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Environment(Environment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Environment(Environment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2581 };

  /// @brief Field mono_corlib_version offset 0xffffffff size 0x8
  static constexpr ::ConstString mono_corlib_version{ u"1A5E0066-58DC-428A-B21C-0AD6CDAE2789" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Environment, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Environment_SpecialFolder, "System", "Environment/SpecialFolder");
DEFINE_IL2CPP_ARG_TYPE(::System::Environment_SpecialFolderOption, "System", "Environment/SpecialFolderOption");
NEED_NO_BOX(::System::Environment);
DEFINE_IL2CPP_ARG_TYPE(::System::Environment*, "System", "Environment");
