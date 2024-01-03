#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__CachedOpenTypeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__CachedOpenTypeProvider_def.hpp"
#include "Zenject/zzzz__CachedProvider_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::__CachedOpenTypeProvider____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__CachedOpenTypeProvider____c::*)()>(&::Zenject::__CachedOpenTypeProvider____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f055f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__CachedOpenTypeProvider____c._get_NumInstances_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__CachedOpenTypeProvider____c::*)(::Zenject::CachedProvider*)>(
    &::Zenject::__CachedOpenTypeProvider____c::_get_NumInstances_b__8_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f055f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), "<get_NumInstances>b__8_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::CachedProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__CachedOpenTypeProvider____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__CachedOpenTypeProvider____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f05698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__CachedOpenTypeProvider____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__CachedOpenTypeProvider____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f056f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Zenject::__CachedOpenTypeProvider____c::setStaticF___9(::Zenject::__CachedOpenTypeProvider____c* value) {
  ::cordl_internals::setStaticField<::Zenject::__CachedOpenTypeProvider____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get>(
      std::forward<::Zenject::__CachedOpenTypeProvider____c*>(value));
}
inline ::Zenject::__CachedOpenTypeProvider____c* Zenject::__CachedOpenTypeProvider____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__CachedOpenTypeProvider____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get>();
}
inline void Zenject::__CachedOpenTypeProvider____c::setStaticF___9__8_0(::System::Func_2<::Zenject::CachedProvider*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::CachedProvider*, int32_t>*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get>(
      std::forward<::System::Func_2<::Zenject::CachedProvider*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::CachedProvider*, int32_t>* Zenject::__CachedOpenTypeProvider____c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::CachedProvider*, int32_t>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get>();
}
inline ::Zenject::__CachedOpenTypeProvider____c* Zenject::__CachedOpenTypeProvider____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__CachedOpenTypeProvider____c*>());
}
inline void Zenject::__CachedOpenTypeProvider____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Zenject::__CachedOpenTypeProvider____c::_get_NumInstances_b__8_0(::Zenject::CachedProvider* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), "<get_NumInstances>b__8_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::CachedProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__CachedOpenTypeProvider____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__CachedOpenTypeProvider____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__CachedOpenTypeProvider____c*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__CachedOpenTypeProvider____c::__CachedOpenTypeProvider____c() {}
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)(::Zenject::IProvider*)>(&::Zenject::CachedOpenTypeProvider::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f04e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f04f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "get_IsCached",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f04f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(),
                                                                               "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.get_NumInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::get_NumInstances)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2f04f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "get_NumInstances",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.ClearCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)()>(&::Zenject::CachedOpenTypeProvider::ClearCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2f050a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "ClearCache",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::CachedOpenTypeProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::CachedOpenTypeProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f050f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedOpenTypeProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedOpenTypeProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2f051a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::CachedOpenTypeProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::CachedOpenTypeProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
constexpr ::Zenject::IProvider*& Zenject::CachedOpenTypeProvider::__get__creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& Zenject::CachedOpenTypeProvider::__get__creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
constexpr void Zenject::CachedOpenTypeProvider::__set__creator(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____creator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*& Zenject::CachedOpenTypeProvider::__get__providerMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*> const&
Zenject::CachedOpenTypeProvider::__get__providerMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerMap;
}
constexpr void Zenject::CachedOpenTypeProvider::__set__providerMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providerMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::CachedOpenTypeProvider* Zenject::CachedOpenTypeProvider::New_ctor(::Zenject::IProvider* creator) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::CachedOpenTypeProvider*>(creator));
}
inline void Zenject::CachedOpenTypeProvider::_ctor(::Zenject::IProvider* creator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creator);
}
inline bool Zenject::CachedOpenTypeProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "get_IsCached",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Zenject::CachedOpenTypeProvider::get_NumInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "get_NumInstances",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Zenject::CachedOpenTypeProvider::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "ClearCache",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::CachedOpenTypeProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
inline void Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                            ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedOpenTypeProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
constexpr ::Zenject::CachedOpenTypeProvider::CachedOpenTypeProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
