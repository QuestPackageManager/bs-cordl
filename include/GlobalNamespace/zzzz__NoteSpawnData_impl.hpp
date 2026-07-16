#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteSpawnData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::NoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58cd4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::NoteSpawnData>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteSpawnData::_ctor(::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::NoteSpawnData>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, moveStartOffset, moveEndOffset, jumpEndOffset, gravityBase);
}
// Ctor Parameters [CppParam { name: "moveStartOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveEndOffset", ty: "::UnityEngine::Vector3", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "jumpEndOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "gravityBase", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteSpawnData::NoteSpawnData(::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset,
                                                          float_t gravityBase) noexcept {
  this->moveStartOffset = moveStartOffset;
  this->moveEndOffset = moveEndOffset;
  this->jumpEndOffset = jumpEndOffset;
  this->gravityBase = gravityBase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteSpawnData::NoteSpawnData() {}
