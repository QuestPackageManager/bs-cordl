#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\InputTypes\XOCBeatGamesBeatmapLeaderboardEntryOrder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder.set_By
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::*)(
    ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject)>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::set_By)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a0fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(),
                                                             { "set_By", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder.set_Desc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::*)(::System::Nullable_1<bool>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::set_Desc)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a1088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(),
                                                                                           { "set_Desc", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder.GetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (
    ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::*)()>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::GetParams)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32a1134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(), { "GetParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::*)()>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32a1140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*&
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const&
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::__cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::set_By(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(),
                                                           { "set_By", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::set_Desc(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(),
                                                                                         { "set_Desc", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::GetParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(), { "GetParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>());
}
/// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::operator ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder"
constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesBeatmapLeaderboardEntryOrder() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder::XOCBeatGamesBeatmapLeaderboardEntryOrder() {}
