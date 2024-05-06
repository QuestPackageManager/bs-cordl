#pragma once
#include "System/Collections/zzzz__ArrayList_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapElementInfoList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapElementInfoList::*)()>(
    &::System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eecc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlTypeMapElementInfoList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapElementInfoList*>());
}
inline void System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList::XmlTypeMapElementInfoList() {}
