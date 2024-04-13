#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberBindingType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemberBinding)
namespace System::Linq::Expressions {
struct MemberBindingType;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberBinding);
// Type: System.Linq.Expressions::MemberBinding
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MemberBinding*
class CORDL_TYPE MemberBinding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BindingType))::System::Linq::Expressions::MemberBindingType BindingType;

  __declspec(property(get = get_Member))::System::Reflection::MemberInfo* Member;

  /// @brief Field <BindingType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__BindingType_k__BackingField,
                      put = __cordl_internal_set__BindingType_k__BackingField))::System::Linq::Expressions::MemberBindingType _BindingType_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Member_k__BackingField, put = __cordl_internal_set__Member_k__BackingField))::System::Reflection::MemberInfo* _Member_k__BackingField;

  constexpr ::System::Linq::Expressions::MemberBindingType const& __cordl_internal_get__BindingType_k__BackingField() const;

  constexpr ::System::Linq::Expressions::MemberBindingType& __cordl_internal_get__BindingType_k__BackingField();

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__Member_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get__Member_k__BackingField() const;

  constexpr void __cordl_internal_set__BindingType_k__BackingField(::System::Linq::Expressions::MemberBindingType value);

  constexpr void __cordl_internal_set__Member_k__BackingField(::System::Reflection::MemberInfo* value);

  /// @brief Method get_BindingType, addr 0x2b0c4e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::MemberBindingType get_BindingType();

  /// @brief Method get_Member, addr 0x2b0c4e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_Member();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberBinding(MemberBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberBinding(MemberBinding const&) = delete;

  /// @brief Field <BindingType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Linq::Expressions::MemberBindingType ____BindingType_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____Member_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberBinding, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MemberBinding, ____BindingType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MemberBinding, ____Member_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberBinding*, "System.Linq.Expressions", "MemberBinding");
