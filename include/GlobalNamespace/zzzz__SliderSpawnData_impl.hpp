#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSpawnData::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::SliderSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58cf268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderSpawnData>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SliderSpawnData::_ctor(::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderSpawnData>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, headNoteOffset, headGravityBase, tailNoteOffset, tailGravityBase);
}
// Ctor Parameters [CppParam { name: "headNoteOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headGravityBase", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "tailNoteOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailGravityBase", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::SliderSpawnData::SliderSpawnData(::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase) noexcept {
  this->headNoteOffset = headNoteOffset;
  this->headGravityBase = headGravityBase;
  this->tailNoteOffset = tailNoteOffset;
  this->tailGravityBase = tailGravityBase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderSpawnData::SliderSpawnData() {}
