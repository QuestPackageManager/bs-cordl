#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MeshIndexFormat)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MeshIndexFormat);
// Type: HoudiniEngineUnity::HEU_MeshIndexFormat
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9852))
// CS Name: ::HoudiniEngineUnity::HEU_MeshIndexFormat*
class CORDL_TYPE HEU_MeshIndexFormat : public ::System::Object {
public:
  // Declarations
  /// @brief Field _indexFormat, offset 0x10, size 0x4
  __declspec(property(get = __get__indexFormat, put = __set__indexFormat))::UnityEngine::Rendering::IndexFormat _indexFormat;

  constexpr ::UnityEngine::Rendering::IndexFormat& __get__indexFormat();

  constexpr ::UnityEngine::Rendering::IndexFormat const& __get__indexFormat() const;

  constexpr void __set__indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method CalculateIndexFormat addr 0x21d01a8 size 0x78 virtual false final false
  inline void CalculateIndexFormat(int32_t numVertices);

  /// @brief Method SetFormatForMesh addr 0x21d0220 size 0x24 virtual false final false
  inline void SetFormatForMesh(::UnityEngine::Mesh* mesh);

  static inline ::HoudiniEngineUnity::HEU_MeshIndexFormat* New_ctor();

  /// @brief Method .ctor addr 0x21d0244 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MeshIndexFormat(HEU_MeshIndexFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MeshIndexFormat(HEU_MeshIndexFormat const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MeshIndexFormat();

public:
  /// @brief Field _indexFormat, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::IndexFormat ____indexFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MeshIndexFormat, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshIndexFormat);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshIndexFormat*, "HoudiniEngineUnity", "HEU_MeshIndexFormat");
