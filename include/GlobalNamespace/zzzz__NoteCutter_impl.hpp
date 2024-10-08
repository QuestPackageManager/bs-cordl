#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutter_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::*)()>(
    &::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b6eff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_cuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableBySaber;
}
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_cuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableBySaber;
}
constexpr void GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_set_cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cuttableBySaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr float_t const& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_get_pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr void GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__cordl_internal_set_pos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pos = value;
}
inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams* GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>());
}
inline void GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams::__NoteCutter__CuttableBySaberSortParams() {}
//  Writing Method size for method: ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::*)(
    ::System::Object*, ::System::Object*)>(&::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::Compare)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3b6f000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::*)()>(
    &::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b6eff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline int32_t GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::Compare(::System::Object* p0, ::System::Object* p1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p0, p1);
}
inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*>());
}
inline void GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer::__NoteCutter__CuttableBySaberSortParamsComparer() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutter::*)()>(&::GlobalNamespace::NoteCutter::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3b6eebc;

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
  constexpr static std::size_t addrs = 0x3b6e878;

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
constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>&
GlobalNamespace::NoteCutter::__cordl_internal_get__cuttableBySaberSortParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberSortParams;
}
constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> const&
GlobalNamespace::NoteCutter::__cordl_internal_get__cuttableBySaberSortParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberSortParams;
}
constexpr void GlobalNamespace::NoteCutter::__cordl_internal_set__cuttableBySaberSortParams(
    ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cuttableBySaberSortParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*& GlobalNamespace::NoteCutter::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*> const& GlobalNamespace::NoteCutter::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
constexpr void GlobalNamespace::NoteCutter::__cordl_internal_set__comparer(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::NoteCutter* GlobalNamespace::NoteCutter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutter*>());
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
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutter::NoteCutter() {}
