#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectMethod.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectMethod_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(
    ::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e87cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectMethod.AddInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectMethod::*)(
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&::Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e87d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(),
                                                                                          { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerCreatorByNewGameObjectMethod::__cordl_internal_get__installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::SubContainerCreatorByNewGameObjectMethod::__cordl_internal_get__installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerMethod;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectMethod::__cordl_internal_set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installerMethod = value;
}
inline void Zenject::SubContainerCreatorByNewGameObjectMethod::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                     ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(),
          { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, gameObjectBindInfo, installerMethod);
}
inline void Zenject::SubContainerCreatorByNewGameObjectMethod::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByNewGameObjectMethod* Zenject::SubContainerCreatorByNewGameObjectMethod::New_ctor(::Zenject::DiContainer* container,
                                                                                                                        ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                                        ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewGameObjectMethod*>(container, gameObjectBindInfo, installerMethod));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectMethod::SubContainerCreatorByNewGameObjectMethod() {}
