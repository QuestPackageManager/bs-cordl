#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3DTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DTrack.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::TextureProcessor3DTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::GlobalNamespace::TextureProcessor3DTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x577615c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DTrack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DTrack*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3DTrack::*)()>(&::GlobalNamespace::TextureProcessor3DTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5776208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DTrack*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::Playable GlobalNamespace::TextureProcessor3DTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DTrack*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, inputCount);
}
inline void GlobalNamespace::TextureProcessor3DTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DTrack*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureProcessor3DTrack* GlobalNamespace::TextureProcessor3DTrack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextureProcessor3DTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3DTrack::TextureProcessor3DTrack() {}
