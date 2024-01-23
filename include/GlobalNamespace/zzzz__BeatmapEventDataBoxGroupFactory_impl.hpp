#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
// Ctor Parameters [CppParam { name: "numberOfElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(int32_t numberOfElements) noexcept {
  this->numberOfElements = numberOfElements;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateExtendColorBeatmapEventDataBoxGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (*)(float_t, int32_t)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendColorBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2339034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateExtendColorBeatmapEventDataBoxGroup",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateExtendRotationBeatmapEventDataBoxGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (*)(float_t, int32_t)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendRotationBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2339234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateExtendRotationBeatmapEventDataBoxGroup",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateSingleLightBeatmapEventDataBoxGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (*)(float_t, int32_t, ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*)>(
        &::GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateSingleLightBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x23379bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateSingleLightBeatmapEventDataBoxGroup",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupFactory._CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::IndexFilter* (*)(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*, ByRef<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupFactory::_CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2339550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "<CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendColorBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateExtendColorBeatmapEventDataBoxGroup",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(nullptr, ___internal_method, beat, numberOfElements);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendRotationBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateExtendRotationBeatmapEventDataBoxGroup",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(nullptr, ___internal_method, beat, numberOfElements);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup*
GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateSingleLightBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements,
                                                                                            ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent* lightGroupEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "CreateSingleLightBeatmapEventDataBoxGroup",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(nullptr, ___internal_method, beat, numberOfElements, lightGroupEvent);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::BeatmapEventDataBoxGroupFactory::_CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0(
    ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* filtering,
    ByRef<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupFactory*>::get(), "<CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(nullptr, ___internal_method, filtering, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupFactory::BeatmapEventDataBoxGroupFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
