#pragma once
// IWYU pragma private; include "GlobalNamespace/IVerboseLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVerboseLogger)
// Forward declare root types
namespace GlobalNamespace {
class IVerboseLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IVerboseLogger);
// Type: ::IVerboseLogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IVerboseLogger*
class CORDL_TYPE IVerboseLogger {
public:
  // Declarations
  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Method get_loggerPrefix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_loggerPrefix();

  // Ctor Parameters [CppParam { name: "", ty: "IVerboseLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVerboseLogger(IVerboseLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVerboseLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVerboseLogger(IVerboseLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IVerboseLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IVerboseLogger*, "", "IVerboseLogger");
