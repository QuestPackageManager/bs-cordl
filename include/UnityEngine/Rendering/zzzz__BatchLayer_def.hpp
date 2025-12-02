#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchLayer)
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchLayer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchLayer);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchLayer
class CORDL_TYPE BatchLayer : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::BatchLayer* New_ctor();

  /// @brief Method .ctor, addr 0x65eb628, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchLayer(BatchLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchLayer(BatchLayer const&) = delete;

  /// @brief Field InstanceCullingDirect offset 0xffffffff size 0x1
  static constexpr uint8_t InstanceCullingDirect{ static_cast<uint8_t>(0x1du) };

  /// @brief Field InstanceCullingDirectMask offset 0xffffffff size 0x4
  static constexpr uint32_t InstanceCullingDirectMask{ static_cast<uint32_t>(0x20000000u) };

  /// @brief Field InstanceCullingIndirect offset 0xffffffff size 0x1
  static constexpr uint8_t InstanceCullingIndirect{ static_cast<uint8_t>(0x1cu) };

  /// @brief Field InstanceCullingIndirectMask offset 0xffffffff size 0x4
  static constexpr uint32_t InstanceCullingIndirectMask{ static_cast<uint32_t>(0x10000000u) };

  /// @brief Field InstanceCullingMask offset 0xffffffff size 0x4
  static constexpr uint32_t InstanceCullingMask{ static_cast<uint32_t>(0x30000000u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchLayer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BatchLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchLayer*, "UnityEngine.Rendering", "BatchLayer");
