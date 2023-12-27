#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelColorSchemeSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData.IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(
    &::GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x233dd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                                                                               "IsDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(
    &::GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233de84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_useOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useOverride;
}
constexpr bool const& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_useOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useOverride;
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_useOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___useOverride = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme*& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___colorScheme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorScheme*> const& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___colorScheme;
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_colorScheme(::GlobalNamespace::__PlayerSaveData__ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                                                                             "IsDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* GlobalNamespace::BeatmapLevelColorSchemeSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>());
}
inline void GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelColorSchemeSaveData::BeatmapLevelColorSchemeSaveData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
