#pragma once
// IWYU pragma private; include "GlobalNamespace/IPlayerDataModel.hpp"
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPlayerDataModel.get_playerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::IPlayerDataModel::*)()>(
    &::GlobalNamespace::IPlayerDataModel::get_playerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlayerDataModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlayerDataModel*>::get(), 0));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayerData* GlobalNamespace::IPlayerDataModel::get_playerData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlayerDataModel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method);
}
