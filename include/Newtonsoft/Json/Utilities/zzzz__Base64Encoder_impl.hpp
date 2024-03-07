#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__Base64Encoder_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::System::IO::TextWriter*)>(
    &::Newtonsoft::Json::Utilities::Base64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27ac4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x27ac540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)()>(&::Newtonsoft::Json::Utilities::Base64Encoder::Flush)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27ac8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::Base64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::Base64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27ac88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "WriteChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__charsLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsLine;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__charsLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsLine;
}
constexpr void Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_set__charsLine(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____charsLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::TextWriter*& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_set__writer(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__leftOverBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftOverBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__leftOverBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftOverBytes;
}
constexpr void Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_set__leftOverBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftOverBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__leftOverBytesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftOverBytesCount;
}
constexpr int32_t const& Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_get__leftOverBytesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftOverBytesCount;
}
constexpr void Newtonsoft::Json::Utilities::Base64Encoder::__cordl_internal_set__leftOverBytesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftOverBytesCount = value;
}
inline ::Newtonsoft::Json::Utilities::Base64Encoder* Newtonsoft::Json::Utilities::Base64Encoder::New_ctor(::System::IO::TextWriter* writer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::Base64Encoder*>(writer));
}
inline void Newtonsoft::Json::Utilities::Base64Encoder::_ctor(::System::IO::TextWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void Newtonsoft::Json::Utilities::Base64Encoder::Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void Newtonsoft::Json::Utilities::Base64Encoder::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::Base64Encoder::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::Base64Encoder*>::get(), "WriteChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, index, count);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder() {}
