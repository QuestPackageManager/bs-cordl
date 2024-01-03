#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x296e8cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)(bool)>(&::System::Diagnostics::AsyncStreamReader::Dispose)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x296e8dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.CancelOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::CancelOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ec4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                                                               "CancelOperation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Diagnostics::AsyncStreamReader::__get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Diagnostics::AsyncStreamReader::__get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Diagnostics::AsyncStreamReader::__get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Diagnostics::AsyncStreamReader::__get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Decoder*& System::Diagnostics::AsyncStreamReader::__get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& System::Diagnostics::AsyncStreamReader::__get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_decoder(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Diagnostics::AsyncStreamReader::__get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Diagnostics::AsyncStreamReader::__get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Diagnostics::AsyncStreamReader::__get_charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charBuffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Diagnostics::AsyncStreamReader::__get_charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charBuffer;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::AsyncStreamReader::__get_cancelOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelOperation;
}
constexpr bool const& System::Diagnostics::AsyncStreamReader::__get_cancelOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelOperation;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_cancelOperation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelOperation = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Diagnostics::AsyncStreamReader::__get_eofEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eofEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::Diagnostics::AsyncStreamReader::__get_eofEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eofEvent;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_eofEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eofEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Diagnostics::AsyncStreamReader::__get_syncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Diagnostics::AsyncStreamReader::__get_syncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncObject;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_syncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IAsyncResult*& System::Diagnostics::AsyncStreamReader::__get_asyncReadResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::IAsyncResult*> const& System::Diagnostics::AsyncStreamReader::__get_asyncReadResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadResult;
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_asyncReadResult(::System::IAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncReadResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::AsyncStreamReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::AsyncStreamReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::AsyncStreamReader::CancelOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                                                             "CancelOperation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::AsyncStreamReader::AsyncStreamReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
