#pragma once
// IWYU pragma private; include "UnityEngine/ILogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILogger)
namespace System {
class Object;
}
namespace UnityEngine {
class ILogHandler;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ILogger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ILogger);
// Dependencies UnityEngine.ILogHandler
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ILogger
class CORDL_TYPE ILogger {
public:
  // Declarations
  __declspec(property(get = get_logEnabled)) bool logEnabled;

  __declspec(property(get = get_logHandler)) ::UnityEngine::ILogHandler* logHandler;

  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Method Log, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message);

  /// @brief Method Log, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW tag, ::System::Object* message);

  /// @brief Method LogFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method get_logEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_logEnabled();

  /// @brief Method get_logHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ILogHandler* get_logHandler();

  /// @brief Convert to "::UnityEngine::ILogHandler"
  constexpr ::UnityEngine::ILogHandler* i___UnityEngine__ILogHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ILogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogger(ILogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogger*, "UnityEngine", "ILogger");
