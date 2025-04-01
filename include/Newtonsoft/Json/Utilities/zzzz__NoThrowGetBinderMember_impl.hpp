#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowGetBinderMember.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowGetBinderMember_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::*)(::System::Dynamic::GetMemberBinder*)>(
    &::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ec4a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::GetMemberBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember.FallbackGetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(
        &::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3ec4a98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::GetMemberBinder*& Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_get__innerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr ::System::Dynamic::GetMemberBinder* const& Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_get__innerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr void Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_set__innerBinder(::System::Dynamic::GetMemberBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Utilities::NoThrowGetBinderMember::_ctor(::System::Dynamic::GetMemberBinder* innerBinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::GetMemberBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerBinder);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, target, errorSuggestion);
}
inline ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember* Newtonsoft::Json::Utilities::NoThrowGetBinderMember::New_ctor(::System::Dynamic::GetMemberBinder* innerBinder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(innerBinder));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::NoThrowGetBinderMember() {}
