#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_RenderingPipelineDefines.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_RenderingPipelineDefines)
namespace HoudiniEngineUnity {
struct HEU_PipelineType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_RenderingPipelineDefines;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_RenderingPipelineDefines);
// Type: HoudiniEngineUnity::HEU_RenderingPipelineDefines
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_RenderingPipelineDefines*
class CORDL_TYPE HEU_RenderingPipelineDefines : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddDefine, addr 0x3a2ec14, size 0x104, virtual false, abstract: false, final false
  static inline void AddDefine(::StringW define);

  /// @brief Method GetDefines, addr 0x3a2edd8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetDefines();

  /// @brief Method GetPipeline, addr 0x3a2eae4, size 0x130, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_PipelineType GetPipeline();

  static inline ::HoudiniEngineUnity::HEU_RenderingPipelineDefines* New_ctor();

  /// @brief Method RemoveDefine, addr 0x3a2ed18, size 0xc0, virtual false, abstract: false, final false
  static inline void RemoveDefine(::StringW define);

  /// @brief Method SetDefines, addr 0x3a2ee40, size 0x4, virtual false, abstract: false, final false
  static inline void SetDefines(::System::Collections::Generic::List_1<::StringW>* definesList);

  /// @brief Method UpdateDefines, addr 0x3a2ea0c, size 0xd8, virtual false, abstract: false, final false
  static inline void UpdateDefines();

  /// @brief Method .ctor, addr 0x3a2ee44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_RenderingPipelineDefines();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_RenderingPipelineDefines", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_RenderingPipelineDefines(HEU_RenderingPipelineDefines&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_RenderingPipelineDefines", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_RenderingPipelineDefines(HEU_RenderingPipelineDefines const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_RenderingPipelineDefines, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_RenderingPipelineDefines);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_RenderingPipelineDefines*, "HoudiniEngineUnity", "HEU_RenderingPipelineDefines");
