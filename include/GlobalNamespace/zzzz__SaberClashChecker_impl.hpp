#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)(::GlobalNamespace::SaberManager*)>(
    &::GlobalNamespace::SaberClashChecker::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2263c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.AreSabersClashing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SaberClashChecker::*)(ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::SaberClashChecker::AreSabersClashing)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x225f95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "AreSabersClashing", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.SegmentToSegmentDist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberClashChecker::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberClashChecker::SegmentToSegmentDist)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2263c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "SegmentToSegmentDist", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)()>(&::GlobalNamespace::SaberClashChecker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2263e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SaberClashChecker::__get__sabersAreClashing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr bool const& GlobalNamespace::SaberClashChecker::__get__sabersAreClashing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr void GlobalNamespace::SaberClashChecker::__set__sabersAreClashing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabersAreClashing = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberClashChecker::__get__clashingPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clashingPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberClashChecker::__get__clashingPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clashingPoint;
}
constexpr void GlobalNamespace::SaberClashChecker::__set__clashingPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clashingPoint = value;
}
constexpr ::GlobalNamespace::Saber*& GlobalNamespace::SaberClashChecker::__get__leftSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& GlobalNamespace::SaberClashChecker::__get__leftSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr void GlobalNamespace::SaberClashChecker::__set__leftSaber(::GlobalNamespace::Saber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftSaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Saber*& GlobalNamespace::SaberClashChecker::__get__rightSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& GlobalNamespace::SaberClashChecker::__get__rightSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr void GlobalNamespace::SaberClashChecker::__set__rightSaber(::GlobalNamespace::Saber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightSaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SaberClashChecker::__get__prevGetFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevGetFrameNum;
}
constexpr int32_t const& GlobalNamespace::SaberClashChecker::__get__prevGetFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevGetFrameNum;
}
constexpr void GlobalNamespace::SaberClashChecker::__set__prevGetFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevGetFrameNum = value;
}
inline void GlobalNamespace::SaberClashChecker::Init(::GlobalNamespace::SaberManager* saberManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberManager);
}
inline bool GlobalNamespace::SaberClashChecker::AreSabersClashing(ByRef<::UnityEngine::Vector3> clashingPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "AreSabersClashing", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clashingPoint);
}
inline float_t GlobalNamespace::SaberClashChecker::SegmentToSegmentDist(::UnityEngine::Vector3 fromA, ::UnityEngine::Vector3 toA, ::UnityEngine::Vector3 fromB, ::UnityEngine::Vector3 toB,
                                                                        ByRef<::UnityEngine::Vector3> inbetweenPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), "SegmentToSegmentDist", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, fromA, toA, fromB, toB, inbetweenPoint);
}
inline ::GlobalNamespace::SaberClashChecker* GlobalNamespace::SaberClashChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberClashChecker*>());
}
inline void GlobalNamespace::SaberClashChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberClashChecker::SaberClashChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
