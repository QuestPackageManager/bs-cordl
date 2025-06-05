#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationSection.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.DeserializeSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::ConfigurationSection::*)(::System::Xml::XmlReader*)>(
    &::System::Configuration::ConfigurationSection::DeserializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x408b830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.IsModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Configuration::ConfigurationSection::*)()>(
    &::System::Configuration::ConfigurationSection::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x408b868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.ResetModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::ConfigurationSection::*)()>(
    &::System::Configuration::ConfigurationSection::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x408b8a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.SerializeSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Configuration::ConfigurationSection::*)(
    ::System::Configuration::ConfigurationElement*, ::StringW, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::ConfigurationSection::SerializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x408b8d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 9));
    return ___internal_method;
  }
};
inline void System::Configuration::ConfigurationSection::DeserializeSection(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool System::Configuration::ConfigurationSection::IsModified() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Configuration::ConfigurationSection::ResetModified() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Configuration::ConfigurationSection::SerializeSection(::System::Configuration::ConfigurationElement* parentElement, ::StringW name,
                                                                               ::System::Configuration::ConfigurationSaveMode saveMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, parentElement, name, saveMode);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationSection::ConfigurationSection() {}
