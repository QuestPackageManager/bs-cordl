#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InstanceMethodCallExpression3.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression3_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::InstanceMethodCallExpression3::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*,
    ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::InstanceMethodCallExpression3::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4044f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression3.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InstanceMethodCallExpression3::*)(int32_t)>(
    &::System::Linq::Expressions::InstanceMethodCallExpression3::GetArgument)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4044f90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression3.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::InstanceMethodCallExpression3::*)()>(
    &::System::Linq::Expressions::InstanceMethodCallExpression3::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4045050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression3.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::InstanceMethodCallExpression3::*)(::System::Linq::Expressions::Expression*,
                                                                   ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::InstanceMethodCallExpression3::Rewrite)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x4045058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 13));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::InstanceMethodCallExpression3::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::InstanceMethodCallExpression3::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
constexpr ::System::Object*& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_get__arg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr void System::Linq::Expressions::InstanceMethodCallExpression3::__cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::InstanceMethodCallExpression3* System::Linq::Expressions::InstanceMethodCallExpression3::New_ctor(::System::Reflection::MethodInfo* method,
                                                                                                                                      ::System::Linq::Expressions::Expression* instance,
                                                                                                                                      ::System::Linq::Expressions::Expression* arg0,
                                                                                                                                      ::System::Linq::Expressions::Expression* arg1,
                                                                                                                                      ::System::Linq::Expressions::Expression* arg2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::InstanceMethodCallExpression3*>(method, instance, arg0, arg1, arg2));
}
inline void System::Linq::Expressions::InstanceMethodCallExpression3::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance,
                                                                            ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                            ::System::Linq::Expressions::Expression* arg2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, instance, arg0, arg1, arg2);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InstanceMethodCallExpression3::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InstanceMethodCallExpression3::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::InstanceMethodCallExpression3::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InstanceMethodCallExpression3*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*, false>(this, ___internal_method, instance, args);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InstanceMethodCallExpression3::InstanceMethodCallExpression3() {}
