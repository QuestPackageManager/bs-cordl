#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RelativeSfxVolumePerLevelModel::*)(::GlobalNamespace::RelativeSfxVolumePerLevelSO*)>(
    &::GlobalNamespace::RelativeSfxVolumePerLevelModel::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x234d86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelModel.GetRelativeSfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::RelativeSfxVolumePerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x234da20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(), "GetRelativeSfxVolume",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& GlobalNamespace::RelativeSfxVolumePerLevelModel::__get__relativeSfxVolumePerLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerLevelId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const&
GlobalNamespace::RelativeSfxVolumePerLevelModel::__get__relativeSfxVolumePerLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerLevelId;
}
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelModel::__set__relativeSfxVolumePerLevelId(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::RelativeSfxVolumePerLevelModel* GlobalNamespace::RelativeSfxVolumePerLevelModel::New_ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO* relativeSfxVolumePerLevelData) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>(relativeSfxVolumePerLevelData));
}
inline void GlobalNamespace::RelativeSfxVolumePerLevelModel::_ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO* relativeSfxVolumePerLevelData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relativeSfxVolumePerLevelData);
}
inline float_t GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(), "GetRelativeSfxVolume",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, levelId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel::RelativeSfxVolumePerLevelModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
