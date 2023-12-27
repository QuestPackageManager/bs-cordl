#pragma once
#include "System/Xml/zzzz__Base64Encoder_impl.hpp"
#include "System/Xml/zzzz__XmlRawWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::System::Xml::XmlRawWriter*)>(
    &::System::Xml::XmlRawWriterBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x284dbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlRawWriterBase64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x284dbe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlRawWriter*& System::Xml::XmlRawWriterBase64Encoder::__get_rawWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rawWriter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> const& System::Xml::XmlRawWriterBase64Encoder::__get_rawWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rawWriter;
}
constexpr void System::Xml::XmlRawWriterBase64Encoder::__set_rawWriter(::System::Xml::XmlRawWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlRawWriterBase64Encoder* System::Xml::XmlRawWriterBase64Encoder::New_ctor(::System::Xml::XmlRawWriter* rawWriter) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlRawWriterBase64Encoder*>(rawWriter));
}
inline void System::Xml::XmlRawWriterBase64Encoder::_ctor(::System::Xml::XmlRawWriter* rawWriter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlRawWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawWriter);
}
inline void System::Xml::XmlRawWriterBase64Encoder::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRawWriterBase64Encoder*>::get(), "WriteChars", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, index, count);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlRawWriterBase64Encoder::XmlRawWriterBase64Encoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
