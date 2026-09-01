#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\AvatarEditorResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AvatarEditorResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AvatarEditorResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dedcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AvatarEditorResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_get_RequestSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr bool const& Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_get_RequestSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr void Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_set_RequestSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequestSent = value;
}
inline void Oculus::Platform::Models::AvatarEditorResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AvatarEditorResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Models::AvatarEditorResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AvatarEditorResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AvatarEditorResult::AvatarEditorResult() {}
