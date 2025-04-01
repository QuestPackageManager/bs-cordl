#pragma once
// IWYU pragma private; include "System/Dynamic/SetIndexBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__SetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>)>(
    &::System::Dynamic::SetIndexBinder::Bind)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x40fd87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.FallbackSetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>,
                                          ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::SetIndexBinder::FallbackSetIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x40fd9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), "FallbackSetIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.FallbackSetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>,
                                          ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::SetIndexBinder::FallbackSetIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), 9));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::Bind(::System::Dynamic::DynamicMetaObject* target,
                                                                                   ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                                               ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                                               ::System::Dynamic::DynamicMetaObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), "FallbackSetIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, indexes, value);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                                               ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                                               ::System::Dynamic::DynamicMetaObject* value, ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::SetIndexBinder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, indexes, value, errorSuggestion);
}
// Ctor Parameters []
constexpr ::System::Dynamic::SetIndexBinder::SetIndexBinder() {}
