#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/PreventReadOnlyInstanceModificationAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreventReadOnlyInstanceModificationAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class PreventReadOnlyInstanceModificationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.PreventReadOnlyInstanceModificationAttribute
class CORDL_TYPE PreventReadOnlyInstanceModificationAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6982210, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreventReadOnlyInstanceModificationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreventReadOnlyInstanceModificationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreventReadOnlyInstanceModificationAttribute(PreventReadOnlyInstanceModificationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreventReadOnlyInstanceModificationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreventReadOnlyInstanceModificationAttribute(PreventReadOnlyInstanceModificationAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute*, "UnityEngine.Bindings", "PreventReadOnlyInstanceModificationAttribute");
