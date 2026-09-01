#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRRuntimeAssetsBase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeAssetsBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRuntimeAssetsBase::*)()>(&::GlobalNamespace::OVRRuntimeAssetsBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0c084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeAssetsBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
template <typename T> inline void GlobalNamespace::OVRRuntimeAssetsBase::LoadAsset(::by_ref<T> assetInstance, ::StringW assetName, ::System::Action_1<T>* onCreateAsset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeAssetsBase*>(),
                                              { "LoadAsset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetInstance, assetName, onCreateAsset);
}
inline void GlobalNamespace::OVRRuntimeAssetsBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRuntimeAssetsBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRuntimeAssetsBase* GlobalNamespace::OVRRuntimeAssetsBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRuntimeAssetsBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRuntimeAssetsBase::OVRRuntimeAssetsBase() {}
