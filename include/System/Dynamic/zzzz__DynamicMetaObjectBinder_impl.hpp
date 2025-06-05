#pragma once
// IWYU pragma private; include "System/Dynamic/DynamicMetaObjectBinder.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_impl.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::DynamicMetaObjectBinder::*)()>(&::System::Dynamic::DynamicMetaObjectBinder::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40fd4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Dynamic::DynamicMetaObjectBinder::*)()>(
    &::System::Dynamic::DynamicMetaObjectBinder::get_ReturnType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x40fd500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Dynamic::DynamicMetaObjectBinder::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                   ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                                   ::System::Linq::Expressions::LabelTarget*)>(&::System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x40fd56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.CreateArgumentMetaObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> (*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*)>(
    &::System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x40fdb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "CreateArgumentMetaObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObjectBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>)>(
    &::System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.GetUpdateExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::DynamicMetaObjectBinder::*)(::System::Type*)>(
    &::System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x40fdd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "GetUpdateExpression",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.get_IsStandardBinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Dynamic::DynamicMetaObjectBinder::*)()>(
    &::System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40fddc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 8));
    return ___internal_method;
  }
};
inline void System::Dynamic::DynamicMetaObjectBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* System::Dynamic::DynamicMetaObjectBinder::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression*
System::Dynamic::DynamicMetaObjectBinder::Bind(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                               ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters,
                                               ::System::Linq::Expressions::LabelTarget* returnLabel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, args, parameters, returnLabel);
}
inline ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>
System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                                    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "CreateArgumentMetaObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>, false>(nullptr, ___internal_method, args, parameters);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObjectBinder::Bind(::System::Dynamic::DynamicMetaObject* target,
                                                                                            ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, args);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), "GetUpdateExpression",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, type);
}
inline bool System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::DynamicMetaObjectBinder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObjectBinder* System::Dynamic::DynamicMetaObjectBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::DynamicMetaObjectBinder*>());
}
// Ctor Parameters []
constexpr ::System::Dynamic::DynamicMetaObjectBinder::DynamicMetaObjectBinder() {}
