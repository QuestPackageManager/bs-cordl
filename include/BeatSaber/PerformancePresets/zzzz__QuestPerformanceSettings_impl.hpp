#pragma once
#include "BeatSaber/PerformancePresets/zzzz__ProcessorPerformanceLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/PerformancePresets/zzzz__QuestPerformanceSettings_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ProcessorPerformanceLevel_def.hpp"
//  Writing Method size for method: ::BeatSaber::PerformancePresets::QuestPerformanceSettings.get_gpuPerformanceLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::PerformancePresets::ProcessorPerformanceLevel (
    ::BeatSaber::PerformancePresets::QuestPerformanceSettings::*)()>(&::BeatSaber::PerformancePresets::QuestPerformanceSettings::get_gpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf73a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(), "get_gpuPerformanceLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::PerformancePresets::QuestPerformanceSettings.get_cpuPerformanceLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::PerformancePresets::ProcessorPerformanceLevel (
    ::BeatSaber::PerformancePresets::QuestPerformanceSettings::*)()>(&::BeatSaber::PerformancePresets::QuestPerformanceSettings::get_cpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf73a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(), "get_cpuPerformanceLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::PerformancePresets::QuestPerformanceSettings.get_useFoveatedRenderingDuringGameplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::PerformancePresets::QuestPerformanceSettings::*)()>(
    &::BeatSaber::PerformancePresets::QuestPerformanceSettings::get_useFoveatedRenderingDuringGameplay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf73a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(),
                                                 "get_useFoveatedRenderingDuringGameplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::PerformancePresets::QuestPerformanceSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::PerformancePresets::QuestPerformanceSettings::*)()>(
    &::BeatSaber::PerformancePresets::QuestPerformanceSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf73aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_set_gpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuLevel = value;
}
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_set_cpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cpuLevel = value;
}
constexpr int32_t& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_foveatedRenderingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foveatedRenderingLevel;
}
constexpr int32_t const& BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_get_foveatedRenderingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foveatedRenderingLevel;
}
constexpr void BeatSaber::PerformancePresets::QuestPerformanceSettings::__cordl_internal_set_foveatedRenderingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___foveatedRenderingLevel = value;
}
inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::QuestPerformanceSettings::get_gpuPerformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(),
                                                                             "get_gpuPerformanceLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::PerformancePresets::ProcessorPerformanceLevel, false>(this, ___internal_method);
}
inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::QuestPerformanceSettings::get_cpuPerformanceLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(),
                                                                             "get_cpuPerformanceLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::PerformancePresets::ProcessorPerformanceLevel, false>(this, ___internal_method);
}
inline bool BeatSaber::PerformancePresets::QuestPerformanceSettings::get_useFoveatedRenderingDuringGameplay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(),
                                               "get_useFoveatedRenderingDuringGameplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::PerformancePresets::QuestPerformanceSettings* BeatSaber::PerformancePresets::QuestPerformanceSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>());
}
inline void BeatSaber::PerformancePresets::QuestPerformanceSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::QuestPerformanceSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::QuestPerformanceSettings::QuestPerformanceSettings() {}
