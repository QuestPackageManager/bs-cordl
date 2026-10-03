#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagLazyInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagLazyInitialization_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagLazyInitialization.AddLazyRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*)>(
    &::Unity::Properties::Internal::PropertyBagLazyInitialization::AddLazyRegistration)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x701323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(),
                                                { "AddLazyRegistration", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::Unity::Properties::IPropertyBag*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagLazyInitialization.HasLazyRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::Internal::PropertyBagLazyInitialization::HasLazyRegistration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70132e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(), { "HasLazyRegistration", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagLazyInitialization.TryGetRegistrationDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Func_1<::Unity::Properties::IPropertyBag*>*>)>(
    &::Unity::Properties::Internal::PropertyBagLazyInitialization::TryGetRegistrationDelegate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7013384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(),
                            { "TryGetRegistrationDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Func_1<::Unity::Properties::IPropertyBag*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::PropertyBagLazyInitialization.RemoveRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Unity::Properties::Internal::PropertyBagLazyInitialization::RemoveRegistration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x701341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(), { "RemoveRegistration", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::PropertyBagLazyInitialization::setStaticF_s_LazyPropertyBagRegistrations(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>*, "s_LazyPropertyBagRegistrations",
                                    ::Unity::Properties::Internal::PropertyBagLazyInitialization*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>*
Unity::Properties::Internal::PropertyBagLazyInitialization::getStaticF_s_LazyPropertyBagRegistrations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>*, "s_LazyPropertyBagRegistrations",
                                           ::Unity::Properties::Internal::PropertyBagLazyInitialization*>();
}
inline void Unity::Properties::Internal::PropertyBagLazyInitialization::AddLazyRegistration(::System::Type* type, ::System::Func_1<::Unity::Properties::IPropertyBag*>* registration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(),
                                              { "AddLazyRegistration", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::Unity::Properties::IPropertyBag*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, registration);
}
inline bool Unity::Properties::Internal::PropertyBagLazyInitialization::HasLazyRegistration(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(), { "HasLazyRegistration", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Properties::Internal::PropertyBagLazyInitialization::TryGetRegistrationDelegate(::System::Type* type,
                                                                                                   ::by_ref<::System::Func_1<::Unity::Properties::IPropertyBag*>*> registrationDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(),
                          { "TryGetRegistrationDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Func_1<::Unity::Properties::IPropertyBag*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, registrationDelegate);
}
inline void Unity::Properties::Internal::PropertyBagLazyInitialization::RemoveRegistration(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertyBagLazyInitialization*>(), { "RemoveRegistration", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::PropertyBagLazyInitialization::PropertyBagLazyInitialization() {}
