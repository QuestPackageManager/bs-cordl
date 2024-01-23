#pragma once
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
// Type: JetBrains.Annotations::MustUseReturnValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15755))
// CS Name: ::JetBrains.Annotations::MustUseReturnValueAttribute*
class CORDL_TYPE MustUseReturnValueAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Justification>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Justification_k__BackingField, put = __cordl_internal_set__Justification_k__BackingField))::StringW _Justification_k__BackingField;

  __declspec(property(get = get_Justification, put = set_Justification))::StringW Justification;

  constexpr ::StringW& __cordl_internal_get__Justification_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Justification_k__BackingField() const;

  constexpr void __cordl_internal_set__Justification_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::MustUseReturnValueAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2eba32c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::MustUseReturnValueAttribute* New_ctor(::StringW justification);

  /// @brief Method .ctor, addr 0x2eba334, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW justification);

  /// @brief Method get_Justification, addr 0x2eba35c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Justification();

  /// @brief Method set_Justification, addr 0x2eba364, size 0x8, virtual false, abstract: false, final false
  inline void set_Justification(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MustUseReturnValueAttribute(MustUseReturnValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MustUseReturnValueAttribute(MustUseReturnValueAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MustUseReturnValueAttribute();

public:
  /// @brief Field <Justification>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Justification_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MustUseReturnValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MustUseReturnValueAttribute, ____Justification_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MustUseReturnValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MustUseReturnValueAttribute*, "JetBrains.Annotations", "MustUseReturnValueAttribute");
