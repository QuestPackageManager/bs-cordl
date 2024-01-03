#pragma once
#include "Zenject/zzzz__SignalCopyBinder_impl.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::SignalTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec22e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.get_SignalBindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDeclarationBindInfo* (::Zenject::SignalTickPriorityCopyBinder::*)()>(
    &::Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec2840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(),
                                                                               "get_SignalBindInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.set_SignalBindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec2848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), "set_SignalBindInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.WithTickPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalCopyBinder* (::Zenject::SignalTickPriorityCopyBinder::*)(int32_t)>(
    &::Zenject::SignalTickPriorityCopyBinder::WithTickPriority)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec2850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), "WithTickPriority",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalDeclarationBindInfo*& Zenject::SignalTickPriorityCopyBinder::__get__SignalBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalBindInfo_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalDeclarationBindInfo*> const& Zenject::SignalTickPriorityCopyBinder::__get__SignalBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalBindInfo_k__BackingField;
}
constexpr void Zenject::SignalTickPriorityCopyBinder::__set__SignalBindInfo_k__BackingField(::Zenject::SignalDeclarationBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SignalBindInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SignalTickPriorityCopyBinder* Zenject::SignalTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SignalTickPriorityCopyBinder*>(signalBindInfo));
}
inline void Zenject::SignalTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::SignalDeclarationBindInfo* Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(),
                                                                             "get_SignalBindInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclarationBindInfo*, false>(this, ___internal_method);
}
inline void Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo(::Zenject::SignalDeclarationBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), "set_SignalBindInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::SignalCopyBinder* Zenject::SignalTickPriorityCopyBinder::WithTickPriority(int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalTickPriorityCopyBinder*>::get(), "WithTickPriority", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal_method, priority);
}
// Ctor Parameters []
constexpr ::Zenject::SignalTickPriorityCopyBinder::SignalTickPriorityCopyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
