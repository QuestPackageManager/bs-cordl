#pragma once
// IWYU pragma private; include "System/Xml/XmlConfiguration/XmlReaderSection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XmlConfiguration/zzzz__XmlReaderSection_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.get_ProhibitDefaultUrlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x439381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                                                               "get_ProhibitDefaultUrlResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.CreateDefaultResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlResolver* (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::CreateDefaultResolver)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4393824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                                                               "CreateDefaultResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.get_CollapseWhiteSpaceIntoEmptyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4393878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                                 "get_CollapseWhiteSpaceIntoEmptyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                                                             "get_ProhibitDefaultUrlResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlConfiguration::XmlReaderSection::CreateDefaultResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                                                             "CreateDefaultResolver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*, false>(nullptr, ___internal_method);
}
inline bool System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlConfiguration::XmlReaderSection*>::get(),
                                               "get_CollapseWhiteSpaceIntoEmptyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlConfiguration::XmlReaderSection::XmlReaderSection() {}
