#pragma once
// IWYU pragma private; include "System/Xml/TernaryTreeReadOnly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::TernaryTreeReadOnly::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Xml::TernaryTreeReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x430c538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly.FindCaseInsensitiveString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Xml::TernaryTreeReadOnly::*)(::StringW)>(
    &::System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x430b30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(), "FindCaseInsensitiveString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::TernaryTreeReadOnly::__cordl_internal_get_nodeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::TernaryTreeReadOnly::__cordl_internal_get_nodeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeBuffer;
}
constexpr void System::Xml::TernaryTreeReadOnly::__cordl_internal_set_nodeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nodeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::TernaryTreeReadOnly::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> nodeBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeBuffer);
}
inline uint8_t System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString(::StringW stringToFind) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(), "FindCaseInsensitiveString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, stringToFind);
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::TernaryTreeReadOnly::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> nodeBuffer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::TernaryTreeReadOnly*>(nodeBuffer));
}
// Ctor Parameters []
constexpr ::System::Xml::TernaryTreeReadOnly::TernaryTreeReadOnly() {}
