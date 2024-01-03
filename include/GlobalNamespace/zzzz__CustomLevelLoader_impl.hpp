#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelLoader::*)()>(&::GlobalNamespace::CustomLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223c610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::CustomLevelLoader::__get__defaultEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::CustomLevelLoader::__get__defaultEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultEnvironmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::CustomLevelLoader::__get__defaultAllDirectionsEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::CustomLevelLoader::__get__defaultAllDirectionsEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultAllDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAllDirectionsEnvironmentInfo)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListSO*& GlobalNamespace::CustomLevelLoader::__get__environmentSceneInfoCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSceneInfoCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> const& GlobalNamespace::CustomLevelLoader::__get__environmentSceneInfoCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSceneInfoCollection;
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__environmentSceneInfoCollection(::GlobalNamespace::EnvironmentsListSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentSceneInfoCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::CustomLevelLoader::__get__defaultPackCover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPackCover;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::CustomLevelLoader::__get__defaultPackCover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPackCover;
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultPackCover(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPackCover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::CustomLevelLoader::__get__smallDefaultPackCover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallDefaultPackCover;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::CustomLevelLoader::__get__smallDefaultPackCover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallDefaultPackCover;
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__smallDefaultPackCover(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smallDefaultPackCover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::CustomLevelLoader* GlobalNamespace::CustomLevelLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomLevelLoader*>());
}
inline void GlobalNamespace::CustomLevelLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelLoader::CustomLevelLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
