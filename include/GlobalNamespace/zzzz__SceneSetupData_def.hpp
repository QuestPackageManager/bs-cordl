#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class SceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneSetupData);
// Type: ::SceneSetupData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SceneSetupData*
class CORDL_TYPE SceneSetupData : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::SceneSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x107113c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneSetupData(SceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneSetupData(SceneSetupData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneSetupData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneSetupData*, "", "SceneSetupData");
