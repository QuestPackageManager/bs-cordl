#pragma once
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::GhostEffectAsset::*)()>(
    &::GlobalNamespace::GhostEffectAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2316234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), "get_clipCaps",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::GhostEffectAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GhostEffectAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x231623c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectAsset::*)()>(&::GlobalNamespace::GhostEffectAsset::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2316378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::GhostEffectAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& GlobalNamespace::GhostEffectAsset::__get__ghostEffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& GlobalNamespace::GhostEffectAsset::__get__ghostEffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr void GlobalNamespace::GhostEffectAsset::__set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostEffectType = value;
}
constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& GlobalNamespace::GhostEffectAsset::__get_arrayReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& GlobalNamespace::GhostEffectAsset::__get_arrayReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr void GlobalNamespace::GhostEffectAsset::__set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayReference = value;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour*& GlobalNamespace::GhostEffectAsset::__get__cordl_template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostEffectBehaviour*> const& GlobalNamespace::GhostEffectAsset::__get__cordl_template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr void GlobalNamespace::GhostEffectAsset::__set__cordl_template(::GlobalNamespace::GhostEffectBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::GhostEffectAsset::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), "get_clipCaps",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::GhostEffectAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go);
}
inline ::GlobalNamespace::GhostEffectAsset* GlobalNamespace::GhostEffectAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GhostEffectAsset*>());
}
inline void GlobalNamespace::GhostEffectAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectAsset::GhostEffectAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
