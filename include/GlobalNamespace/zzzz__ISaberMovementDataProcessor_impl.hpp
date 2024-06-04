#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementDataProcessor.ProcessNewData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISaberMovementDataProcessor::*)(
    ::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&::GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementDataProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementDataProcessor*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData,
                                                                         bool prevDataAreValid) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementDataProcessor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newData, prevData, prevDataAreValid);
}
