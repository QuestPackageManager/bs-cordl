#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlagsEnabledQuery.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureFlagsEnabledQuery_def.hpp"
#include "Main/GraphQL/Queries/zzzz__FeatureFlagsEnabled_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__FailureHandlingMethod_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3536db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery.GetFailureHandlingMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod (::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::*)()>(
    &::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::GetFailureHandlingMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3537574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery.CreateQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Main::GraphQL::Queries::FeatureFlagsEnabled* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::CreateQuery)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3537508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(),
                                                                                           { "CreateQuery", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::_ctor(::System::Collections::Generic::List_1<::StringW>* features) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, features);
}
inline ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::GetFailureHandlingMethod() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod>(this, ___internal_method);
}
inline ::Main::GraphQL::Queries::FeatureFlagsEnabled* BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::CreateQuery(::System::Collections::Generic::List_1<::StringW>* features) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(),
                                                                                         { "CreateQuery", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(nullptr, ___internal_method, features);
}
inline ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery* BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::New_ctor(::System::Collections::Generic::List_1<::StringW>* features) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(features));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::FeatureFlagsEnabledQuery() {}
