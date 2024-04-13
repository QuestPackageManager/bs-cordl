#pragma once
#include "System/Runtime/Serialization/zzzz__SerializationBinder_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)()>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x292c4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetTypeFromTypeNameKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>)>(
        &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x292c5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), "GetTypeFromTypeNameKey",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetGenericTypeFromTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::System::Reflection::Assembly*)>(
        &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetGenericTypeFromTypeName)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x292c9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(),
                                                 "GetGenericTypeFromTypeName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetTypeByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>)>(
        &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeByName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x292cc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), "GetTypeByName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.BindToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x292ccdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.BindToName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(
    ::System::Type*, ByRef<::StringW>, ByRef<::StringW>)>(&::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x292cd58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), 4));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr Newtonsoft::Json::Serialization::DefaultSerializationBinder::operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>*&
Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_get__typeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeCache;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>*> const&
Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_get__typeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeCache;
}
constexpr void Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_set__typeCache(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::setStaticF_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get>(
      std::forward<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(value));
}
inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get>();
}
inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>());
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW> typeNameKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), "GetTypeFromTypeNameKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeNameKey);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetGenericTypeFromTypeName(::StringW typeName, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(),
                                               "GetGenericTypeFromTypeName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeName, assembly);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeByName(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW> typeNameKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), "GetTypeByName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeNameKey);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyName, typeName);
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedType, assemblyName, typeName);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::DefaultSerializationBinder() {}
