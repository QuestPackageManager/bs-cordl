#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HeadBodyOffsetSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadBodyOffsetSO.get_headNeckOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HeadBodyOffsetSO::*)()>(
    &::GlobalNamespace::HeadBodyOffsetSO::get_headNeckOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20d5a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(),
                                                                               "get_headNeckOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadBodyOffsetSO.get_verticalOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::HeadBodyOffsetSO::*)()>(&::GlobalNamespace::HeadBodyOffsetSO::get_verticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d5a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(),
                                                                               "get_verticalOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadBodyOffsetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadBodyOffsetSO::*)()>(&::GlobalNamespace::HeadBodyOffsetSO::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20d5a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::HeadBodyOffsetSO::__get__headNeckOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNeckOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HeadBodyOffsetSO::__get__headNeckOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNeckOffset;
}
constexpr void GlobalNamespace::HeadBodyOffsetSO::__set__headNeckOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headNeckOffset = value;
}
constexpr float_t& GlobalNamespace::HeadBodyOffsetSO::__get__verticalOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalOffset;
}
constexpr float_t const& GlobalNamespace::HeadBodyOffsetSO::__get__verticalOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalOffset;
}
constexpr void GlobalNamespace::HeadBodyOffsetSO::__set__verticalOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalOffset = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::HeadBodyOffsetSO::get_headNeckOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(), "get_headNeckOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::HeadBodyOffsetSO::get_verticalOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(), "get_verticalOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadBodyOffsetSO* GlobalNamespace::HeadBodyOffsetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HeadBodyOffsetSO*>());
}
inline void GlobalNamespace::HeadBodyOffsetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadBodyOffsetSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadBodyOffsetSO::HeadBodyOffsetSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
