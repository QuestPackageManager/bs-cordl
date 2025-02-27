#pragma once
// IWYU pragma private; include "JetBrains/Annotations/MacroAttribute.hpp"
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
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.MacroAttribute
class CORDL_TYPE MacroAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Editable, put = set_Editable)) int32_t Editable;

  __declspec(property(get = get_Expression, put = set_Expression)) ::StringW Expression;

  __declspec(property(get = get_Target, put = set_Target)) ::StringW Target;

  /// @brief Field <Editable>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Editable_k__BackingField, put = __cordl_internal_set__Editable_k__BackingField)) int32_t _Editable_k__BackingField;

  /// @brief Field <Expression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField, put = __cordl_internal_set__Expression_k__BackingField)) ::StringW _Expression_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField)) ::StringW _Target_k__BackingField;

  static inline ::JetBrains::Annotations::MacroAttribute* New_ctor();

  constexpr int32_t const& __cordl_internal_get__Editable_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Editable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Target_k__BackingField();

  constexpr void __cordl_internal_set__Editable_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Expression_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Target_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4affb6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Editable, addr 0x4affb4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Editable();

  /// @brief Method get_Expression, addr 0x4affb3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Expression();

  /// @brief Method get_Target, addr 0x4affb5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Target();

  /// @brief Method set_Editable, addr 0x4affb54, size 0x8, virtual false, abstract: false, final false
  inline void set_Editable(int32_t value);

  /// @brief Method set_Expression, addr 0x4affb44, size 0x8, virtual false, abstract: false, final false
  inline void set_Expression(::StringW value);

  /// @brief Method set_Target, addr 0x4affb64, size 0x8, virtual false, abstract: false, final false
  inline void set_Target(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacroAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacroAttribute(MacroAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacroAttribute(MacroAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18473 };

  /// @brief Field <Expression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Expression_k__BackingField;

  /// @brief Field <Editable>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____Editable_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Target_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Expression_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Editable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::MacroAttribute, ____Target_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MacroAttribute, 0x28>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MacroAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
