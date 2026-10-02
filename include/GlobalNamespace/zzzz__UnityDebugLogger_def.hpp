#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityDebugLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityDebugLogger)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
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
MARK_REF_T(::GlobalNamespace::UnityDebugLogger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityDebugLogger*, "", "UnityDebugLogger");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityDebugLogger
class CORDL_TYPE UnityDebugLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  /// @brief Method Log, addr 0x5d0099c, size 0x5c, virtual true, abstract: false, final true
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0x5d009f8, size 0xc0, virtual true, abstract: false, final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0x5d00bd4, size 0x5c, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0x5d00c30, size 0xc0, virtual true, abstract: false, final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0x5d00cf0, size 0x5c, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x5d00d4c, size 0xc0, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  /// @brief Method LogWarning, addr 0x5d00ab8, size 0x5c, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0x5d00b14, size 0xc0, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  static inline ::GlobalNamespace::UnityDebugLogger* New_ctor();

  /// @brief Method .ctor, addr 0x5d00e0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
  constexpr ::GlobalNamespace::IBeatSaberLogger* i___GlobalNamespace__IBeatSaberLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityDebugLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityDebugLogger(UnityDebugLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityDebugLogger(UnityDebugLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityDebugLogger) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
