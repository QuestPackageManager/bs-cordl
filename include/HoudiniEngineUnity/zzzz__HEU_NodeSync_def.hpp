#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_NodeSync)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_NodeSync;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_NodeSync);
// Type: HoudiniEngineUnity::HEU_NodeSync
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9585))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9588))
// CS Name: ::HoudiniEngineUnity::HEU_NodeSync*
class CORDL_TYPE HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  /// @brief Field _nodeSaveFilePath, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeSaveFilePath, put = __cordl_internal_set__nodeSaveFilePath))::StringW _nodeSaveFilePath;

  constexpr ::StringW& __cordl_internal_get__nodeSaveFilePath();

  constexpr ::StringW const& __cordl_internal_get__nodeSaveFilePath() const;

  constexpr void __cordl_internal_set__nodeSaveFilePath(::StringW value);

  /// @brief Method OnEnable, addr 0x223f944, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDestroy, addr 0x223f948, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method InitializeFromHoudini, addr 0x223f954, size 0xac, virtual false, abstract: false, final false
  inline void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::StringW nodeName, ::StringW filePath);

  /// @brief Method SetupLoadTask, addr 0x223fa00, size 0x98, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SaveNodeToFile, addr 0x223faac, size 0xa0, virtual false, abstract: false, final false
  inline bool SaveNodeToFile(::StringW filePath);

  /// @brief Method CreateNodeSync, addr 0x223fb4c, size 0x2f8, virtual false, abstract: false, final false
  static inline void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW opName, ::StringW nodeNabel);

  /// @brief Method Resync, addr 0x223fe44, size 0x38, virtual true, abstract: false, final false
  inline void Resync();

  /// @brief Method SyncUpdate, addr 0x223fe7c, size 0x10c, virtual true, abstract: false, final false
  inline void SyncUpdate();

  static inline ::HoudiniEngineUnity::HEU_NodeSync* New_ctor();

  /// @brief Method .ctor, addr 0x223ff88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_NodeSync(HEU_NodeSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_NodeSync(HEU_NodeSync const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_NodeSync();

public:
  /// @brief Field _nodeSaveFilePath, offset: 0x80, size: 0x8, def value: None
  ::StringW ____nodeSaveFilePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_NodeSync, 0x88>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_NodeSync, ____nodeSaveFilePath) == 0x80, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_NodeSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_NodeSync*, "HoudiniEngineUnity", "HEU_NodeSync");
