#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessStartInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__ProcessWindowStyle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProcessStartInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Security {
class SecureString;
}
namespace System::Text {
class Encoding;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessStartInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessStartInfo);
// Dependencies System.Diagnostics.ProcessWindowStyle, System.IntPtr, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.ProcessStartInfo
class CORDL_TYPE ProcessStartInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgumentList)) ::System::Collections::ObjectModel::Collection_1<::StringW>* ArgumentList;

  __declspec(property(get = get_Arguments, put = set_Arguments)) ::StringW Arguments;

  __declspec(property(get = get_Domain)) ::StringW Domain;

  __declspec(property(get = get_EnvironmentVariables)) ::System::Collections::Specialized::StringDictionary* EnvironmentVariables;

  __declspec(property(get = get_FileName, put = set_FileName)) ::StringW FileName;

  __declspec(property(get = get_HaveEnvVars)) bool HaveEnvVars;

  __declspec(property(get = get_LoadUserProfile)) bool LoadUserProfile;

  __declspec(property(get = get_Password)) ::System::Security::SecureString* Password;

  __declspec(property(get = get_RedirectStandardError, put = set_RedirectStandardError)) bool RedirectStandardError;

  __declspec(property(get = get_RedirectStandardInput, put = set_RedirectStandardInput)) bool RedirectStandardInput;

  __declspec(property(get = get_RedirectStandardOutput, put = set_RedirectStandardOutput)) bool RedirectStandardOutput;

  __declspec(property(get = get_StandardErrorEncoding)) ::System::Text::Encoding* StandardErrorEncoding;

  __declspec(property(get = get_StandardInputEncoding)) ::System::Text::Encoding* StandardInputEncoding;

  __declspec(property(get = get_StandardOutputEncoding)) ::System::Text::Encoding* StandardOutputEncoding;

  __declspec(property(get = get_UseShellExecute, put = set_UseShellExecute)) bool UseShellExecute;

  __declspec(property(get = get_UserName)) ::StringW UserName;

  __declspec(property(put = set_WindowStyle)) ::System::Diagnostics::ProcessWindowStyle WindowStyle;

  __declspec(property(get = get_WorkingDirectory)) ::StringW WorkingDirectory;

  /// @brief Field <StandardInputEncoding>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__StandardInputEncoding_k__BackingField,
                      put = __cordl_internal_set__StandardInputEncoding_k__BackingField)) ::System::Text::Encoding* _StandardInputEncoding_k__BackingField;

  /// @brief Field _argumentList, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__argumentList, put = __cordl_internal_set__argumentList)) ::System::Collections::ObjectModel::Collection_1<::StringW>* _argumentList;

  /// @brief Field arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_arguments, put = __cordl_internal_set_arguments)) ::StringW arguments;

  /// @brief Field createNoWindow, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_createNoWindow, put = __cordl_internal_set_createNoWindow)) bool createNoWindow;

  /// @brief Field directory, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_directory, put = __cordl_internal_set_directory)) ::StringW directory;

  /// @brief Field domain, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_domain, put = __cordl_internal_set_domain)) ::StringW domain;

  /// @brief Field empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_empty, put = setStaticF_empty)) ::ArrayW<::StringW, ::Array<::StringW>*> empty;

  /// @brief Field environment, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_environment, put = __cordl_internal_set_environment)) ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* environment;

  /// @brief Field environmentVariables, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentVariables, put = __cordl_internal_set_environmentVariables)) ::System::Collections::Specialized::StringDictionary* environmentVariables;

  /// @brief Field errorDialog, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_errorDialog, put = __cordl_internal_set_errorDialog)) bool errorDialog;

  /// @brief Field errorDialogParentHandle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_errorDialogParentHandle, put = __cordl_internal_set_errorDialogParentHandle)) ::System::IntPtr errorDialogParentHandle;

  /// @brief Field fileName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName)) ::StringW fileName;

  /// @brief Field loadUserProfile, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_loadUserProfile, put = __cordl_internal_set_loadUserProfile)) bool loadUserProfile;

  /// @brief Field password, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) ::System::Security::SecureString* password;

  /// @brief Field passwordInClearText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_passwordInClearText, put = __cordl_internal_set_passwordInClearText)) ::StringW passwordInClearText;

  /// @brief Field redirectStandardError, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get_redirectStandardError, put = __cordl_internal_set_redirectStandardError)) bool redirectStandardError;

  /// @brief Field redirectStandardInput, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_redirectStandardInput, put = __cordl_internal_set_redirectStandardInput)) bool redirectStandardInput;

  /// @brief Field redirectStandardOutput, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_redirectStandardOutput, put = __cordl_internal_set_redirectStandardOutput)) bool redirectStandardOutput;

  /// @brief Field standardErrorEncoding, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_standardErrorEncoding, put = __cordl_internal_set_standardErrorEncoding)) ::System::Text::Encoding* standardErrorEncoding;

  /// @brief Field standardOutputEncoding, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_standardOutputEncoding, put = __cordl_internal_set_standardOutputEncoding)) ::System::Text::Encoding* standardOutputEncoding;

  /// @brief Field useShellExecute, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_useShellExecute, put = __cordl_internal_set_useShellExecute)) bool useShellExecute;

  /// @brief Field userName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  /// @brief Field verb, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_verb, put = __cordl_internal_set_verb)) ::StringW verb;

  /// @brief Field weakParentProcess, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_weakParentProcess, put = __cordl_internal_set_weakParentProcess)) ::System::WeakReference* weakParentProcess;

  /// @brief Field windowStyle, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_windowStyle, put = __cordl_internal_set_windowStyle)) ::System::Diagnostics::ProcessWindowStyle windowStyle;

  static inline ::System::Diagnostics::ProcessStartInfo* New_ctor();

  static inline ::System::Diagnostics::ProcessStartInfo* New_ctor(::System::Diagnostics::Process* parent);

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__StandardInputEncoding_k__BackingField() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__StandardInputEncoding_k__BackingField();

  constexpr ::System::Collections::ObjectModel::Collection_1<::StringW>* const& __cordl_internal_get__argumentList() const;

  constexpr ::System::Collections::ObjectModel::Collection_1<::StringW>*& __cordl_internal_get__argumentList();

  constexpr ::StringW const& __cordl_internal_get_arguments() const;

  constexpr ::StringW& __cordl_internal_get_arguments();

  constexpr bool const& __cordl_internal_get_createNoWindow() const;

  constexpr bool& __cordl_internal_get_createNoWindow();

  constexpr ::StringW const& __cordl_internal_get_directory() const;

  constexpr ::StringW& __cordl_internal_get_directory();

  constexpr ::StringW const& __cordl_internal_get_domain() const;

  constexpr ::StringW& __cordl_internal_get_domain();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& __cordl_internal_get_environment() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_environment();

  constexpr ::System::Collections::Specialized::StringDictionary* const& __cordl_internal_get_environmentVariables() const;

  constexpr ::System::Collections::Specialized::StringDictionary*& __cordl_internal_get_environmentVariables();

  constexpr bool const& __cordl_internal_get_errorDialog() const;

  constexpr bool& __cordl_internal_get_errorDialog();

  constexpr ::System::IntPtr const& __cordl_internal_get_errorDialogParentHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_errorDialogParentHandle();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr bool const& __cordl_internal_get_loadUserProfile() const;

  constexpr bool& __cordl_internal_get_loadUserProfile();

  constexpr ::System::Security::SecureString* const& __cordl_internal_get_password() const;

  constexpr ::System::Security::SecureString*& __cordl_internal_get_password();

  constexpr ::StringW const& __cordl_internal_get_passwordInClearText() const;

  constexpr ::StringW& __cordl_internal_get_passwordInClearText();

  constexpr bool const& __cordl_internal_get_redirectStandardError() const;

  constexpr bool& __cordl_internal_get_redirectStandardError();

  constexpr bool const& __cordl_internal_get_redirectStandardInput() const;

  constexpr bool& __cordl_internal_get_redirectStandardInput();

  constexpr bool const& __cordl_internal_get_redirectStandardOutput() const;

  constexpr bool& __cordl_internal_get_redirectStandardOutput();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_standardErrorEncoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_standardErrorEncoding();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_standardOutputEncoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_standardOutputEncoding();

  constexpr bool const& __cordl_internal_get_useShellExecute() const;

  constexpr bool& __cordl_internal_get_useShellExecute();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr ::StringW const& __cordl_internal_get_verb() const;

  constexpr ::StringW& __cordl_internal_get_verb();

  constexpr ::System::WeakReference* const& __cordl_internal_get_weakParentProcess() const;

  constexpr ::System::WeakReference*& __cordl_internal_get_weakParentProcess();

  constexpr ::System::Diagnostics::ProcessWindowStyle const& __cordl_internal_get_windowStyle() const;

  constexpr ::System::Diagnostics::ProcessWindowStyle& __cordl_internal_get_windowStyle();

  constexpr void __cordl_internal_set__StandardInputEncoding_k__BackingField(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__argumentList(::System::Collections::ObjectModel::Collection_1<::StringW>* value);

  constexpr void __cordl_internal_set_arguments(::StringW value);

  constexpr void __cordl_internal_set_createNoWindow(bool value);

  constexpr void __cordl_internal_set_directory(::StringW value);

  constexpr void __cordl_internal_set_domain(::StringW value);

  constexpr void __cordl_internal_set_environment(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_environmentVariables(::System::Collections::Specialized::StringDictionary* value);

  constexpr void __cordl_internal_set_errorDialog(bool value);

  constexpr void __cordl_internal_set_errorDialogParentHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_loadUserProfile(bool value);

  constexpr void __cordl_internal_set_password(::System::Security::SecureString* value);

  constexpr void __cordl_internal_set_passwordInClearText(::StringW value);

  constexpr void __cordl_internal_set_redirectStandardError(bool value);

  constexpr void __cordl_internal_set_redirectStandardInput(bool value);

  constexpr void __cordl_internal_set_redirectStandardOutput(bool value);

  constexpr void __cordl_internal_set_standardErrorEncoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_standardOutputEncoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_useShellExecute(bool value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  constexpr void __cordl_internal_set_verb(::StringW value);

  constexpr void __cordl_internal_set_weakParentProcess(::System::WeakReference* value);

  constexpr void __cordl_internal_set_windowStyle(::System::Diagnostics::ProcessWindowStyle value);

  /// @brief Method .ctor, addr 0x4431f7c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x442ee5c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Diagnostics::Process* parent);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_empty();

  /// @brief Method get_ArgumentList, addr 0x4431e08, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::Collection_1<::StringW>* get_ArgumentList();

  /// @brief Method get_Arguments, addr 0x4431e80, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Arguments();

  /// @brief Method get_Domain, addr 0x4431f28, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method get_EnvironmentVariables, addr 0x44318ec, size 0x51c, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::StringDictionary* get_EnvironmentVariables();

  /// @brief Method get_FileName, addr 0x442fc80, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_FileName();

  /// @brief Method get_HaveEnvVars, addr 0x44318dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_HaveEnvVars();

  /// @brief Method get_LoadUserProfile, addr 0x4431ffc, size 0x8, virtual false, abstract: false, final false
  inline bool get_LoadUserProfile();

  /// @brief Method get_Password, addr 0x4431ff4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::SecureString* get_Password();

  /// @brief Method get_RedirectStandardError, addr 0x4431fbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_RedirectStandardError();

  /// @brief Method get_RedirectStandardInput, addr 0x4431f94, size 0x8, virtual false, abstract: false, final false
  inline bool get_RedirectStandardInput();

  /// @brief Method get_RedirectStandardOutput, addr 0x4431fa8, size 0x8, virtual false, abstract: false, final false
  inline bool get_RedirectStandardOutput();

  /// @brief Method get_StandardErrorEncoding, addr 0x4431fd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_StandardErrorEncoding();

  /// @brief Method get_StandardInputEncoding, addr 0x4432180, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_StandardInputEncoding();

  /// @brief Method get_StandardOutputEncoding, addr 0x4431fd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_StandardOutputEncoding();

  /// @brief Method get_UseShellExecute, addr 0x4431fe0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseShellExecute();

  /// @brief Method get_UserName, addr 0x443157c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_UserName();

  /// @brief Method get_WorkingDirectory, addr 0x4431ed4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_WorkingDirectory();

  static inline void setStaticF_empty(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_Arguments, addr 0x4431f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_Arguments(::StringW value);

  /// @brief Method set_FileName, addr 0x4432004, size 0x8, virtual false, abstract: false, final false
  inline void set_FileName(::StringW value);

  /// @brief Method set_RedirectStandardError, addr 0x4431fc4, size 0xc, virtual false, abstract: false, final false
  inline void set_RedirectStandardError(bool value);

  /// @brief Method set_RedirectStandardInput, addr 0x4431f9c, size 0xc, virtual false, abstract: false, final false
  inline void set_RedirectStandardInput(bool value);

  /// @brief Method set_RedirectStandardOutput, addr 0x4431fb0, size 0xc, virtual false, abstract: false, final false
  inline void set_RedirectStandardOutput(bool value);

  /// @brief Method set_UseShellExecute, addr 0x4431fe8, size 0xc, virtual false, abstract: false, final false
  inline void set_UseShellExecute(bool value);

  /// @brief Method set_WindowStyle, addr 0x443200c, size 0x174, virtual false, abstract: false, final false
  inline void set_WindowStyle(::System::Diagnostics::ProcessWindowStyle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessStartInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessStartInfo(ProcessStartInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessStartInfo(ProcessStartInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9276 };

  /// @brief Field fileName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field arguments, offset: 0x18, size: 0x8, def value: None
  ::StringW ___arguments;

  /// @brief Field directory, offset: 0x20, size: 0x8, def value: None
  ::StringW ___directory;

  /// @brief Field verb, offset: 0x28, size: 0x8, def value: None
  ::StringW ___verb;

  /// @brief Field windowStyle, offset: 0x30, size: 0x4, def value: None
  ::System::Diagnostics::ProcessWindowStyle ___windowStyle;

  /// @brief Field errorDialog, offset: 0x34, size: 0x1, def value: None
  bool ___errorDialog;

  /// @brief Field errorDialogParentHandle, offset: 0x38, size: 0x8, def value: None
  ::System::IntPtr ___errorDialogParentHandle;

  /// @brief Field useShellExecute, offset: 0x40, size: 0x1, def value: None
  bool ___useShellExecute;

  /// @brief Field userName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field domain, offset: 0x50, size: 0x8, def value: None
  ::StringW ___domain;

  /// @brief Field password, offset: 0x58, size: 0x8, def value: None
  ::System::Security::SecureString* ___password;

  /// @brief Field passwordInClearText, offset: 0x60, size: 0x8, def value: None
  ::StringW ___passwordInClearText;

  /// @brief Field loadUserProfile, offset: 0x68, size: 0x1, def value: None
  bool ___loadUserProfile;

  /// @brief Field redirectStandardInput, offset: 0x69, size: 0x1, def value: None
  bool ___redirectStandardInput;

  /// @brief Field redirectStandardOutput, offset: 0x6a, size: 0x1, def value: None
  bool ___redirectStandardOutput;

  /// @brief Field redirectStandardError, offset: 0x6b, size: 0x1, def value: None
  bool ___redirectStandardError;

  /// @brief Field standardOutputEncoding, offset: 0x70, size: 0x8, def value: None
  ::System::Text::Encoding* ___standardOutputEncoding;

  /// @brief Field standardErrorEncoding, offset: 0x78, size: 0x8, def value: None
  ::System::Text::Encoding* ___standardErrorEncoding;

  /// @brief Field createNoWindow, offset: 0x80, size: 0x1, def value: None
  bool ___createNoWindow;

  /// @brief Field weakParentProcess, offset: 0x88, size: 0x8, def value: None
  ::System::WeakReference* ___weakParentProcess;

  /// @brief Field environmentVariables, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Specialized::StringDictionary* ___environmentVariables;

  /// @brief Field _argumentList, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::ObjectModel::Collection_1<::StringW>* ____argumentList;

  /// @brief Field environment, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___environment;

  /// @brief Field <StandardInputEncoding>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Text::Encoding* ____StandardInputEncoding_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___fileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___arguments) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___directory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___verb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___windowStyle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___errorDialog) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___errorDialogParentHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___useShellExecute) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___userName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___domain) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___password) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___passwordInClearText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___loadUserProfile) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___redirectStandardInput) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___redirectStandardOutput) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___redirectStandardError) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___standardOutputEncoding) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___standardErrorEncoding) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___createNoWindow) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___weakParentProcess) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___environmentVariables) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ____argumentList) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ___environment) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessStartInfo, ____StandardInputEncoding_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessStartInfo, 0xb0>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessStartInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessStartInfo*, "System.Diagnostics", "ProcessStartInfo");
