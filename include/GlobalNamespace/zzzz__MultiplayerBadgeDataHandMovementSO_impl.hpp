#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataHandMovementSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataHandMovementSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14d27b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x14d27dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::MultiplayerBadgeDataHandMovementSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO* GlobalNamespace::MultiplayerBadgeDataHandMovementSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataHandMovementSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::MultiplayerBadgeDataHandMovementSO() {}
