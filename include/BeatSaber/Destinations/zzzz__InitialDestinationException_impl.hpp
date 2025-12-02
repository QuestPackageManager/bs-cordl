#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationException_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::InitialDestinationException::*)()>(
    &::BeatSaber::Destinations::InitialDestinationException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x31822ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::InitialDestinationException*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::InitialDestinationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::InitialDestinationException*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::InitialDestinationException* BeatSaber::Destinations::InitialDestinationException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::InitialDestinationException*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationException::InitialDestinationException() {}
