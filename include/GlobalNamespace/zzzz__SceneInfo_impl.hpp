#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneInfo.get_sceneName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SceneInfo::*)()>(&::GlobalNamespace::SceneInfo::get_sceneName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "get_sceneName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneInfo.get_disabledRootObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneInfo::*)()>(&::GlobalNamespace::SceneInfo::get_disabledRootObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "get_disabledRootObjects",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneInfo.SetSceneName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneInfo::*)(::StringW)>(&::GlobalNamespace::SceneInfo::SetSceneName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "SetSceneName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneInfo::*)()>(&::GlobalNamespace::SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SceneInfo::__get__sceneName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneName;
}
constexpr ::StringW const& GlobalNamespace::SceneInfo::__get__sceneName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneName;
}
constexpr void GlobalNamespace::SceneInfo::__set__sceneName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SceneInfo::__get__disabledRootObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledRootObjects;
}
constexpr bool const& GlobalNamespace::SceneInfo::__get__disabledRootObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledRootObjects;
}
constexpr void GlobalNamespace::SceneInfo::__set__disabledRootObjects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____disabledRootObjects = value;
}
inline ::StringW GlobalNamespace::SceneInfo::get_sceneName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "get_sceneName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneInfo::get_disabledRootObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "get_disabledRootObjects",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneInfo::SetSceneName(::StringW newSceneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), "SetSceneName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSceneName);
}
inline ::GlobalNamespace::SceneInfo* GlobalNamespace::SceneInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SceneInfo*>());
}
inline void GlobalNamespace::SceneInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneInfo::SceneInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
