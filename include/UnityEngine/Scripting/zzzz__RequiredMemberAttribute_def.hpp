#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/RequiredMemberAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RequiredMemberAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class RequiredMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::RequiredMemberAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: UnityEngine.Scripting.RequiredMemberAttribute
class CORDL_TYPE RequiredMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Scripting::RequiredMemberAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x68cb350, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequiredMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequiredMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequiredMemberAttribute(RequiredMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequiredMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequiredMemberAttribute(RequiredMemberAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::RequiredMemberAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::RequiredMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::RequiredMemberAttribute*, "UnityEngine.Scripting", "RequiredMemberAttribute");
