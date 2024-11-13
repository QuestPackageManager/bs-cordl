#pragma once
// IWYU pragma private; include "Tayx/Graphy/Ram/G_RamMonitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(G_RamMonitor)
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamMonitor);
// Type: Tayx.Graphy.Ram::G_RamMonitor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Ram {
// Is value type: false
// CS Name: ::Tayx.Graphy.Ram::G_RamMonitor*
class CORDL_TYPE G_RamMonitor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_AllocatedRam, put = set_AllocatedRam)) float_t AllocatedRam;

  __declspec(property(get = get_MonoRam, put = set_MonoRam)) float_t MonoRam;

  __declspec(property(get = get_ReservedRam, put = set_ReservedRam)) float_t ReservedRam;

  /// @brief Field <AllocatedRam>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__AllocatedRam_k__BackingField, put = __cordl_internal_set__AllocatedRam_k__BackingField)) float_t _AllocatedRam_k__BackingField;

  /// @brief Field <MonoRam>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__MonoRam_k__BackingField, put = __cordl_internal_set__MonoRam_k__BackingField)) float_t _MonoRam_k__BackingField;

  /// @brief Field <ReservedRam>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__ReservedRam_k__BackingField, put = __cordl_internal_set__ReservedRam_k__BackingField)) float_t _ReservedRam_k__BackingField;

  /// @brief Method Init, addr 0x446bf7c, size 0x4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Ram::G_RamMonitor* New_ctor();

  /// @brief Method Update, addr 0x44708b0, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__AllocatedRam_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__AllocatedRam_k__BackingField();

  constexpr float_t const& __cordl_internal_get__MonoRam_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__MonoRam_k__BackingField();

  constexpr float_t const& __cordl_internal_get__ReservedRam_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__ReservedRam_k__BackingField();

  constexpr void __cordl_internal_set__AllocatedRam_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__MonoRam_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__ReservedRam_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x447090c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllocatedRam, addr 0x4470880, size 0x8, virtual false, abstract: false, final false
  inline float_t get_AllocatedRam();

  /// @brief Method get_MonoRam, addr 0x44708a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_MonoRam();

  /// @brief Method get_ReservedRam, addr 0x4470890, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ReservedRam();

  /// @brief Method set_AllocatedRam, addr 0x4470888, size 0x8, virtual false, abstract: false, final false
  inline void set_AllocatedRam(float_t value);

  /// @brief Method set_MonoRam, addr 0x44708a8, size 0x8, virtual false, abstract: false, final false
  inline void set_MonoRam(float_t value);

  /// @brief Method set_ReservedRam, addr 0x4470898, size 0x8, virtual false, abstract: false, final false
  inline void set_ReservedRam(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamMonitor(G_RamMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamMonitor(G_RamMonitor const&) = delete;

  /// @brief Field <AllocatedRam>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____AllocatedRam_k__BackingField;

  /// @brief Field <ReservedRam>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____ReservedRam_k__BackingField;

  /// @brief Field <MonoRam>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____MonoRam_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17088 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamMonitor, 0x30>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____AllocatedRam_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____ReservedRam_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____MonoRam_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamMonitor*, "Tayx.Graphy.Ram", "G_RamMonitor");
