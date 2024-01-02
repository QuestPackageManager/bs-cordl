#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Debug);
// Type: UnityEngine::Debug
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10045))
// CS Name: ::UnityEngine::Debug*
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultLogger, put = setStaticF_s_DefaultLogger))::UnityEngine::ILogger* s_DefaultLogger;

  /// @brief Field s_Logger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Logger, put = setStaticF_s_Logger))::UnityEngine::ILogger* s_Logger;

  static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger* value);

  static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger();

  static inline void setStaticF_s_Logger(::UnityEngine::ILogger* value);

  static inline ::UnityEngine::ILogger* getStaticF_s_Logger();

  /// @brief Method get_unityLogger, addr 0x2c9f47c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::ILogger* get_unityLogger();

  /// @brief Method DrawLine, addr 0x2c9f4d4, size 0xe8, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color);

  /// @brief Method DrawLine, addr 0x2c9f5bc, size 0xb4, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, float_t duration, bool depthTest);

  /// @brief Method Break, addr 0x2c9f6dc, size 0x28, virtual false, abstract: false, final false
  static inline void Break();

  /// @brief Method ExtractStackTraceNoAlloc, addr 0x2c9f704, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractStackTraceNoAlloc(::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferMax, ::StringW projectFolder);

  /// @brief Method Log, addr 0x2c9f758, size 0x108, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method Log, addr 0x2c9f860, size 0x118, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x2c9f978, size 0x118, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x2c9fa90, size 0x108, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogError, addr 0x2c9fb98, size 0x118, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogErrorFormat, addr 0x2c9fcb0, size 0x118, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogErrorFormat, addr 0x2c9fdc8, size 0x11c, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x2c9fee4, size 0x108, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x2c9ffec, size 0x114, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogWarning, addr 0x2ca0100, size 0x108, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

  /// @brief Method LogWarning, addr 0x2ca0208, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogWarningFormat, addr 0x2ca0320, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarningFormat, addr 0x2ca0438, size 0x11c, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Assert, addr 0x2ca0554, size 0x130, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition);

  /// @brief Method Assert, addr 0x2ca0684, size 0x11c, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition, ::StringW message);

  /// @brief Method LogAssertion, addr 0x2ca07a0, size 0x108, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogAssertionFormat, addr 0x2ca08a8, size 0x118, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method get_isDebugBuild, addr 0x2ca09c0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDebugBuild();

  /// @brief Method CallOverridenDebugHandler, addr 0x2ca09e8, size 0x3f8, virtual false, abstract: false, final false
  static inline bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);

  /// @brief Method IsLoggingEnabled, addr 0x2ca0de0, size 0x224, virtual false, abstract: false, final false
  static inline bool IsLoggingEnabled();

  /// @brief Method DrawLine_Injected, addr 0x2c9f670, size 0x6c, virtual false, abstract: false, final false
  static inline void DrawLine_Injected(ByRef<::UnityEngine::Vector3> start, ByRef<::UnityEngine::Vector3> end, ByRef<::UnityEngine::Color> color, float_t duration, bool depthTest);

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug(Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug(Debug const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Debug, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Debug*, "UnityEngine", "Debug");
