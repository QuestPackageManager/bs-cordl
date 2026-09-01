#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MaterialUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MaterialUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MaterialUtility.GetMaterialCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Renderer*)>(&::UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66c4398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MaterialUtility*>(), { "GetMaterialCount", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MaterialUtility.GetSharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Renderer*, int32_t)>(&::UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x66c447c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MaterialUtility*>(),
                                                                                           { "GetSharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MaterialUtility::setStaticF_s_MaterialArray(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_MaterialArray", ::UnityEngine::ProBuilder::MaterialUtility*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* UnityEngine::ProBuilder::MaterialUtility::getStaticF_s_MaterialArray() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_MaterialArray", ::UnityEngine::ProBuilder::MaterialUtility*>();
}
inline int32_t UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MaterialUtility*>(), { "GetMaterialCount", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, renderer);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial(::UnityEngine::Renderer* renderer, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MaterialUtility*>(),
                                                                                         { "GetSharedMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, renderer, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MaterialUtility::MaterialUtility() {}
