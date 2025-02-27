#pragma once
// IWYU pragma private; include "GlobalNamespace/LightConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightConstants_BakeId::LightConstants_BakeId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightConstants_BakeId::LightConstants_BakeId() {}
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::C{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::D{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::E{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightConstants_BakeId::F{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::LightConstants.GetLightmapLightBakeIdPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::LightConstants_BakeId)>(
    &::GlobalNamespace::LightConstants::GetLightmapLightBakeIdPropertyId)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x39efca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightmapLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightConstants_BakeId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightConstants.GetLightProbeLightBakeIdPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::LightConstants_BakeId)>(
    &::GlobalNamespace::LightConstants::GetLightProbeLightBakeIdPropertyId)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x39efd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightProbeLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightConstants_BakeId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightConstants.GetComputeFieldPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::LightConstants::GetComputeFieldPropertyId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x39efdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetComputeFieldPropertyId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightConstants::setStaticF_allBakeIds(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>*, "allBakeIds",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>* GlobalNamespace::LightConstants::getStaticF_allBakeIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>*, "allBakeIds",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>();
}
inline int32_t GlobalNamespace::LightConstants::GetLightmapLightBakeIdPropertyId(::GlobalNamespace::LightConstants_BakeId bakeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightmapLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightConstants_BakeId>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bakeId);
}
inline int32_t GlobalNamespace::LightConstants::GetLightProbeLightBakeIdPropertyId(::GlobalNamespace::LightConstants_BakeId bakeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightProbeLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightConstants_BakeId>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bakeId);
}
inline int32_t GlobalNamespace::LightConstants::GetComputeFieldPropertyId(::StringW fieldName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetComputeFieldPropertyId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fieldName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightConstants::LightConstants() {}
