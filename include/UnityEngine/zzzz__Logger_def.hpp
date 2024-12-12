#pragma once
// IWYU pragma private; include "UnityEngine/Logger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
class Exception;
}
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
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Logger);
// Dependencies System.Object, UnityEngine.ILogHandler, UnityEngine.ILogger, UnityEngine.LogType
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Field <filterLogType>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__filterLogType_k__BackingField, put = __cordl_internal_set__filterLogType_k__BackingField)) ::UnityEngine::LogType _filterLogType_k__BackingField;

  /// @brief Field <logEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__logEnabled_k__BackingField, put = __cordl_internal_set__logEnabled_k__BackingField)) bool _logEnabled_k__BackingField;

  /// @brief Field <logHandler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logHandler_k__BackingField, put = __cordl_internal_set__logHandler_k__BackingField)) ::UnityEngine::ILogHandler* _logHandler_k__BackingField;

  __declspec(property(get = get_filterLogType, put = set_filterLogType)) ::UnityEngine::LogType filterLogType;

  __declspec(property(get = get_logEnabled, put = set_logEnabled)) bool logEnabled;

  __declspec(property(get = get_logHandler, put = set_logHandler)) ::UnityEngine::ILogHandler* logHandler;

  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ILogger"
  constexpr operator ::UnityEngine::ILogger*() noexcept;

  /// @brief Method GetString, addr 0x4899880, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Object* message);

  /// @brief Method IsLogTypeAllowed, addr 0x4899848, size 0x38, virtual true, abstract: false, final true
  inline bool IsLogTypeAllowed(::UnityEngine::LogType logType);

  /// @brief Method Log, addr 0x48999a0, size 0x178, virtual true, abstract: false, final true
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message);

  /// @brief Method Log, addr 0x4899b18, size 0x17c, virtual true, abstract: false, final true
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogError, addr 0x4899c94, size 0x190, virtual true, abstract: false, final true
  inline void LogError(::StringW tag, ::System::Object* message);

  /// @brief Method LogException, addr 0x4899e24, size 0xd4, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x4899ff4, size 0x10c, virtual true, abstract: false, final true
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogFormat, addr 0x4899ef8, size 0xfc, virtual true, abstract: false, final true
  inline void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::Logger* New_ctor(::UnityEngine::ILogHandler* logHandler);

  constexpr ::UnityEngine::LogType const& __cordl_internal_get__filterLogType_k__BackingField() const;

  constexpr ::UnityEngine::LogType& __cordl_internal_get__filterLogType_k__BackingField();

  constexpr bool const& __cordl_internal_get__logEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__logEnabled_k__BackingField();

  constexpr ::UnityEngine::ILogHandler* const& __cordl_internal_get__logHandler_k__BackingField() const;

  constexpr ::UnityEngine::ILogHandler*& __cordl_internal_get__logHandler_k__BackingField();

  constexpr void __cordl_internal_set__filterLogType_k__BackingField(::UnityEngine::LogType value);

  constexpr void __cordl_internal_set__logEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__logHandler_k__BackingField(::UnityEngine::ILogHandler* value);

  /// @brief Method .ctor, addr 0x48997dc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ILogHandler* logHandler);

  /// @brief Method get_filterLogType, addr 0x4899838, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LogType get_filterLogType();

  /// @brief Method get_logEnabled, addr 0x4899824, size 0x8, virtual true, abstract: false, final true
  inline bool get_logEnabled();

  /// @brief Method get_logHandler, addr 0x4899814, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ILogHandler* get_logHandler();

  /// @brief Convert to "::UnityEngine::ILogHandler"
  constexpr ::UnityEngine::ILogHandler* i___UnityEngine__ILogHandler() noexcept;

  /// @brief Convert to "::UnityEngine::ILogger"
  constexpr ::UnityEngine::ILogger* i___UnityEngine__ILogger() noexcept;

  /// @brief Method set_filterLogType, addr 0x4899840, size 0x8, virtual true, abstract: false, final true
  inline void set_filterLogType(::UnityEngine::LogType value);

  /// @brief Method set_logEnabled, addr 0x489982c, size 0xc, virtual true, abstract: false, final true
  inline void set_logEnabled(bool value);

  /// @brief Method set_logHandler, addr 0x489981c, size 0x8, virtual true, abstract: false, final true
  inline void set_logHandler(::UnityEngine::ILogHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10806 };

  /// @brief Field <logHandler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ILogHandler* ____logHandler_k__BackingField;

  /// @brief Field <logEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____logEnabled_k__BackingField;

  /// @brief Field <filterLogType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LogType ____filterLogType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Logger, ____logHandler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Logger, ____logEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Logger, ____filterLogType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Logger, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Logger*, "UnityEngine", "Logger");
