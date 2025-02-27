#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutter.hpp"
#include "System/Collections/zzzz__IComparer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutter_CuttableBySaberSortParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutter_CuttableBySaberSortParams::*)()>(
    &::GlobalNamespace::NoteCutter_CuttableBySaberSortParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bf7ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_cuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableBySaber;
}
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_cuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableBySaber;
}
constexpr void GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_set_cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cuttableBySaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr float_t const& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_get_pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr void GlobalNamespace::NoteCutter_CuttableBySaberSortParams::__cordl_internal_set_pos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pos = value;
}
inline void GlobalNamespace::NoteCutter_CuttableBySaberSortParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutter_CuttableBySaberSortParams* GlobalNamespace::NoteCutter_CuttableBySaberSortParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParams::NoteCutter_CuttableBySaberSortParams() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::*)(::System::Object*, ::System::Object*)>(
    &::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::Compare)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3bf7eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::*)()>(
    &::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bf7edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::Compare(::System::Object* p0, ::System::Object* p1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p0, p1);
}
inline void GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer::NoteCutter_CuttableBySaberSortParamsComparer() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutter::*)()>(&::GlobalNamespace::NoteCutter::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3bf7da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutter.Cut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutter::*)(::GlobalNamespace::Saber*)>(&::GlobalNamespace::NoteCutter::Cut)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x3bf7764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter*>::get(), "Cut", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& GlobalNamespace::NoteCutter::__cordl_internal_get__colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& GlobalNamespace::NoteCutter::__cordl_internal_get__colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr void GlobalNamespace::NoteCutter::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*>&
GlobalNamespace::NoteCutter::__cordl_internal_get__cuttableBySaberSortParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberSortParams;
}
constexpr ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*> const&
GlobalNamespace::NoteCutter::__cordl_internal_get__cuttableBySaberSortParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberSortParams;
}
constexpr void GlobalNamespace::NoteCutter::__cordl_internal_set__cuttableBySaberSortParams(
    ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cuttableBySaberSortParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*& GlobalNamespace::NoteCutter::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* const& GlobalNamespace::NoteCutter::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr void GlobalNamespace::NoteCutter::__cordl_internal_set__comparer(::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteCutter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutter::Cut(::GlobalNamespace::Saber* saber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutter*>::get(), "Cut", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber);
}
inline ::GlobalNamespace::NoteCutter* GlobalNamespace::NoteCutter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutter::NoteCutter() {}
