#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SerializationBinderAdapter.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationBinderAdapter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(
    ::System::Runtime::Serialization::SerializationBinder*)>(&::Newtonsoft::Json::Serialization::SerializationBinderAdapter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3f033ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter.BindToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3f03414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), "BindToType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter.BindToName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(
    ::System::Type*, ::ByRef<::StringW>, ::ByRef<::StringW>)>(&::Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3f03434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), "BindToName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::SerializationBinder*& Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_get_SerializationBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializationBinder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_get_SerializationBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializationBinder;
}
constexpr void Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_set_SerializationBinder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SerializationBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::SerializationBinderAdapter::_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationBinder);
}
inline ::System::Type* Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToType(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), "BindToType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyName, typeName);
}
inline void Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToName(::System::Type* serializedType, ::ByRef<::StringW> assemblyName, ::ByRef<::StringW> typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>::get(), "BindToName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedType, assemblyName, typeName);
}
inline ::Newtonsoft::Json::Serialization::SerializationBinderAdapter*
Newtonsoft::Json::Serialization::SerializationBinderAdapter::New_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(serializationBinder));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr Newtonsoft::Json::Serialization::SerializationBinderAdapter::operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::Serialization::SerializationBinderAdapter::i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::SerializationBinderAdapter::SerializationBinderAdapter() {}
