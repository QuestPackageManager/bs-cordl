#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlChoiceIdentifierAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlChoiceIdentifierAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlChoiceIdentifierAttribute.get_MemberName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlChoiceIdentifierAttribute::*)()>(
    &::System::Xml::Serialization::XmlChoiceIdentifierAttribute::get_MemberName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ece338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>::get(), "get_MemberName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlChoiceIdentifierAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlChoiceIdentifierAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlChoiceIdentifierAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ecdea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_get_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_get_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr void System::Xml::Serialization::XmlChoiceIdentifierAttribute::__cordl_internal_set_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::Xml::Serialization::XmlChoiceIdentifierAttribute::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>::get(),
                                                                             "get_MemberName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlChoiceIdentifierAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlChoiceIdentifierAttribute*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlChoiceIdentifierAttribute::XmlChoiceIdentifierAttribute() {}
