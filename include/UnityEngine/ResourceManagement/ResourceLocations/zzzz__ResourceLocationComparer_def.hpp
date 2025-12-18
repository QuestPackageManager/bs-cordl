#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/ResourceLocationComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceLocationComparer)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationComparer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationComparer
class CORDL_TYPE ResourceLocationComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*() noexcept;

  /// @brief Method Equals, addr 0x676b3e0, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* x, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* y);

  /// @brief Method GetHashCode, addr 0x676b410, size 0x12c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* obj);

  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer* New_ctor();

  /// @brief Method .ctor, addr 0x676b53c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceLocationComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceLocationComparer(ResourceLocationComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceLocationComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceLocationComparer(ResourceLocationComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationComparer*, "UnityEngine.ResourceManagement.ResourceLocations", "ResourceLocationComparer");
