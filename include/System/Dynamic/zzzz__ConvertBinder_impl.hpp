#pragma once
// IWYU pragma private; include "System/Dynamic/ConvertBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__ConvertBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::ConvertBinder.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Dynamic::ConvertBinder::*)()>(&::System::Dynamic::ConvertBinder::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4100c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ConvertBinder.FallbackConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::ConvertBinder::*)(::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::ConvertBinder::FallbackConvert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4100c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "FallbackConvert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ConvertBinder.FallbackConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::ConvertBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::ConvertBinder::FallbackConvert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ConvertBinder.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::ConvertBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>)>(
    &::System::Dynamic::ConvertBinder::Bind)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4100c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Dynamic::ConvertBinder::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Dynamic::ConvertBinder::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Dynamic::ConvertBinder::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* System::Dynamic::ConvertBinder::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::ConvertBinder::FallbackConvert(::System::Dynamic::DynamicMetaObject* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "FallbackConvert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::ConvertBinder::FallbackConvert(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, errorSuggestion);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::ConvertBinder::Bind(::System::Dynamic::DynamicMetaObject* target,
                                                                                  ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ConvertBinder*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::DynamicMetaObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, args);
}
// Ctor Parameters []
constexpr ::System::Dynamic::ConvertBinder::ConvertBinder() {}
