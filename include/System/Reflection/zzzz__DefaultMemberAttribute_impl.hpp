#pragma once
// IWYU pragma private; include "System/Reflection/DefaultMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__DefaultMemberAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::DefaultMemberAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::DefaultMemberAttribute::*)(::StringW)>(
    &::System::Reflection::DefaultMemberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d224b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::DefaultMemberAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::DefaultMemberAttribute.get_MemberName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::DefaultMemberAttribute::*)()>(
    &::System::Reflection::DefaultMemberAttribute::get_MemberName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d224d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::DefaultMemberAttribute*>::get(),
                                                                               "get_MemberName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::DefaultMemberAttribute::__cordl_internal_get__MemberName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberName_k__BackingField;
}
constexpr ::StringW const& System::Reflection::DefaultMemberAttribute::__cordl_internal_get__MemberName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberName_k__BackingField;
}
constexpr void System::Reflection::DefaultMemberAttribute::__cordl_internal_set__MemberName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MemberName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::DefaultMemberAttribute::_ctor(::StringW memberName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::DefaultMemberAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberName);
}
inline ::StringW System::Reflection::DefaultMemberAttribute::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::DefaultMemberAttribute*>::get(),
                                                                             "get_MemberName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::DefaultMemberAttribute* System::Reflection::DefaultMemberAttribute::New_ctor(::StringW memberName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::DefaultMemberAttribute*>(memberName));
}
// Ctor Parameters []
constexpr ::System::Reflection::DefaultMemberAttribute::DefaultMemberAttribute() {}
