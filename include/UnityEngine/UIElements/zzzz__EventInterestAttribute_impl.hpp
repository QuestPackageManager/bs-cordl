#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventInterestAttribute::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::UnityEngine::UIElements::EventInterestAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x499f3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventInterestAttribute::*)(::UnityEngine::UIElements::EventInterestOptions)>(
    &::UnityEngine::UIElements::EventInterestAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x499f3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventInterestOptions>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_eventTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_eventTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypes;
}
constexpr void UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_set_eventTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::EventCategoryFlags& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_categoryFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryFlags;
}
constexpr ::UnityEngine::UIElements::EventCategoryFlags const& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_categoryFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryFlags;
}
constexpr void UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_set_categoryFlags(::UnityEngine::UIElements::EventCategoryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___categoryFlags = value;
}
inline void UnityEngine::UIElements::EventInterestAttribute::_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> eventTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventTypes);
}
inline void UnityEngine::UIElements::EventInterestAttribute::_ctor(::UnityEngine::UIElements::EventInterestOptions interests) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventInterestOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interests);
}
inline ::UnityEngine::UIElements::EventInterestAttribute* UnityEngine::UIElements::EventInterestAttribute::New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> eventTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventInterestAttribute*>(eventTypes));
}
inline ::UnityEngine::UIElements::EventInterestAttribute* UnityEngine::UIElements::EventInterestAttribute::New_ctor(::UnityEngine::UIElements::EventInterestOptions interests) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventInterestAttribute*>(interests));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestAttribute::EventInterestAttribute() {}
