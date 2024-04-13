#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RelativeSfxVolumeSO)
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class __RelativeSfxVolumeSO__RelativeSfxVolumePair;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeSfxVolumeSO;
}
namespace GlobalNamespace {
class __RelativeSfxVolumeSO__RelativeSfxVolumePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RelativeSfxVolumeSO);
MARK_REF_PTR_T(::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair);
// Type: ::RelativeSfxVolumePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RelativeSfxVolumeSO::RelativeSfxVolumePair*
class CORDL_TYPE __RelativeSfxVolumeSO__RelativeSfxVolumePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelSo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelSo, put = __cordl_internal_set__beatmapLevelSo))::UnityW<::GlobalNamespace::BeatmapLevelSO> _beatmapLevelSo;

  /// @brief Field _relativeSfxVolume, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__relativeSfxVolume, put = __cordl_internal_set__relativeSfxVolume)) float_t _relativeSfxVolume;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_relativeSfxVolume)) float_t relativeSfxVolume;

  static inline ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__beatmapLevelSo() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__beatmapLevelSo();

  constexpr float_t const& __cordl_internal_get__relativeSfxVolume() const;

  constexpr float_t& __cordl_internal_get__relativeSfxVolume();

  constexpr void __cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr void __cordl_internal_set__relativeSfxVolume(float_t value);

  /// @brief Method .ctor, addr 0x13fbc48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelId, addr 0x13fbc24, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_levelId();

  /// @brief Method get_relativeSfxVolume, addr 0x13fbc40, size 0x8, virtual false, abstract: false, final false
  inline float_t get_relativeSfxVolume();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RelativeSfxVolumeSO__RelativeSfxVolumePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumeSO__RelativeSfxVolumePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RelativeSfxVolumeSO__RelativeSfxVolumePair(__RelativeSfxVolumeSO__RelativeSfxVolumePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumeSO__RelativeSfxVolumePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RelativeSfxVolumeSO__RelativeSfxVolumePair(__RelativeSfxVolumeSO__RelativeSfxVolumePair const&) = delete;

  /// @brief Field _beatmapLevelSo, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____beatmapLevelSo;

  /// @brief Field _relativeSfxVolume, offset: 0x18, size: 0x4, def value: None
  float_t ____relativeSfxVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair, ____beatmapLevelSo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair, ____relativeSfxVolume) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RelativeSfxVolumeSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RelativeSfxVolumeSO*
class CORDL_TYPE RelativeSfxVolumeSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using RelativeSfxVolumePair = ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair;

  /// @brief Field _relativeSfxVolumePerLevel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeSfxVolumePerLevel,
                      put = __cordl_internal_set__relativeSfxVolumePerLevel))::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*,
                                                                                      ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> _relativeSfxVolumePerLevel;

  /// @brief Field _relativeSfxVolumePerPack, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__relativeSfxVolumePerPack, put = __cordl_internal_set__relativeSfxVolumePerPack)) float_t _relativeSfxVolumePerPack;

  __declspec(property(get = get_relativeSfxVolumePerLevel))::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*,
                                                                    ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> relativeSfxVolumePerLevel;

  __declspec(property(get = get_relativeSfxVolumePerPack)) float_t relativeSfxVolumePerPack;

  static inline ::GlobalNamespace::RelativeSfxVolumeSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> const&
  __cordl_internal_get__relativeSfxVolumePerLevel() const;

  constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*>&
  __cordl_internal_get__relativeSfxVolumePerLevel();

  constexpr float_t const& __cordl_internal_get__relativeSfxVolumePerPack() const;

  constexpr float_t& __cordl_internal_get__relativeSfxVolumePerPack();

  constexpr void __cordl_internal_set__relativeSfxVolumePerLevel(
      ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> value);

  constexpr void __cordl_internal_set__relativeSfxVolumePerPack(float_t value);

  /// @brief Method .ctor, addr 0x13fbc1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_relativeSfxVolumePerLevel, addr 0x13fbc14, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> get_relativeSfxVolumePerLevel();

  /// @brief Method get_relativeSfxVolumePerPack, addr 0x13fbc0c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_relativeSfxVolumePerPack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelativeSfxVolumeSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelativeSfxVolumeSO(RelativeSfxVolumeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelativeSfxVolumeSO(RelativeSfxVolumeSO const&) = delete;

  /// @brief Field _relativeSfxVolumePerPack, offset: 0x18, size: 0x4, def value: None
  float_t ____relativeSfxVolumePerPack;

  /// @brief Field _relativeSfxVolumePerLevel, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> ____relativeSfxVolumePerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeSfxVolumeSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeSfxVolumeSO, ____relativeSfxVolumePerPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeSfxVolumeSO, ____relativeSfxVolumePerLevel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumeSO*, "", "RelativeSfxVolumeSO");
NEED_NO_BOX(::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, "", "RelativeSfxVolumeSO/RelativeSfxVolumePair");
