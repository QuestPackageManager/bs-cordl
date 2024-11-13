#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine::Debug
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Debug*
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultLogger, put = setStaticF_s_DefaultLogger)) ::UnityEngine::ILogger* s_DefaultLogger;

  /// @brief Field s_Logger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Logger, put = setStaticF_s_Logger)) ::UnityEngine::ILogger* s_Logger;

  /// @brief Method Break, addr 0x4808788, size 0x28, virtual false, abstract: false, final false
  static inline void Break();

  /// @brief Method CallOverridenDebugHandler, addr 0x4809884, size 0x3f8, virtual false, abstract: false, final false
  static inline bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);

  /// @brief Method ExtractStackTraceNoAlloc, addr 0x48087b0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractStackTraceNoAlloc(::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferMax, ::StringW projectFolder);

  /// @brief Method IsLoggingEnabled, addr 0x4809c7c, size 0x224, virtual false, abstract: false, final false
  static inline bool IsLoggingEnabled();

  /// @brief Method Log, addr 0x4808804, size 0x108, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method Log, addr 0x480890c, size 0x118, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogAssertion, addr 0x480963c, size 0x108, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogAssertionFormat, addr 0x4809744, size 0x118, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x4808b3c, size 0x108, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogError, addr 0x4808c44, size 0x118, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogErrorFormat, addr 0x4808e74, size 0x11c, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogErrorFormat, addr 0x4808d5c, size 0x118, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x48000c0, size 0x108, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x4808f90, size 0x114, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x4808a24, size 0x118, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x4805c38, size 0x108, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

  /// @brief Method LogWarning, addr 0x48090a4, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogWarningFormat, addr 0x48092d4, size 0x11c, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarningFormat, addr 0x48091bc, size 0x118, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Assert, addr 0x48093f0, size 0x130, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition);

  /// @brief Method Assert, addr 0x4809520, size 0x11c, virtual false, abstract: false, final false
  static inline void _cordl_Assert(bool condition, ::StringW message);

  static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger();

  static inline ::UnityEngine::ILogger* getStaticF_s_Logger();

  /// @brief Method get_isDebugBuild, addr 0x480985c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDebugBuild();

  /// @brief Method get_unityLogger, addr 0x4808730, size 0x58, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Debug, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Debug*, "UnityEngine", "Debug");
