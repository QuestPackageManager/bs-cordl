#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__ProcessWindowStyle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessStartInfo)
namespace System {
class WeakReference;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Security {
class SecureString;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessStartInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessStartInfo);
// Type: System.Diagnostics::ProcessStartInfo
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601)), TypeDefinitionIndex(TypeDefinitionIndex(7797))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7792))
// CS Name: ::System.Diagnostics::ProcessStartInfo*
class CORDL_TYPE ProcessStartInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileName, offset 0x10, size 0x8
  __declspec(property(get = __get_fileName, put = __set_fileName))::StringW fileName;

  /// @brief Field arguments, offset 0x18, size 0x8
  __declspec(property(get = __get_arguments, put = __set_arguments))::StringW arguments;

  /// @brief Field directory, offset 0x20, size 0x8
  __declspec(property(get = __get_directory, put = __set_directory))::StringW directory;

  /// @brief Field verb, offset 0x28, size 0x8
  __declspec(property(get = __get_verb, put = __set_verb))::StringW verb;

  /// @brief Field windowStyle, offset 0x30, size 0x4
  __declspec(property(get = __get_windowStyle, put = __set_windowStyle))::System::Diagnostics::ProcessWindowStyle windowStyle;

  /// @brief Field errorDialog, offset 0x34, size 0x1
  __declspec(property(get = __get_errorDialog, put = __set_errorDialog)) bool errorDialog;

  /// @brief Field errorDialogParentHandle, offset 0x38, size 0x8
  __declspec(property(get = __get_errorDialogParentHandle, put = __set_errorDialogParentHandle)) void* errorDialogParentHandle;

  /// @brief Field useShellExecute, offset 0x40, size 0x1
  __declspec(property(get = __get_useShellExecute, put = __set_useShellExecute)) bool useShellExecute;

  /// @brief Field userName, offset 0x48, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field domain, offset 0x50, size 0x8
  __declspec(property(get = __get_domain, put = __set_domain))::StringW domain;

  /// @brief Field password, offset 0x58, size 0x8
  __declspec(property(get = __get_password, put = __set_password))::System::Security::SecureString* password;

  /// @brief Field passwordInClearText, offset 0x60, size 0x8
  __declspec(property(get = __get_passwordInClearText, put = __set_passwordInClearText))::StringW passwordInClearText;

  /// @brief Field loadUserProfile, offset 0x68, size 0x1
  __declspec(property(get = __get_loadUserProfile, put = __set_loadUserProfile)) bool loadUserProfile;

  /// @brief Field redirectStandardInput, offset 0x69, size 0x1
  __declspec(property(get = __get_redirectStandardInput, put = __set_redirectStandardInput)) bool redirectStandardInput;

  /// @brief Field redirectStandardOutput, offset 0x6a, size 0x1
  __declspec(property(get = __get_redirectStandardOutput, put = __set_redirectStandardOutput)) bool redirectStandardOutput;

  /// @brief Field redirectStandardError, offset 0x6b, size 0x1
  __declspec(property(get = __get_redirectStandardError, put = __set_redirectStandardError)) bool redirectStandardError;

  /// @brief Field standardOutputEncoding, offset 0x70, size 0x8
  __declspec(property(get = __get_standardOutputEncoding, put = __set_standardOutputEncoding))::System::Text::Encoding* standardOutputEncoding;

  /// @brief Field standardErrorEncoding, offset 0x78, size 0x8
  __declspec(property(get = __get_standardErrorEncoding, put = __set_standardErrorEncoding))::System::Text::Encoding* standardErrorEncoding;

  /// @brief Field createNoWindow, offset 0x80, size 0x1
  __declspec(property(get = __get_createNoWindow, put = __set_createNoWindow)) bool createNoWindow;

  /// @brief Field weakParentProcess, offset 0x88, size 0x8
  __declspec(property(get = __get_weakParentProcess, put = __set_weakParentProcess))::System::WeakReference* weakParentProcess;

  /// @brief Field environmentVariables, offset 0x90, size 0x8
  __declspec(property(get = __get_environmentVariables, put = __set_environmentVariables))::System::Collections::Specialized::StringDictionary* environmentVariables;

  /// @brief Field _argumentList, offset 0x98, size 0x8
  __declspec(property(get = __get__argumentList, put = __set__argumentList))::System::Collections::ObjectModel::Collection_1<::StringW>* _argumentList;

  /// @brief Field environment, offset 0xa0, size 0x8
  __declspec(property(get = __get_environment, put = __set_environment))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* environment;

  /// @brief Field <StandardInputEncoding>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__StandardInputEncoding_k__BackingField, put = __set__StandardInputEncoding_k__BackingField))::System::Text::Encoding* _StandardInputEncoding_k__BackingField;

  /// @brief Field empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_empty, put = setStaticF_empty))::ArrayW<::StringW, ::Array<::StringW>*> empty;

  __declspec(property(get = get_ArgumentList))::System::Collections::ObjectModel::Collection_1<::StringW>* ArgumentList;

  __declspec(property(get = get_Arguments, put = set_Arguments))::StringW Arguments;

  __declspec(property(get = get_EnvironmentVariables))::System::Collections::Specialized::StringDictionary* EnvironmentVariables;

  __declspec(property(get = get_RedirectStandardInput)) bool RedirectStandardInput;

  __declspec(property(get = get_RedirectStandardOutput)) bool RedirectStandardOutput;

  __declspec(property(get = get_RedirectStandardError)) bool RedirectStandardError;

  __declspec(property(get = get_StandardErrorEncoding))::System::Text::Encoding* StandardErrorEncoding;

  __declspec(property(get = get_StandardOutputEncoding))::System::Text::Encoding* StandardOutputEncoding;

  __declspec(property(get = get_UseShellExecute)) bool UseShellExecute;

  __declspec(property(get = get_UserName))::StringW UserName;

  __declspec(property(get = get_Password))::System::Security::SecureString* Password;

  __declspec(property(get = get_Domain))::StringW Domain;

  __declspec(property(get = get_LoadUserProfile)) bool LoadUserProfile;

  __declspec(property(get = get_FileName, put = set_FileName))::StringW FileName;

  __declspec(property(get = get_WorkingDirectory))::StringW WorkingDirectory;

  __declspec(property(get = get_HaveEnvVars)) bool HaveEnvVars;

  __declspec(property(get = get_StandardInputEncoding))::System::Text::Encoding* StandardInputEncoding;

  constexpr ::StringW& __get_fileName();

  constexpr ::StringW const& __get_fileName() const;

  constexpr void __set_fileName(::StringW value);

  constexpr ::StringW& __get_arguments();

  constexpr ::StringW const& __get_arguments() const;

  constexpr void __set_arguments(::StringW value);

  constexpr ::StringW& __get_directory();

  constexpr ::StringW const& __get_directory() const;

  constexpr void __set_directory(::StringW value);

  constexpr ::StringW& __get_verb();

  constexpr ::StringW const& __get_verb() const;

  constexpr void __set_verb(::StringW value);

  constexpr ::System::Diagnostics::ProcessWindowStyle& __get_windowStyle();

  constexpr ::System::Diagnostics::ProcessWindowStyle const& __get_windowStyle() const;

  constexpr void __set_windowStyle(::System::Diagnostics::ProcessWindowStyle value);

  constexpr bool& __get_errorDialog();

  constexpr bool const& __get_errorDialog() const;

  constexpr void __set_errorDialog(bool value);

  constexpr void*& __get_errorDialogParentHandle();

  constexpr void* const& __get_errorDialogParentHandle() const;

  constexpr void __set_errorDialogParentHandle(void* value);

  constexpr bool& __get_useShellExecute();

  constexpr bool const& __get_useShellExecute() const;

  constexpr void __set_useShellExecute(bool value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr ::StringW& __get_domain();

  constexpr ::StringW const& __get_domain() const;

  constexpr void __set_domain(::StringW value);

  constexpr ::System::Security::SecureString*& __get_password();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::SecureString*> const& __get_password() const;

  constexpr void __set_password(::System::Security::SecureString* value);

  constexpr ::StringW& __get_passwordInClearText();

  constexpr ::StringW const& __get_passwordInClearText() const;

  constexpr void __set_passwordInClearText(::StringW value);

  constexpr bool& __get_loadUserProfile();

  constexpr bool const& __get_loadUserProfile() const;

  constexpr void __set_loadUserProfile(bool value);

  constexpr bool& __get_redirectStandardInput();

  constexpr bool const& __get_redirectStandardInput() const;

  constexpr void __set_redirectStandardInput(bool value);

  constexpr bool& __get_redirectStandardOutput();

  constexpr bool const& __get_redirectStandardOutput() const;

  constexpr void __set_redirectStandardOutput(bool value);

  constexpr bool& __get_redirectStandardError();

  constexpr bool const& __get_redirectStandardError() const;

  constexpr void __set_redirectStandardError(bool value);

  constexpr ::System::Text::Encoding*& __get_standardOutputEncoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_standardOutputEncoding() const;

  constexpr void __set_standardOutputEncoding(::System::Text::Encoding* value);

  constexpr ::System::Text::Encoding*& __get_standardErrorEncoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_standardErrorEncoding() const;

  constexpr void __set_standardErrorEncoding(::System::Text::Encoding* value);

  constexpr bool& __get_createNoWindow();

  constexpr bool const& __get_createNoWindow() const;

  constexpr void __set_createNoWindow(bool value);

  constexpr ::System::WeakReference*& __get_weakParentProcess();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __get_weakParentProcess() const;

  constexpr void __set_weakParentProcess(::System::WeakReference* value);

  constexpr ::System::Collections::Specialized::StringDictionary*& __get_environmentVariables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::StringDictionary*> const& __get_environmentVariables() const;

  constexpr void __set_environmentVariables(::System::Collections::Specialized::StringDictionary* value);

  constexpr ::System::Collections::ObjectModel::Collection_1<::StringW>*& __get__argumentList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::StringW>*> const& __get__argumentList() const;

  constexpr void __set__argumentList(::System::Collections::ObjectModel::Collection_1<::StringW>* value);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __get_environment();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __get_environment() const;

  constexpr void __set_environment(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr ::System::Text::Encoding*& __get__StandardInputEncoding_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__StandardInputEncoding_k__BackingField() const;

  constexpr void __set__StandardInputEncoding_k__BackingField(::System::Text::Encoding* value);

  static inline void setStaticF_empty(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_empty();

  static inline ::System::Diagnostics::ProcessStartInfo* New_ctor(::System::Diagnostics::Process* parent);

  /// @brief Method .ctor addr 0x27f2468 size 0x84 virtual false final false
  inline void _ctor(::System::Diagnostics::Process* parent);

  /// @brief Method get_ArgumentList addr 0x27f55e0 size 0x80 virtual false final false
  inline ::System::Collections::ObjectModel::Collection_1<::StringW>* get_ArgumentList();

  /// @brief Method get_Arguments addr 0x27f5660 size 0x54 virtual false final false
  inline ::StringW get_Arguments();

  /// @brief Method set_Arguments addr 0x27f575c size 0x8 virtual false final false
  inline void set_Arguments(::StringW value);

  /// @brief Method get_EnvironmentVariables addr 0x27f5070 size 0x570 virtual false final false
  inline ::System::Collections::Specialized::StringDictionary* get_EnvironmentVariables();

  /// @brief Method get_RedirectStandardInput addr 0x27f5764 size 0x8 virtual false final false
  inline bool get_RedirectStandardInput();

  /// @brief Method get_RedirectStandardOutput addr 0x27f576c size 0x8 virtual false final false
  inline bool get_RedirectStandardOutput();

  /// @brief Method get_RedirectStandardError addr 0x27f5774 size 0x8 virtual false final false
  inline bool get_RedirectStandardError();

  /// @brief Method get_StandardErrorEncoding addr 0x27f577c size 0x8 virtual false final false
  inline ::System::Text::Encoding* get_StandardErrorEncoding();

  /// @brief Method get_StandardOutputEncoding addr 0x27f5784 size 0x8 virtual false final false
  inline ::System::Text::Encoding* get_StandardOutputEncoding();

  /// @brief Method get_UseShellExecute addr 0x27f578c size 0x8 virtual false final false
  inline bool get_UseShellExecute();

  /// @brief Method get_UserName addr 0x27f4cfc size 0x54 virtual false final false
  inline ::StringW get_UserName();

  /// @brief Method get_Password addr 0x27f5794 size 0x8 virtual false final false
  inline ::System::Security::SecureString* get_Password();

  /// @brief Method get_Domain addr 0x27f5708 size 0x54 virtual false final false
  inline ::StringW get_Domain();

  /// @brief Method get_LoadUserProfile addr 0x27f579c size 0x8 virtual false final false
  inline bool get_LoadUserProfile();

  /// @brief Method get_FileName addr 0x27f318c size 0x54 virtual false final false
  inline ::StringW get_FileName();

  /// @brief Method set_FileName addr 0x27f57a4 size 0x8 virtual false final false
  inline void set_FileName(::StringW value);

  /// @brief Method get_WorkingDirectory addr 0x27f56b4 size 0x54 virtual false final false
  inline ::StringW get_WorkingDirectory();

  /// @brief Method get_HaveEnvVars addr 0x27f5060 size 0x10 virtual false final false
  inline bool get_HaveEnvVars();

  /// @brief Method get_StandardInputEncoding addr 0x27f57ac size 0x8 virtual false final false
  inline ::System::Text::Encoding* get_StandardInputEncoding();

  // Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessStartInfo(ProcessStartInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessStartInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessStartInfo(ProcessStartInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessStartInfo();

public:
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
  void* ___errorDialogParentHandle;

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
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessStartInfo, 0xb0>, "Size mismatch!");

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

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessStartInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessStartInfo*, "System.Diagnostics", "ProcessStartInfo");
