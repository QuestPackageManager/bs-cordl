#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstanceGetter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ISubContainerCreator_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByInstanceGetter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByInstanceGetter::*)(
    ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*)>(&::Zenject::SubContainerCreatorByInstanceGetter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4b3eff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByInstanceGetter::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4b3f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& Zenject::SubContainerCreatorByInstanceGetter::__cordl_internal_get__subcontainerGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subcontainerGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* const& Zenject::SubContainerCreatorByInstanceGetter::__cordl_internal_get__subcontainerGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subcontainerGetter;
}
constexpr void Zenject::SubContainerCreatorByInstanceGetter::__cordl_internal_set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subcontainerGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::SubContainerCreatorByInstanceGetter::_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subcontainerGetter);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByInstanceGetter*
Zenject::SubContainerCreatorByInstanceGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerCreatorByInstanceGetter*>(subcontainerGetter));
}
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr Zenject::SubContainerCreatorByInstanceGetter::operator ::Zenject::ISubContainerCreator*() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ISubContainerCreator"
constexpr ::Zenject::ISubContainerCreator* Zenject::SubContainerCreatorByInstanceGetter::i___Zenject__ISubContainerCreator() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByInstanceGetter::SubContainerCreatorByInstanceGetter() {}
