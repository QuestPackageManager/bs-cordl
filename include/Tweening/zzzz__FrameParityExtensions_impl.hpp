#pragma once
// IWYU pragma private; include "Tweening/FrameParityExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tweening/zzzz__FrameParityExtensions_def.hpp"
#include "Tweening/zzzz__FrameParity_def.hpp"
//  Writing Method size for method: ::Tweening::FrameParityExtensions.GetSwitchedParity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::FrameParity (*)(::Tweening::FrameParity)>(&::Tweening::FrameParityExtensions::GetSwitchedParity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x622b308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FrameParityExtensions*>::get(), "GetSwitchedParity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FrameParity>::get() })));
    return ___internal_method;
  }
};
inline ::Tweening::FrameParity Tweening::FrameParityExtensions::GetSwitchedParity(::Tweening::FrameParity frameParity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::FrameParityExtensions*>::get(), "GetSwitchedParity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FrameParity>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::FrameParity, false>(nullptr, ___internal_method, frameParity);
}
// Ctor Parameters []
constexpr ::Tweening::FrameParityExtensions::FrameParityExtensions() {}
