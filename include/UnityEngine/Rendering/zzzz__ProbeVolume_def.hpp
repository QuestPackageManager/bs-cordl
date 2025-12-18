#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolume)
namespace UnityEngine::Rendering {
struct ProbeVolume_Mode;
}
namespace UnityEngine::Rendering {
struct ProbeVolume_Version;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolume_Mode;
}
namespace UnityEngine::Rendering {
struct ProbeVolume_Version;
}
namespace UnityEngine::Rendering {
class ProbeVolume;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolume_Mode);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolume_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolume);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolume/Mode
struct CORDL_TYPE ProbeVolume_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolume_Mode_Unwrapped
  enum struct __ProbeVolume_Mode_Unwrapped : int32_t {
    __E_Global = static_cast<int32_t>(0x0),
    __E_Scene = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolume_Mode_Unwrapped() const noexcept {
    return static_cast<__ProbeVolume_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolume_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolume_Mode(int32_t value__) noexcept;

  /// @brief Field Global value: I32(0)
  static ::UnityEngine::Rendering::ProbeVolume_Mode const Global;

  /// @brief Field Local value: I32(2)
  static ::UnityEngine::Rendering::ProbeVolume_Mode const Local;

  /// @brief Field Scene value: I32(1)
  static ::UnityEngine::Rendering::ProbeVolume_Mode const Scene;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolume_Mode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolume/Version
struct CORDL_TYPE ProbeVolume_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolume_Version_Unwrapped
  enum struct __ProbeVolume_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_LocalMode = static_cast<int32_t>(0x1),
    __E_InvertOverrideLevels = static_cast<int32_t>(0x2),
    __E_Count = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolume_Version_Unwrapped() const noexcept {
    return static_cast<__ProbeVolume_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolume_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolume_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(3)
  static ::UnityEngine::Rendering::ProbeVolume_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::ProbeVolume_Version const Initial;

  /// @brief Field InvertOverrideLevels value: I32(2)
  static ::UnityEngine::Rendering::ProbeVolume_Version const InvertOverrideLevels;

  /// @brief Field LocalMode value: I32(1)
  static ::UnityEngine::Rendering::ProbeVolume_Version const LocalMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12100 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolume_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.LayerMask, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Rendering.ProbeVolume::Mode, UnityEngine.Rendering.ProbeVolume::Version, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolume
class CORDL_TYPE ProbeVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mode = ::UnityEngine::Rendering::ProbeVolume_Mode;

  using Version = ::UnityEngine::Rendering::ProbeVolume_Version;

  /// @brief Field cachedHashCode, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedHashCode, put = __cordl_internal_set_cachedHashCode)) int32_t cachedHashCode;

  /// @brief Field cachedTransform, offset 0x48, size 0x40
  __declspec(property(get = __cordl_internal_get_cachedTransform, put = __cordl_internal_set_cachedTransform)) ::UnityEngine::Matrix4x4 cachedTransform;

  /// @brief Field fillEmptySpaces, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_fillEmptySpaces, put = __cordl_internal_set_fillEmptySpaces)) bool fillEmptySpaces;

  /// @brief Field globalVolume, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_globalVolume, put = __cordl_internal_set_globalVolume)) bool globalVolume;

  /// @brief Field highestSubdivLevelOverride, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_highestSubdivLevelOverride, put = __cordl_internal_set_highestSubdivLevelOverride)) int32_t highestSubdivLevelOverride;

  /// @brief Field lowestSubdivLevelOverride, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_lowestSubdivLevelOverride, put = __cordl_internal_set_lowestSubdivLevelOverride)) int32_t lowestSubdivLevelOverride;

  /// @brief Field mightNeedRebaking, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_mightNeedRebaking, put = __cordl_internal_set_mightNeedRebaking)) bool mightNeedRebaking;

  /// @brief Field minRendererVolumeSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_minRendererVolumeSize, put = __cordl_internal_set_minRendererVolumeSize)) float_t minRendererVolumeSize;

  /// @brief Field mode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::ProbeVolume_Mode mode;

  /// @brief Field objectLayerMask, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_objectLayerMask, put = __cordl_internal_set_objectLayerMask)) ::UnityEngine::LayerMask objectLayerMask;

  /// @brief Field overrideRendererFilters, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideRendererFilters, put = __cordl_internal_set_overrideRendererFilters)) bool overrideRendererFilters;

  /// @brief Field overridesSubdivLevels, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_overridesSubdivLevels, put = __cordl_internal_set_overridesSubdivLevels)) bool overridesSubdivLevels;

  /// @brief Field size, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) ::UnityEngine::Vector3 size;

  /// @brief Field version, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::UnityEngine::Rendering::ProbeVolume_Version version;

  /// @brief Method Awake, addr 0x65dab04, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::Rendering::ProbeVolume* New_ctor();

  constexpr int32_t const& __cordl_internal_get_cachedHashCode() const;

  constexpr int32_t& __cordl_internal_get_cachedHashCode();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cachedTransform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cachedTransform();

  constexpr bool const& __cordl_internal_get_fillEmptySpaces() const;

  constexpr bool& __cordl_internal_get_fillEmptySpaces();

  constexpr bool const& __cordl_internal_get_globalVolume() const;

  constexpr bool& __cordl_internal_get_globalVolume();

  constexpr int32_t const& __cordl_internal_get_highestSubdivLevelOverride() const;

  constexpr int32_t& __cordl_internal_get_highestSubdivLevelOverride();

  constexpr int32_t const& __cordl_internal_get_lowestSubdivLevelOverride() const;

  constexpr int32_t& __cordl_internal_get_lowestSubdivLevelOverride();

  constexpr bool const& __cordl_internal_get_mightNeedRebaking() const;

  constexpr bool& __cordl_internal_get_mightNeedRebaking();

  constexpr float_t const& __cordl_internal_get_minRendererVolumeSize() const;

  constexpr float_t& __cordl_internal_get_minRendererVolumeSize();

  constexpr ::UnityEngine::Rendering::ProbeVolume_Mode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::ProbeVolume_Mode& __cordl_internal_get_mode();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_objectLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_objectLayerMask();

  constexpr bool const& __cordl_internal_get_overrideRendererFilters() const;

  constexpr bool& __cordl_internal_get_overrideRendererFilters();

  constexpr bool const& __cordl_internal_get_overridesSubdivLevels() const;

  constexpr bool& __cordl_internal_get_overridesSubdivLevels();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_size();

  constexpr ::UnityEngine::Rendering::ProbeVolume_Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Rendering::ProbeVolume_Version& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_cachedHashCode(int32_t value);

  constexpr void __cordl_internal_set_cachedTransform(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_fillEmptySpaces(bool value);

  constexpr void __cordl_internal_set_globalVolume(bool value);

  constexpr void __cordl_internal_set_highestSubdivLevelOverride(int32_t value);

  constexpr void __cordl_internal_set_lowestSubdivLevelOverride(int32_t value);

  constexpr void __cordl_internal_set_mightNeedRebaking(bool value);

  constexpr void __cordl_internal_set_minRendererVolumeSize(float_t value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::ProbeVolume_Mode value);

  constexpr void __cordl_internal_set_objectLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_overrideRendererFilters(bool value);

  constexpr void __cordl_internal_set_overridesSubdivLevels(bool value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Rendering::ProbeVolume_Version value);

  /// @brief Method .ctor, addr 0x65dab34, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolume(ProbeVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolume(ProbeVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12101 };

  /// @brief Field mode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolume_Mode ___mode;

  /// @brief Field size, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___size;

  /// @brief Field overrideRendererFilters, offset: 0x30, size: 0x1, def value: None
  bool ___overrideRendererFilters;

  /// @brief Field minRendererVolumeSize, offset: 0x34, size: 0x4, def value: None
  float_t ___minRendererVolumeSize;

  /// @brief Field objectLayerMask, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___objectLayerMask;

  /// @brief Field lowestSubdivLevelOverride, offset: 0x3c, size: 0x4, def value: None
  int32_t ___lowestSubdivLevelOverride;

  /// @brief Field highestSubdivLevelOverride, offset: 0x40, size: 0x4, def value: None
  int32_t ___highestSubdivLevelOverride;

  /// @brief Field overridesSubdivLevels, offset: 0x44, size: 0x1, def value: None
  bool ___overridesSubdivLevels;

  /// @brief Field mightNeedRebaking, offset: 0x45, size: 0x1, def value: None
  bool ___mightNeedRebaking;

  /// @brief Field cachedTransform, offset: 0x48, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cachedTransform;

  /// @brief Field cachedHashCode, offset: 0x88, size: 0x4, def value: None
  int32_t ___cachedHashCode;

  /// @brief Field fillEmptySpaces, offset: 0x8c, size: 0x1, def value: None
  bool ___fillEmptySpaces;

  /// @brief Field version, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolume_Version ___version;

  /// @brief Field globalVolume, offset: 0x94, size: 0x1, def value: None
  bool ___globalVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___overrideRendererFilters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___minRendererVolumeSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___objectLayerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___lowestSubdivLevelOverride) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___highestSubdivLevelOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___overridesSubdivLevels) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___mightNeedRebaking) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___cachedTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___cachedHashCode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___fillEmptySpaces) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___version) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolume, ___globalVolume) == 0x94, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolume, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolume_Mode, "UnityEngine.Rendering", "ProbeVolume/Mode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolume_Version, "UnityEngine.Rendering", "ProbeVolume/Version");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolume*, "UnityEngine.Rendering", "ProbeVolume");
