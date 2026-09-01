#pragma once
// IWYU pragma private; include "System\Dynamic\DynamicMetaObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Dynamic/zzzz__BinaryOperationBinder_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include "System/Dynamic/zzzz__ConvertBinder_def.hpp"
#include "System/Dynamic/zzzz__CreateInstanceBinder_def.hpp"
#include "System/Dynamic/zzzz__DeleteIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__DeleteMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__GetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__InvokeBinder_def.hpp"
#include "System/Dynamic/zzzz__InvokeMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__SetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
#include "System/Dynamic/zzzz__UnaryOperationBinder_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::DynamicMetaObject::*)(::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*)>(
    &::System::Dynamic::DynamicMetaObject::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc2e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::DynamicMetaObject::*)(::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*,
                                                                                                      ::System::Object*)>(&::System::Dynamic::DynamicMetaObject::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fc2f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_Expression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc2f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Expression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_Restrictions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::BindingRestrictions* (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_Restrictions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc2f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Restrictions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_Value)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fc1cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_HasValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_HasValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fc1cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_HasValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_RuntimeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_RuntimeType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc2f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_RuntimeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.get_LimitType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Dynamic::DynamicMetaObject::*)()>(&::System::Dynamic::DynamicMetaObject::get_LimitType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fc1dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_LimitType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::ConvertBinder*)>(
    &::System::Dynamic::DynamicMetaObject::BindConvert)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fc3004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindGetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::GetMemberBinder*)>(
    &::System::Dynamic::DynamicMetaObject::BindGetMember)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fc3080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindSetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::DynamicMetaObject::BindSetMember)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc30fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindDeleteMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::DeleteMemberBinder*)>(
    &::System::Dynamic::DynamicMetaObject::BindDeleteMember)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fc3180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindGetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::GetIndexBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObject::BindGetIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc31fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindSetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::SetIndexBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::DynamicMetaObject::BindSetIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fc3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindDeleteIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::DeleteIndexBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObject::BindDeleteIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc3314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindInvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::InvokeMemberBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObject::BindInvokeMember)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc3398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::InvokeBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObject::BindInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::CreateInstanceBinder*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObject::BindCreateInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc34a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindUnaryOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::UnaryOperationBinder*)>(
    &::System::Dynamic::DynamicMetaObject::BindUnaryOperation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fc3524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.BindBinaryOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObject::*)(::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::DynamicMetaObject::BindBinaryOperation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fc35a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.GetDynamicMemberNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::System::Dynamic::DynamicMetaObject::*)()>(
    &::System::Dynamic::DynamicMetaObject::GetDynamicMemberNames)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fc3624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObject.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (*)(::System::Object*, ::System::Linq::Expressions::Expression*)>(
    &::System::Dynamic::DynamicMetaObject::Create)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc36bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
                                                             { "Create", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Dynamic::DynamicMetaObject::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::System::Object* const& System::Dynamic::DynamicMetaObject::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Dynamic::DynamicMetaObject::__cordl_internal_set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Dynamic::DynamicMetaObject::__cordl_internal_get__Expression_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Dynamic::DynamicMetaObject::__cordl_internal_get__Expression_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr void System::Dynamic::DynamicMetaObject::__cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Expression_k__BackingField = value;
}
constexpr ::System::Dynamic::BindingRestrictions*& System::Dynamic::DynamicMetaObject::__cordl_internal_get__Restrictions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Restrictions_k__BackingField;
}
constexpr ::System::Dynamic::BindingRestrictions* const& System::Dynamic::DynamicMetaObject::__cordl_internal_get__Restrictions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Restrictions_k__BackingField;
}
constexpr void System::Dynamic::DynamicMetaObject::__cordl_internal_set__Restrictions_k__BackingField(::System::Dynamic::BindingRestrictions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Restrictions_k__BackingField = value;
}
inline void System::Dynamic::DynamicMetaObject::setStaticF_EmptyMetaObjects(::ArrayW<::System::Dynamic::DynamicMetaObject*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Dynamic::DynamicMetaObject*>, "EmptyMetaObjects", ::System::Dynamic::DynamicMetaObject*>(
      std::forward<::ArrayW<::System::Dynamic::DynamicMetaObject*>>(value));
}
inline ::ArrayW<::System::Dynamic::DynamicMetaObject*> System::Dynamic::DynamicMetaObject::getStaticF_EmptyMetaObjects() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Dynamic::DynamicMetaObject*>, "EmptyMetaObjects", ::System::Dynamic::DynamicMetaObject*>();
}
inline void System::Dynamic::DynamicMetaObject::setStaticF_s_noValueSentinel(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_noValueSentinel", ::System::Dynamic::DynamicMetaObject*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Dynamic::DynamicMetaObject::getStaticF_s_noValueSentinel() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_noValueSentinel", ::System::Dynamic::DynamicMetaObject*>();
}
inline void System::Dynamic::DynamicMetaObject::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression, restrictions);
}
inline void System::Dynamic::DynamicMetaObject::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Dynamic::BindingRestrictions*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression, restrictions, value);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::DynamicMetaObject::get_Expression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Expression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::DynamicMetaObject::get_Restrictions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Restrictions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::BindingRestrictions*>(this, ___internal_method);
}
inline ::System::Object* System::Dynamic::DynamicMetaObject::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Dynamic::DynamicMetaObject::get_HasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_HasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Dynamic::DynamicMetaObject::get_RuntimeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_RuntimeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Dynamic::DynamicMetaObject::get_LimitType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), { "get_LimitType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindConvert(::System::Dynamic::ConvertBinder* binder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindGetMember(::System::Dynamic::GetMemberBinder* binder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, value);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindGetIndex(::System::Dynamic::GetIndexBinder* binder, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, indexes);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindSetIndex(::System::Dynamic::SetIndexBinder* binder, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes,
                                                                                              ::System::Dynamic::DynamicMetaObject* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, indexes, value);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* binder,
                                                                                                 ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, indexes);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindInvoke(::System::Dynamic::InvokeBinder* binder, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindCreateInstance(::System::Dynamic::CreateInstanceBinder* binder,
                                                                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* binder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* binder, ::System::Dynamic::DynamicMetaObject* arg) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, binder, arg);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::Dynamic::DynamicMetaObject::GetDynamicMemberNames() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::Create(::System::Object* value, ::System::Linq::Expressions::Expression* expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObject*>(),
                                                           { "Create", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(nullptr, ___internal_method, value, expression);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::DynamicMetaObject*>(expression, restrictions));
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObject::New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions,
                                                                                          ::System::Object* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::DynamicMetaObject*>(expression, restrictions, value));
}
// Ctor Parameters []
constexpr ::System::Dynamic::DynamicMetaObject::DynamicMetaObject() {}
