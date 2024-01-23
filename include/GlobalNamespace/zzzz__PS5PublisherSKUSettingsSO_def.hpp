#pragma once
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
// Type: ::PS5PublisherSKUSettingsSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4565))
// CS Name: ::PS5PublisherSKUSettingsSO*
class CORDL_TYPE PS5PublisherSKUSettingsSO : public ::GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5PublisherSKUSettingsSO* New_ctor();

  /// @brief Method .ctor, addr 0x2368334, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5PublisherSKUSettingsSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PublisherSKUSettingsSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PublisherSKUSettingsSO*, "", "PS5PublisherSKUSettingsSO");
