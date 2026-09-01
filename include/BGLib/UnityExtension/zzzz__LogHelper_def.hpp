#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\LogHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogHelper)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class LogHelper;
}
// Write type traits
MARK_REF_T(::BGLib::UnityExtension::LogHelper*);
DEFINE_IL2CPP_CLASS(::BGLib::UnityExtension::LogHelper*, "BGLib.UnityExtension", "LogHelper");
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.LogHelper
class CORDL_TYPE LogHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method LogBuildOnly, addr 0x3328f18, size 0x5c, virtual false, abstract: false, final false
  static inline void LogBuildOnly(::StringW message);

  /// @brief Method LogBuildOnly, addr 0x3328f74, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::UnityExtension::LogHelper) == 0x10, "Size mismatch!");

} // namespace BGLib::UnityExtension
