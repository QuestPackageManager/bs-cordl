#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::Libraries::HM::HMLib::VR::HapticPresetSO.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Libraries::HM::HMLib::VR::HapticPresetSO::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*)>(
    &::Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1fac200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Libraries::HM::HMLib::VR::HapticPresetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Libraries::HM::HMLib::VR::HapticPresetSO::*)()>(&::Libraries::HM::HMLib::VR::HapticPresetSO::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fac22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& Libraries::HM::HMLib::VR::HapticPresetSO::__get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& Libraries::HM::HMLib::VR::HapticPresetSO::__get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& Libraries::HM::HMLib::VR::HapticPresetSO::__get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr float_t const& Libraries::HM::HMLib::VR::HapticPresetSO::__get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strength = value;
}
constexpr float_t& Libraries::HM::HMLib::VR::HapticPresetSO::__get__frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequency;
}
constexpr float_t const& Libraries::HM::HMLib::VR::HapticPresetSO::__get__frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequency;
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frequency = value;
}
constexpr bool& Libraries::HM::HMLib::VR::HapticPresetSO::__get__continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuous;
}
constexpr bool const& Libraries::HM::HMLib::VR::HapticPresetSO::__get__continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuous;
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continuous = value;
}
inline void Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapticPreset);
}
inline ::Libraries::HM::HMLib::VR::HapticPresetSO* Libraries::HM::HMLib::VR::HapticPresetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Libraries::HM::HMLib::VR::HapticPresetSO*>());
}
inline void Libraries::HM::HMLib::VR::HapticPresetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO::HapticPresetSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
