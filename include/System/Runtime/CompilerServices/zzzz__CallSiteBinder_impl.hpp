#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSiteBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuleCache_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*&
System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*> const&
System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
template <typename T>
constexpr void System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_set_Parameters(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Linq::Expressions::LabelTarget*& System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_get_ReturnLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReturnLabel;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LabelTarget*> const&
System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_get_ReturnLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReturnLabel;
}
template <typename T> constexpr void System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__cordl_internal_set_ReturnLabel(::System::Linq::Expressions::LabelTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReturnLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::setStaticF_s_instance(::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*, "s_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>::get>(
      std::forward<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>(value));
}
template <typename T>
inline ::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>* System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::getStaticF_s_instance() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*, "s_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>::get>();
}
template <typename T> inline ::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>* System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>::get(),
                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>* System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>());
}
template <typename T> inline void System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>::__CallSiteBinder__LambdaSignature_1() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::CallSiteBinder::*)()>(
    &::System::Runtime::CompilerServices::CallSiteBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c81098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteBinder.get_UpdateLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LabelTarget* (*)()>(
    &::System::Runtime::CompilerServices::CallSiteBinder::get_UpdateLabel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c810a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                                               "get_UpdateLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSiteBinder.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Runtime::CompilerServices::CallSiteBinder::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                            ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                                            ::System::Linq::Expressions::LabelTarget*)>(&::System::Runtime::CompilerServices::CallSiteBinder::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*& System::Runtime::CompilerServices::CallSiteBinder::__cordl_internal_get_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*> const&
System::Runtime::CompilerServices::CallSiteBinder::__cordl_internal_get_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr void System::Runtime::CompilerServices::CallSiteBinder::__cordl_internal_set_Cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::CompilerServices::CallSiteBinder::setStaticF__UpdateLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::LabelTarget*, "<UpdateLabel>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get>(
      std::forward<::System::Linq::Expressions::LabelTarget*>(value));
}
inline ::System::Linq::Expressions::LabelTarget* System::Runtime::CompilerServices::CallSiteBinder::getStaticF__UpdateLabel_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::LabelTarget*, "<UpdateLabel>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get>();
}
inline ::System::Runtime::CompilerServices::CallSiteBinder* System::Runtime::CompilerServices::CallSiteBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::CallSiteBinder*>());
}
inline void System::Runtime::CompilerServices::CallSiteBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LabelTarget* System::Runtime::CompilerServices::CallSiteBinder::get_UpdateLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                                             "get_UpdateLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelTarget*, false>(nullptr, ___internal_method);
}
inline ::System::Linq::Expressions::Expression*
System::Runtime::CompilerServices::CallSiteBinder::Bind(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters,
                                                        ::System::Linq::Expressions::LabelTarget* returnLabel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, args, parameters, returnLabel);
}
template <typename T>
inline T System::Runtime::CompilerServices::CallSiteBinder::BindDelegate(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, site, args);
}
template <typename T>
inline T System::Runtime::CompilerServices::CallSiteBinder::BindCore(::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), "BindCore",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::CallSite_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, site, args);
}
template <typename T> inline void System::Runtime::CompilerServices::CallSiteBinder::CacheTarget(T target) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(),
                                                                                  "CacheTarget", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename T>
inline ::System::Linq::Expressions::Expression_1<T>* System::Runtime::CompilerServices::CallSiteBinder::Stitch(::System::Linq::Expressions::Expression* binding,
                                                                                                               ::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>* signature) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), "Stitch",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__CallSiteBinder__LambdaSignature_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression_1<T>*, false>(nullptr, ___internal_method, binding, signature);
}
template <typename T> inline ::System::Runtime::CompilerServices::RuleCache_1<T>* System::Runtime::CompilerServices::CallSiteBinder::GetRuleCache() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSiteBinder*>::get(), "GetRuleCache",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::RuleCache_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallSiteBinder::CallSiteBinder() {}
