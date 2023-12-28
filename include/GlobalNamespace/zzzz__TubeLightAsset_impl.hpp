#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::TubeLightAsset::*)()>(
    &::GlobalNamespace::TubeLightAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), "get_clipCaps",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::TubeLightAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TubeLightAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2317d10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightAsset::*)()>(&::GlobalNamespace::TubeLightAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::TubeLightAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::TubeLightBehaviour*& GlobalNamespace::TubeLightAsset::__get__template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____template;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeLightBehaviour*> const& GlobalNamespace::TubeLightAsset::__get__template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____template;
}
constexpr void GlobalNamespace::TubeLightAsset::__set__template(::GlobalNamespace::TubeLightBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::TubeLightAsset::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), "get_clipCaps",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::TubeLightAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), "CreatePlayable", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go);
}
inline ::GlobalNamespace::TubeLightAsset* GlobalNamespace::TubeLightAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightAsset*>());
}
inline void GlobalNamespace::TubeLightAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightAsset::TubeLightAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
