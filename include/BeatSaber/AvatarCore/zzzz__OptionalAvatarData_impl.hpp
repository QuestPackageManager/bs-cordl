#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarData.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::OptionalAvatarData::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::OptionalAvatarData::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2250fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
    return ___internal_method;
  }
};
inline bool BeatSaber::AvatarCore::OptionalAvatarData::Equals(::BeatSaber::AvatarCore::OptionalAvatarData other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr BeatSaber::AvatarCore::OptionalAvatarData::operator ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>* BeatSaber::AvatarCore::OptionalAvatarData::i___System__IEquatable_1___BeatSaber__AvatarCore__OptionalAvatarData_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData(uint32_t dataType, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept {
  this->dataType = dataType;
  this->length = length;
  this->data = data;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData() {}
