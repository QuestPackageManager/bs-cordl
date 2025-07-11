#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LocationUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocationUtils)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LocationUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LocationUtils);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.LocationUtils
class CORDL_TYPE LocationUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DependenciesEqual, addr 0x4797684, size 0x28c, virtual false, abstract: false, final false
  static inline bool DependenciesEqual(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* deps1,
                                       ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* deps2);

  /// @brief Method LocationEquals, addr 0x4797240, size 0x2f4, virtual false, abstract: false, final false
  static inline bool LocationEquals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc1, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocationUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocationUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocationUtils(LocationUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocationUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocationUtils(LocationUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::LocationUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::LocationUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::LocationUtils*, "UnityEngine.ResourceManagement.Util", "LocationUtils");
