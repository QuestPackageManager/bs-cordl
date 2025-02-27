#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityDebugLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityDebugLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityDebugLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityDebugLogger);
// Dependencies IBeatSaberLogger, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityDebugLogger
class CORDL_TYPE UnityDebugLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  /// @brief Method Log, addr 0x3b25f38, size 0x58, virtual true, abstract: false, final true
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0x3b25f90, size 0xb8, virtual true, abstract: false, final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0x3b26158, size 0x58, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0x3b261b0, size 0xb8, virtual true, abstract: false, final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0x3b26268, size 0x58, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x3b262c0, size 0xb8, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  /// @brief Method LogWarning, addr 0x3b26048, size 0x58, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0x3b260a0, size 0xb8, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  static inline ::GlobalNamespace::UnityDebugLogger* New_ctor();

  /// @brief Method .ctor, addr 0x3b26378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
  constexpr ::GlobalNamespace::IBeatSaberLogger* i___GlobalNamespace__IBeatSaberLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityDebugLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityDebugLogger(UnityDebugLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityDebugLogger(UnityDebugLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5079 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityDebugLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityDebugLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityDebugLogger*, "", "UnityDebugLogger");
