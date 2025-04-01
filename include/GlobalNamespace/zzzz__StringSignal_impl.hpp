#pragma once
// IWYU pragma private; include "GlobalNamespace/StringSignal.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
#include "GlobalNamespace/zzzz__StringSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringSignal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StringSignal::*)()>(&::GlobalNamespace::StringSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x39bff90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringSignal*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StringSignal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringSignal*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StringSignal* GlobalNamespace::StringSignal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StringSignal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringSignal::StringSignal() {}
