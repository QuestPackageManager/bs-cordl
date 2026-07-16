#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/XOCBeatGamesUserUpsertData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesUserUpsertData_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__ISOCountryCode_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__TimezoneIDEnum_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesUserUpsertData_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputSupportsClientMutationId_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_ClientMutationId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a04cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData.set_CountryCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode>)>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_CountryCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a054c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(),
                                                             { "set_CountryCode", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData.set_Locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_Locale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a05f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "set_Locale", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData.set_TimezoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum>)>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_TimezoneId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a0678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(),
                                                             { "set_TimezoneId", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData.GetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (
    ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)()>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::GetParams)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32a0724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "GetParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::*)()>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32a0730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const&
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::__cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_ClientMutationId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_CountryCode(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(),
                                                           { "set_CountryCode", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_Locale(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "set_Locale", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::set_TimezoneId(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(),
                                                           { "set_TimezoneId", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::GetParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { "GetParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*>());
}
/// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::operator ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData"
constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesUserUpsertData() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputSupportsClientMutationId() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData::XOCBeatGamesUserUpsertData() {}
