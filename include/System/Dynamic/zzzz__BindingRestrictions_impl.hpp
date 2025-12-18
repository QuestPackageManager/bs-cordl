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
// Some("{}") }]
constexpr ::System::Dynamic::TestBuilder_BindingRestrictions_AndNode::TestBuilder_BindingRestrictions_AndNode(int32_t Depth, ::System::Linq::Expressions::Expression* Node) noexcept {
  this->Depth = Depth;
  this->Node = Node;
}
// Ctor Parameters []
constexpr ::System::Dynamic::TestBuilder_BindingRestrictions_AndNode::TestBuilder_BindingRestrictions_AndNode() {}
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions_TestBuilder.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::BindingRestrictions_TestBuilder::*)(::System::Dynamic::BindingRestrictions*)>(
    &::System::Dynamic::BindingRestrictions_TestBuilder::Append)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e0d464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions_TestBuilder.ToExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::BindingRestrictions_TestBuilder::*)()>(
    &::System::Dynamic::BindingRestrictions_TestBuilder::ToExpression)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e0d644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(),
                                                                               "ToExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions_TestBuilder.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::BindingRestrictions_TestBuilder::*)(::System::Linq::Expressions::Expression*, int32_t)>(
    &::System::Dynamic::BindingRestrictions_TestBuilder::Push)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e0d50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions_TestBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::BindingRestrictions_TestBuilder::*)()>(
    &::System::Dynamic::BindingRestrictions_TestBuilder::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e0d728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_get__unique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* const& System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_get__unique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unique;
}
constexpr void System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_set__unique(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unique)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>*& System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_get__tests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tests;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* const&
System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_get__tests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tests;
}
constexpr void
System::Dynamic::BindingRestrictions_TestBuilder::__cordl_internal_set__tests(::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Dynamic::BindingRestrictions_TestBuilder::Append(::System::Dynamic::BindingRestrictions* restrictions) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, restrictions);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::BindingRestrictions_TestBuilder::ToExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(),
                                                                             "ToExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline void System::Dynamic::BindingRestrictions_TestBuilder::Push(::System::Linq::Expressions::Expression* node, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, depth);
}
inline void System::Dynamic::BindingRestrictions_TestBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::BindingRestrictions_TestBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Dynamic::BindingRestrictions_TestBuilder* System::Dynamic::BindingRestrictions_TestBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::BindingRestrictions_TestBuilder*>());
}
// Ctor Parameters []
constexpr ::System::Dynamic::BindingRestrictions_TestBuilder::BindingRestrictions_TestBuilder() {}
// Ctor Parameters []
constexpr ::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy::BindingRestrictions_BindingRestrictionsProxy() {}
//  Writing Method size for method: ::System::Dynamic::BindingRestrictions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::BindingRestrictions::*)()>(&::System::Dynamic::BindingRestrictions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0ce30;

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
  constexpr static std::size_t addrs = 0xffffffffffffffff;

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
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e0ce34;

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
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e0cf98;

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
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e0d0bc;

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
  constexpr static std::size_t addrs = 0x5e0d210;

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
  constexpr static std::size_t addrs = 0x5e0d340;

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
inline ::System::Dynamic::BindingRestrictions* System::Dynamic::BindingRestrictions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::BindingRestrictions*>());
}
// Ctor Parameters []
constexpr ::System::Dynamic::BindingRestrictions::BindingRestrictions() {}
