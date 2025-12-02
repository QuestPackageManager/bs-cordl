#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/KnownTypeDataContractResolver.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_impl.hpp"
#include "System/Runtime/Serialization/zzzz__KnownTypeDataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerContext*)>(&::System::Runtime::Serialization::KnownTypeDataContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver.TryResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(
    ::System::Type*, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*, ::ByRef<::System::Xml::XmlDictionaryString*>, ::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::KnownTypeDataContractResolver::TryResolveType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f3b798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver.ResolveName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(::StringW, ::StringW, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::KnownTypeDataContractResolver::ResolveName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f3b91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext*& System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext* const& System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::KnownTypeDataContractResolver::_ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool System::Runtime::Serialization::KnownTypeDataContractResolver::TryResolveType(::System::Type* type, ::System::Type* declaredType,
                                                                                          ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver,
                                                                                          ::ByRef<::System::Xml::XmlDictionaryString*> typeName,
                                                                                          ::ByRef<::System::Xml::XmlDictionaryString*> typeNamespace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, declaredType, knownTypeResolver, typeName, typeNamespace);
}
inline ::System::Type* System::Runtime::Serialization::KnownTypeDataContractResolver::ResolveName(::StringW typeName, ::StringW typeNamespace, ::System::Type* declaredType,
                                                                                                  ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KnownTypeDataContractResolver*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeName, typeNamespace, declaredType, knownTypeResolver);
}
inline ::System::Runtime::Serialization::KnownTypeDataContractResolver*
System::Runtime::Serialization::KnownTypeDataContractResolver::New_ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(context));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver::KnownTypeDataContractResolver() {}
