#pragma once
// IWYU pragma private; include "Oculus/Platform/Media.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Media_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/zzzz__MediaContentType_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Media.ShareToFacebook
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult*>* (*)(::StringW, ::StringW, ::Oculus::Platform::MediaContentType)>(
    &::Oculus::Platform::Media::ShareToFacebook)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5de8250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Media*>(),
                                                { "ShareToFacebook", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::MediaContentType>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult*>* Oculus::Platform::Media::ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath,
                                                                                                                              ::Oculus::Platform::MediaContentType contentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Media*>(),
                                              { "ShareToFacebook", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::MediaContentType>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult*>*>(nullptr, ___internal_method, postTextSuggestion, filePath, contentType);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Media::Media() {}
