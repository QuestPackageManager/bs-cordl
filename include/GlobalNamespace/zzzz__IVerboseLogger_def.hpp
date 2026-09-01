#pragma once
// IWYU pragma private; include "GlobalNamespace\IVerboseLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVerboseLogger)
// Forward declare root types
namespace GlobalNamespace {
class IVerboseLogger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IVerboseLogger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IVerboseLogger*, "", "IVerboseLogger");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IVerboseLogger
class CORDL_TYPE IVerboseLogger {
public:
  // Declarations
  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Method get_loggerPrefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_loggerPrefix();

  // Ctor Parameters [CppParam { name: "", ty: "IVerboseLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerboseLogger(IVerboseLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
