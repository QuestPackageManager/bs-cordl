#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectInstaller_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::*)()>(
    &::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e87968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0._AddInstallers_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::_AddInstallers_b__0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e879bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(),
                                                                                           { "<AddInstallers>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e87b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e87b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller*& Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller* const& Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_set___4__this(::Zenject::SubContainerCreatorByNewGameObjectInstaller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
inline void Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::_AddInstallers_b__0(::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(),
                                                                                         { "<AddInstallers>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subContainer);
}
inline ::System::Object* Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0* Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectInstaller::*)(
    ::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::SubContainerCreatorByNewGameObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e87788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewGameObjectInstaller.AddInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewGameObjectInstaller::*)(
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&::Zenject::SubContainerCreatorByNewGameObjectInstaller::AddInstallers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e87850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(),
                                                                                          { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_get__installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_get__installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_set__installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installerType = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_get__extraArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_get__extraArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr void Zenject::SubContainerCreatorByNewGameObjectInstaller::__cordl_internal_set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArgs = value;
}
inline void Zenject::SubContainerCreatorByNewGameObjectInstaller::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* installerType,
                                                                        ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, gameObjectBindInfo, installerType, extraArgs);
}
inline void Zenject::SubContainerCreatorByNewGameObjectInstaller::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByNewGameObjectInstaller*
Zenject::SubContainerCreatorByNewGameObjectInstaller::New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* installerType,
                                                               ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewGameObjectInstaller*>(container, gameObjectBindInfo, installerType, extraArgs));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller::SubContainerCreatorByNewGameObjectInstaller() {}
