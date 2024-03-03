#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class Exception;
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
namespace System {
struct __Environment__SpecialFolderOption;
}
namespace System {
struct __Environment__SpecialFolder;
}
// Forward declare root types
namespace System {
struct __Environment__SpecialFolder;
}
namespace System {
struct __Environment__SpecialFolderOption;
}
namespace System {
class Environment;
}
// Write type traits
MARK_VAL_T(::System::__Environment__SpecialFolder);
MARK_VAL_T(::System::__Environment__SpecialFolderOption);
MARK_REF_PTR_T(::System::Environment);
// Type: ::SpecialFolder
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Environment::SpecialFolder
struct CORDL_TYPE __Environment__SpecialFolder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Environment__SpecialFolder_Unwrapped
  enum struct ____Environment__SpecialFolder_Unwrapped : int32_t {
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
  constexpr operator ____Environment__SpecialFolder_Unwrapped() const noexcept {
    return static_cast<____Environment__SpecialFolder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Environment__SpecialFolder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Environment__SpecialFolder(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AdminTools value: static_cast<int32_t>(0x30)
  static ::System::__Environment__SpecialFolder const AdminTools;

  /// @brief Field ApplicationData value: static_cast<int32_t>(0x1a)
  static ::System::__Environment__SpecialFolder const ApplicationData;

  /// @brief Field CDBurning value: static_cast<int32_t>(0x3b)
  static ::System::__Environment__SpecialFolder const CDBurning;

  /// @brief Field CommonAdminTools value: static_cast<int32_t>(0x2f)
  static ::System::__Environment__SpecialFolder const CommonAdminTools;

  /// @brief Field CommonApplicationData value: static_cast<int32_t>(0x23)
  static ::System::__Environment__SpecialFolder const CommonApplicationData;

  /// @brief Field CommonDesktopDirectory value: static_cast<int32_t>(0x19)
  static ::System::__Environment__SpecialFolder const CommonDesktopDirectory;

  /// @brief Field CommonDocuments value: static_cast<int32_t>(0x2e)
  static ::System::__Environment__SpecialFolder const CommonDocuments;

  /// @brief Field CommonMusic value: static_cast<int32_t>(0x35)
  static ::System::__Environment__SpecialFolder const CommonMusic;

  /// @brief Field CommonOemLinks value: static_cast<int32_t>(0x3a)
  static ::System::__Environment__SpecialFolder const CommonOemLinks;

  /// @brief Field CommonPictures value: static_cast<int32_t>(0x36)
  static ::System::__Environment__SpecialFolder const CommonPictures;

  /// @brief Field CommonProgramFiles value: static_cast<int32_t>(0x2b)
  static ::System::__Environment__SpecialFolder const CommonProgramFiles;

  /// @brief Field CommonProgramFilesX86 value: static_cast<int32_t>(0x2c)
  static ::System::__Environment__SpecialFolder const CommonProgramFilesX86;

  /// @brief Field CommonPrograms value: static_cast<int32_t>(0x17)
  static ::System::__Environment__SpecialFolder const CommonPrograms;

  /// @brief Field CommonStartMenu value: static_cast<int32_t>(0x16)
  static ::System::__Environment__SpecialFolder const CommonStartMenu;

  /// @brief Field CommonStartup value: static_cast<int32_t>(0x18)
  static ::System::__Environment__SpecialFolder const CommonStartup;

  /// @brief Field CommonTemplates value: static_cast<int32_t>(0x2d)
  static ::System::__Environment__SpecialFolder const CommonTemplates;

  /// @brief Field CommonVideos value: static_cast<int32_t>(0x37)
  static ::System::__Environment__SpecialFolder const CommonVideos;

  /// @brief Field Cookies value: static_cast<int32_t>(0x21)
  static ::System::__Environment__SpecialFolder const Cookies;

  /// @brief Field Desktop value: static_cast<int32_t>(0x0)
  static ::System::__Environment__SpecialFolder const Desktop;

  /// @brief Field DesktopDirectory value: static_cast<int32_t>(0x10)
  static ::System::__Environment__SpecialFolder const DesktopDirectory;

  /// @brief Field Favorites value: static_cast<int32_t>(0x6)
  static ::System::__Environment__SpecialFolder const Favorites;

  /// @brief Field Fonts value: static_cast<int32_t>(0x14)
  static ::System::__Environment__SpecialFolder const Fonts;

  /// @brief Field History value: static_cast<int32_t>(0x22)
  static ::System::__Environment__SpecialFolder const History;

  /// @brief Field InternetCache value: static_cast<int32_t>(0x20)
  static ::System::__Environment__SpecialFolder const InternetCache;

  /// @brief Field LocalApplicationData value: static_cast<int32_t>(0x1c)
  static ::System::__Environment__SpecialFolder const LocalApplicationData;

  /// @brief Field LocalizedResources value: static_cast<int32_t>(0x39)
  static ::System::__Environment__SpecialFolder const LocalizedResources;

  /// @brief Field MyComputer value: static_cast<int32_t>(0x11)
  static ::System::__Environment__SpecialFolder const MyComputer;

  /// @brief Field MyDocuments value: static_cast<int32_t>(0x5)
  static ::System::__Environment__SpecialFolder const MyDocuments;

  /// @brief Field MyMusic value: static_cast<int32_t>(0xd)
  static ::System::__Environment__SpecialFolder const MyMusic;

  /// @brief Field MyPictures value: static_cast<int32_t>(0x27)
  static ::System::__Environment__SpecialFolder const MyPictures;

  /// @brief Field MyVideos value: static_cast<int32_t>(0xe)
  static ::System::__Environment__SpecialFolder const MyVideos;

  /// @brief Field NetworkShortcuts value: static_cast<int32_t>(0x13)
  static ::System::__Environment__SpecialFolder const NetworkShortcuts;

  /// @brief Field Personal value: static_cast<int32_t>(0x5)
  static ::System::__Environment__SpecialFolder const Personal;

  /// @brief Field PrinterShortcuts value: static_cast<int32_t>(0x1b)
  static ::System::__Environment__SpecialFolder const PrinterShortcuts;

  /// @brief Field ProgramFiles value: static_cast<int32_t>(0x26)
  static ::System::__Environment__SpecialFolder const ProgramFiles;

  /// @brief Field ProgramFilesX86 value: static_cast<int32_t>(0x2a)
  static ::System::__Environment__SpecialFolder const ProgramFilesX86;

  /// @brief Field Programs value: static_cast<int32_t>(0x2)
  static ::System::__Environment__SpecialFolder const Programs;

  /// @brief Field Recent value: static_cast<int32_t>(0x8)
  static ::System::__Environment__SpecialFolder const Recent;

  /// @brief Field Resources value: static_cast<int32_t>(0x38)
  static ::System::__Environment__SpecialFolder const Resources;

  /// @brief Field SendTo value: static_cast<int32_t>(0x9)
  static ::System::__Environment__SpecialFolder const SendTo;

  /// @brief Field StartMenu value: static_cast<int32_t>(0xb)
  static ::System::__Environment__SpecialFolder const StartMenu;

  /// @brief Field Startup value: static_cast<int32_t>(0x7)
  static ::System::__Environment__SpecialFolder const Startup;

  /// @brief Field System value: static_cast<int32_t>(0x25)
  static ::System::__Environment__SpecialFolder const System;

  /// @brief Field SystemX86 value: static_cast<int32_t>(0x29)
  static ::System::__Environment__SpecialFolder const SystemX86;

  /// @brief Field Templates value: static_cast<int32_t>(0x15)
  static ::System::__Environment__SpecialFolder const Templates;

  /// @brief Field UserProfile value: static_cast<int32_t>(0x28)
  static ::System::__Environment__SpecialFolder const UserProfile;

  /// @brief Field Windows value: static_cast<int32_t>(0x24)
  static ::System::__Environment__SpecialFolder const Windows;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Environment__SpecialFolder, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Environment__SpecialFolder, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::SpecialFolderOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Environment::SpecialFolderOption
struct CORDL_TYPE __Environment__SpecialFolderOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Environment__SpecialFolderOption_Unwrapped
  enum struct ____Environment__SpecialFolderOption_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DoNotVerify = static_cast<int32_t>(0x4000),
    __E_Create = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Environment__SpecialFolderOption_Unwrapped() const noexcept {
    return static_cast<____Environment__SpecialFolderOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Environment__SpecialFolderOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Environment__SpecialFolderOption(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Create value: static_cast<int32_t>(0x8000)
  static ::System::__Environment__SpecialFolderOption const Create;

  /// @brief Field DoNotVerify value: static_cast<int32_t>(0x4000)
  static ::System::__Environment__SpecialFolderOption const DoNotVerify;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Environment__SpecialFolderOption const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Environment__SpecialFolderOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Environment__SpecialFolderOption, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::Environment
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Environment*
class CORDL_TYPE Environment : public ::System::Object {
public:
  // Declarations
  using SpecialFolder = ::System::__Environment__SpecialFolder;

  using SpecialFolderOption = ::System::__Environment__SpecialFolderOption;

  /// @brief Field nl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nl, put = setStaticF_nl))::StringW nl;

  /// @brief Field os, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_os, put = setStaticF_os))::System::OperatingSystem* os;

  /// @brief Method CreateVersionFromString, addr 0x26e8794, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Version* CreateVersionFromString(::StringW info);

  /// @brief Method Exit, addr 0x26e8a28, size 0x4, virtual false, abstract: false, final false
  static inline void Exit(int32_t exitCode);

  /// @brief Method FailFast, addr 0x26e9740, size 0x8, virtual false, abstract: false, final false
  static inline void FailFast(::StringW message, ::System::Exception* exception);

  /// @brief Method FailFast, addr 0x26e9748, size 0x4, virtual false, abstract: false, final false
  static inline void FailFast(::StringW message, ::System::Exception* exception, ::StringW errorSource);

  /// @brief Method GetCommandLineArgs, addr 0x26e8a2c, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  /// @brief Method GetEnvironmentVariable, addr 0x26e8afc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable);

  /// @brief Method GetEnvironmentVariable, addr 0x26e9540, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable, ::System::EnvironmentVariableTarget target);

  /// @brief Method GetEnvironmentVariableNames, addr 0x26e8bcc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnvironmentVariableNames();

  /// @brief Method GetEnvironmentVariables, addr 0x26e8b00, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetEnvironmentVariables();

  /// @brief Method GetFolderPath, addr 0x26e8bd0, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetFolderPath(::System::__Environment__SpecialFolder folder);

  /// @brief Method GetFolderPath, addr 0x26e8bd8, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW GetFolderPath(::System::__Environment__SpecialFolder folder, ::System::__Environment__SpecialFolderOption option);

  /// @brief Method GetIs64BitOperatingSystem, addr 0x26e974c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetIs64BitOperatingSystem();

  /// @brief Method GetLogicalDrivesInternal, addr 0x26e9768, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrivesInternal();

  /// @brief Method GetMachineConfigPath, addr 0x26e976c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetMachineConfigPath();

  /// @brief Method GetNewLine, addr 0x26e8664, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetNewLine();

  /// @brief Method GetOSVersionString, addr 0x26e86d4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetOSVersionString();

  /// @brief Method GetPageSize, addr 0x26e9770, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetPageSize();

  /// @brief Method GetResourceString, addr 0x26e4eb8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW key);

  /// @brief Method GetResourceString, addr 0x26e6d2c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetResourceString(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method GetResourceStringEncodingName, addr 0x26e84b8, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW GetResourceStringEncodingName(int32_t codePage);

  /// @brief Method GetStackTrace, addr 0x26e97ac, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GetStackTrace(::System::Exception* e, bool needFileInfo);

  /// @brief Method GetWindowsFolderPath, addr 0x26e8c0c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetWindowsFolderPath(int32_t folder);

  /// @brief Method InternalSetEnvironmentVariable, addr 0x26e96cc, size 0x70, virtual false, abstract: false, final false
  static inline void InternalSetEnvironmentVariable(::StringW variable, ::StringW value);

  /// @brief Method InternalSetEnvironmentVariable, addr 0x26e973c, size 0x4, virtual false, abstract: false, final false
  static inline void InternalSetEnvironmentVariable(::cordl_internals::Ptr<char16_t> variable, int32_t variable_length, ::cordl_internals::Ptr<char16_t> value, int32_t value_length);

  /// @brief Method ReadXdgUserDir, addr 0x26e90c8, size 0x474, virtual false, abstract: false, final false
  static inline ::StringW ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback);

  /// @brief Method SetEnvironmentVariable, addr 0x26e9550, size 0x17c, virtual false, abstract: false, final false
  static inline void SetEnvironmentVariable(::StringW variable, ::StringW value);

  /// @brief Method UnixGetFolderPath, addr 0x26e8c28, size 0x4a0, virtual false, abstract: false, final false
  static inline ::StringW UnixGetFolderPath(::System::__Environment__SpecialFolder folder, ::System::__Environment__SpecialFolderOption option);

  static inline ::StringW getStaticF_nl();

  static inline ::System::OperatingSystem* getStaticF_os();

  /// @brief Method get_CurrentDirectory, addr 0x26e8634, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_CurrentDirectory();

  /// @brief Method get_CurrentManagedThreadId, addr 0x26e863c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t get_CurrentManagedThreadId();

  /// @brief Method get_HasShutdownStarted, addr 0x26e865c, size 0x4, virtual false, abstract: false, final false
  static inline bool get_HasShutdownStarted();

  /// @brief Method get_Is64BitOperatingSystem, addr 0x26e9750, size 0x4, virtual false, abstract: false, final false
  static inline bool get_Is64BitOperatingSystem();

  /// @brief Method get_Is64BitProcess, addr 0x26e9754, size 0x8, virtual false, abstract: false, final false
  static inline bool get_Is64BitProcess();

  /// @brief Method get_IsRunningOnWindows, addr 0x26e8c10, size 0x18, virtual false, abstract: false, final false
  static inline bool get_IsRunningOnWindows();

  /// @brief Method get_IsUnix, addr 0x26e9774, size 0x38, virtual false, abstract: false, final false
  static inline bool get_IsUnix();

  /// @brief Method get_MachineName, addr 0x26e8660, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_MachineName();

  /// @brief Method get_NewLine, addr 0x26e8668, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW get_NewLine();

  /// @brief Method get_OSVersion, addr 0x26e86d8, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::OperatingSystem* get_OSVersion();

  /// @brief Method get_Platform, addr 0x26e86d0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::PlatformID get_Platform();

  /// @brief Method get_ProcessorCount, addr 0x26e9764, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_ProcessorCount();

  /// @brief Method get_StackTrace, addr 0x26e89b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW get_StackTrace();

  /// @brief Method get_TickCount, addr 0x26e8a1c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_TickCount();

  /// @brief Method get_UserDomainName, addr 0x26e8a20, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_UserDomainName();

  /// @brief Method get_UserName, addr 0x26e8a24, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_UserName();

  /// @brief Method internalGetEnvironmentVariable, addr 0x26e8a34, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW internalGetEnvironmentVariable(::StringW variable);

  /// @brief Method internalGetEnvironmentVariable_native, addr 0x26e8a30, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW internalGetEnvironmentVariable_native(void* variable);

  /// @brief Method internalGetHome, addr 0x26e953c, size 0x4, virtual false, abstract: false, final false
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

  /// @brief Field mono_corlib_version offset 0xffffffff size 0x8
  static constexpr ::ConstString mono_corlib_version{ u"1A5E0066-58DC-428A-B21C-0AD6CDAE2789" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Environment, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__Environment__SpecialFolder, "System", "Environment/SpecialFolder");
DEFINE_IL2CPP_ARG_TYPE(::System::__Environment__SpecialFolderOption, "System", "Environment/SpecialFolderOption");
NEED_NO_BOX(::System::Environment);
DEFINE_IL2CPP_ARG_TYPE(::System::Environment*, "System", "Environment");
