#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstance.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ISubContainerCreator_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByInstance::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerCreatorByInstance::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4b44e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstance*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstance.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByInstance::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorByInstance::CreateSubContainer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4b44e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstance*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::SubContainerCreatorByInstance::__cordl_internal_get__subcontainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subcontainer;
}
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerCreatorByInstance::__cordl_internal_get__subcontainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subcontainer;
}
constexpr void Zenject::SubContainerCreatorByInstance::__cordl_internal_set__subcontainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subcontainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::SubContainerCreatorByInstance::_ctor(::Zenject::DiContainer* subcontainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstance*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subcontainer);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByInstance::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstance*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByInstance* Zenject::SubContainerCreatorByInstance::New_ctor(::Zenject::DiContainer* subcontainer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerCreatorByInstance*>(subcontainer));
}
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr Zenject::SubContainerCreatorByInstance::operator ::Zenject::ISubContainerCreator*() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ISubContainerCreator"
constexpr ::Zenject::ISubContainerCreator* Zenject::SubContainerCreatorByInstance::i___Zenject__ISubContainerCreator() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByInstance::SubContainerCreatorByInstance() {}
