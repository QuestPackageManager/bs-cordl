#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LaunchBlockFlowResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchBlockFlowResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LaunchBlockFlowResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LaunchBlockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5defe6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchBlockFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_get_DidBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidBlock;
}
constexpr bool const& Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_get_DidBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidBlock;
}
constexpr void Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_set_DidBlock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidBlock = value;
}
constexpr bool& Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_get_DidCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr bool const& Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_get_DidCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr void Oculus::Platform::Models::LaunchBlockFlowResult::__cordl_internal_set_DidCancel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidCancel = value;
}
inline void Oculus::Platform::Models::LaunchBlockFlowResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchBlockFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* Oculus::Platform::Models::LaunchBlockFlowResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LaunchBlockFlowResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchBlockFlowResult::LaunchBlockFlowResult() {}
