#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_MeshIndexFormat.hpp"
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
// Dependencies System.Object, UnityEngine.Rendering.IndexFormat
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_MeshIndexFormat
class CORDL_TYPE HEU_MeshIndexFormat : public ::System::Object {
public:
  // Declarations
  /// @brief Field _indexFormat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__indexFormat, put = __cordl_internal_set__indexFormat)) ::UnityEngine::Rendering::IndexFormat _indexFormat;

  /// @brief Method CalculateIndexFormat, addr 0x3a84a20, size 0x78, virtual false, abstract: false, final false
  inline void CalculateIndexFormat(int32_t numVertices);

  static inline ::HoudiniEngineUnity::HEU_MeshIndexFormat* New_ctor();

  /// @brief Method SetFormatForMesh, addr 0x3a84a98, size 0x24, virtual false, abstract: false, final false
  inline void SetFormatForMesh(::UnityEngine::Mesh* mesh);

  constexpr ::UnityEngine::Rendering::IndexFormat const& __cordl_internal_get__indexFormat() const;

  constexpr ::UnityEngine::Rendering::IndexFormat& __cordl_internal_get__indexFormat();

  constexpr void __cordl_internal_set__indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method .ctor, addr 0x3a84abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MeshIndexFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MeshIndexFormat(HEU_MeshIndexFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MeshIndexFormat(HEU_MeshIndexFormat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11839 };

  /// @brief Field _indexFormat, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::IndexFormat ____indexFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_MeshIndexFormat, ____indexFormat) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MeshIndexFormat, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshIndexFormat);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshIndexFormat*, "HoudiniEngineUnity", "HEU_MeshIndexFormat");
