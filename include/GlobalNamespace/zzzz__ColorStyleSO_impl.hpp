#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStyleSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorStyle_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyColorStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorStyleSO.get_colorStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadOnlyColorStyle* (::GlobalNamespace::ColorStyleSO::*)()>(
    &::GlobalNamespace::ColorStyleSO::get_colorStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35d1f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStyleSO*>::get(), "get_colorStyle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyleSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorStyleSO::*)()>(&::GlobalNamespace::ColorStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35d1f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStyleSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorStyle*& GlobalNamespace::ColorStyleSO::__cordl_internal_get__colorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorStyle;
}
constexpr ::GlobalNamespace::ColorStyle* const& GlobalNamespace::ColorStyleSO::__cordl_internal_get__colorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorStyle;
}
constexpr void GlobalNamespace::ColorStyleSO::__cordl_internal_set__colorStyle(::GlobalNamespace::ColorStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IReadOnlyColorStyle* GlobalNamespace::ColorStyleSO::get_colorStyle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStyleSO*>::get(), "get_colorStyle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyColorStyle*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStyleSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorStyleSO* GlobalNamespace::ColorStyleSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorStyleSO::ColorStyleSO() {}
