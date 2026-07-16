#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByInstaller::*)(::Zenject::DiContainer*, ::Zenject::SubContainerCreatorBindInfo*, ::System::Type*,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::SubContainerCreatorByInstaller::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e86f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorByInstaller::*)(::Zenject::DiContainer*, ::Zenject::SubContainerCreatorBindInfo*, ::System::Type*)>(
    &::Zenject::SubContainerCreatorByInstaller::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e86ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByInstaller::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorByInstaller::CreateSubContainer)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e87090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                            { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__installerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr ::System::Type* const& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__installerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerType;
}
constexpr void Zenject::SubContainerCreatorByInstaller::__cordl_internal_set__installerType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installerType = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::SubContainerCreatorByInstaller::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__extraArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__extraArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArgs;
}
constexpr void Zenject::SubContainerCreatorByInstaller::__cordl_internal_set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArgs = value;
}
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__containerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerBindInfo;
}
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::SubContainerCreatorByInstaller::__cordl_internal_get__containerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerBindInfo;
}
constexpr void Zenject::SubContainerCreatorByInstaller::__cordl_internal_set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerBindInfo = value;
}
inline void Zenject::SubContainerCreatorByInstaller::_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType,
                                                           ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, containerBindInfo, installerType, extraArgs);
}
inline void Zenject::SubContainerCreatorByInstaller::_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, containerBindInfo, installerType);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByInstaller::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByInstaller*>(),
                          { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorByInstaller* Zenject::SubContainerCreatorByInstaller::New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                                    ::System::Type* installerType,
                                                                                                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByInstaller*>(container, containerBindInfo, installerType, extraArgs));
}
inline ::Zenject::SubContainerCreatorByInstaller* Zenject::SubContainerCreatorByInstaller::New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                                    ::System::Type* installerType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByInstaller*>(container, containerBindInfo, installerType));
}
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr Zenject::SubContainerCreatorByInstaller::operator ::Zenject::ISubContainerCreator*() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ISubContainerCreator"
constexpr ::Zenject::ISubContainerCreator* Zenject::SubContainerCreatorByInstaller::i___Zenject__ISubContainerCreator() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByInstaller::SubContainerCreatorByInstaller() {}
