#pragma once
// IWYU pragma private; include "GlobalNamespace/RegionToLocalizationKeyPair.hpp"
#include "GlobalNamespace/zzzz__Region_impl.hpp"
#include "GlobalNamespace/zzzz__RegionToLocalizationKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__Region_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegionToLocalizationKeyPair._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RegionToLocalizationKeyPair::*)(::GlobalNamespace::Region, ::StringW)>(&::GlobalNamespace::RegionToLocalizationKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57c4214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RegionToLocalizationKeyPair>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RegionToLocalizationKeyPair::_ctor(::GlobalNamespace::Region  region, ::StringW  localizationKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RegionToLocalizationKeyPair>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region, localizationKey);
}
// Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::Region", modifiers: "", def_value: Some("{}") }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RegionToLocalizationKeyPair::RegionToLocalizationKeyPair(::GlobalNamespace::Region  region, ::StringW  localizationKey) noexcept  {
this->region = region;
this->localizationKey = localizationKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegionToLocalizationKeyPair::RegionToLocalizationKeyPair()   {
}
