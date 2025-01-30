#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/Controller.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::Controller.HasDefaultValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::Controller::*)()>(&::BeatSaber::GameSettings::Controller::HasDefaultValues)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x226ebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::Controller>::get(), "HasDefaultValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool BeatSaber::GameSettings::Controller::HasDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::Controller>::get(), "HasDefaultValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::Controller::Controller(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation) noexcept {
  this->position = position;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::Controller::Controller() {}
