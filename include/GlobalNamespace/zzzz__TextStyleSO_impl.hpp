#pragma once
// IWYU pragma private; include "GlobalNamespace/TextStyleSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TextStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyTextStyle_def.hpp"
#include "GlobalNamespace/zzzz__TextStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextStyleSO.get_textStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadOnlyTextStyle* (::GlobalNamespace::TextStyleSO::*)()>(
    &::GlobalNamespace::TextStyleSO::get_textStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227ebe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextStyleSO*>::get(), "get_textStyle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyleSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextStyleSO::*)()>(&::GlobalNamespace::TextStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227ebe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextStyleSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TextStyle*& GlobalNamespace::TextStyleSO::__cordl_internal_get__textStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr ::GlobalNamespace::TextStyle* const& GlobalNamespace::TextStyleSO::__cordl_internal_get__textStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr void GlobalNamespace::TextStyleSO::__cordl_internal_set__textStyle(::GlobalNamespace::TextStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IReadOnlyTextStyle* GlobalNamespace::TextStyleSO::get_textStyle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextStyleSO*>::get(), "get_textStyle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyTextStyle*, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextStyleSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextStyleSO* GlobalNamespace::TextStyleSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextStyleSO::TextStyleSO() {}
