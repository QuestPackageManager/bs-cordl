#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ResourceProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::ResourceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ResourceProvider::*)(::StringW, ::System::Type*, bool)>(&::Zenject::ResourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f0a04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResourceProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ResourceProvider::*)()>(&::Zenject::ResourceProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "get_IsCached",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResourceProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ResourceProvider::*)()>(&::Zenject::ResourceProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(),
                                                                               "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResourceProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::ResourceProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::ResourceProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResourceProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ResourceProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::ResourceProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2f0a0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::ResourceProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
constexpr ::System::Type*& Zenject::ResourceProvider::__get__resourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::ResourceProvider::__get__resourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr void Zenject::ResourceProvider::__set__resourceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourceType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Zenject::ResourceProvider::__get__resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr ::StringW const& Zenject::ResourceProvider::__get__resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr void Zenject::ResourceProvider::__set__resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::ResourceProvider::__get__matchSingle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr bool const& Zenject::ResourceProvider::__get__matchSingle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr void Zenject::ResourceProvider::__set__matchSingle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matchSingle = value;
}
inline ::Zenject::ResourceProvider* Zenject::ResourceProvider::New_ctor(::StringW resourcePath, ::System::Type* resourceType, bool matchSingle) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ResourceProvider*>(resourcePath, resourceType, matchSingle));
}
inline void Zenject::ResourceProvider::_ctor(::StringW resourcePath, ::System::Type* resourceType, bool matchSingle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourcePath, resourceType, matchSingle);
}
inline bool Zenject::ResourceProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "get_IsCached",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::ResourceProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::ResourceProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
inline void Zenject::ResourceProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                      ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResourceProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
constexpr ::Zenject::ResourceProvider::ResourceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
