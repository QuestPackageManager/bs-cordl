#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SkinColorSetSO_def.hpp"
#include "GlobalNamespace/zzzz__SkinColorSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkinColorSetSO.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> (::GlobalNamespace::SkinColorSetSO::*)()>(&::GlobalNamespace::SkinColorSetSO::get_colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ec7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SkinColorSetSO*>::get(), "get_colors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinColorSetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SkinColorSetSO::*)()>(&::GlobalNamespace::SkinColorSetSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ec84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SkinColorSetSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>& GlobalNamespace::SkinColorSetSO::__get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> const& GlobalNamespace::SkinColorSetSO::__get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::SkinColorSetSO::__set__colors(::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> GlobalNamespace::SkinColorSetSO::get_colors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SkinColorSetSO*>::get(), "get_colors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SkinColorSetSO* GlobalNamespace::SkinColorSetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SkinColorSetSO*>());
}
inline void GlobalNamespace::SkinColorSetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SkinColorSetSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkinColorSetSO::SkinColorSetSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
