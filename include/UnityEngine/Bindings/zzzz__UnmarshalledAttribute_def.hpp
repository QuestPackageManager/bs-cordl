#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/UnmarshalledAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnmarshalledAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class UnmarshalledAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::UnmarshalledAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.UnmarshalledAttribute
class CORDL_TYPE UnmarshalledAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::UnmarshalledAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x69eafec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmarshalledAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmarshalledAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmarshalledAttribute(UnmarshalledAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmarshalledAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmarshalledAttribute(UnmarshalledAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22704 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::UnmarshalledAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::UnmarshalledAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::UnmarshalledAttribute*, "UnityEngine.Bindings", "UnmarshalledAttribute");
