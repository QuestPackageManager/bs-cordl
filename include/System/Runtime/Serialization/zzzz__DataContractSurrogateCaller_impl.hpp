#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractSurrogateCaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSurrogateCaller_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetDataContractType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSurrogateCaller::GetDataContractType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f3b364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetDataContractType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetObjectToSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Object*, ::System::Type*, ::System::Type*)>(
        &::System::Runtime::Serialization::DataContractSurrogateCaller::GetObjectToSerialize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f3b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetObjectToSerialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetDeserializedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Object*, ::System::Type*, ::System::Type*)>(
        &::System::Runtime::Serialization::DataContractSurrogateCaller::GetDeserializedObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f3b544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetDeserializedObject",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Runtime::Serialization::DataContractSurrogateCaller::GetDataContractType(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetDataContractType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, surrogate, type);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSurrogateCaller::GetObjectToSerialize(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj,
                                                                                                           ::System::Type* objType, ::System::Type* membertype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetObjectToSerialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, surrogate, obj, objType, membertype);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSurrogateCaller::GetDeserializedObject(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj,
                                                                                                            ::System::Type* objType, ::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractSurrogateCaller*>::get(), "GetDeserializedObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataContractSurrogate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, surrogate, obj, objType, memberType);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractSurrogateCaller::DataContractSurrogateCaller() {}
