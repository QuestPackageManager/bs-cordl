#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodCallExpression1.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_impl.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::MethodCallExpression1::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::MethodCallExpression1::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40c8494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression1.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MethodCallExpression1::*)(int32_t)>(
    &::System::Linq::Expressions::MethodCallExpression1::GetArgument)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40c84b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression1.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::MethodCallExpression1::*)()>(
    &::System::Linq::Expressions::MethodCallExpression1::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c8550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression1.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::MethodCallExpression1::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::MethodCallExpression1::Rewrite)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x40c8558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 13));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::MethodCallExpression1::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::MethodCallExpression1::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::MethodCallExpression1::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::MethodCallExpression1::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, arg0);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression1::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::MethodCallExpression1::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::MethodCallExpression1::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                          ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MethodCallExpression1*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*, false>(this, ___internal_method, instance, args);
}
inline ::System::Linq::Expressions::MethodCallExpression1* System::Linq::Expressions::MethodCallExpression1::New_ctor(::System::Reflection::MethodInfo* method,
                                                                                                                      ::System::Linq::Expressions::Expression* arg0) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::MethodCallExpression1*>(method, arg0));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::MethodCallExpression1::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::MethodCallExpression1::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MethodCallExpression1::MethodCallExpression1() {}
