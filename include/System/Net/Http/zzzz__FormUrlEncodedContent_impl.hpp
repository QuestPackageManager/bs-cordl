#pragma once
// IWYU pragma private; include "System\Net\Http\FormUrlEncodedContent.hpp"
#include "System/Net/Http/zzzz__ByteArrayContent_impl.hpp"
#include "System/Net/Http/zzzz__FormUrlEncodedContent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
//  Writing Method size for method: ::System::Net::Http::FormUrlEncodedContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::FormUrlEncodedContent::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*)>(&::System::Net::Http::FormUrlEncodedContent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60dadc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::FormUrlEncodedContent.EncodeContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*)>(
    &::System::Net::Http::FormUrlEncodedContent::EncodeContent)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x60dae74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(),
                            { "EncodeContent", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::FormUrlEncodedContent.SerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Net::Http::FormUrlEncodedContent::SerializeValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60db420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(), { "SerializeValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::FormUrlEncodedContent::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameValueCollection);
}
inline ::ArrayW<uint8_t>
System::Net::Http::FormUrlEncodedContent::EncodeContent(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(),
                          { "EncodeContent", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, nameValueCollection);
}
inline ::ArrayW<uint8_t> System::Net::Http::FormUrlEncodedContent::SerializeValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::FormUrlEncodedContent*>(), { "SerializeValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Net::Http::FormUrlEncodedContent*
System::Net::Http::FormUrlEncodedContent::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* nameValueCollection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::FormUrlEncodedContent*>(nameValueCollection));
}
// Ctor Parameters []
constexpr ::System::Net::Http::FormUrlEncodedContent::FormUrlEncodedContent() {}
