#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenuForRenderPipeline.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenu_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenuForRenderPipeline_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline.get_pipelineTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::*)()>(&::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::get_pipelineTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x661402c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>::get(), "get_pipelineTypes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::*)(
    ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6614034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_get__pipelineTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pipelineTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_get__pipelineTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pipelineTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_set__pipelineTypes_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pipelineTypes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::get_pipelineTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>::get(), "get_pipelineTypes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::_ctor(::StringW menu, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> pipelineTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu, pipelineTypes);
}
inline ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*
UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::New_ctor(::StringW menu, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> pipelineTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(menu, pipelineTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::VolumeComponentMenuForRenderPipeline() {}
