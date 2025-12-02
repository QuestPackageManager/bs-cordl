#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Anchor.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Anchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Anchor::*)(bool, bool, uint64_t, uint32_t, ::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Anchor::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5866af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Anchor.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Anchor::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Anchor::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5867748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::Anchor::_ctor(bool isAutomaticAnchor, bool isAlignmentAnchor, uint64_t ownerOculusId, uint32_t colocationGroupId,
                                                                   ::System::Guid automaticAnchorUuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isAutomaticAnchor, isAlignmentAnchor, ownerOculusId, colocationGroupId, automaticAnchorUuid);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Anchor::Equals(::Meta::XR::MultiplayerBlocks::Colocation::Anchor other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
constexpr Meta::XR::MultiplayerBlocks::Colocation::Anchor::operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*
Meta::XR::MultiplayerBlocks::Colocation::Anchor::i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Anchor_() {
  return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
