#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\NotNullAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotNullAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NotNullAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::NotNullAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::NotNullAttribute*, "UnityEngine.Bindings", "NotNullAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NotNullAttribute
class CORDL_TYPE NotNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::NotNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6bb64cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotNullAttribute(NotNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotNullAttribute(NotNullAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Bindings::NotNullAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Bindings
