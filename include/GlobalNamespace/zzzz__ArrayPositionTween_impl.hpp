#pragma once
// IWYU pragma private; include "GlobalNamespace/ArrayPositionTween.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "GlobalNamespace/zzzz__ArrayPositionTween_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween.get_clipCaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::ArrayPositionTween::*)()>(
    &::GlobalNamespace::ArrayPositionTween::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5772c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), "get_clipCaps",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween.CreatePlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::ArrayPositionTween::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ArrayPositionTween::CreatePlayable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5772c8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ArrayPositionTween::*)()>(&::GlobalNamespace::ArrayPositionTween::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5772df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>& GlobalNamespace::ArrayPositionTween::__cordl_internal_get_arrayReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> const& GlobalNamespace::ArrayPositionTween::__cordl_internal_get_arrayReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr void GlobalNamespace::ArrayPositionTween::__cordl_internal_set_arrayReference(::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayReference = value;
}
constexpr float_t& GlobalNamespace::ArrayPositionTween::__cordl_internal_get_elementDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr float_t const& GlobalNamespace::ArrayPositionTween::__cordl_internal_get_elementDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr void GlobalNamespace::ArrayPositionTween::__cordl_internal_set_elementDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDelay = value;
}
constexpr ::GlobalNamespace::CustomTweenBehaviour*& GlobalNamespace::ArrayPositionTween::__cordl_internal_get__cordl_template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr ::GlobalNamespace::CustomTweenBehaviour* const& GlobalNamespace::ArrayPositionTween::__cordl_internal_get__cordl_template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr void GlobalNamespace::ArrayPositionTween::__cordl_internal_set__cordl_template(::GlobalNamespace::CustomTweenBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::ArrayPositionTween::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), "get_clipCaps",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::ArrayPositionTween::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go);
}
inline void GlobalNamespace::ArrayPositionTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ArrayPositionTween* GlobalNamespace::ArrayPositionTween::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ArrayPositionTween*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::ArrayPositionTween::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* GlobalNamespace::ArrayPositionTween::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayPositionTween::ArrayPositionTween() {}
