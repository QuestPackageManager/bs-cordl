#pragma once
// IWYU pragma private; include "UnityEngine/WritableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(WritableAttribute)
// Forward declare root types
namespace UnityEngine {
class WritableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WritableAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WritableAttribute
class CORDL_TYPE WritableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::WritableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4918ca8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WritableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WritableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WritableAttribute(WritableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WritableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WritableAttribute(WritableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WritableAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WritableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WritableAttribute*, "UnityEngine", "WritableAttribute");
