#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Chaperone_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Chaperone_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Chaperone_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Chaperone_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_Chaperone_t
struct CORDL_TYPE VREvent_Chaperone_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Chaperone_t();

  // Ctor Parameters [CppParam { name: "m_nPreviousUniverse", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_nCurrentUniverse", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_Chaperone_t(uint64_t m_nPreviousUniverse, uint64_t m_nCurrentUniverse) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_nPreviousUniverse, offset: 0x0, size: 0x8, def value: None
  uint64_t m_nPreviousUniverse;

  /// @brief Field m_nCurrentUniverse, offset: 0x8, size: 0x8, def value: None
  uint64_t m_nCurrentUniverse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_Chaperone_t, m_nPreviousUniverse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Chaperone_t, m_nCurrentUniverse) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Chaperone_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Chaperone_t, "OVR.OpenVR", "VREvent_Chaperone_t");
