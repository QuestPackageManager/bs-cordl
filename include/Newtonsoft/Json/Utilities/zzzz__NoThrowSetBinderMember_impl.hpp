#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowSetBinderMember.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowSetBinderMember_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::*)(::System::Dynamic::SetMemberBinder*)>(
    &::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ed7030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::SetMemberBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember.FallbackSetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(
    &::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::FallbackSetMember)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3ed7068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::SetMemberBinder*& Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_get__innerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr ::System::Dynamic::SetMemberBinder* const& Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_get__innerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr void Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_set__innerBinder(::System::Dynamic::SetMemberBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Utilities::NoThrowSetBinderMember::_ctor(::System::Dynamic::SetMemberBinder* innerBinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::SetMemberBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerBinder);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Utilities::NoThrowSetBinderMember::FallbackSetMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* value,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, value, errorSuggestion);
}
inline ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember* Newtonsoft::Json::Utilities::NoThrowSetBinderMember::New_ctor(::System::Dynamic::SetMemberBinder* innerBinder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(innerBinder));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::NoThrowSetBinderMember() {}
