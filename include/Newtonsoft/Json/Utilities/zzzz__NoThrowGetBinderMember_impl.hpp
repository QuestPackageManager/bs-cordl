#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\NoThrowGetBinderMember.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowGetBinderMember_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Dynamic/zzzz__GetMemberBinder_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::*)(::System::Dynamic::GetMemberBinder*)>(
    &::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d25efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::GetMemberBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember.FallbackGetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(
        &::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d25f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::GetMemberBinder*& Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_get__innerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr ::System::Dynamic::GetMemberBinder* const& Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_get__innerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerBinder;
}
constexpr void Newtonsoft::Json::Utilities::NoThrowGetBinderMember::__cordl_internal_set__innerBinder(::System::Dynamic::GetMemberBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerBinder = value;
}
inline void Newtonsoft::Json::Utilities::NoThrowGetBinderMember::_ctor(::System::Dynamic::GetMemberBinder* innerBinder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Dynamic::GetMemberBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerBinder);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Utilities::NoThrowGetBinderMember::FallbackGetMember(::System::Dynamic::DynamicMetaObject* target,
                                                                                                                    ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, errorSuggestion);
}
inline ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember* Newtonsoft::Json::Utilities::NoThrowGetBinderMember::New_ctor(::System::Dynamic::GetMemberBinder* innerBinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*>(innerBinder));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember::NoThrowGetBinderMember() {}
