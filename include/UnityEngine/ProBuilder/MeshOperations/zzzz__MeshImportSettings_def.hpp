#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeshImportSettings)
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings);
// Type: UnityEngine.ProBuilder.MeshOperations::MeshImportSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshImportSettings*
class CORDL_TYPE MeshImportSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Quads, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Quads, put = __cordl_internal_set_m_Quads)) bool m_Quads;

  /// @brief Field m_Smoothing, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Smoothing, put = __cordl_internal_set_m_Smoothing)) bool m_Smoothing;

  /// @brief Field m_SmoothingThreshold, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmoothingThreshold, put = __cordl_internal_set_m_SmoothingThreshold)) float_t m_SmoothingThreshold;

  __declspec(property(get = get_quads, put = set_quads)) bool quads;

  __declspec(property(get = get_smoothing, put = set_smoothing)) bool smoothing;

  __declspec(property(get = get_smoothingAngle, put = set_smoothingAngle)) float_t smoothingAngle;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* New_ctor();

  /// @brief Method ToString, addr 0x30e9494, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_m_Quads() const;

  constexpr bool& __cordl_internal_get_m_Quads();

  constexpr bool const& __cordl_internal_get_m_Smoothing() const;

  constexpr bool& __cordl_internal_get_m_Smoothing();

  constexpr float_t const& __cordl_internal_get_m_SmoothingThreshold() const;

  constexpr float_t& __cordl_internal_get_m_SmoothingThreshold();

  constexpr void __cordl_internal_set_m_Quads(bool value);

  constexpr void __cordl_internal_set_m_Smoothing(bool value);

  constexpr void __cordl_internal_set_m_SmoothingThreshold(float_t value);

  /// @brief Method .ctor, addr 0x30e956c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_quads, addr 0x30e945c, size 0x8, virtual false, abstract: false, final false
  inline bool get_quads();

  /// @brief Method get_smoothing, addr 0x30e9470, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothing();

  /// @brief Method get_smoothingAngle, addr 0x30e9484, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smoothingAngle();

  /// @brief Method set_quads, addr 0x30e9464, size 0xc, virtual false, abstract: false, final false
  inline void set_quads(bool value);

  /// @brief Method set_smoothing, addr 0x30e9478, size 0xc, virtual false, abstract: false, final false
  inline void set_smoothing(bool value);

  /// @brief Method set_smoothingAngle, addr 0x30e948c, size 0x8, virtual false, abstract: false, final false
  inline void set_smoothingAngle(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshImportSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshImportSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshImportSettings(MeshImportSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshImportSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshImportSettings(MeshImportSettings const&) = delete;

  /// @brief Field m_Quads, offset: 0x10, size: 0x1, def value: None
  bool ___m_Quads;

  /// @brief Field m_Smoothing, offset: 0x11, size: 0x1, def value: None
  bool ___m_Smoothing;

  /// @brief Field m_SmoothingThreshold, offset: 0x14, size: 0x4, def value: None
  float_t ___m_SmoothingThreshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings, ___m_Quads) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings, ___m_Smoothing) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings, ___m_SmoothingThreshold) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "UnityEngine.ProBuilder.MeshOperations", "MeshImportSettings");
