#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalTrack.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalTrack_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalTrack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalTrack::*)()>(&::UnityEngine::Timeline::SignalTrack::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x680fb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::SignalTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalTrack* UnityEngine::Timeline::SignalTrack::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::SignalTrack*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalTrack::SignalTrack()   {
}
