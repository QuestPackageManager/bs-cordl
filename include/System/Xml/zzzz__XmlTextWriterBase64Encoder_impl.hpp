#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriterBase64Encoder.hpp"
#include "System/Xml/zzzz__Base64Encoder_impl.hpp"
#include "System/Xml/zzzz__XmlTextWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlTextEncoder_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlTextWriterBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriterBase64Encoder::*)(::System::Xml::XmlTextEncoder*)>(
    &::System::Xml::XmlTextWriterBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f764b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriterBase64Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextEncoder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriterBase64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriterBase64Encoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriterBase64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f764d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriterBase64Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriterBase64Encoder*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlTextEncoder*& System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_get_xmlTextEncoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTextEncoder;
}
constexpr ::System::Xml::XmlTextEncoder* const& System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_get_xmlTextEncoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTextEncoder;
}
constexpr void System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_set_xmlTextEncoder(::System::Xml::XmlTextEncoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlTextEncoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlTextWriterBase64Encoder::_ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriterBase64Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextEncoder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlTextEncoder);
}
inline void System::Xml::XmlTextWriterBase64Encoder::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriterBase64Encoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, index, count);
}
inline ::System::Xml::XmlTextWriterBase64Encoder* System::Xml::XmlTextWriterBase64Encoder::New_ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextWriterBase64Encoder*>(xmlTextEncoder));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriterBase64Encoder::XmlTextWriterBase64Encoder() {}
