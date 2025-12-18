#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedDictionaryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedDictionaryAttribute_def.hpp"
//  Writing Method size for method: ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::*)(::StringW, ::StringW)>(
    &::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3190da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_KeyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyName;
}
constexpr ::StringW const& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_KeyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyName;
}
constexpr void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_set_KeyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_ValueName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueName;
}
constexpr ::StringW const& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_ValueName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueName;
}
constexpr void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_set_ValueName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::_ctor(::StringW keyName, ::StringW valueName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyName, valueName);
}
inline ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute* AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::New_ctor(::StringW keyName, ::StringW valueName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>(keyName, valueName));
}
// Ctor Parameters []
constexpr ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::SerializedDictionaryAttribute() {}
