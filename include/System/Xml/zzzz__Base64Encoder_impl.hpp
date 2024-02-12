#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__Base64Encoder_def.hpp"
//  Writing Method size for method: ::System::Xml::Base64Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Base64Encoder::*)()>(&::System::Xml::Base64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2850dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Base64Encoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::Base64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Base64Encoder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2850e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Base64Encoder::*)()>(&::System::Xml::Base64Encoder::Flush)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x285117c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytes;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_leftOverBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftOverBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytesCount;
}
constexpr int32_t const& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytesCount;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_leftOverBytesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftOverBytesCount = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::Base64Encoder::__cordl_internal_get_charsLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsLine;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::Base64Encoder::__cordl_internal_get_charsLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsLine;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_charsLine(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charsLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Base64Encoder* System::Xml::Base64Encoder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Base64Encoder*>());
}
inline void System::Xml::Base64Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Base64Encoder::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, index, count);
}
inline void System::Xml::Base64Encoder::Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::Base64Encoder::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Base64Encoder*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Base64Encoder::Base64Encoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
