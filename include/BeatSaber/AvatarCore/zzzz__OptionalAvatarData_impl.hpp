#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarData.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::OptionalAvatarData::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::OptionalAvatarData::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x326fd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarData>(), { "Equals", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
    return ___internal_method;
  }
};
inline bool BeatSaber::AvatarCore::OptionalAvatarData::Equals(::BeatSaber::AvatarCore::OptionalAvatarData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarData>(), { "Equals", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr BeatSaber::AvatarCore::OptionalAvatarData::operator ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>* BeatSaber::AvatarCore::OptionalAvatarData::i___System__IEquatable_1___BeatSaber__AvatarCore__OptionalAvatarData_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData(uint32_t dataType, int32_t length, ::ArrayW<uint8_t> data) noexcept {
  this->dataType = dataType;
  this->length = length;
  this->data = data;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData() {}
