#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacroAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class MacroAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::MacroAttribute);
// Type: JetBrains.Annotations::MacroAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15759))
// CS Name: ::JetBrains.Annotations::MacroAttribute*
class CORDL_TYPE MacroAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Expression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField, put = __cordl_internal_set__Expression_k__BackingField))::StringW _Expression_k__BackingField;

  /// @brief Field <Editable>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Editable_k__BackingField, put = __cordl_internal_set__Editable_k__BackingField)) int32_t _Editable_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField))::StringW _Target_k__BackingField;

  __declspec(property(get = get_Expression, put = set_Expression))::StringW Expression;

  __declspec(property(get = get_Editable, put = set_Editable)) int32_t Editable;

  __declspec(property(get = get_Target, put = set_Target))::StringW Target;

  constexpr ::StringW& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr void __cordl_internal_set__Expression_k__BackingField(::StringW value);

  constexpr int32_t& __cordl_internal_get__Editable_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Editable_k__BackingField() const;

  constexpr void __cordl_internal_set__Editable_k__BackingField(int32_t value);

  constexpr ::StringW& __cordl_internal_get__Target_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr void __cordl_internal_set__Target_k__BackingField(::StringW value);

  /// @brief Method get_Expression, addr 0x2eba3bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Expression();

  /// @brief Method set_Expression, addr 0x2eba3c4, size 0x8, virtual false, abstract: false, final false
  inline void set_Expression(::StringW value);

  /// @brief Method get_Editable, addr 0x2eba3cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Editable();

  /// @brief Method set_Editable, addr 0x2eba3d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Editable(int32_t value);

  /// @brief Method get_Target, addr 0x2eba3dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Target();

  /// @brief Method set_Target, addr 0x2eba3e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Target(::StringW value);

  static inline ::JetBrains::Annotations::MacroAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2eba3ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacroAttribute(MacroAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacroAttribute(MacroAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacroAttribute();

public:
  /// @brief Field <Expression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Expression_k__BackingField;

  /// @brief Field <Editable>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____Editable_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Target_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MacroAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Expression_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Editable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Target_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MacroAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
