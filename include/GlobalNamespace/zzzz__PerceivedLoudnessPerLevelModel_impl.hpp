#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::GlobalNamespace::PerceivedLoudnessPerLevelSO*)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x234d664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.ContainsLevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234d760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "ContainsLevelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessCorrectionByLevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x234d7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetLoudnessCorrectionByLevelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetMaxSfxVolumeByLevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x234d854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetMaxSfxVolumeByLevelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessByLevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x234d7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetLoudnessByLevelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& GlobalNamespace::PerceivedLoudnessPerLevelModel::__get__loudnessLevelPerLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessLevelPerLevelId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const&
GlobalNamespace::PerceivedLoudnessPerLevelModel::__get__loudnessLevelPerLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessLevelPerLevelId;
}
constexpr void GlobalNamespace::PerceivedLoudnessPerLevelModel::__set__loudnessLevelPerLevelId(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loudnessLevelPerLevelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel* GlobalNamespace::PerceivedLoudnessPerLevelModel::New_ctor(::GlobalNamespace::PerceivedLoudnessPerLevelSO* loudnessPerLeveData) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(loudnessPerLeveData));
}
inline void GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor(::GlobalNamespace::PerceivedLoudnessPerLevelSO* loudnessPerLeveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loudnessPerLeveData);
}
inline bool GlobalNamespace::PerceivedLoudnessPerLevelModel::ContainsLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "ContainsLevelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelId);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetLoudnessCorrectionByLevelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, levelId);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetMaxSfxVolumeByLevelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, levelId);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>::get(), "GetLoudnessByLevelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, levelId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel::PerceivedLoudnessPerLevelModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
