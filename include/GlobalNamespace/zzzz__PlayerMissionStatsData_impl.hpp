#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMissionStatsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_missionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerMissionStatsData::*)()>(
    &::GlobalNamespace::PlayerMissionStatsData::get_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23727ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                                                                               "get_missionId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_cleared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerMissionStatsData::*)()>(&::GlobalNamespace::PlayerMissionStatsData::get_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23727b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), "get_cleared",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.set_cleared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(bool)>(&::GlobalNamespace::PlayerMissionStatsData::set_cleared)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23727bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), "set_cleared", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(::StringW, bool)>(
    &::GlobalNamespace::PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23727c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerMissionStatsData::__get__missionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionId;
}
constexpr ::StringW const& GlobalNamespace::PlayerMissionStatsData::__get__missionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionId;
}
constexpr void GlobalNamespace::PlayerMissionStatsData::__set__missionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerMissionStatsData::__get__cleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cleared;
}
constexpr bool const& GlobalNamespace::PlayerMissionStatsData::__get__cleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cleared;
}
constexpr void GlobalNamespace::PlayerMissionStatsData::__set__cleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cleared = value;
}
inline ::StringW GlobalNamespace::PlayerMissionStatsData::get_missionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), "get_missionId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMissionStatsData::get_cleared() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), "get_cleared",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMissionStatsData::set_cleared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), "set_cleared", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerMissionStatsData* GlobalNamespace::PlayerMissionStatsData::New_ctor(::StringW missionId, bool cleared) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerMissionStatsData*>(missionId, cleared));
}
inline void GlobalNamespace::PlayerMissionStatsData::_ctor(::StringW missionId, bool cleared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionId, cleared);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMissionStatsData::PlayerMissionStatsData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
