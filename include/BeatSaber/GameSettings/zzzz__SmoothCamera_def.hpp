#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/SmoothCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothCamera)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class SmoothCamera;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::SmoothCamera);
// Type: BeatSaber.GameSettings::SmoothCamera
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::SmoothCamera*
class CORDL_TYPE SmoothCamera : public ::System::Object {
public:
  // Declarations
  /// @brief Field _enabled, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) bool _enabled;

  /// @brief Field _fov, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__fov, put = __cordl_internal_set__fov)) float_t _fov;

  /// @brief Field <isDirty>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  /// @brief Field _positionSmooth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__positionSmooth, put = __cordl_internal_set__positionSmooth)) float_t _positionSmooth;

  /// @brief Field _rotationSmooth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationSmooth, put = __cordl_internal_set__rotationSmooth)) float_t _rotationSmooth;

  /// @brief Field _thirdPersonEnabled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__thirdPersonEnabled, put = __cordl_internal_set__thirdPersonEnabled)) bool _thirdPersonEnabled;

  /// @brief Field _thirdPersonEulerAngles, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__thirdPersonEulerAngles, put = __cordl_internal_set__thirdPersonEulerAngles))::UnityEngine::Vector3 _thirdPersonEulerAngles;

  /// @brief Field _thirdPersonPosition, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__thirdPersonPosition, put = __cordl_internal_set__thirdPersonPosition))::UnityEngine::Vector3 _thirdPersonPosition;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_fov, put = set_fov)) float_t fov;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_positionSmooth, put = set_positionSmooth)) float_t positionSmooth;

  __declspec(property(get = get_rotationSmooth, put = set_rotationSmooth)) float_t rotationSmooth;

  __declspec(property(get = get_thirdPersonEnabled, put = set_thirdPersonEnabled)) bool thirdPersonEnabled;

  __declspec(property(get = get_thirdPersonEulerAngles, put = set_thirdPersonEulerAngles))::UnityEngine::Vector3 thirdPersonEulerAngles;

  __declspec(property(get = get_thirdPersonPosition, put = set_thirdPersonPosition))::UnityEngine::Vector3 thirdPersonPosition;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BeatSaber::GameSettings::SmoothCamera* New_ctor();

  constexpr bool const& __cordl_internal_get__enabled() const;

  constexpr bool& __cordl_internal_get__enabled();

  constexpr float_t const& __cordl_internal_get__fov() const;

  constexpr float_t& __cordl_internal_get__fov();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr float_t const& __cordl_internal_get__positionSmooth() const;

  constexpr float_t& __cordl_internal_get__positionSmooth();

  constexpr float_t const& __cordl_internal_get__rotationSmooth() const;

  constexpr float_t& __cordl_internal_get__rotationSmooth();

  constexpr bool const& __cordl_internal_get__thirdPersonEnabled() const;

  constexpr bool& __cordl_internal_get__thirdPersonEnabled();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__thirdPersonEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__thirdPersonEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__thirdPersonPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__thirdPersonPosition();

  constexpr void __cordl_internal_set__enabled(bool value);

  constexpr void __cordl_internal_set__fov(float_t value);

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__positionSmooth(float_t value);

  constexpr void __cordl_internal_set__rotationSmooth(float_t value);

  constexpr void __cordl_internal_set__thirdPersonEnabled(bool value);

  constexpr void __cordl_internal_set__thirdPersonEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__thirdPersonPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1068018, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x1068aa8, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_fov, addr 0x1068ab0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fov();

  /// @brief Method get_isDirty, addr 0x1068a94, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_positionSmooth, addr 0x1068ac0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_positionSmooth();

  /// @brief Method get_rotationSmooth, addr 0x1068ab8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotationSmooth();

  /// @brief Method get_thirdPersonEnabled, addr 0x1068ac8, size 0x8, virtual false, abstract: false, final false
  inline bool get_thirdPersonEnabled();

  /// @brief Method get_thirdPersonEulerAngles, addr 0x1068adc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_thirdPersonEulerAngles();

  /// @brief Method get_thirdPersonPosition, addr 0x1068ad0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_thirdPersonPosition();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_enabled, addr 0x1067a80, size 0x14, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_fov, addr 0x1067a94, size 0x10, virtual false, abstract: false, final false
  inline void set_fov(float_t value);

  /// @brief Method set_isDirty, addr 0x1068a9c, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

  /// @brief Method set_positionSmooth, addr 0x1067ab4, size 0x10, virtual false, abstract: false, final false
  inline void set_positionSmooth(float_t value);

  /// @brief Method set_rotationSmooth, addr 0x1067aa4, size 0x10, virtual false, abstract: false, final false
  inline void set_rotationSmooth(float_t value);

  /// @brief Method set_thirdPersonEnabled, addr 0x1067ac4, size 0x14, virtual false, abstract: false, final false
  inline void set_thirdPersonEnabled(bool value);

  /// @brief Method set_thirdPersonEulerAngles, addr 0x1067aec, size 0x14, virtual false, abstract: false, final false
  inline void set_thirdPersonEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_thirdPersonPosition, addr 0x1067ad8, size 0x14, virtual false, abstract: false, final false
  inline void set_thirdPersonPosition(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCamera(SmoothCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCamera(SmoothCamera const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  /// @brief Field _enabled, offset: 0x11, size: 0x1, def value: None
  bool ____enabled;

  /// @brief Field _fov, offset: 0x14, size: 0x4, def value: None
  float_t ____fov;

  /// @brief Field _rotationSmooth, offset: 0x18, size: 0x4, def value: None
  float_t ____rotationSmooth;

  /// @brief Field _positionSmooth, offset: 0x1c, size: 0x4, def value: None
  float_t ____positionSmooth;

  /// @brief Field _thirdPersonEnabled, offset: 0x20, size: 0x1, def value: None
  bool ____thirdPersonEnabled;

  /// @brief Field _thirdPersonPosition, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____thirdPersonPosition;

  /// @brief Field _thirdPersonEulerAngles, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____thirdPersonEulerAngles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::SmoothCamera, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____enabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____fov) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____rotationSmooth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____positionSmooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____thirdPersonEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____thirdPersonPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::SmoothCamera, ____thirdPersonEulerAngles) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::SmoothCamera);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::SmoothCamera*, "BeatSaber.GameSettings", "SmoothCamera");
