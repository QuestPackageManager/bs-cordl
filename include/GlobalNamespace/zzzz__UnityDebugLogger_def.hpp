#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::UnityDebugLogger);
// Type: ::UnityDebugLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5881))
// CS Name: ::UnityDebugLogger*
class CORDL_TYPE UnityDebugLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  /// @brief Method Log addr 0x22f9dfc size 0x58 virtual true final true
  inline void Log(::StringW message);

  /// @brief Method Log addr 0x22f9e54 size 0xb8 virtual true final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogWarning addr 0x22f9f0c size 0x58 virtual true final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning addr 0x22f9f64 size 0xb8 virtual true final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  /// @brief Method LogError addr 0x22fa01c size 0x58 virtual true final true
  inline void LogError(::StringW message);

  /// @brief Method LogError addr 0x22fa074 size 0xb8 virtual true final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException addr 0x22fa12c size 0x58 virtual true final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException addr 0x22fa184 size 0xb8 virtual true final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  static inline ::GlobalNamespace::UnityDebugLogger* New_ctor();

  /// @brief Method .ctor addr 0x22fa23c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityDebugLogger(UnityDebugLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityDebugLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityDebugLogger(UnityDebugLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityDebugLogger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityDebugLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityDebugLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityDebugLogger*, "", "UnityDebugLogger");
