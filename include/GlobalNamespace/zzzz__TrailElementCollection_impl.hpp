#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailElementCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "GlobalNamespace/zzzz__TrailElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "segmentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentLerp", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TrailElementCollection_InterpolationState::TrailElementCollection_InterpolationState(int32_t segmentIndex, float_t segmentLerp) noexcept {
  this->segmentIndex = segmentIndex;
  this->segmentLerp = segmentLerp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElementCollection_InterpolationState::TrailElementCollection_InterpolationState() {}
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::TrailElementCollection::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TrailElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x4087268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.InitSnapshots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElementCollection::InitSnapshots)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4087618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                                                                               "InitSnapshots", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.SetHeadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElementCollection::SetHeadData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4087aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "SetHeadData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.MoveTailToHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::MoveTailToHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4087b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                                                                               "MoveTailToHead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateDistances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::UpdateDistances)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4087bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                                                                               "UpdateDistances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.Interpolate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(
    float_t, ::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<float_t>)>(
    &::GlobalNamespace::TrailElementCollection::Interpolate)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x4088a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "Interpolate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateLerpState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(
    float_t, ::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>)>(&::GlobalNamespace::TrailElementCollection::UpdateLerpState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4089034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "UpdateLerpState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.GetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TrailElement* (::GlobalNamespace::TrailElementCollection::*)(int32_t)>(
    &::GlobalNamespace::TrailElementCollection::GetElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x408914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "GetElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*>& GlobalNamespace::TrailElementCollection::__cordl_internal_get__snapshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapshots;
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__snapshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapshots;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__snapshots(::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____snapshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__headIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__headIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__headIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headIndex = value;
}
constexpr float_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__totalDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalDistance;
}
constexpr float_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__totalDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalDistance;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__totalDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalDistance = value;
}
inline void GlobalNamespace::TrailElementCollection::_ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::InitSnapshots(::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "InitSnapshots", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::SetHeadData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "SetHeadData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, time);
}
inline void GlobalNamespace::TrailElementCollection::MoveTailToHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                                                                             "MoveTailToHead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::UpdateDistances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                                                                             "UpdateDistances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::Interpolate(float_t t, ::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState> lerpState, ::ByRef<::UnityEngine::Vector3> position,
                                                                 ::ByRef<::UnityEngine::Vector3> normal, ::ByRef<float_t> time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "Interpolate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, lerpState, position, normal, time);
}
inline void GlobalNamespace::TrailElementCollection::UpdateLerpState(float_t t, ::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState> interpolationState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "UpdateLerpState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TrailElementCollection_InterpolationState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, interpolationState);
}
inline ::GlobalNamespace::TrailElement* GlobalNamespace::TrailElementCollection::GetElement(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(), "GetElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrailElement*, false>(this, ___internal_method, index);
}
inline ::GlobalNamespace::TrailElementCollection* GlobalNamespace::TrailElementCollection::New_ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition,
                                                                                                    ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TrailElementCollection*>(capacity, defaultStartPosition, defaultEndPosition, time));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElementCollection::TrailElementCollection() {}
