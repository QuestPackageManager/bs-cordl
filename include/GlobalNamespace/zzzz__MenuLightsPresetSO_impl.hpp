#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__LightIdColorPair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.get_lightIdColorPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> (
    ::GlobalNamespace::MenuLightsPresetSO::*)()>(&::GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c274cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                               "get_lightIdColorPairs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.set_lightIdColorPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuLightsPresetSO::*)(
    ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>)>(&::GlobalNamespace::MenuLightsPresetSO::set_lightIdColorPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c274d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), "set_lightIdColorPairs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuLightsPresetSO::*)()>(&::GlobalNamespace::MenuLightsPresetSO::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c274dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>& GlobalNamespace::MenuLightsPresetSO::__cordl_internal_get__lightIdColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> const& GlobalNamespace::MenuLightsPresetSO::__cordl_internal_get__lightIdColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr void GlobalNamespace::MenuLightsPresetSO::__cordl_internal_set__lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIdColorPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                             "get_lightIdColorPairs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsPresetSO::set_lightIdColorPairs(::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), "set_lightIdColorPairs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::LightIdColorPair*, ::Array<::GlobalNamespace::LightIdColorPair*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuLightsPresetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::MenuLightsPresetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MenuLightsPresetSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuLightsPresetSO::MenuLightsPresetSO() {}
