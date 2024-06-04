#pragma once
// IWYU pragma private; include "GlobalNamespace/ICutScoreBufferDidChangeReceiver.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICutScoreBufferDidChangeReceiver.HandleCutScoreBufferDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ICutScoreBufferDidChangeReceiver::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer);
}
