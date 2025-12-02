#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedPresetsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(NamedPresetsSO)
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedPresetsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedPresetsSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedPresetsSO
class CORDL_TYPE NamedPresetsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_namedPresets)) ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> namedPresets;

  static inline ::GlobalNamespace::NamedPresetsSO* New_ctor();

  /// @brief Method .ctor, addr 0x36080e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_namedPresets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> get_namedPresets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedPresetsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedPresetsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedPresetsSO(NamedPresetsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedPresetsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedPresetsSO(NamedPresetsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedPresetsSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedPresetsSO*, "", "NamedPresetsSO");
