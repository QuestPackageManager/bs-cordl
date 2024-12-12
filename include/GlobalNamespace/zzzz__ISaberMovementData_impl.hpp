#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberMovementData.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::ISaberMovementData::get_lastAddedData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(this, ___internal_method);
}
inline void GlobalNamespace::ISaberMovementData::AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::ISaberMovementData::RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::ISaberMovementData::RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline float_t GlobalNamespace::ISaberMovementData::ComputeSwingRating(float_t overrideSegmentAngle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, overrideSegmentAngle);
}
inline float_t GlobalNamespace::ISaberMovementData::ComputeSwingRating() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
