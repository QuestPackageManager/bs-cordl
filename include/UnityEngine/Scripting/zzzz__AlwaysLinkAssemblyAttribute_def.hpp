#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/AlwaysLinkAssemblyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AlwaysLinkAssemblyAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class AlwaysLinkAssemblyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: UnityEngine.Scripting.AlwaysLinkAssemblyAttribute
class CORDL_TYPE AlwaysLinkAssemblyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x48c0430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysLinkAssemblyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlwaysLinkAssemblyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysLinkAssemblyAttribute(AlwaysLinkAssemblyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysLinkAssemblyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysLinkAssemblyAttribute(AlwaysLinkAssemblyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*, "UnityEngine.Scripting", "AlwaysLinkAssemblyAttribute");
