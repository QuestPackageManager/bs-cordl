#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalShaderPassNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DecalShaderPassNames)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalShaderPassNames;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalShaderPassNames);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalShaderPassNames
class CORDL_TYPE DecalShaderPassNames : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalShaderPassNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalShaderPassNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalShaderPassNames(DecalShaderPassNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalShaderPassNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalShaderPassNames(DecalShaderPassNames const&) = delete;

  /// @brief Field DBufferMesh offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferMesh{ u"DBufferMesh" };

  /// @brief Field DBufferProjector offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferProjector{ u"DBufferProjector" };

  /// @brief Field DBufferProjectorVFX offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferProjectorVFX{ u"DBufferProjectorVFX" };

  /// @brief Field DecalGBufferMesh offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalGBufferMesh{ u"DecalGBufferMesh" };

  /// @brief Field DecalGBufferProjector offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalGBufferProjector{ u"DecalGBufferProjector" };

  /// @brief Field DecalGBufferProjectorVFX offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalGBufferProjectorVFX{ u"DecalGBufferProjectorVFX" };

  /// @brief Field DecalMeshForwardEmissive offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalMeshForwardEmissive{ u"DecalMeshForwardEmissive" };

  /// @brief Field DecalPreview offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalPreview{ u"DecalPreview" };

  /// @brief Field DecalProjectorForwardEmissive offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalProjectorForwardEmissive{ u"DecalProjectorForwardEmissive" };

  /// @brief Field DecalProjectorForwardEmissiveVFX offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalProjectorForwardEmissiveVFX{ u"DecalProjectorForwardEmissiveVFX" };

  /// @brief Field DecalScreenSpaceMesh offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalScreenSpaceMesh{ u"DecalScreenSpaceMesh" };

  /// @brief Field DecalScreenSpaceProjector offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalScreenSpaceProjector{ u"DecalScreenSpaceProjector" };

  /// @brief Field DecalScreenSpaceProjectorVFX offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalScreenSpaceProjectorVFX{ u"DecalScreenSpaceProjectorVFX" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalShaderPassNames, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalShaderPassNames);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalShaderPassNames*, "UnityEngine.Rendering.Universal", "DecalShaderPassNames");
