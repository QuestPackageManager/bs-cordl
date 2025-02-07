#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Debug);
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

  /// @brief Method Break, addr 0x48701e4, size 0x28, virtual false, abstract: false, final false
  static inline void Break();

  /// @brief Method CallOverridenDebugHandler, addr 0x48712e0, size 0x3f8, virtual false, abstract: false, final false
  static inline bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);

  /// @brief Method ExtractStackTraceNoAlloc, addr 0x487020c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractStackTraceNoAlloc(::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferMax, ::StringW projectFolder);

  /// @brief Method IsLoggingEnabled, addr 0x48716d8, size 0x224, virtual false, abstract: false, final false
  static inline bool IsLoggingEnabled();

  /// @brief Method Log, addr 0x4870260, size 0x108, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method Log, addr 0x4870368, size 0x118, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogAssertion, addr 0x4871098, size 0x108, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogAssertionFormat, addr 0x48711a0, size 0x118, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x4870598, size 0x108, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogError, addr 0x48706a0, size 0x118, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogErrorFormat, addr 0x48708d0, size 0x11c, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogErrorFormat, addr 0x48707b8, size 0x118, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x4867b1c, size 0x108, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x48709ec, size 0x114, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x4870480, size 0x118, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x486d694, size 0x108, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

  /// @brief Method LogWarning, addr 0x4870b00, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogWarningFormat, addr 0x4870d30, size 0x11c, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarningFormat, addr 0x4870c18, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Assert, addr 0x4870e4c, size 0x130, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition);

  /// @brief Method Assert, addr 0x4870f7c, size 0x11c, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition, ::StringW message);

  static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger();

  static inline ::UnityEngine::ILogger* getStaticF_s_Logger();

  /// @brief Method get_isDebugBuild, addr 0x48712b8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDebugBuild();

  /// @brief Method get_unityLogger, addr 0x487018c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::ILogger* get_unityLogger();

  static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger* value);

  static inline void setStaticF_s_Logger(::UnityEngine::ILogger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug(Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug(Debug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Debug, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Debug*, "UnityEngine", "Debug");
