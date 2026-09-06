#pragma once
// IWYU pragma private; include "JetBrains/Annotations/MustUseReturnValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MustUseReturnValueAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class MustUseReturnValueAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::MustUseReturnValueAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::MustUseReturnValueAttribute*, "JetBrains.Annotations", "MustUseReturnValueAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.MustUseReturnValueAttribute
class CORDL_TYPE MustUseReturnValueAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::MustUseReturnValueAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6a60c9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MustUseReturnValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MustUseReturnValueAttribute(MustUseReturnValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MustUseReturnValueAttribute(MustUseReturnValueAttributeconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::MustUseReturnValueAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
