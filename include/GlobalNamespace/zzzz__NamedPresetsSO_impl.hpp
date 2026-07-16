#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedPresetsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedPresetsSO.get_namedPresets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (::GlobalNamespace::NamedPresetsSO::*)()>(&::GlobalNamespace::NamedPresetsSO::get_namedPresets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedPresetsSO*>(), { ::i2c::class_of<::GlobalNamespace::NamedPresetsSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedPresetsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedPresetsSO::*)()>(&::GlobalNamespace::NamedPresetsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedPresetsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::NamedPreset*> GlobalNamespace::NamedPresetsSO::get_namedPresets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedPresetsSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*>>(this, ___internal_method);
}
inline void GlobalNamespace::NamedPresetsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedPresetsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedPresetsSO* GlobalNamespace::NamedPresetsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedPresetsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedPresetsSO::NamedPresetsSO() {}
