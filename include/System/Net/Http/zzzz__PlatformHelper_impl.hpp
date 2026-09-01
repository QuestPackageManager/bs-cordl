#pragma once
// IWYU pragma private; include "System\Net\Http\PlatformHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__PlatformHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__StreamContent_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::Http::PlatformHelper.IsContentHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::PlatformHelper::IsContentHeader)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d834c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(), { "IsContentHeader", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::PlatformHelper.GetSingleHeaderString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::System::Net::Http::PlatformHelper::GetSingleHeaderString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d80b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(),
                                                { "GetSingleHeaderString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::PlatformHelper.CreateStreamContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::StreamContent* (*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::PlatformHelper::CreateStreamContent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60d82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(),
                                                             { "CreateStreamContent", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::PlatformHelper::IsContentHeader(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(), { "IsContentHeader", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::StringW System::Net::Http::PlatformHelper::GetSingleHeaderString(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(),
                                              { "GetSingleHeaderString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, values);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::PlatformHelper::CreateStreamContent(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::PlatformHelper*>(),
                                                           { "CreateStreamContent", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::StreamContent*>(nullptr, ___internal_method, stream, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::Http::PlatformHelper::PlatformHelper() {}
