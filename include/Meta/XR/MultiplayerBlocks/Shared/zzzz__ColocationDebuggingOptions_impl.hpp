#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationDebuggingOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationDebuggingOptions_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a6ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_get_visualizeAlignmentAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualizeAlignmentAnchor;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_get_visualizeAlignmentAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualizeAlignmentAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_set_visualizeAlignmentAnchor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualizeAlignmentAnchor = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_get_enableVerboseLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableVerboseLogging;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_get_enableVerboseLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableVerboseLogging;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::__cordl_internal_set_enableVerboseLogging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableVerboseLogging = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::ColocationDebuggingOptions() {}
