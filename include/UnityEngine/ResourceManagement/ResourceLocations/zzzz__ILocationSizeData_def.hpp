#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/ILocationSizeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILocationSizeData)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ILocationSizeData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData);
// Type: UnityEngine.ResourceManagement.ResourceLocations::ILocationSizeData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceLocations::ILocationSizeData*
class CORDL_TYPE ILocationSizeData {
public:
  // Declarations
  /// @brief Method ComputeSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  // Ctor Parameters [CppParam { name: "", ty: "ILocationSizeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILocationSizeData(ILocationSizeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILocationSizeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILocationSizeData(ILocationSizeData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*, "UnityEngine.ResourceManagement.ResourceLocations", "ILocationSizeData");
