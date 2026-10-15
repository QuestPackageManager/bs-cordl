#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_T(::UnityEngine::Debug*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Debug*, "UnityEngine", "Debug");
// [NativeHeader("Runtime/Diagnostics/Validation.h")]
// [NativeHeader("Runtime/Diagnostics/IntegrityCheck.h")]
// [NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultLogger, put = setStaticF_s_DefaultLogger)) ::UnityEngine::ILogger* s_DefaultLogger;

  /// @brief Field s_Logger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Logger, put = setStaticF_s_Logger)) ::UnityEngine::ILogger* s_Logger;

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method AssertFormat, addr 0x6f0b008, size 0x140, virtual false, abstract: false, final false
  static inline void AssertFormat(bool condition, ::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// [FreeFunction("PauseEditor")]
  /// @brief Method Break, addr 0x6f09ccc, size 0x28, virtual false, abstract: false, final false
  static inline void Break();

  /// [RequiredByNativeCode]
  /// @brief Method CallOverridenDebugHandler, addr 0x6f0b3b8, size 0x364, virtual false, abstract: false, final false
  static inline bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);

  /// [ExcludeFromDocs]
  /// @brief Method DrawLine, addr 0x6f09ac4, size 0xe4, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color);

  /// [FreeFunction("DebugDrawLine", IsThreadSafe = true)]
  /// @brief Method DrawLine, addr 0x6f09ba8, size 0xb8, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, /* [DefaultValue("Color.white")] */ ::UnityEngine::Color color, /* [DefaultValue("0.0f")] */ float_t duration,
                              /* [DefaultValue("true")] */ bool depthTest);

  /// @brief Method DrawLine_Injected, addr 0x6f09c60, size 0x6c, virtual false, abstract: false, final false
  static inline void DrawLine_Injected(::by_ref<::UnityEngine::Vector3 const> start, ::by_ref<::UnityEngine::Vector3 const> end,
                                       /* [DefaultValue("Color.white")] */ ::by_ref<::UnityEngine::Color const> color, /* [DefaultValue("0.0f")] */ float_t duration,
                                       /* [DefaultValue("true")] */ bool depthTest);

  /// [ThreadSafe]
  /// @brief Method ExtractStackTraceNoAlloc, addr 0x6f09cf4, size 0x170, virtual false, abstract: false, final false
  static inline int32_t ExtractStackTraceNoAlloc(uint8_t* buffer, int32_t bufferMax, ::StringW projectFolder);

  /// @brief Method ExtractStackTraceNoAlloc_Injected, addr 0x6f09e64, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractStackTraceNoAlloc_Injected(uint8_t* buffer, int32_t bufferMax, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> projectFolder);

  /// [RequiredByNativeCode]
  /// @brief Method IsLoggingEnabled, addr 0x6f0b71c, size 0x240, virtual false, abstract: false, final false
  static inline bool IsLoggingEnabled();

  /// @brief Method Log, addr 0x6f09eb8, size 0x120, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method Log, addr 0x6f09fd8, size 0x128, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message, ::UnityEngine::Object* context);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method LogAssertion, addr 0x6f0b148, size 0x120, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method LogAssertionFormat, addr 0x6f0b268, size 0x128, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogError, addr 0x6f0a564, size 0x120, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogError, addr 0x6f0a684, size 0x128, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogErrorFormat, addr 0x6f0a8d4, size 0x134, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogErrorFormat, addr 0x6f0a7ac, size 0x128, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogException, addr 0x6ef7ebc, size 0x120, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x6eefa70, size 0x124, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x6f0a100, size 0x128, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogFormat, addr 0x6f0a228, size 0x33c, virtual false, abstract: false, final false
  static inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::StringW format,
                               /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogWarning, addr 0x6efb958, size 0x120, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

  /// @brief Method LogWarning, addr 0x6f0aa08, size 0x128, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogWarningFormat, addr 0x6f0ac58, size 0x134, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogWarningFormat, addr 0x6f0ab30, size 0x128, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method Assert, addr 0x6f0ad8c, size 0x144, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method Assert, addr 0x6f0aed0, size 0x138, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition, ::StringW message);

  static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger();

  static inline ::UnityEngine::ILogger* getStaticF_s_Logger();

  /// @brief Method get_isDebugBuild, addr 0x6f0b390, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDebugBuild();

  /// @brief Method get_unityLogger, addr 0x6f09a68, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ILogger* get_unityLogger();

  static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger* value);

  static inline void setStaticF_s_Logger(::UnityEngine::ILogger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug(Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug(Debug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Debug) == 0x10, "Size mismatch!");

} // namespace UnityEngine
