#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\NoThrowSetBinderMember.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowSetBinderMember_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::*)(::System::Dynamic::SetMemberBinder*)>(
    &::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d26084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::SetMemberBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember.FallbackSetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(
    &::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::FallbackSetMember)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d260bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::SetMemberBinder*& Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_get__innerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr ::System::Dynamic::SetMemberBinder* const& Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_get__innerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr void Newtonsoft::Json::Utilities::NoThrowSetBinderMember::__cordl_internal_set__innerBinder(::System::Dynamic::SetMemberBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerBinder = value;
}
inline void Newtonsoft::Json::Utilities::NoThrowSetBinderMember::_ctor(::System::Dynamic::SetMemberBinder* innerBinder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::SetMemberBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerBinder);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Utilities::NoThrowSetBinderMember::FallbackSetMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* value,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, value, errorSuggestion);
}
inline ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember* Newtonsoft::Json::Utilities::NoThrowSetBinderMember::New_ctor(::System::Dynamic::SetMemberBinder* innerBinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*>(innerBinder));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember::NoThrowSetBinderMember() {}
