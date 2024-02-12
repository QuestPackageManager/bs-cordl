#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__SignatureTypeExtensions_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.MatchesParameterTypeExactly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Reflection::ParameterInfo*)>(
    &::System::Reflection::SignatureTypeExtensions::MatchesParameterTypeExactly)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x250ac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "MatchesParameterTypeExactly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.MatchesExactly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::SignatureType*, ::System::Type*)>(
    &::System::Reflection::SignatureTypeExtensions::MatchesExactly)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x250ad18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "MatchesExactly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryResolveAgainstGenericMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Reflection::SignatureType*, ::System::Reflection::MethodInfo*)>(
    &::System::Reflection::SignatureTypeExtensions::TryResolveAgainstGenericMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x250b0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryResolveAgainstGenericMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Reflection::SignatureType*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Reflection::SignatureTypeExtensions::TryResolve)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x250b0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryResolve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakeArrayType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x250b4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeArrayType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, int32_t)>(&::System::Reflection::SignatureTypeExtensions::TryMakeArrayType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x250b550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeArrayType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeByRefType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakeByRefType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x250b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeByRefType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakePointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakePointerType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x250b688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakePointerType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Reflection::SignatureTypeExtensions::TryMakeGenericType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x250b724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeGenericType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Reflection::SignatureTypeExtensions::MatchesParameterTypeExactly(::System::Type* pattern, ::System::Reflection::ParameterInfo* parameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "MatchesParameterTypeExactly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, parameter);
}
inline bool System::Reflection::SignatureTypeExtensions::MatchesExactly(::System::Reflection::SignatureType* pattern, ::System::Type* actual) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "MatchesExactly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, actual);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryResolveAgainstGenericMethod(::System::Reflection::SignatureType* signatureType,
                                                                                                   ::System::Reflection::MethodInfo* genericMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryResolveAgainstGenericMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, signatureType, genericMethod);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryResolve(::System::Reflection::SignatureType* signatureType,
                                                                               ::ArrayW<::System::Type*, ::Array<::System::Type*>*> genericMethodParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryResolve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::SignatureType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, signatureType, genericMethodParameters);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeArrayType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeArrayType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeArrayType(::System::Type* type, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeArrayType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type, rank);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeByRefType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeByRefType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakePointerType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakePointerType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeGenericType(::System::Type* type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> instantiation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::SignatureTypeExtensions*>::get(), "TryMakeGenericType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type, instantiation);
}
// Ctor Parameters []
constexpr ::System::Reflection::SignatureTypeExtensions::SignatureTypeExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
