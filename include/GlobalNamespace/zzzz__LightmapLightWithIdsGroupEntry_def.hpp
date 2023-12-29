#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightWithIdsGroupEntry)
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
struct __LightmapLightWithIdsGroupEntry__GroupLightsWeighting;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LightmapLightWithIdsGroupEntry__GroupLightsWeighting;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting);
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId);
// Type: ::GroupLightsWeighting
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14755))
// CS Name: ::LightmapLightWithIdsGroupEntry::GroupLightsWeighting
struct CORDL_TYPE __LightmapLightWithIdsGroupEntry__GroupLightsWeighting {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped
  enum struct ____LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped : int32_t {
    __E_Maximum = static_cast<int32_t>(0x0),
    __E_LinearFraction = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped() const noexcept {
    return static_cast<____LightmapLightWithIdsGroupEntry__GroupLightsWeighting_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightmapLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIdsGroupEntry__GroupLightsWeighting();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Maximum value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const Maximum;

  /// @brief Field LinearFraction value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const LinearFraction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GroupLightData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14756))
// CS Name: ::LightmapLightWithIdsGroupEntry::GroupLightData*
class CORDL_TYPE __LightmapLightWithIdsGroupEntry__GroupLightData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::GlobalNamespace::LightGroupSO* _lightGroup;

  /// @brief Field _groupIntensity, offset 0x18, size 0x4
  __declspec(property(get = __get__groupIntensity, put = __set__groupIntensity)) float_t _groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset 0x1c, size 0x4
  __declspec(property(get = __get__groupProbeHighlightsIntensityMultiplier, put = __set__groupProbeHighlightsIntensityMultiplier)) float_t _groupProbeHighlightsIntensityMultiplier;

  __declspec(property(get = get_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  __declspec(property(get = get_groupIntensity)) float_t groupIntensity;

  __declspec(property(get = get_groupProbeHighlightsIntensityMultiplier)) float_t groupProbeHighlightsIntensityMultiplier;

  constexpr ::GlobalNamespace::LightGroupSO*& __get__lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr float_t& __get__groupIntensity();

  constexpr float_t const& __get__groupIntensity() const;

  constexpr void __set__groupIntensity(float_t value);

  constexpr float_t& __get__groupProbeHighlightsIntensityMultiplier();

  constexpr float_t const& __get__groupProbeHighlightsIntensityMultiplier() const;

  constexpr void __set__groupProbeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method get_lightGroup addr 0x1fba740 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightGroupSO* get_lightGroup();

  /// @brief Method get_groupIntensity addr 0x1fba748 size 0x8 virtual false final false
  inline float_t get_groupIntensity();

  /// @brief Method get_groupProbeHighlightsIntensityMultiplier addr 0x1fba750 size 0x8 virtual false final false
  inline float_t get_groupProbeHighlightsIntensityMultiplier();

  static inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity,
                                                                                              float_t groupProbeHighlightsIntensityMultiplier);

  /// @brief Method .ctor addr 0x1fba758 size 0x3c virtual false final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier);

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmapLightWithIdsGroupEntry__GroupLightData(__LightmapLightWithIdsGroupEntry__GroupLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmapLightWithIdsGroupEntry__GroupLightData(__LightmapLightWithIdsGroupEntry__GroupLightData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIdsGroupEntry__GroupLightData();

public:
  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ____lightGroup;

  /// @brief Field _groupIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ____groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset: 0x1c, size: 0x4, def value: None
  float_t ____groupProbeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____groupIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____groupProbeHighlightsIntensityMultiplier) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14757))
// CS Name: ::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*
class CORDL_TYPE __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __get__lightId, put = __set__lightId)) int32_t _lightId;

  /// @brief Field _intensity, offset 0x14, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __get__probeHighlightsIntensityMultiplier, put = __set__probeHighlightsIntensityMultiplier)) float_t _probeHighlightsIntensityMultiplier;

  __declspec(property(get = get_lightId)) int32_t lightId;

  __declspec(property(get = get_intensity)) float_t intensity;

  __declspec(property(get = get_probeHighlightsIntensityMultiplier)) float_t probeHighlightsIntensityMultiplier;

