#pragma once
// IWYU pragma private; include "GlobalNamespace/AppStaticSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AppStaticSettingsSO)
// Forward declare root types
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppStaticSettingsSO);
// Type: ::AppStaticSettingsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 27, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AppStaticSettingsSO*
class CORDL_TYPE AppStaticSettingsSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field enable360DegreeLevels, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_enable360DegreeLevels, put = __cordl_internal_set_enable360DegreeLevels)) bool enable360DegreeLevels;

  /// @brief Field enableCustomLevels, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_enableCustomLevels, put = __cordl_internal_set_enableCustomLevels)) bool enableCustomLevels;

  /// @brief Field requirePrivacyPolicy, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_requirePrivacyPolicy, put = __cordl_internal_set_requirePrivacyPolicy)) bool requirePrivacyPolicy;

  static inline ::GlobalNamespace::AppStaticSettingsSO* New_ctor();

  constexpr bool const& __cordl_internal_get_enable360DegreeLevels() const;

  constexpr bool& __cordl_internal_get_enable360DegreeLevels();

  constexpr bool const& __cordl_internal_get_enableCustomLevels() const;

  constexpr bool& __cordl_internal_get_enableCustomLevels();

  constexpr bool const& __cordl_internal_get_requirePrivacyPolicy() const;

  constexpr bool& __cordl_internal_get_requirePrivacyPolicy();

  constexpr void __cordl_internal_set_enable360DegreeLevels(bool value);

  constexpr void __cordl_internal_set_enableCustomLevels(bool value);

  constexpr void __cordl_internal_set_requirePrivacyPolicy(bool value);

  /// @brief Method .ctor, addr 0x14a933c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppStaticSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppStaticSettingsSO(AppStaticSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppStaticSettingsSO(AppStaticSettingsSO const&) = delete;

  /// @brief Field requirePrivacyPolicy, offset: 0x18, size: 0x1, def value: None
  bool ___requirePrivacyPolicy;

  /// @brief Field enable360DegreeLevels, offset: 0x19, size: 0x1, def value: None
  bool ___enable360DegreeLevels;

  /// @brief Field enableCustomLevels, offset: 0x1a, size: 0x1, def value: None
  bool ___enableCustomLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppStaticSettingsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppStaticSettingsSO, ___requirePrivacyPolicy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppStaticSettingsSO, ___enable360DegreeLevels) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppStaticSettingsSO, ___enableCustomLevels) == 0x1a, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppStaticSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppStaticSettingsSO*, "", "AppStaticSettingsSO");
