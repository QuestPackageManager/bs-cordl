#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstanceGetter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByInstanceGetter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByInstanceGetter::*)(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*)>(
    &::Zenject::SubContainerCreatorByInstanceGetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e875b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstanceGetter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByInstanceGetter::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e875b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstanceGetter*>(),
                            { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
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
  this->____subcontainerGetter = value;
}
inline void Zenject::SubContainerCreatorByInstanceGetter::_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstanceGetter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subcontainerGetter);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstanceGetter*>(),
                          { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByInstanceGetter*
Zenject::SubContainerCreatorByInstanceGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subcontainerGetter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByInstanceGetter*>(subcontainerGetter));
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
