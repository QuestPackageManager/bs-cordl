#pragma once
// IWYU pragma private; include "Zenject\MethodMultipleProviderUntyped.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodMultipleProviderUntyped_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::MethodMultipleProviderUntyped._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MethodMultipleProviderUntyped::*)(
    ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, ::Zenject::DiContainer*)>(&::Zenject::MethodMultipleProviderUntyped::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e87a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>(),
                                                                 ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MethodMultipleProviderUntyped.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::MethodMultipleProviderUntyped::*)()>(&::Zenject::MethodMultipleProviderUntyped::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e87a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MethodMultipleProviderUntyped.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::MethodMultipleProviderUntyped::*)()>(&::Zenject::MethodMultipleProviderUntyped::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e87a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MethodMultipleProviderUntyped.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::MethodMultipleProviderUntyped::*)(::Zenject::InjectContext*)>(
    &::Zenject::MethodMultipleProviderUntyped::GetInstanceType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e87a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MethodMultipleProviderUntyped.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MethodMultipleProviderUntyped::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                          ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::MethodMultipleProviderUntyped::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x6e87a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::MethodMultipleProviderUntyped::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::MethodMultipleProviderUntyped::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::MethodMultipleProviderUntyped::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& Zenject::MethodMultipleProviderUntyped::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* const&
Zenject::MethodMultipleProviderUntyped::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr void
Zenject::MethodMultipleProviderUntyped::__cordl_internal_set__method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
inline void Zenject::MethodMultipleProviderUntyped::_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method,
                                                          ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>(),
                                                               ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, container);
}
inline bool Zenject::MethodMultipleProviderUntyped::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::MethodMultipleProviderUntyped::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::MethodMultipleProviderUntyped::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::MethodMultipleProviderUntyped::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                   ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MethodMultipleProviderUntyped*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::MethodMultipleProviderUntyped*
Zenject::MethodMultipleProviderUntyped::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method,
                                                 ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MethodMultipleProviderUntyped*>(method, container));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::MethodMultipleProviderUntyped::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::MethodMultipleProviderUntyped::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::MethodMultipleProviderUntyped::MethodMultipleProviderUntyped() {}
