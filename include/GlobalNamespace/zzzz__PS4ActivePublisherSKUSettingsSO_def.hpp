#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4ActivePublisherSKUSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PS4ActivePublisherSKUSettingsSO)
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4ActivePublisherSKUSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS4ActivePublisherSKUSettingsSO
class CORDL_TYPE PS4ActivePublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field activePublisherSKUSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activePublisherSKUSettings, put = __cordl_internal_set_activePublisherSKUSettings)) ::UnityW<::GlobalNamespace::PS4PublisherSKUSettingsSO>
      activePublisherSKUSettings;

  static inline ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::PS4PublisherSKUSettingsSO> const& __cordl_internal_get_activePublisherSKUSettings() const;

  constexpr ::UnityW<::GlobalNamespace::PS4PublisherSKUSettingsSO>& __cordl_internal_get_activePublisherSKUSettings();

  constexpr void __cordl_internal_set_activePublisherSKUSettings(::UnityW<::GlobalNamespace::PS4PublisherSKUSettingsSO> value);

  /// @brief Method .ctor, addr 0x26e6ef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4ActivePublisherSKUSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13153 };

  /// @brief Field activePublisherSKUSettings, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4PublisherSKUSettingsSO> ___activePublisherSKUSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO, ___activePublisherSKUSettings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, "", "PS4ActivePublisherSKUSettingsSO");
