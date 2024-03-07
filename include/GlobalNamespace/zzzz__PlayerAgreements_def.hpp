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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerAgreements*
class CORDL_TYPE PlayerAgreements : public ::System::Object {
public:
  // Declarations
  /// @brief Field eulaVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eulaVersion, put = __cordl_internal_set_eulaVersion)) int32_t eulaVersion;

  /// @brief Field healthAndSafetyVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_healthAndSafetyVersion, put = __cordl_internal_set_healthAndSafetyVersion)) int32_t healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_playerSensitivityFlagVersion, put = __cordl_internal_set_playerSensitivityFlagVersion)) int32_t playerSensitivityFlagVersion;

  /// @brief Field privacyPolicyVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_privacyPolicyVersion, put = __cordl_internal_set_privacyPolicyVersion)) int32_t privacyPolicyVersion;

  /// @brief Method AgreeToEula, addr 0x1317cfc, size 0xc, virtual false, abstract: false, final false
  inline void AgreeToEula();

  /// @brief Method AgreeToHealthAndSafety, addr 0x1317d14, size 0xc, virtual false, abstract: false, final false
  inline void AgreeToHealthAndSafety();

  /// @brief Method AgreeToPlayerSensitivityFlag, addr 0x1317d20, size 0xc, virtual false, abstract: false, final false
  inline void AgreeToPlayerSensitivityFlag();

  /// @brief Method AgreeToPrivacyPolicy, addr 0x1317d08, size 0xc, virtual false, abstract: false, final false
  inline void AgreeToPrivacyPolicy();

  /// @brief Method AgreedToAnyPreviousEula, addr 0x1317d3c, size 0x1c, virtual false, abstract: false, final false
  inline bool AgreedToAnyPreviousEula();

  /// @brief Method AgreedToAnyPreviousHealthAndSafety, addr 0x1317d74, size 0xc, virtual false, abstract: false, final false
  inline bool AgreedToAnyPreviousHealthAndSafety();

  /// @brief Method AgreedToAnyPreviousPlayerSensitivityFlag, addr 0x1317d80, size 0x1c, virtual false, abstract: false, final false
  inline bool AgreedToAnyPreviousPlayerSensitivityFlag();

  /// @brief Method AgreedToAnyPreviousPrivacyPolicy, addr 0x1317d58, size 0x1c, virtual false, abstract: false, final false
  inline bool AgreedToAnyPreviousPrivacyPolicy();

  /// @brief Method AgreedToEula, addr 0x1317d9c, size 0x10, virtual false, abstract: false, final false
  inline bool AgreedToEula();

  /// @brief Method AgreedToHealthAndSafety, addr 0x1317dbc, size 0x10, virtual false, abstract: false, final false
  inline bool AgreedToHealthAndSafety();

  /// @brief Method AgreedToPlayerSenstivityFlag, addr 0x1317dcc, size 0x10, virtual false, abstract: false, final false
  inline bool AgreedToPlayerSenstivityFlag();

  /// @brief Method AgreedToPreviousPrivacyPolicy, addr 0x1317d2c, size 0x10, virtual false, abstract: false, final false
  inline bool AgreedToPreviousPrivacyPolicy();

  /// @brief Method AgreedToPrivacyPolicy, addr 0x1317dac, size 0x10, virtual false, abstract: false, final false
  inline bool AgreedToPrivacyPolicy();

  static inline ::GlobalNamespace::PlayerAgreements* New_ctor();

  static inline ::GlobalNamespace::PlayerAgreements* New_ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion, int32_t playerSensitivityFlagVersion);

  constexpr int32_t const& __cordl_internal_get_eulaVersion() const;

  constexpr int32_t& __cordl_internal_get_eulaVersion();

  constexpr int32_t const& __cordl_internal_get_healthAndSafetyVersion() const;

  constexpr int32_t& __cordl_internal_get_healthAndSafetyVersion();

  constexpr int32_t const& __cordl_internal_get_playerSensitivityFlagVersion() const;

  constexpr int32_t& __cordl_internal_get_playerSensitivityFlagVersion();

  constexpr int32_t const& __cordl_internal_get_privacyPolicyVersion() const;

  constexpr int32_t& __cordl_internal_get_privacyPolicyVersion();

  constexpr void __cordl_internal_set_eulaVersion(int32_t value);

  constexpr void __cordl_internal_set_healthAndSafetyVersion(int32_t value);

  constexpr void __cordl_internal_set_playerSensitivityFlagVersion(int32_t value);

  constexpr void __cordl_internal_set_privacyPolicyVersion(int32_t value);

  /// @brief Method .ctor, addr 0x1317ca0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1317cbc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion, int32_t playerSensitivityFlagVersion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAgreements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAgreements(PlayerAgreements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAgreements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAgreements(PlayerAgreements const&) = delete;

  /// @brief Field eulaVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___eulaVersion;

  /// @brief Field privacyPolicyVersion, offset: 0x14, size: 0x4, def value: None
  int32_t ___privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset: 0x1c, size: 0x4, def value: None
  int32_t ___playerSensitivityFlagVersion;

  /// @brief Field kCurrentEulaVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentEulaVersion{ static_cast<int32_t>(0x5) };

  /// @brief Field kCurrentHealthAndSafetyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentHealthAndSafetyVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field kCurrentPlayerSensitivityFlagVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentPlayerSensitivityFlagVersion{ static_cast<int32_t>(0x2) };

  /// @brief Field kCurrentPrivacyPolicyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentPrivacyPolicyVersion{ static_cast<int32_t>(0x5) };

  /// @brief Field kFirstEulaVersion offset 0xffffffff size 0x4
  static constexpr int32_t kFirstEulaVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field kFirstPrivacyPolicyVersion offset 0xffffffff size 0x4
  static constexpr int32_t kFirstPrivacyPolicyVersion{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAgreements, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___eulaVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___privacyPolicyVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___healthAndSafetyVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgreements, ___playerSensitivityFlagVersion) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAgreements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAgreements*, "", "PlayerAgreements");
