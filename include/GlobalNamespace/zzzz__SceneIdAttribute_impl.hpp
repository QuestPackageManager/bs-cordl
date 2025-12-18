#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIdAttribute.hpp"
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__SceneIdAttribute_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowGameScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowGameScenes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x320ad54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                               "get_allowGameScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowEnvironmentScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowEnvironmentScenes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x320ad60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                               "get_allowEnvironmentScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowEmpty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x320ad6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), "get_allowEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowAllScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowAllScenes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x320ad78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                               "get_allowAllScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_onlyAllowEnvironmentScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(
    &::GlobalNamespace::SceneIdAttribute::get_onlyAllowEnvironmentScenes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x320ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                               "get_onlyAllowEnvironmentScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneIdAttribute::*)(::GlobalNamespace::BeatmapSceneIdFilter)>(
    &::GlobalNamespace::SceneIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x320ada0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapSceneIdFilter>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapSceneIdFilter& GlobalNamespace::SceneIdAttribute::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::GlobalNamespace::BeatmapSceneIdFilter const& GlobalNamespace::SceneIdAttribute::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void GlobalNamespace::SceneIdAttribute::__cordl_internal_set__filter(::GlobalNamespace::BeatmapSceneIdFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filter = value;
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowGameScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), "get_allowGameScenes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowEnvironmentScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                             "get_allowEnvironmentScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), "get_allowEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowAllScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), "get_allowAllScenes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_onlyAllowEnvironmentScenes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(),
                                                                             "get_onlyAllowEnvironmentScenes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneIdAttribute::_ctor(::GlobalNamespace::BeatmapSceneIdFilter filter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapSceneIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter);
}
inline ::GlobalNamespace::SceneIdAttribute* GlobalNamespace::SceneIdAttribute::New_ctor(::GlobalNamespace::BeatmapSceneIdFilter filter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SceneIdAttribute*>(filter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneIdAttribute::SceneIdAttribute() {}
