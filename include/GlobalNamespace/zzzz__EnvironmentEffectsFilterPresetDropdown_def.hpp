#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentEffectsFilterPresetDropdown)
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown);
// Type: ::EnvironmentEffectsFilterPresetDropdown
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentEffectsFilterPresetDropdown*
class CORDL_TYPE EnvironmentEffectsFilterPresetDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x2632ae4, size 0x128, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x2632c0c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentEffectsFilterPresetDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, "", "EnvironmentEffectsFilterPresetDropdown");
