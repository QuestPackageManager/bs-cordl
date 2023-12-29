#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15256))
// CS Name: ::Tayx.Graphy.Ram::G_RamMonitor*
class CORDL_TYPE G_RamMonitor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <AllocatedRam>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__AllocatedRam_k__BackingField, put = __set__AllocatedRam_k__BackingField)) float_t _AllocatedRam_k__BackingField;

  /// @brief Field <ReservedRam>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__ReservedRam_k__BackingField, put = __set__ReservedRam_k__BackingField)) float_t _ReservedRam_k__BackingField;

  /// @brief Field <MonoRam>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__MonoRam_k__BackingField, put = __set__MonoRam_k__BackingField)) float_t _MonoRam_k__BackingField;

  __declspec(property(get = get_AllocatedRam, put = set_AllocatedRam)) float_t AllocatedRam;

  __declspec(property(get = get_ReservedRam, put = set_ReservedRam)) float_t ReservedRam;

  __declspec(property(get = get_MonoRam, put = set_MonoRam)) float_t MonoRam;

  constexpr float_t& __get__AllocatedRam_k__BackingField();

  constexpr float_t const& __get__AllocatedRam_k__BackingField() const;

  constexpr void __set__AllocatedRam_k__BackingField(float_t value);

  constexpr float_t& __get__ReservedRam_k__BackingField();

  constexpr float_t const& __get__ReservedRam_k__BackingField() const;

  constexpr void __set__ReservedRam_k__BackingField(float_t value);

  constexpr float_t& __get__MonoRam_k__BackingField();

  constexpr float_t const& __get__MonoRam_k__BackingField() const;

  constexpr void __set__MonoRam_k__BackingField(float_t value);

  /// @brief Method get_AllocatedRam addr 0x288ad90 size 0x8 virtual false final false
  inline float_t get_AllocatedRam();

  /// @brief Method set_AllocatedRam addr 0x288ad98 size 0x8 virtual false final false
  inline void set_AllocatedRam(float_t value);

  /// @brief Method get_ReservedRam addr 0x288ada0 size 0x8 virtual false final false
  inline float_t get_ReservedRam();

  /// @brief Method set_ReservedRam addr 0x288ada8 size 0x8 virtual false final false
  inline void set_ReservedRam(float_t value);

  /// @brief Method get_MonoRam addr 0x288adb0 size 0x8 virtual false final false
  inline float_t get_MonoRam();

  /// @brief Method set_MonoRam addr 0x288adb8 size 0x8 virtual false final false
  inline void set_MonoRam(float_t value);

  /// @brief Method Update addr 0x288adc0 size 0x5c virtual false final false
  inline void Update();

  static inline ::Tayx::Graphy::Ram::G_RamMonitor* New_ctor();

  /// @brief Method .ctor addr 0x288ae1c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamMonitor(G_RamMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamMonitor(G_RamMonitor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamMonitor();

public:
  /// @brief Field <AllocatedRam>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____AllocatedRam_k__BackingField;

  /// @brief Field <ReservedRam>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____ReservedRam_k__BackingField;

  /// @brief Field <MonoRam>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____MonoRam_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamMonitor, 0x28>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____AllocatedRam_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____ReservedRam_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamMonitor, ____MonoRam_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamMonitor*, "Tayx.Graphy.Ram", "G_RamMonitor");
