#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorCached.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorCached._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorCached::*)(::Zenject::ISubContainerCreator*)>(
    &::Zenject::SubContainerCreatorCached::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36602e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorCached*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ISubContainerCreator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorCached.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorCached::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorCached::CreateSubContainer)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x366030c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorCached*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr Zenject::SubContainerCreatorCached::operator ::Zenject::ISubContainerCreator*() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ISubContainerCreator"
constexpr ::Zenject::ISubContainerCreator* Zenject::SubContainerCreatorCached::i___Zenject__ISubContainerCreator() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
constexpr ::Zenject::ISubContainerCreator*& Zenject::SubContainerCreatorCached::__cordl_internal_get__subCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ISubContainerCreator*> const& Zenject::SubContainerCreatorCached::__cordl_internal_get__subCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subCreator;
}
constexpr void Zenject::SubContainerCreatorCached::__cordl_internal_set__subCreator(::Zenject::ISubContainerCreator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::SubContainerCreatorCached::__cordl_internal_get__isLookingUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLookingUp;
}
constexpr bool const& Zenject::SubContainerCreatorCached::__cordl_internal_get__isLookingUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLookingUp;
}
constexpr void Zenject::SubContainerCreatorCached::__cordl_internal_set__isLookingUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLookingUp = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SubContainerCreatorCached::__cordl_internal_get__subContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainer;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::SubContainerCreatorCached::__cordl_internal_get__subContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainer;
}
constexpr void Zenject::SubContainerCreatorCached::__cordl_internal_set__subContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorCached* Zenject::SubContainerCreatorCached::New_ctor(::Zenject::ISubContainerCreator* subCreator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerCreatorCached*>(subCreator));
}
inline void Zenject::SubContainerCreatorCached::_ctor(::Zenject::ISubContainerCreator* subCreator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorCached*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ISubContainerCreator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subCreator);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorCached::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorCached*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method, args, context);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorCached::SubContainerCreatorCached() {}
