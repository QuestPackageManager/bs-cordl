#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Xml/zzzz__XmlCachedStream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlCachedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCachedStream::*)(::System::Uri*, ::System::IO::Stream*)>(
    &::System::Xml::XmlCachedStream::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x28a42cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCachedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Xml::XmlCachedStream::__get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Xml::XmlCachedStream::__get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Xml::XmlCachedStream::__set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlCachedStream* System::Xml::XmlCachedStream::New_ctor(::System::Uri* uri, ::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlCachedStream*>(uri, stream));
}
inline void System::Xml::XmlCachedStream::_ctor(::System::Uri* uri, ::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCachedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, stream);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCachedStream::XmlCachedStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
