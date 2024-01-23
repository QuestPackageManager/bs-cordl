#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LightConstants__BakeId::__LightConstants__BakeId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightConstants__BakeId::__LightConstants__BakeId() {}
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::C{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::D{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::E{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::__LightConstants__BakeId::F{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::LightConstants.GetLightProbeLightBakeIdPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::__LightConstants__BakeId)>(
    &::GlobalNamespace::LightConstants::GetLightProbeLightBakeIdPropertyId)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x210f418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightProbeLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightConstants__BakeId>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightConstants::setStaticF_allBakeIds(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>*, "allBakeIds",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>* GlobalNamespace::LightConstants::getStaticF_allBakeIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>*, "allBakeIds",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>();
}
inline void GlobalNamespace::LightConstants::setStaticF__probeLightPropertyIds(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId, int32_t>*, "_probeLightPropertyIds",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId, int32_t>* GlobalNamespace::LightConstants::getStaticF__probeLightPropertyIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__LightConstants__BakeId, int32_t>*, "_probeLightPropertyIds",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get>();
}
inline int32_t GlobalNamespace::LightConstants::GetLightProbeLightBakeIdPropertyId(::GlobalNamespace::__LightConstants__BakeId bakeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightConstants*>::get(), "GetLightProbeLightBakeIdPropertyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightConstants__BakeId>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bakeId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightConstants::LightConstants() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
