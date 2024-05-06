#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LineLightManager_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineLightManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::Update)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x24f6190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineLightManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24f6500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__cordl_internal_get__points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__cordl_internal_get__points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__points(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____points)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__cordl_internal_get__dirs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirs;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__cordl_internal_get__dirs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirs;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__dirs(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dirs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::LineLightManager::__cordl_internal_get__dirLengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirLengths;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::LineLightManager::__cordl_internal_get__dirLengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirLengths;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__dirLengths(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dirLengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::LineLightManager::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LineLightManager::setStaticF__activeLineLightsCountID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_activeLineLightsCountID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__activeLineLightsCountID() {
  return ::cordl_internals::getStaticField<int32_t, "_activeLineLightsCountID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightPointsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightPointsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightPointsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightPointsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightDirsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightDirsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirLengthsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightDirLengthsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirLengthsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightDirLengthsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_lineLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LineLightManager* GlobalNamespace::LineLightManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LineLightManager*>());
}
inline void GlobalNamespace::LineLightManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LineLightManager::LineLightManager() {}
