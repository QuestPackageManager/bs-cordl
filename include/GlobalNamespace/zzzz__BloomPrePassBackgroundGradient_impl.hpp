#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundGradient.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundGradient_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient.UpdatePixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(&::GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x39d64fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundGradient::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x39d6570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Gradient*& GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_get__gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_get__gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_set__gradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixels, numberOfPixels);
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundGradient* GlobalNamespace::BloomPrePassBackgroundGradient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundGradient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundGradient::BloomPrePassBackgroundGradient() {}
