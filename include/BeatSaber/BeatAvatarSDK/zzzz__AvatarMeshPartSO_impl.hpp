#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarMeshPartSO.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarMeshPartSO_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::get_mesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x327ae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x327aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO* BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO::AvatarMeshPartSO() {}
