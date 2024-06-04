#pragma once
// IWYU pragma private; include "GlobalNamespace/IBladeMovementData.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_bladeSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::IBladeMovementData::*)()>(&::GlobalNamespace::IBladeMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_lastAddedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(
    &::GlobalNamespace::IBladeMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBladeMovementData.get_prevAddedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::IBladeMovementData::*)()>(
    &::GlobalNamespace::IBladeMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 2));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IBladeMovementData::get_bladeSpeed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::IBladeMovementData::get_lastAddedData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::IBladeMovementData::get_prevAddedData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBladeMovementData*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(this, ___internal_method);
}
