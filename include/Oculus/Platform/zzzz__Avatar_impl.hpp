#pragma once
// IWYU pragma private; include "Oculus\Platform\Avatar.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Avatar_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/zzzz__AvatarEditorOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Avatar.LaunchAvatarEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* (*)(::Oculus::Platform::AvatarEditorOptions*)>(
    &::Oculus::Platform::Avatar::LaunchAvatarEditor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de68b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Avatar*>(), { "LaunchAvatarEditor", {}, { ::i2c::type_of<::Oculus::Platform::AvatarEditorOptions*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* Oculus::Platform::Avatar::LaunchAvatarEditor(::Oculus::Platform::AvatarEditorOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Avatar*>(), { "LaunchAvatarEditor", {}, { ::i2c::type_of<::Oculus::Platform::AvatarEditorOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>*>(nullptr, ___internal_method, options);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Avatar::Avatar() {}
