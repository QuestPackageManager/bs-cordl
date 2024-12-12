#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlMembersMapping.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlMembersMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMemberMapping_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlMembersMapping.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlMembersMapping::*)()>(
    &::System::Xml::Serialization::XmlMembersMapping::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4371484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlMembersMapping*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMembersMapping.get_HasWrapperElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlMembersMapping::*)()>(
    &::System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43714a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlMembersMapping*>::get(),
                                                                               "get_HasWrapperElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__hasWrapperElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasWrapperElement;
}
constexpr bool const& System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__hasWrapperElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasWrapperElement;
}
constexpr void System::Xml::Serialization::XmlMembersMapping::__cordl_internal_set__hasWrapperElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasWrapperElement = value;
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*>&
System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__mapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*> const&
System::Xml::Serialization::XmlMembersMapping::__cordl_internal_get__mapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapping;
}
constexpr void System::Xml::Serialization::XmlMembersMapping::__cordl_internal_set__mapping(
    ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mapping)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t System::Xml::Serialization::XmlMembersMapping::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlMembersMapping*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlMembersMapping*>::get(),
                                                                             "get_HasWrapperElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlMembersMapping::XmlMembersMapping() {}
