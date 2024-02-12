#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBeatSaberLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatSaberLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatSaberLogger);
// Type: ::IBeatSaberLogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5167))
// CS Name: ::IBeatSaberLogger*
class CORDL_TYPE IBeatSaberLogger {
public:
  // Declarations
  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogWarning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogWarning(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatSaberLogger(IBeatSaberLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberLogger(IBeatSaberLogger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatSaberLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatSaberLogger*, "", "IBeatSaberLogger");
