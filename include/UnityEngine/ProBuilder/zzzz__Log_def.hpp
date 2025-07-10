#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Log.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogLevel_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogOutput_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Log)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
struct LogLevel;
}
namespace UnityEngine::ProBuilder {
struct LogOutput;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Log;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Log);
// Dependencies System.Object, UnityEngine.ProBuilder.LogLevel, UnityEngine.ProBuilder.LogOutput
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Log
class CORDL_TYPE Log : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_LogFilePath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LogFilePath, put = setStaticF_s_LogFilePath)) ::StringW s_LogFilePath;

  /// @brief Field s_LogLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LogLevel, put = setStaticF_s_LogLevel)) ::UnityEngine::ProBuilder::LogLevel s_LogLevel;

  /// @brief Field s_Output, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Output, put = setStaticF_s_Output)) ::UnityEngine::ProBuilder::LogOutput s_Output;

  /// @brief Field s_logStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_logStack, put = setStaticF_s_logStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* s_logStack;

  /// @brief Method ClearLogFile, addr 0x47105a4, size 0x90, virtual false, abstract: false, final false
  static inline void ClearLogFile();

  /// @brief Method Debug, addr 0x470fe5c, size 0x4, virtual false, abstract: false, final false
  static inline void Debug(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method Debug, addr 0x470fd34, size 0x58, virtual false, abstract: false, final false
  static inline void Debug(::StringW message);

  /// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Debug(T value);

  /// @brief Method DoPrint, addr 0x470fd8c, size 0xd0, virtual false, abstract: false, final false
  static inline void DoPrint(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method Error, addr 0x4710050, size 0x78, virtual false, abstract: false, final false
  static inline void Error(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method Error, addr 0x4703b64, size 0x80, virtual false, abstract: false, final false
  static inline void Error(::StringW message);

  /// @brief Method Info, addr 0x470fe60, size 0x78, virtual false, abstract: false, final false
  static inline void Info(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method Info, addr 0x470fed8, size 0x80, virtual false, abstract: false, final false
  static inline void Info(::StringW message);

  /// @brief Method NotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void NotNull(T obj, ::StringW message);

  /// @brief Method PopLogLevel, addr 0x470fb98, size 0x88, virtual false, abstract: false, final false
  static inline void PopLogLevel();

  /// @brief Method PrintToConsole, addr 0x47100c8, size 0xe4, virtual false, abstract: false, final false
  static inline void PrintToConsole(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method PrintToFile, addr 0x47101ac, size 0x3f8, virtual false, abstract: false, final false
  static inline void PrintToFile(::StringW message, ::StringW path);

  /// @brief Method PushLogLevel, addr 0x470fb08, size 0x90, virtual false, abstract: false, final false
  static inline void PushLogLevel(::UnityEngine::ProBuilder::LogLevel level);

  /// @brief Method SetLogFile, addr 0x470fcd8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetLogFile(::StringW path);

  /// @brief Method SetLogLevel, addr 0x470fc20, size 0x5c, virtual false, abstract: false, final false
  static inline void SetLogLevel(::UnityEngine::ProBuilder::LogLevel level);

  /// @brief Method SetOutput, addr 0x470fc7c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetOutput(::UnityEngine::ProBuilder::LogOutput output);

  /// @brief Method Warning, addr 0x470ff58, size 0x78, virtual false, abstract: false, final false
  static inline void Warning(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method Warning, addr 0x470ffd0, size 0x80, virtual false, abstract: false, final false
  static inline void Warning(::StringW message);

  /// @brief Method Watch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename K> static inline void Watch(T key, K value);

  static inline ::StringW getStaticF_s_LogFilePath();

  static inline ::UnityEngine::ProBuilder::LogLevel getStaticF_s_LogLevel();

  static inline ::UnityEngine::ProBuilder::LogOutput getStaticF_s_Output();

  static inline ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* getStaticF_s_logStack();

  static inline void setStaticF_s_LogFilePath(::StringW value);

  static inline void setStaticF_s_LogLevel(::UnityEngine::ProBuilder::LogLevel value);

  static inline void setStaticF_s_Output(::UnityEngine::ProBuilder::LogOutput value);

  static inline void setStaticF_s_logStack(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Log();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Log(Log&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Log(Log const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14255 };

  /// @brief Field k_ProBuilderLogFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ProBuilderLogFileName{ u"ProBuilderLog.txt" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Log, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Log);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Log*, "UnityEngine.ProBuilder", "Log");
