#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorArrayLightWithIdsGroupEntry)
namespace GlobalNamespace {
class ColorArrayLightWithIds;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorArrayLightWithIdsGroupEntry;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry);
// Type: ::ColorArrayLightWithIdsGroupEntry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14521))
// CS Name: ::ColorArrayLightWithIdsGroupEntry*
class CORDL_TYPE ColorArrayLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorArrayLightWithIds, offset 0x18, size 0x8
  __declspec(property(get = __get__colorArrayLightWithIds, put = __set__colorArrayLightWithIds))::GlobalNamespace::ColorArrayLightWithIds* _colorArrayLightWithIds;

  /// @brief Field _lightGroups, offset 0x20, size 0x8
  __declspec(property(get = __get__lightGroups, put = __set__lightGroups))::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> _lightGroups;

  /// @brief Field _excludedLightIds, offset 0x28, size 0x8
  __declspec(property(get = __get__excludedLightIds, put = __set__excludedLightIds))::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  __declspec(property(get = get_lightGroups))::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> lightGroups;

  constexpr ::GlobalNamespace::ColorArrayLightWithIds*& __get__colorArrayLightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorArrayLightWithIds*> const& __get__colorArrayLightWithIds() const;

  constexpr void __set__colorArrayLightWithIds(::GlobalNamespace::ColorArrayLightWithIds* value);

  constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>& __get__lightGroups();

  constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> const& __get__lightGroups() const;

  constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__excludedLightIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__excludedLightIds() const;

  constexpr void __set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method get_lightGroups addr 0x210f088 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> get_lightGroups();

  static inline ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry* New_ctor();

  /// @brief Method .ctor addr 0x210f090 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorArrayLightWithIdsGroupEntry();

public:
  /// @brief Field _colorArrayLightWithIds, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorArrayLightWithIds* ____colorArrayLightWithIds;

  /// @brief Field _lightGroups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> ____lightGroups;

  /// @brief Field _excludedLightIds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____excludedLightIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*, "", "ColorArrayLightWithIdsGroupEntry");
