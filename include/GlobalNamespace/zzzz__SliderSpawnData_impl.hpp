#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnData::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::SliderSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56c07d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SliderSpawnData::_ctor(::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headNoteOffset, headGravityBase, tailNoteOffset, tailGravityBase);
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
