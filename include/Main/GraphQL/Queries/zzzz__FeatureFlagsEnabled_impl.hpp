#pragma once
// IWYU pragma private; include "Main/GraphQL/Queries/FeatureFlagsEnabled.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "Main/GraphQL/Queries/zzzz__FeatureFlagsEnabled_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Main::GraphQL::Queries::FeatureFlagsEnabled.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Main::GraphQL::Queries::FeatureFlagsEnabled::*)()>(
    &::Main::GraphQL::Queries::FeatureFlagsEnabled::GetVariableNames)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x328a3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { ::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Queries::FeatureFlagsEnabled.set_Features
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Queries::FeatureFlagsEnabled::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Main::GraphQL::Queries::FeatureFlagsEnabled::set_Features)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x328a4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(),
                                                                                           { "set_Features", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Queries::FeatureFlagsEnabled.get_Features
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Main::GraphQL::Queries::FeatureFlagsEnabled::*)()>(
    &::Main::GraphQL::Queries::FeatureFlagsEnabled::get_Features)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x328a574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { "get_Features", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Queries::FeatureFlagsEnabled.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Main::GraphQL::Queries::FeatureFlagsEnabled::*)()>(&::Main::GraphQL::Queries::FeatureFlagsEnabled::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x328a634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { ::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Queries::FeatureFlagsEnabled._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Queries::FeatureFlagsEnabled::*)()>(&::Main::GraphQL::Queries::FeatureFlagsEnabled::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* Main::GraphQL::Queries::FeatureFlagsEnabled::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void Main::GraphQL::Queries::FeatureFlagsEnabled::set_Features(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(),
                                                                                         { "set_Features", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Main::GraphQL::Queries::FeatureFlagsEnabled::get_Features() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { "get_Features", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline uint64_t Main::GraphQL::Queries::FeatureFlagsEnabled::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Main::GraphQL::Queries::FeatureFlagsEnabled::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Queries::FeatureFlagsEnabled*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Main::GraphQL::Queries::FeatureFlagsEnabled* Main::GraphQL::Queries::FeatureFlagsEnabled::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Main::GraphQL::Queries::FeatureFlagsEnabled*>());
}
// Ctor Parameters []
constexpr ::Main::GraphQL::Queries::FeatureFlagsEnabled::FeatureFlagsEnabled() {}
