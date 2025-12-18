#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3DMixerBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DMixerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DMixerBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3DMixerBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TextureProcessor3DMixerBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x57756fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DMixerBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3DMixerBehaviour::*)()>(
    &::GlobalNamespace::TextureProcessor3DMixerBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5776158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_get__trackBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackBinding;
}
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_get__trackBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackBinding;
}
constexpr void GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_set__trackBinding(::UnityW<::GlobalNamespace::TextureProcessor3D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TextureProcessor3DMixerBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TextureProcessor3DMixerBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureProcessor3DMixerBehaviour* GlobalNamespace::TextureProcessor3DMixerBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3DMixerBehaviour::TextureProcessor3DMixerBehaviour() {}
