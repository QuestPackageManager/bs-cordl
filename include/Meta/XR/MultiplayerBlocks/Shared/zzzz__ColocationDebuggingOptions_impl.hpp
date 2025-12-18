#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationDebuggingOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationDebuggingOptions_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58c18fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions::ColocationDebuggingOptions() {}
