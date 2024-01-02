#pragma once
#include "GlobalNamespace/zzzz__QuestPerformanceSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QuestPerformanceSettings_def.hpp"
#include "GlobalNamespace/zzzz__QuestPerformanceSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::__QuestPerformanceSettings__ProcessorPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::__QuestPerformanceSettings__ProcessorPerformanceLevel() {}
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel::Boost{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::QuestPerformanceSettings.get_gpuPerformanceLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel (
    ::GlobalNamespace::QuestPerformanceSettings::*)()>(&::GlobalNamespace::QuestPerformanceSettings::get_gpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23503e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                               "get_gpuPerformanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestPerformanceSettings.get_cpuPerformanceLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel (
    ::GlobalNamespace::QuestPerformanceSettings::*)()>(&::GlobalNamespace::QuestPerformanceSettings::get_cpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23503f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                               "get_cpuPerformanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestPerformanceSettings.get_useFoveatedRenderingDuringGameplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuestPerformanceSettings::*)()>(
    &::GlobalNamespace::QuestPerformanceSettings::get_useFoveatedRenderingDuringGameplay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x234fe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                               "get_useFoveatedRenderingDuringGameplay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestPerformanceSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestPerformanceSettings::*)()>(&::GlobalNamespace::QuestPerformanceSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23503f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel& GlobalNamespace::QuestPerformanceSettings::__get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const& GlobalNamespace::QuestPerformanceSettings::__get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void GlobalNamespace::QuestPerformanceSettings::__set_gpuLevel(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuLevel = value;
}
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel& GlobalNamespace::QuestPerformanceSettings::__get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel const& GlobalNamespace::QuestPerformanceSettings::__get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void GlobalNamespace::QuestPerformanceSettings::__set_cpuLevel(::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cpuLevel = value;
}
constexpr int32_t& GlobalNamespace::QuestPerformanceSettings::__get_foveatedRenderingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foveatedRenderingLevel;
}
constexpr int32_t const& GlobalNamespace::QuestPerformanceSettings::__get_foveatedRenderingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foveatedRenderingLevel;
}
constexpr void GlobalNamespace::QuestPerformanceSettings::__set_foveatedRenderingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___foveatedRenderingLevel = value;
}
inline ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::QuestPerformanceSettings::get_gpuPerformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                             "get_gpuPerformanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel GlobalNamespace::QuestPerformanceSettings::get_cpuPerformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                             "get_cpuPerformanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__QuestPerformanceSettings__ProcessorPerformanceLevel, false>(this, ___internal_method);
}
inline bool GlobalNamespace::QuestPerformanceSettings::get_useFoveatedRenderingDuringGameplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(),
                                                                             "get_useFoveatedRenderingDuringGameplay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestPerformanceSettings* GlobalNamespace::QuestPerformanceSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::QuestPerformanceSettings*>());
}
inline void GlobalNamespace::QuestPerformanceSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestPerformanceSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestPerformanceSettings::QuestPerformanceSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
