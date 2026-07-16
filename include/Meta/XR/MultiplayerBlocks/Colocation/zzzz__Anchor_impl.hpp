#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Anchor.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Anchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Anchor::*)(bool, bool, uint64_t, uint32_t, ::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Anchor::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a7a7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>(),
                            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Anchor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Anchor::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Anchor::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a7b3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::Anchor::_ctor(bool isAutomaticAnchor, bool isAlignmentAnchor, uint64_t ownerOculusId, uint32_t colocationGroupId,
                                                                   ::System::Guid automaticAnchorUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>(),
                                       { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isAutomaticAnchor, isAlignmentAnchor, ownerOculusId, colocationGroupId, automaticAnchorUuid);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Anchor::Equals(::Meta::XR::MultiplayerBlocks::Colocation::Anchor other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
constexpr Meta::XR::MultiplayerBlocks::Colocation::Anchor::operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*
Meta::XR::MultiplayerBlocks::Colocation::Anchor::i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Anchor_() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "isAutomaticAnchor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isAlignmentAnchor", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ownerOculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "automaticAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Anchor::Anchor(bool isAutomaticAnchor, bool isAlignmentAnchor, uint64_t ownerOculusId, uint32_t colocationGroupId,
                                                                    ::System::Guid automaticAnchorUuid) noexcept {
  this->isAutomaticAnchor = isAutomaticAnchor;
  this->isAlignmentAnchor = isAlignmentAnchor;
  this->ownerOculusId = ownerOculusId;
  this->colocationGroupId = colocationGroupId;
  this->automaticAnchorUuid = automaticAnchorUuid;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Anchor::Anchor() {}
