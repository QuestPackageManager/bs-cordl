#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/InfoBoxAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__InfoBoxAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__InfoBoxAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type::InfoBoxAttribute_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type::InfoBoxAttribute_Type() {}
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type BGLib::UnityExtension::InfoBoxAttribute_Type::None{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type BGLib::UnityExtension::InfoBoxAttribute_Type::Info{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type BGLib::UnityExtension::InfoBoxAttribute_Type::Warning{ static_cast<int32_t>(0x2) };
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type BGLib::UnityExtension::InfoBoxAttribute_Type::Error{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::BGLib::UnityExtension::InfoBoxAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::InfoBoxAttribute::*)(::StringW, ::BGLib::UnityExtension::InfoBoxAttribute_Type)>(
    &::BGLib::UnityExtension::InfoBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22b7a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::InfoBoxAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::InfoBoxAttribute_Type>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::StringW const& BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_set_info(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type& BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_get_messageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageType;
}
constexpr ::BGLib::UnityExtension::InfoBoxAttribute_Type const& BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_get_messageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageType;
}
constexpr void BGLib::UnityExtension::InfoBoxAttribute::__cordl_internal_set_messageType(::BGLib::UnityExtension::InfoBoxAttribute_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageType = value;
}
inline void BGLib::UnityExtension::InfoBoxAttribute::_ctor(::StringW info, ::BGLib::UnityExtension::InfoBoxAttribute_Type messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::InfoBoxAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::InfoBoxAttribute_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, messageType);
}
inline ::BGLib::UnityExtension::InfoBoxAttribute* BGLib::UnityExtension::InfoBoxAttribute::New_ctor(::StringW info, ::BGLib::UnityExtension::InfoBoxAttribute_Type messageType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::InfoBoxAttribute*>(info, messageType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::InfoBoxAttribute::InfoBoxAttribute() {}