  constexpr int32_t& __get__lightId();

  constexpr int32_t const& __get__lightId() const;

  constexpr void __set__lightId(int32_t value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__probeHighlightsIntensityMultiplier();

  constexpr float_t const& __get__probeHighlightsIntensityMultiplier() const;

  constexpr void __set__probeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method get_lightId addr 0x1fba794 size 0x8 virtual false final false
  inline int32_t get_lightId();

  /// @brief Method get_intensity addr 0x1fba79c size 0x8 virtual false final false
  inline float_t get_intensity();

  /// @brief Method get_probeHighlightsIntensityMultiplier addr 0x1fba7a4 size 0x8 virtual false final false
  inline float_t get_probeHighlightsIntensityMultiplier();

  static inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  /// @brief Method .ctor addr 0x1fba7ac size 0x44 virtual false final false
  inline void _ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId();

public:
  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _intensity, offset: 0x14, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t ____probeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____intensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____probeHighlightsIntensityMultiplier) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightmapLightWithIdsGroupEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14755)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14758))
// CS Name: ::LightmapLightWithIdsGroupEntry*
class CORDL_TYPE LightmapLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;

  using GroupLightData = ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData;

  using GroupLightsWeighting = ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting;

  /// @brief Field _lightmapLightWithIds, offset 0x18, size 0x8
  __declspec(property(get = __get__lightmapLightWithIds, put = __set__lightmapLightWithIds))::GlobalNamespace::LightmapLightWithIds* _lightmapLightWithIds;

  /// @brief Field _groupLightData, offset 0x20, size 0x8
  __declspec(property(get = __get__groupLightData, put = __set__groupLightData))::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*,
                                                                                         ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> _groupLightData;

  /// @brief Field _individualLightData, offset 0x28, size 0x8
  __declspec(property(get = __get__individualLightData,
                      put = __set__individualLightData))::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*,
                                                                 ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> _individualLightData;

  /// @brief Field _excludedLightIds, offset 0x30, size 0x8
  __declspec(property(get = __get__excludedLightIds, put = __set__excludedLightIds))::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset 0x38, size 0x4
  __declspec(property(get = __get__groupLightsWeighting, put = __set__groupLightsWeighting))::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting _groupLightsWeighting;

  __declspec(property(get = get_lightmapLightWithIds))::GlobalNamespace::LightmapLightWithIds* lightmapLightWithIds;

  constexpr ::GlobalNamespace::LightmapLightWithIds*& __get__lightmapLightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmapLightWithIds*> const& __get__lightmapLightWithIds() const;

  constexpr void __set__lightmapLightWithIds(::GlobalNamespace::LightmapLightWithIds* value);

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*>& __get__groupLightData();

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> const&
  __get__groupLightData() const;

  constexpr void
  __set__groupLightData(::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*>&
  __get__individualLightData();

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
  __get__individualLightData() const;

  constexpr void __set__individualLightData(
      ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__excludedLightIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__excludedLightIds() const;

  constexpr void __set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting& __get__groupLightsWeighting();

  constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const& __get__groupLightsWeighting() const;

  constexpr void __set__groupLightsWeighting(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting value);

  /// @brief Method get_lightmapLightWithIds addr 0x1fba730 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightmapLightWithIds* get_lightmapLightWithIds();

  static inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry* New_ctor();

  /// @brief Method .ctor addr 0x1fba738 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIdsGroupEntry();

public:
  /// @brief Field _lightmapLightWithIds, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightmapLightWithIds* ____lightmapLightWithIds;

  /// @brief Field _groupLightData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> ____groupLightData;

  /// @brief Field _individualLightData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*>
      ____individualLightData;

  /// @brief Field _excludedLightIds, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting ____groupLightsWeighting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIdsGroupEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____lightmapLightWithIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____individualLightData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____excludedLightIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightsWeighting) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, "", "LightmapLightWithIdsGroupEntry/GroupLightsWeighting");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry*, "", "LightmapLightWithIdsGroupEntry");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, "", "LightmapLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, "", "LightmapLightWithIdsGroupEntry/LightIntensitiesWithId");
