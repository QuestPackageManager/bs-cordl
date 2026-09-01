#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\VolumeRequiresRendererFeatures.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeRequiresRendererFeatures_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::*)(::ArrayW<::System::Type*>)>(
    &::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x68e8aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
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
  this->___TargetFeatureTypes = value;
}
inline void UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::_ctor(::ArrayW<::System::Type*> featureTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureTypes);
}
inline ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures* UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::New_ctor(::ArrayW<::System::Type*> featureTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures*>(featureTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::VolumeRequiresRendererFeatures::VolumeRequiresRendererFeatures() {}
