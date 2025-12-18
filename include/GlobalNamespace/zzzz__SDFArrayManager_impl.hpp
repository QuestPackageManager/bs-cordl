#pragma once
// IWYU pragma private; include "GlobalNamespace/SDFArrayManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SDFArrayManager_def.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56bf224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.InitIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::InitIfNeeded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bf228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "InitIfNeeded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56bf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFArrayManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFArrayManager::*)()>(&::GlobalNamespace::SDFArrayManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56bf3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*>& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfPointArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfPointArray;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*> const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfPointArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfPointArray;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__sdfPointArray(::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sdfPointArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfArrayValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfArrayValues;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__sdfArrayValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sdfArrayValues;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__sdfArrayValues(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sdfArrayValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SDFArrayManager::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::SDFArrayManager::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::SDFArrayManager::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void GlobalNamespace::SDFArrayManager::setStaticF__sdfPointsArray(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sdfPointsArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SDFArrayManager::getStaticF__sdfPointsArray() {
  return ::cordl_internals::getStaticField<int32_t, "_sdfPointsArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get>();
}
inline void GlobalNamespace::SDFArrayManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::InitIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "InitIfNeeded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SDFArrayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFArrayManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SDFArrayManager* GlobalNamespace::SDFArrayManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SDFArrayManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFArrayManager::SDFArrayManager() {}
