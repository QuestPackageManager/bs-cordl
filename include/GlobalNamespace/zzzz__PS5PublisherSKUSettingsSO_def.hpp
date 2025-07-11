#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5PublisherSKUSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyPublisherSKUSettingsSO_def.hpp"
CORDL_MODULE_EXPORT(PS5PublisherSKUSettingsSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5PublisherSKUSettingsSO);
// Dependencies SonyPublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5PublisherSKUSettingsSO
class CORDL_TYPE PS5PublisherSKUSettingsSO : public ::GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5PublisherSKUSettingsSO* New_ctor();

  /// @brief Method .ctor, addr 0x26eb53c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5PublisherSKUSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PublisherSKUSettingsSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PublisherSKUSettingsSO*, "", "PS5PublisherSKUSettingsSO");
