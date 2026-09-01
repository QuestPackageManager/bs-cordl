#pragma once
// IWYU pragma private; include "Zenject\SubContainerCreatorByNewPrefabInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabInstaller_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::*)()>(
    &::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8b8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0._AddInstallers_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::_AddInstallers_b__0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e8b8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(),
                                                                                           { "<AddInstallers>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8ba58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8ba9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorByNewPrefabInstaller*& Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerCreatorByNewPrefabInstaller* const& Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_set___4__this(::Zenject::SubContainerCreatorByNewPrefabInstaller* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
inline void Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::_AddInstallers_b__0(::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(),
                                                                                         { "<AddInstallers>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subContainer);
}
inline ::System::Object* Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0* Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0::SubContainerCreatorByNewPrefabInstaller___c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabInstaller::*)(
    ::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::SubContainerCreatorByNewPrefabInstaller::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e8b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabInstaller.AddInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabInstaller::*)(
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&::Zenject::SubContainerCreatorByNewPrefabInstaller::AddInstallers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e8b7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(), { ::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_get__installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_get__installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_set__installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installerType = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_get__extraArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_get__extraArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabInstaller::__cordl_internal_set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArgs = value;
}
inline void Zenject::SubContainerCreatorByNewPrefabInstaller::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* installerType,
                                                                    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                  ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo, installerType, extraArgs);
}
inline void Zenject::SubContainerCreatorByNewPrefabInstaller::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByNewPrefabInstaller* Zenject::SubContainerCreatorByNewPrefabInstaller::New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                                      ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                                      ::System::Type* installerType,
                                                                                                                      ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByNewPrefabInstaller*>(container, prefabProvider, gameObjectBindInfo, installerType, extraArgs));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabInstaller::SubContainerCreatorByNewPrefabInstaller() {}
