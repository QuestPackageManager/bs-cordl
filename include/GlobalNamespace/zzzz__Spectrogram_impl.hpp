#pragma once
// IWYU pragma private; include "GlobalNamespace/Spectrogram.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Spectrogram_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.get_materialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::Spectrogram::*)()>(
    &::GlobalNamespace::Spectrogram::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26ef240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                                                                               "get_materialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26ef2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::Update)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x26ef3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrogram._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Spectrogram::*)()>(&::GlobalNamespace::Spectrogram::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ef58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Spectrogram::__cordl_internal_get__setAsGlobal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAsGlobal;
}
constexpr bool const& GlobalNamespace::Spectrogram::__cordl_internal_get__setAsGlobal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAsGlobal;
}
constexpr void GlobalNamespace::Spectrogram::__cordl_internal_set__setAsGlobal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAsGlobal = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& GlobalNamespace::Spectrogram::__cordl_internal_get__meshRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& GlobalNamespace::Spectrogram::__cordl_internal_get__meshRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderers;
}
constexpr void GlobalNamespace::Spectrogram::__cordl_internal_set__meshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::Spectrogram::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::Spectrogram::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::Spectrogram::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& GlobalNamespace::Spectrogram::__cordl_internal_get__spectrogramData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& GlobalNamespace::Spectrogram::__cordl_internal_get__spectrogramData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr void GlobalNamespace::Spectrogram::__cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectrogramData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::Spectrogram::setStaticF__spectrogramDataID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Spectrogram::getStaticF__spectrogramDataID() {
  return ::cordl_internals::getStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>();
}
inline void GlobalNamespace::Spectrogram::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::Spectrogram::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get>();
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::Spectrogram::get_materialPropertyBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(),
                                                                             "get_materialPropertyBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(this, ___internal_method);
}
inline void GlobalNamespace::Spectrogram::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Spectrogram::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Spectrogram* GlobalNamespace::Spectrogram::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Spectrogram*>());
}
inline void GlobalNamespace::Spectrogram::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Spectrogram*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Spectrogram::Spectrogram() {}
