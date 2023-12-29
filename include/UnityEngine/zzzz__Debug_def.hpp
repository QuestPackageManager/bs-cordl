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
struct Vector3;
}
namespace UnityEngine {
class ILogger;
}
namespace System {
class Exception;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9973))
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

  /// @brief Method get_unityLogger addr 0x2b3a77c size 0x58 virtual false final false
  static inline ::UnityEngine::ILogger* get_unityLogger();

  /// @brief Method DrawLine addr 0x2b3a7d4 size 0xe8 virtual false final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color);

  /// @brief Method DrawLine addr 0x2b3a8bc size 0xb4 virtual false final false
  static inline void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, float_t duration, bool depthTest);

  /// @brief Method Break addr 0x2b3a9dc size 0x28 virtual false final false
  static inline void Break();

  /// @brief Method ExtractStackTraceNoAlloc addr 0x2b3aa04 size 0x54 virtual false final false
  static inline int32_t ExtractStackTraceNoAlloc(::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferMax, ::StringW projectFolder);

  /// @brief Method Log addr 0x2b3aa58 size 0x108 virtual false final false
  static inline void Log(::System::Object* message);

  /// @brief Method Log addr 0x2b3ab60 size 0x118 virtual false final false
  static inline void Log(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogFormat addr 0x2b3ac78 size 0x118 virtual false final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError addr 0x2b3ad90 size 0x108 virtual false final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogError addr 0x2b3ae98 size 0x118 virtual false final false
  static inline void LogError(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogErrorFormat addr 0x2b3afb0 size 0x118 virtual false final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogErrorFormat addr 0x2b3b0c8 size 0x11c virtual false final false
  static inline void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException addr 0x2b3b1e4 size 0x108 virtual false final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogException addr 0x2b3b2ec size 0x114 virtual false final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogWarning addr 0x2b3b400 size 0x108 virtual false final false
  static inline void LogWarning(::System::Object* message);

  /// @brief Method LogWarning addr 0x2b3b508 size 0x118 virtual false final false
  static inline void LogWarning(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogWarningFormat addr 0x2b3b620 size 0x118 virtual false final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarningFormat addr 0x2b3b738 size 0x11c virtual false final false
  static inline void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Assert addr 0x2b3b854 size 0x130 virtual false final false
  static inline void _cordl_Assert(bool condition);

  /// @brief Method Assert addr 0x2b3b984 size 0x11c virtual false final false
  static inline void _cordl_Assert(bool condition, ::StringW message);

  /// @brief Method LogAssertion addr 0x2b3baa0 size 0x108 virtual false final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogAssertionFormat addr 0x2b3bba8 size 0x118 virtual false final false
  static inline void LogAssertionFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method get_isDebugBuild addr 0x2b3bcc0 size 0x28 virtual false final false
  static inline bool get_isDebugBuild();

  /// @brief Method CallOverridenDebugHandler addr 0x2b3bce8 size 0x3f8 virtual false final false
  static inline bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);

  /// @brief Method IsLoggingEnabled addr 0x2b3c0e0 size 0x224 virtual false final false
  static inline bool IsLoggingEnabled();

  /// @brief Method DrawLine_Injected addr 0x2b3a970 size 0x6c virtual false final false
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
