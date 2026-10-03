#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPoolHandle)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolHandle");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolHandle
struct CORDL_TYPE GeometryPoolHandle {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle Invalid;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>*();

  /// @brief Method Equals, addr 0x6e02e28, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle other);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle getStaticF_Invalid();

  /// [IsReadOnly]
  /// @brief Method get_valid, addr 0x6e02e18, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>* i___System__IEquatable_1___UnityEngine__Rendering__UnifiedRayTracing__GeometryPoolHandle_();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolHandle();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPoolHandle(int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle, index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
