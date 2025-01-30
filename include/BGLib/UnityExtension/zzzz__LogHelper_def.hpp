#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/LogHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LogHelper)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class LogHelper;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::LogHelper);
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.LogHelper
class CORDL_TYPE LogHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method LogBuildOnly, addr 0x22b6078, size 0x58, virtual false, abstract: false, final false
  static inline void LogBuildOnly(::StringW message);

  /// @brief Method LogBuildOnly, addr 0x22b60d0, size 0x68, virtual false, abstract: false, final false
  static inline void LogBuildOnly(::StringW message, ::UnityEngine::Object* context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogHelper(LogHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogHelper(LogHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::LogHelper, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::LogHelper);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::LogHelper*, "BGLib.UnityExtension", "LogHelper");
