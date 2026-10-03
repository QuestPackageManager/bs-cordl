#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPoolConstants)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPoolConstants;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolConstants*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolConstants*, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPoolConstants");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolConstants
class CORDL_TYPE GeometryPoolConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPoolConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryPoolConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryPoolConstants(GeometryPoolConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryPoolConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryPoolConstants(GeometryPoolConstants const&) = delete;

  /// @brief Field GeoPoolIndexByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolIndexByteSize{ static_cast<int32_t>(0x4) };

  /// @brief Field GeoPoolNormalByteOffset offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolNormalByteOffset{ static_cast<int32_t>(0x1c) };

  /// @brief Field GeoPoolNormalByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolNormalByteSize{ static_cast<int32_t>(0x4) };

  /// @brief Field GeoPoolPosByteOffset offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolPosByteOffset{ static_cast<int32_t>(0x0) };

  /// @brief Field GeoPoolPosByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolPosByteSize{ static_cast<int32_t>(0xc) };

  /// @brief Field GeoPoolUV0ByteOffset offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolUV0ByteOffset{ static_cast<int32_t>(0xc) };

  /// @brief Field GeoPoolUV0ByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolUV0ByteSize{ static_cast<int32_t>(0x8) };

  /// @brief Field GeoPoolUV1ByteOffset offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolUV1ByteOffset{ static_cast<int32_t>(0x14) };

  /// @brief Field GeoPoolUV1ByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolUV1ByteSize{ static_cast<int32_t>(0x8) };

  /// @brief Field GeoPoolVertexByteSize offset 0xffffffff size 0x4
  static constexpr int32_t GeoPoolVertexByteSize{ static_cast<int32_t>(0x20) };

  /// @brief Field UvFieldSizeInDWords offset 0xffffffff size 0x4
  static constexpr int32_t UvFieldSizeInDWords{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolConstants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
