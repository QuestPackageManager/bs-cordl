#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionHelpSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionHelpSO.get_missionHelpId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionHelpSO::*)()>(&::GlobalNamespace::MissionHelpSO::get_missionHelpId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ca52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(), "get_missionHelpId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpSO::*)()>(&::GlobalNamespace::MissionHelpSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ca534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MissionHelpSO::__cordl_internal_get__missionHelpId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpId;
}
constexpr ::StringW const& GlobalNamespace::MissionHelpSO::__cordl_internal_get__missionHelpId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpId;
}
constexpr void GlobalNamespace::MissionHelpSO::__cordl_internal_set__missionHelpId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionHelpId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::MissionHelpSO::get_missionHelpId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(), "get_missionHelpId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpSO* GlobalNamespace::MissionHelpSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionHelpSO*>());
}
inline void GlobalNamespace::MissionHelpSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionHelpSO::MissionHelpSO() {}
