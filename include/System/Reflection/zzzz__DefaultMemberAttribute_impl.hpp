#pragma once
// IWYU pragma private; include "System/Reflection/DefaultMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__DefaultMemberAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::DefaultMemberAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::DefaultMemberAttribute::*)(::StringW)>(&::System::Reflection::DefaultMemberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::DefaultMemberAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::DefaultMemberAttribute.get_MemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::DefaultMemberAttribute::*)()>(&::System::Reflection::DefaultMemberAttribute::get_MemberName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::DefaultMemberAttribute*>(), { "get_MemberName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::DefaultMemberAttribute::__cordl_internal_get__MemberName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberName_k__BackingField;
}
constexpr ::StringW const& System::Reflection::DefaultMemberAttribute::__cordl_internal_get__MemberName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberName_k__BackingField;
}
constexpr void System::Reflection::DefaultMemberAttribute::__cordl_internal_set__MemberName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MemberName_k__BackingField = value;
}
inline void System::Reflection::DefaultMemberAttribute::_ctor(::StringW memberName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::DefaultMemberAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberName);
}
inline ::StringW System::Reflection::DefaultMemberAttribute::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::DefaultMemberAttribute*>(), { "get_MemberName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::DefaultMemberAttribute* System::Reflection::DefaultMemberAttribute::New_ctor(::StringW memberName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::DefaultMemberAttribute*>(memberName));
}
// Ctor Parameters []
constexpr ::System::Reflection::DefaultMemberAttribute::DefaultMemberAttribute() {}
