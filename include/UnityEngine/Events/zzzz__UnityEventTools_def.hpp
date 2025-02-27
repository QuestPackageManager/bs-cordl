#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventTools.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEventTools)
// Forward declare root types
namespace UnityEngine::Events {
class UnityEventTools;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityEventTools);
// Dependencies System.Object
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.UnityEventTools
class CORDL_TYPE UnityEventTools : public ::System::Object {
public:
  // Declarations
  /// @brief Method TidyAssemblyTypeName, addr 0x48ca284, size 0x22c, virtual false, abstract: false, final false
  static inline ::StringW TidyAssemblyTypeName(::StringW assemblyTypeName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEventTools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEventTools(UnityEventTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEventTools(UnityEventTools const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10976 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEventTools, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEventTools);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventTools*, "UnityEngine.Events", "UnityEventTools");
