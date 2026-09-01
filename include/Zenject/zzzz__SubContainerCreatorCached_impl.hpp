#pragma once
// IWYU pragma private; include "Zenject\SubContainerCreatorCached.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorCached._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerCreatorCached::*)(::Zenject::ISubContainerCreator*)>(&::Zenject::SubContainerCreatorCached::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8c65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorCached*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ISubContainerCreator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorCached.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorCached::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorCached::CreateSubContainer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6e8c664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorCached*>(),
                            { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ISubContainerCreator*& Zenject::SubContainerCreatorCached::__cordl_internal_get__subCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subCreator;
}
constexpr ::Zenject::ISubContainerCreator* const& Zenject::SubContainerCreatorCached::__cordl_internal_get__subCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subCreator;
}
constexpr void Zenject::SubContainerCreatorCached::__cordl_internal_set__subCreator(::Zenject::ISubContainerCreator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subCreator = value;
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
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerCreatorCached::__cordl_internal_get__subContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainer;
}
constexpr void Zenject::SubContainerCreatorCached::__cordl_internal_set__subContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subContainer = value;
}
inline void Zenject::SubContainerCreatorCached::_ctor(::Zenject::ISubContainerCreator* subCreator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorCached*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ISubContainerCreator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subCreator);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorCached::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorCached*>(),
                          { "CreateSubContainer", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
inline ::Zenject::SubContainerCreatorCached* Zenject::SubContainerCreatorCached::New_ctor(::Zenject::ISubContainerCreator* subCreator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorCached*>(subCreator));
}
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr Zenject::SubContainerCreatorCached::operator ::Zenject::ISubContainerCreator*() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ISubContainerCreator"
constexpr ::Zenject::ISubContainerCreator* Zenject::SubContainerCreatorCached::i___Zenject__ISubContainerCreator() noexcept {
  return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorCached::SubContainerCreatorCached() {}
