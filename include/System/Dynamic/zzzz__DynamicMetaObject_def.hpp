#pragma once
// IWYU pragma private; include "System/Dynamic/DynamicMetaObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamicMetaObject)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Dynamic {
class BinaryOperationBinder;
}
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Dynamic {
class ConvertBinder;
}
namespace System::Dynamic {
class CreateInstanceBinder;
}
namespace System::Dynamic {
class DeleteIndexBinder;
}
namespace System::Dynamic {
class DeleteMemberBinder;
}
namespace System::Dynamic {
class GetIndexBinder;
}
namespace System::Dynamic {
class GetMemberBinder;
}
namespace System::Dynamic {
class InvokeBinder;
}
namespace System::Dynamic {
class InvokeMemberBinder;
}
namespace System::Dynamic {
class SetIndexBinder;
}
namespace System::Dynamic {
class SetMemberBinder;
}
namespace System::Dynamic {
class UnaryOperationBinder;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class DynamicMetaObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::DynamicMetaObject);
// Type: System.Dynamic::DynamicMetaObject
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::DynamicMetaObject*
class CORDL_TYPE DynamicMetaObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyMetaObjects, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyMetaObjects, put = setStaticF_EmptyMetaObjects)) ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>
      EmptyMetaObjects;

  __declspec(property(get = get_Expression)) ::System::Linq::Expressions::Expression* Expression;

  __declspec(property(get = get_HasValue)) bool HasValue;

  __declspec(property(get = get_LimitType)) ::System::Type* LimitType;

  __declspec(property(get = get_Restrictions)) ::System::Dynamic::BindingRestrictions* Restrictions;

  __declspec(property(get = get_RuntimeType)) ::System::Type* RuntimeType;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field <Expression>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField,
                      put = __cordl_internal_set__Expression_k__BackingField)) ::System::Linq::Expressions::Expression* _Expression_k__BackingField;

  /// @brief Field <Restrictions>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Restrictions_k__BackingField,
                      put = __cordl_internal_set__Restrictions_k__BackingField)) ::System::Dynamic::BindingRestrictions* _Restrictions_k__BackingField;

  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::System::Object* _value;

  /// @brief Field s_noValueSentinel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_noValueSentinel, put = setStaticF_s_noValueSentinel)) ::System::Object* s_noValueSentinel;

  /// @brief Method BindBinaryOperation, addr 0x409a450, size 0x80, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* binder, ::System::Dynamic::DynamicMetaObject* arg);

  /// @brief Method BindConvert, addr 0x4099f18, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindConvert(::System::Dynamic::ConvertBinder* binder);

  /// @brief Method BindCreateInstance, addr 0x409a360, size 0x80, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindCreateInstance(::System::Dynamic::CreateInstanceBinder* binder,
                                                                  ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method BindDeleteIndex, addr 0x409a1f0, size 0x80, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* binder,
                                                               ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes);

  /// @brief Method BindDeleteMember, addr 0x409a078, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder);

  /// @brief Method BindGetIndex, addr 0x409a0f0, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindGetIndex(::System::Dynamic::GetIndexBinder* binder,
                                                            ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes);

  /// @brief Method BindGetMember, addr 0x4099f90, size 0x70, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder);

  /// @brief Method BindInvoke, addr 0x409a2e8, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindInvoke(::System::Dynamic::InvokeBinder* binder,
                                                          ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method BindInvokeMember, addr 0x409a270, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method BindSetIndex, addr 0x409a168, size 0x88, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindSetIndex(::System::Dynamic::SetIndexBinder* binder,
                                                            ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                            ::System::Dynamic::DynamicMetaObject* value);

  /// @brief Method BindSetMember, addr 0x409a000, size 0x78, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value);

  /// @brief Method BindUnaryOperation, addr 0x409a3e0, size 0x70, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* binder);

  /// @brief Method Create, addr 0x409a55c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Dynamic::DynamicMetaObject* Create(::System::Object* value, ::System::Linq::Expressions::Expression* expression);

  /// @brief Method GetDynamicMemberNames, addr 0x409a4d0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames();

  static inline ::System::Dynamic::DynamicMetaObject* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions);

  static inline ::System::Dynamic::DynamicMetaObject* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions, ::System::Object* value);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr ::System::Dynamic::BindingRestrictions*& __cordl_internal_get__Restrictions_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::BindingRestrictions*> const& __cordl_internal_get__Restrictions_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Restrictions_k__BackingField(::System::Dynamic::BindingRestrictions* value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method .ctor, addr 0x4099d9c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions);

  /// @brief Method .ctor, addr 0x4099e6c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions, ::System::Object* value);

  static inline ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> getStaticF_EmptyMetaObjects();

  static inline ::System::Object* getStaticF_s_noValueSentinel();

  /// @brief Method get_Expression, addr 0x4099e90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Expression();

  /// @brief Method get_HasValue, addr 0x4098c94, size 0x68, virtual false, abstract: false, final false
  inline bool get_HasValue();

  /// @brief Method get_LimitType, addr 0x4098d88, size 0x34, virtual false, abstract: false, final false
  inline ::System::Type* get_LimitType();

  /// @brief Method get_Restrictions, addr 0x4099e98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Dynamic::BindingRestrictions* get_Restrictions();

  /// @brief Method get_RuntimeType, addr 0x4099ea0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Type* get_RuntimeType();

  /// @brief Method get_Value, addr 0x4098c70, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  static inline void setStaticF_EmptyMetaObjects(::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> value);

  static inline void setStaticF_s_noValueSentinel(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicMetaObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicMetaObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicMetaObject(DynamicMetaObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicMetaObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicMetaObject(DynamicMetaObject const&) = delete;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field <Expression>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Expression_k__BackingField;

  /// @brief Field <Restrictions>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Dynamic::BindingRestrictions* ____Restrictions_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14119 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::DynamicMetaObject, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::DynamicMetaObject, ____value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::DynamicMetaObject, ____Expression_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::DynamicMetaObject, ____Restrictions_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::DynamicMetaObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::DynamicMetaObject*, "System.Dynamic", "DynamicMetaObject");
