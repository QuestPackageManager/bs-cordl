#pragma once
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::*)()>(
    &::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainEffectSO*& GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::__get_mainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mainEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectSO*> const& GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::__get_mainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mainEffect;
}
constexpr void GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::__set_mainEffect(::GlobalNamespace::MainEffectSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset* GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>());
}
inline void GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset::__MainEffectGraphicsSettingsPresetsSO__Preset() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO.get_presets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> (
        ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(&::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                                               "get_presets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO.get_namedPresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> (
    ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(&::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::*)()>(
    &::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*>&
GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____presets;
}
constexpr ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> const&
GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::__set__presets(
    ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*>
GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_presets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                                             "get_presets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*, ::Array<::GlobalNamespace::__MainEffectGraphicsSettingsPresetsSO__Preset*>*>,
                                             false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::get_namedPresets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                                             "get_namedPresets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>());
}
inline void GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::MainEffectGraphicsSettingsPresetsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
