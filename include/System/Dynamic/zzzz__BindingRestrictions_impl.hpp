#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_CustomRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_InstanceRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_MergedRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_TypeRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Node", ty: "::System::Linq::Expressions::Expression*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode::__BindingRestrictions__TestBuilder__AndNode(int32_t Depth, ::System::Linq::Expressions::Expression* Node) noexcept {
  this->Depth = Depth;
  this->Node = Node;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode::__BindingRestrictions__TestBuilder__AndNode() {}
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__TestBuilder.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::__BindingRestrictions__TestBuilder::*)(::System::Dynamic::BindingRestrictions*)>(
    &::System::Dynamic::__BindingRestrictions__TestBuilder::Append)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c4c81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__TestBuilder.ToExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::__BindingRestrictions__TestBuilder::*)()>(
    &::System::Dynamic::__BindingRestrictions__TestBuilder::ToExpression)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c4c9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(),
                                                                               "ToExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__TestBuilder.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::__BindingRestrictions__TestBuilder::*)(::System::Linq::Expressions::Expression*, int32_t)>(
    &::System::Dynamic::__BindingRestrictions__TestBuilder::Push)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2c4c8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__TestBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::__BindingRestrictions__TestBuilder::*)()>(
    &::System::Dynamic::__BindingRestrictions__TestBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c4cab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_get__unique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*> const&
System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_get__unique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr void System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_set__unique(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unique)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>*& System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_get__tests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>*> const&
System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_get__tests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tests;
}
constexpr void
System::Dynamic::__BindingRestrictions__TestBuilder::__cordl_internal_set__tests(::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Dynamic::__BindingRestrictions__TestBuilder::Append(::System::Dynamic::BindingRestrictions* restrictions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, restrictions);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::__BindingRestrictions__TestBuilder::ToExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(),
                                                                             "ToExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline void System::Dynamic::__BindingRestrictions__TestBuilder::Push(::System::Linq::Expressions::Expression* node, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, depth);
}
inline ::System::Dynamic::__BindingRestrictions__TestBuilder* System::Dynamic::__BindingRestrictions__TestBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::__BindingRestrictions__TestBuilder*>());
}
inline void System::Dynamic::__BindingRestrictions__TestBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__TestBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::__BindingRestrictions__TestBuilder::__BindingRestrictions__TestBuilder() {}
// Ctor Parameters []
constexpr ::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy::__BindingRestrictions__BindingRestrictionsProxy() {}
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::BindingRestrictions::*)()>(&::System::Dynamic::BindingRestrictions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4c1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::BindingRestrictions::*)()>(
    &::System::Dynamic::BindingRestrictions::GetExpression)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.Merge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Dynamic::BindingRestrictions* (::System::Dynamic::BindingRestrictions::*)(::System::Dynamic::BindingRestrictions*)>(&::System::Dynamic::BindingRestrictions::Merge)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c4c1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.GetTypeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::BindingRestrictions* (*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::System::Dynamic::BindingRestrictions::GetTypeRestriction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c4c344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetTypeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.GetTypeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::BindingRestrictions* (*)(::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::BindingRestrictions::GetTypeRestriction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c4c474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetTypeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.GetInstanceRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::BindingRestrictions* (*)(::System::Linq::Expressions::Expression*, ::System::Object*)>(
    &::System::Dynamic::BindingRestrictions::GetInstanceRestriction)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c4c5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetInstanceRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions.ToExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::BindingRestrictions::*)()>(
    &::System::Dynamic::BindingRestrictions::ToExpression)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c4c6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "ToExpression",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Dynamic::BindingRestrictions::setStaticF_Empty(::System::Dynamic::BindingRestrictions* value) {
  ::cordl_internals::setStaticField<::System::Dynamic::BindingRestrictions*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get>(
      std::forward<::System::Dynamic::BindingRestrictions*>(value));
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Dynamic::BindingRestrictions*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get>();
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::BindingRestrictions*>());
}
inline void System::Dynamic::BindingRestrictions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::BindingRestrictions::GetExpression() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::Merge(::System::Dynamic::BindingRestrictions* restrictions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "Merge", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::BindingRestrictions*, false>(this, ___internal_method, restrictions);
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::GetTypeRestriction(::System::Linq::Expressions::Expression* expression, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetTypeRestriction", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::BindingRestrictions*, false>(nullptr, ___internal_method, expression, type);
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::GetTypeRestriction(::System::Dynamic::DynamicMetaObject* obj) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetTypeRestriction", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::BindingRestrictions*, false>(nullptr, ___internal_method, obj);
}
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::GetInstanceRestriction(::System::Linq::Expressions::Expression* expression, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "GetInstanceRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::BindingRestrictions*, false>(nullptr, ___internal_method, expression, instance);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::BindingRestrictions::ToExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions*>::get(), "ToExpression",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::BindingRestrictions::BindingRestrictions() {}
