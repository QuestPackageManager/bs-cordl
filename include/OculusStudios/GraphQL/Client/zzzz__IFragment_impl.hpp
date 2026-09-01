#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\IFragment.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IFragment_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::IFragment.CovertNestedFragments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::IFragment::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::OculusStudios::GraphQL::Client::IFragment::CovertNestedFragments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::IFragment.GetNestedFragments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::OculusStudios::GraphQL::Client::GraphQLModel*>* (
    ::OculusStudios::GraphQL::Client::IFragment::*)()>(&::OculusStudios::GraphQL::Client::IFragment::GetNestedFragments)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f229d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), 1 }));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::IFragment::CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* json) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline ::System::Collections::Generic::IEnumerable_1<::OculusStudios::GraphQL::Client::GraphQLModel*>* OculusStudios::GraphQL::Client::IFragment::GetNestedFragments() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::IFragment*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OculusStudios::GraphQL::Client::GraphQLModel*>*>(this, ___internal_method);
}
