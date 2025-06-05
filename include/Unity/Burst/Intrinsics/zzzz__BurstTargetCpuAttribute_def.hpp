#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/BurstTargetCpuAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "Unity/Burst/zzzz__BurstTargetCpu_def.hpp"
CORDL_MODULE_EXPORT(BurstTargetCpuAttribute)
namespace Unity::Burst {
struct BurstTargetCpu;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class BurstTargetCpuAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::BurstTargetCpuAttribute);
// Dependencies System.Attribute, Unity.Burst.BurstTargetCpu
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.BurstTargetCpuAttribute
class CORDL_TYPE BurstTargetCpuAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field TargetCpu, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_TargetCpu, put = __cordl_internal_set_TargetCpu)) ::Unity::Burst::BurstTargetCpu TargetCpu;

  static inline ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute* New_ctor(::Unity::Burst::BurstTargetCpu TargetCpu);

  constexpr ::Unity::Burst::BurstTargetCpu const& __cordl_internal_get_TargetCpu() const;

  constexpr ::Unity::Burst::BurstTargetCpu& __cordl_internal_get_TargetCpu();

  constexpr void __cordl_internal_set_TargetCpu(::Unity::Burst::BurstTargetCpu value);

  /// @brief Method .ctor, addr 0x4527c98, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::BurstTargetCpu TargetCpu);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstTargetCpuAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstTargetCpuAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstTargetCpuAttribute(BurstTargetCpuAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstTargetCpuAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstTargetCpuAttribute(BurstTargetCpuAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14642 };

  /// @brief Field TargetCpu, offset: 0x10, size: 0x4, def value: None
  ::Unity::Burst::BurstTargetCpu ___TargetCpu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::Intrinsics::BurstTargetCpuAttribute, ___TargetCpu) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::BurstTargetCpuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*, "Unity.Burst.Intrinsics", "BurstTargetCpuAttribute");
