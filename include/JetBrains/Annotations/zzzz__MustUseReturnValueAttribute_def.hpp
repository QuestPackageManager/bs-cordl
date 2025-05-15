#pragma once
// IWYU pragma private; include "JetBrains/Annotations/MustUseReturnValueAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MustUseReturnValueAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class MustUseReturnValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::MustUseReturnValueAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.MustUseReturnValueAttribute
class CORDL_TYPE MustUseReturnValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Justification, put = set_Justification)) ::StringW Justification;

  /// @brief Field <Justification>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Justification_k__BackingField, put = __cordl_internal_set__Justification_k__BackingField)) ::StringW _Justification_k__BackingField;

  static inline ::JetBrains::Annotations::MustUseReturnValueAttribute* New_ctor();

  static inline ::JetBrains::Annotations::MustUseReturnValueAttribute* New_ctor(::StringW justification);

  constexpr ::StringW const& __cordl_internal_get__Justification_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Justification_k__BackingField();

  constexpr void __cordl_internal_set__Justification_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4af3700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4af3708, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW justification);

  /// @brief Method get_Justification, addr 0x4af3730, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Justification();

  /// @brief Method set_Justification, addr 0x4af3738, size 0x8, virtual false, abstract: false, final false
  inline void set_Justification(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MustUseReturnValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MustUseReturnValueAttribute(MustUseReturnValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MustUseReturnValueAttribute(MustUseReturnValueAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18472 };

  /// @brief Field <Justification>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Justification_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::MustUseReturnValueAttribute, ____Justification_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MustUseReturnValueAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MustUseReturnValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MustUseReturnValueAttribute*, "JetBrains.Annotations", "MustUseReturnValueAttribute");
