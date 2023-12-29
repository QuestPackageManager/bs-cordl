#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAgreements)
// Forward declare root types
namespace GlobalNamespace {
class PlayerAgreements;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerAgreements);
// Type: ::PlayerAgreements
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4739))
// CS Name: ::PlayerAgreements*
class CORDL_TYPE PlayerAgreements : public ::System::Object {
public:
  // Declarations
  /// @brief Field eulaVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_eulaVersion, put = __set_eulaVersion)) int32_t eulaVersion;

  /// @brief Field privacyPolicyVersion, offset 0x14, size 0x4
  __declspec(property(get = __get_privacyPolicyVersion, put = __set_privacyPolicyVersion)) int32_t privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset 0x18, size 0x4
  __declspec(property(get = __get_healthAndSafetyVersion, put = __set_healthAndSafetyVersion)) int32_t healthAndSafetyVersion;

  constexpr int32_t& __get_eulaVersion();

  constexpr int32_t const& __get_eulaVersion() const;

  constexpr void __set_eulaVersion(int32_t value);

  constexpr int32_t& __get_privacyPolicyVersion();

  constexpr int32_t const& __get_privacyPolicyVersion() const;

  constexpr void __set_privacyPolicyVersion(int32_t value);

  constexpr int32_t& __get_healthAndSafetyVersion();

  constexpr int32_t const& __get_healthAndSafetyVersion() const;

  constexpr void __set_healthAndSafetyVersion(int32_t value);

  static inline ::GlobalNamespace::PlayerAgreements* New_ctor();

  /// @brief Method .ctor addr 0x2234834 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerAgreements* New_ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion);

  /// @brief Method .ctor addr 0x2234854 size 0x3c virtual false final false
  inline void _ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion);

  /// @brief Method AgreeToEula addr 0x2234890 size 0xc virtual false final false
  inline void AgreeToEula();

  /// @brief Method AgreeToPrivacyPolicy addr 0x223489c size 0xc virtual false final false
  inline void AgreeToPrivacyPolicy();

  /// @brief Method AgreeToHealthAndSafety addr 0x22348a8 size 0xc virtual false final false
  inline void AgreeToHealthAndSafety();

  /// @brief Method AgreedToPreviousPrivacyPolicy addr 0x22348b4 size 0x10 virtual false final false
  inline bool AgreedToPreviousPrivacyPolicy();

  /// @brief Method AgreedToAnyPreviousEula addr 0x22348c4 size 0x1c virtual false final false
  inline bool AgreedToAnyPreviousEula();

  /// @brief Method AgreedToAnyPreviousPrivacyPolicy addr 0x22348e0 size 0x1c virtual false final false
  inline bool AgreedToAnyPreviousPrivacyPolicy();

  /// @brief Method AgreedToAnyPreviousHealthAndSafety addr 0x22348fc size 0xc virtual false final false
  inline bool AgreedToAnyPreviousHealthAndSafety();

  /// @brief Method AgreedToEula addr 0x2234908 size 0x10 virtual false final false
  inline bool AgreedToEula();

  /// @brief Method AgreedToPrivacyPolicy addr 0x2234918 size 0x10 virtual false final false
  inline bool AgreedToPrivacyPolicy();

  /// @brief Method AgreedToHealthAndSafety addr 0x2234928 size 0x10 virtual false final false
  inline bool AgreedToHealthAndSafety();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAgreements(PlayerAgreements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAgreements(PlayerAgreements const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAgreements();

public:
  /// @brief Field eulaVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___eulaVersion;

  /// @brief Field privacyPolicyVersion, offset: 0x14, size: 0x4, def value: None
  int32_t ___privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___healthAndSafetyVersion;

  /// @brief Field kFirstEulaVersion offset 0xffffffff size 0x4
  static constexpr int32_t kFirstEulaVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field kFirstPrivacyPolicyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kFirstPrivacyPolicyVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field kCurrentEulaVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentEulaVersion{ static_cast<int32_t>(0x5) };

  /// @brief Field kCurrentPrivacyPolicyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentPrivacyPolicyVersion{ static_cast<int32_t>(0x5) };

  /// @brief Field kCurrentHealthAndSafetyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentHealthAndSafetyVersion{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAgreements, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___eulaVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___privacyPolicyVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___healthAndSafetyVersion) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAgreements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAgreements*, "", "PlayerAgreements");
