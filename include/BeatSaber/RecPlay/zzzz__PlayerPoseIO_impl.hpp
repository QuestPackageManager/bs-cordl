#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\PlayerPoseIO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseIO_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseIO.SerializeAsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BeatSaber::RecPlay::PlayerPoseFrames)>(&::BeatSaber::RecPlay::PlayerPoseIO::SerializeAsText)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x32c40f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(), { "SerializeAsText", {}, { ::i2c::type_of<::BeatSaber::RecPlay::PlayerPoseFrames>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseIO.DeserializeFromText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>, ::by_ref<::StringW>)>(
    &::BeatSaber::RecPlay::PlayerPoseIO::DeserializeFromText)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x32c48e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                         { "DeserializeFromText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseIO.NextToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::by_ref<::System::ReadOnlySpan_1<char16_t>>)>(&::BeatSaber::RecPlay::PlayerPoseIO::NextToken)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x32c50d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(), { "NextToken", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseIO.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::ReadOnlySpan_1<char16_t>>, char16_t, char16_t)>(&::BeatSaber::RecPlay::PlayerPoseIO::Clamp)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x32c5270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                                                { "Clamp", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseIO._SerializeAsText_g__WriteFrames_0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::ArrayW<::BeatSaber::RecPlay::PoseFrame>)>(
    &::BeatSaber::RecPlay::PlayerPoseIO::_SerializeAsText_g__WriteFrames_0_0)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x32c44cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                                                { "<SerializeAsText>g__WriteFrames|0_0",
                                                  {},
                                                  { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>() } })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::RecPlay::PlayerPoseIO::SerializeAsText(::BeatSaber::RecPlay::PlayerPoseFrames frames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(), { "SerializeAsText", {}, { ::i2c::type_of<::BeatSaber::RecPlay::PlayerPoseFrames>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frames);
}
inline bool BeatSaber::RecPlay::PlayerPoseIO::DeserializeFromText(::StringW text, ::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames> playerPoseFrames, ::by_ref<::StringW> log) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                          { "DeserializeFromText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, playerPoseFrames, log);
}
inline ::System::ReadOnlySpan_1<char16_t> BeatSaber::RecPlay::PlayerPoseIO::NextToken(::by_ref<::System::ReadOnlySpan_1<char16_t>> s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(), { "NextToken", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, s);
}
inline bool BeatSaber::RecPlay::PlayerPoseIO::Clamp(::by_ref<::System::ReadOnlySpan_1<char16_t>> s, char16_t start, char16_t end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                                              { "Clamp", {}, { ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, start, end);
}
inline void BeatSaber::RecPlay::PlayerPoseIO::_SerializeAsText_g__WriteFrames_0_0(::System::Text::StringBuilder* sb, ::StringW name, ::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseIO*>(),
                                              { "<SerializeAsText>g__WriteFrames|0_0",
                                                {},
                                                { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, name, frames);
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseIO::PlayerPoseIO() {}
