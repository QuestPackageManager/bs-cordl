#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerFactory_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializerFactory::*)()>(
    &::System::Xml::Serialization::XmlSerializerFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4393370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (
    ::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*)>(&::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4393378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (
    ::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43935f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerFactory.CreateSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (
    ::System::Xml::Serialization::XmlSerializerFactory::*)(::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                                           ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(&::System::Xml::Serialization::XmlSerializerFactory::CreateSerializer)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x439338c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializerFactory::setStaticF_serializersBySource(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "serializersBySource",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializerFactory::getStaticF_serializersBySource() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "serializersBySource",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get>();
}
inline void System::Xml::Serialization::XmlSerializerFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*, false>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*, false>(this, ___internal_method, type, root);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializerFactory::CreateSerializer(::System::Type* type,
                                                                                                                       ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes,
                                                                                                                       ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                       ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerFactory*>::get(), "CreateSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*, false>(this, ___internal_method, type, overrides, extraTypes, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlSerializerFactory* System::Xml::Serialization::XmlSerializerFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializerFactory*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializerFactory::XmlSerializerFactory() {}
