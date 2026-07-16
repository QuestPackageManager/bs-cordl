#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteBasicCutInfoHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBasicCutInfoHelper_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteBasicCutInfoHelper.GetBasicCutInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SaberType, float_t,
                                                                ::UnityEngine::Vector3, float_t, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x377a248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBasicCutInfoHelper*>(),
                                                { "GetBasicCutInfo",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                    ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(),
                                                    ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo(::UnityEngine::Transform* noteTransform, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                     ::GlobalNamespace::SaberType saberType, float_t saberBladeSpeed, ::UnityEngine::Vector3 cutDirVec, float_t cutAngleTolerance,
                                                                     ::by_ref<bool> directionOK, ::by_ref<bool> speedOK, ::by_ref<bool> saberTypeOK, ::by_ref<float_t> cutDirDeviation,
                                                                     ::by_ref<float_t> cutDirAngle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteBasicCutInfoHelper*>(),
                                                           { "GetBasicCutInfo",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, noteTransform, colorType, cutDirection, saberType, saberBladeSpeed, cutDirVec, cutAngleTolerance, directionOK, speedOK,
                                                   saberTypeOK, cutDirDeviation, cutDirAngle);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteBasicCutInfoHelper::NoteBasicCutInfoHelper() {}
