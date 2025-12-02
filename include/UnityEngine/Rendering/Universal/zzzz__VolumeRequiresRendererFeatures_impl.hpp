#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/VolumeRequiresRendererFeatures.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeRequiresRendererFeatures_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66c89e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::__cordl_internal_get_TargetFeatureTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetFeatureTypes;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::__cordl_internal_get_TargetFeatureTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetFeatureTypes;
}
constexpr void UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::__cordl_internal_set_TargetFeatureTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetFeatureTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> featureTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, featureTypes);
}
inline ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*
UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> featureTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>(featureTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::VolumeRequiresRendererFeatures() {}
