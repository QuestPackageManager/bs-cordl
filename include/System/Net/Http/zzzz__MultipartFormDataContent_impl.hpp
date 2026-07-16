#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartFormDataContent.hpp"
#include "System/Net/Http/zzzz__MultipartContent_impl.hpp"
#include "System/Net/Http/zzzz__MultipartFormDataContent_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)()>(&::System::Net::Http::MultipartFormDataContent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60dc1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::MultipartFormDataContent::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60dc1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(), { ::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*, ::StringW, ::StringW)>(
    &::System::Net::Http::MultipartFormDataContent::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60dc2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(),
                                                             { "Add", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.AddContentDisposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*, ::StringW, ::StringW)>(
    &::System::Net::Http::MultipartFormDataContent::AddContentDisposition)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60dc214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(),
                                                { "AddContentDisposition", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MultipartFormDataContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::MultipartFormDataContent::Add(::System::Net::Http::HttpContent* content) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline void System::Net::Http::MultipartFormDataContent::Add(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(),
                                                           { "Add", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, name, fileName);
}
inline void System::Net::Http::MultipartFormDataContent::AddContentDisposition(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MultipartFormDataContent*>(),
                                              { "AddContentDisposition", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, name, fileName);
}
inline ::System::Net::Http::MultipartFormDataContent* System::Net::Http::MultipartFormDataContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::MultipartFormDataContent*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::MultipartFormDataContent::MultipartFormDataContent() {}
