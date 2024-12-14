#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyPosition.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CopyPosition_def.hpp"
#include "GlobalNamespace/zzzz__CopyPosition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::CopyPosition*)>(&::GlobalNamespace::CopyPosition_CopyPositionUpdater::Add)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x39c2478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CopyPosition*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CopyPosition_CopyPositionUpdater::*)()>(
    &::GlobalNamespace::CopyPosition_CopyPositionUpdater::LateUpdate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x39c265c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CopyPosition_CopyPositionUpdater::*)()>(
    &::GlobalNamespace::CopyPosition_CopyPositionUpdater::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39c2808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>*& GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_get__copyPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* const& GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_get__copyPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyPositions;
}
constexpr void GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_set__copyPositions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____copyPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::setStaticF__instance(::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get>(
      std::forward<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>>(value));
}
inline ::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> GlobalNamespace::CopyPosition_CopyPositionUpdater::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get>();
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::Add(::GlobalNamespace::CopyPosition* copyPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CopyPosition*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, copyPosition);
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CopyPosition_CopyPositionUpdater* GlobalNamespace::CopyPosition_CopyPositionUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopyPosition_CopyPositionUpdater::CopyPosition_CopyPositionUpdater() {}
//  Writing Method size for method: ::GlobalNamespace::CopyPosition.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::Refresh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39c2434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), "Refresh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39c2474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39c2654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CopyPosition::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CopyPosition::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void GlobalNamespace::CopyPosition::__cordl_internal_set_source(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CopyPosition::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), "Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CopyPosition*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CopyPosition* GlobalNamespace::CopyPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CopyPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopyPosition::CopyPosition() {}
