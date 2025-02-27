#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::NoteSpawnData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::NoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3af090c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteSpawnData::_ctor(::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moveStartOffset, moveEndOffset, jumpEndOffset, gravityBase);
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
