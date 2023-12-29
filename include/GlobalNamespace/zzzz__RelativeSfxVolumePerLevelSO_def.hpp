#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RelativeSfxVolumePerLevelSO)
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace GlobalNamespace {
class __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RelativeSfxVolumePerLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair);
// Type: ::RelativeSfxVolumePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4786))
// CS Name: ::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*
class CORDL_TYPE __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _previewLevel, offset 0x10, size 0x8
  __declspec(property(get = __get__previewLevel, put = __set__previewLevel))::GlobalNamespace::PreviewBeatmapLevelSO* _previewLevel;

  /// @brief Field _relativeSfxVolume, offset 0x18, size 0x4
  __declspec(property(get = __get__relativeSfxVolume, put = __set__relativeSfxVolume)) float_t _relativeSfxVolume;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_relativeSfxVolume)) float_t relativeSfxVolume;

  constexpr ::GlobalNamespace::PreviewBeatmapLevelSO*& __get__previewLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> const& __get__previewLevel() const;

  constexpr void __set__previewLevel(::GlobalNamespace::PreviewBeatmapLevelSO* value);

  constexpr float_t& __get__relativeSfxVolume();

  constexpr float_t const& __get__relativeSfxVolume() const;

  constexpr void __set__relativeSfxVolume(float_t value);

  /// @brief Method get_levelId addr 0x223ee20 size 0x1c virtual false final false
  inline ::StringW get_levelId();

  /// @brief Method get_relativeSfxVolume addr 0x223ee3c size 0x8 virtual false final false
  inline float_t get_relativeSfxVolume();

  static inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair* New_ctor();

  /// @brief Method .ctor addr 0x223ee44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair();

public:
  /// @brief Field _previewLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PreviewBeatmapLevelSO* ____previewLevel;

  /// @brief Field _relativeSfxVolume, offset: 0x18, size: 0x4, def value: None
  float_t ____relativeSfxVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair, ____previewLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair, ____relativeSfxVolume) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RelativeSfxVolumePerLevelSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4787))
// CS Name: ::RelativeSfxVolumePerLevelSO*
class CORDL_TYPE RelativeSfxVolumePerLevelSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using RelativeSfxVolumePair = ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;

  /// @brief Field _relativeSfxVolumePerLevel, offset 0x18, size 0x8
  __declspec(property(get = __get__relativeSfxVolumePerLevel,
                      put = __set__relativeSfxVolumePerLevel))::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,
                                                                       ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> _relativeSfxVolumePerLevel;

  __declspec(property(get = get_relativeSfxVolumePerLevel))::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*,
                                                                    ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> relativeSfxVolumePerLevel;

  constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>&
  __get__relativeSfxVolumePerLevel();

  constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> const&
  __get__relativeSfxVolumePerLevel() const;

  constexpr void __set__relativeSfxVolumePerLevel(
      ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> value);

  /// @brief Method get_relativeSfxVolumePerLevel addr 0x223ee10 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>
  get_relativeSfxVolumePerLevel();

  static inline ::GlobalNamespace::RelativeSfxVolumePerLevelSO* New_ctor();

  /// @brief Method .ctor addr 0x223ee18 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelativeSfxVolumePerLevelSO();

public:
  /// @brief Field _relativeSfxVolumePerLevel, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> ____relativeSfxVolumePerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeSfxVolumePerLevelSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeSfxVolumePerLevelSO, ____relativeSfxVolumePerLevel) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumePerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumePerLevelSO*, "", "RelativeSfxVolumePerLevelSO");
NEED_NO_BOX(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair");
