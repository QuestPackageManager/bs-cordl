#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelPackInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LevelPackInfo)
namespace GlobalNamespace {
class LevelInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelPackInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelPackInfo);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelPackInfo
class CORDL_TYPE LevelPackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <levels>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levels_k__BackingField,
                      put = __cordl_internal_set__levels_k__BackingField)) ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*>
      _levels_k__BackingField;

  /// @brief Field <minimumProtocolVersion>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumProtocolVersion_k__BackingField,
                      put = __cordl_internal_set__minimumProtocolVersion_k__BackingField)) uint32_t _minimumProtocolVersion_k__BackingField;

  /// @brief Field <packID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packID_k__BackingField, put = __cordl_internal_set__packID_k__BackingField)) ::StringW _packID_k__BackingField;

  __declspec(property(get = get_levels, put = set_levels)) ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> levels;

  __declspec(property(get = get_minimumProtocolVersion, put = set_minimumProtocolVersion)) uint32_t minimumProtocolVersion;

  __declspec(property(get = get_packID, put = set_packID)) ::StringW packID;

  static inline ::GlobalNamespace::LevelPackInfo* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> const& __cordl_internal_get__levels_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*>& __cordl_internal_get__levels_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__minimumProtocolVersion_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__minimumProtocolVersion_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__packID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__packID_k__BackingField();

  constexpr void __cordl_internal_set__levels_k__BackingField(::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> value);

  constexpr void __cordl_internal_set__minimumProtocolVersion_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__packID_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x22dd0b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levels, addr 0x22dd098, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> get_levels();

  /// @brief Method get_minimumProtocolVersion, addr 0x22dd0a8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_minimumProtocolVersion();

  /// @brief Method get_packID, addr 0x22dd088, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_packID();

  /// @brief Method set_levels, addr 0x22dd0a0, size 0x8, virtual false, abstract: false, final false
  inline void set_levels(::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> value);

  /// @brief Method set_minimumProtocolVersion, addr 0x22dd0b0, size 0x8, virtual false, abstract: false, final false
  inline void set_minimumProtocolVersion(uint32_t value);

  /// @brief Method set_packID, addr 0x22dd090, size 0x8, virtual false, abstract: false, final false
  inline void set_packID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelPackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelPackInfo(LevelPackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelPackInfo(LevelPackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14894 };

  /// @brief Field <packID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____packID_k__BackingField;

  /// @brief Field <levels>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LevelInfo*, ::Array<::GlobalNamespace::LevelInfo*>*> ____levels_k__BackingField;

  /// @brief Field <minimumProtocolVersion>k__BackingField, offset: 0x20, size: 0x4, def value: None
  uint32_t ____minimumProtocolVersion_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPackInfo, ____packID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackInfo, ____levels_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackInfo, ____minimumProtocolVersion_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelPackInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackInfo*, "", "LevelPackInfo");
