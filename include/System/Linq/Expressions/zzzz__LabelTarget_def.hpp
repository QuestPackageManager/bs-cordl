#pragma once
// IWYU pragma private; include "System/Linq/Expressions/LabelTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LabelTarget)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LabelTarget;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LabelTarget);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.LabelTarget
class CORDL_TYPE LabelTarget : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::LabelTarget* New_ctor(::System::Type* type, ::StringW name);

  /// @brief Method ToString, addr 0x40ba014, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40b9fd8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW name);

  /// @brief Method get_Name, addr 0x40ba004, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Type, addr 0x40ba00c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LabelTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LabelTarget(LabelTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LabelTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LabelTarget(LabelTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13689 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::LabelTarget, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LabelTarget, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LabelTarget, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LabelTarget);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LabelTarget*, "System.Linq.Expressions", "LabelTarget");
