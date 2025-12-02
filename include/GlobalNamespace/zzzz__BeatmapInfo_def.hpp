#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapInfo)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapInfo);
// Dependencies BeatmapDifficultyMask, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapInfo
class CORDL_TYPE BeatmapInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <characteristic>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic_k__BackingField, put = __cordl_internal_set__characteristic_k__BackingField)) ::StringW _characteristic_k__BackingField;

  /// @brief Field <difficulties>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__difficulties_k__BackingField,
                      put = __cordl_internal_set__difficulties_k__BackingField)) ::GlobalNamespace::BeatmapDifficultyMask _difficulties_k__BackingField;

  __declspec(property(get = get_characteristic, put = set_characteristic)) ::StringW characteristic;

  __declspec(property(get = get_difficulties, put = set_difficulties)) ::GlobalNamespace::BeatmapDifficultyMask difficulties;

  static inline ::GlobalNamespace::BeatmapInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__characteristic_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__characteristic_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__difficulties_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__difficulties_k__BackingField();

  constexpr void __cordl_internal_set__characteristic_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__difficulties_k__BackingField(::GlobalNamespace::BeatmapDifficultyMask value);

  /// @brief Method .ctor, addr 0x31b1b90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_characteristic, addr 0x31b1b70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_characteristic();

  /// @brief Method get_difficulties, addr 0x31b1b80, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_difficulties();

  /// @brief Method set_characteristic, addr 0x31b1b78, size 0x8, virtual false, abstract: false, final false
  inline void set_characteristic(::StringW value);

  /// @brief Method set_difficulties, addr 0x31b1b88, size 0x8, virtual false, abstract: false, final false
  inline void set_difficulties(::GlobalNamespace::BeatmapDifficultyMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapInfo(BeatmapInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapInfo(BeatmapInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19027 };

  /// @brief Field <characteristic>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____characteristic_k__BackingField;

  /// @brief Field <difficulties>k__BackingField, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____difficulties_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapInfo, ____characteristic_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapInfo, ____difficulties_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapInfo*, "", "BeatmapInfo");
