#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_NodeSync.hpp"
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
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_NodeSync*
class CORDL_TYPE HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  /// @brief Field _nodeSaveFilePath, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeSaveFilePath, put = __cordl_internal_set__nodeSaveFilePath)) ::StringW _nodeSaveFilePath;

  /// @brief Method CreateNodeSync, addr 0x39f6b3c, size 0x304, virtual false, abstract: false, final false
  static inline void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW opName, ::StringW nodeNabel);

  /// @brief Method InitializeFromHoudini, addr 0x39f6944, size 0xac, virtual false, abstract: false, final false
  inline void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::StringW nodeName, ::StringW filePath);

  static inline ::HoudiniEngineUnity::HEU_NodeSync* New_ctor();

  /// @brief Method OnDestroy, addr 0x39f6938, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x39f6934, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Resync, addr 0x39f6e40, size 0x38, virtual true, abstract: false, final false
  inline void Resync();

  /// @brief Method SaveNodeToFile, addr 0x39f6a9c, size 0xa0, virtual false, abstract: false, final false
  inline bool SaveNodeToFile(::StringW filePath);

  /// @brief Method SetupLoadTask, addr 0x39f69f0, size 0x98, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SyncUpdate, addr 0x39f6e78, size 0x10c, virtual true, abstract: false, final false
  inline void SyncUpdate();

  constexpr ::StringW const& __cordl_internal_get__nodeSaveFilePath() const;

  constexpr ::StringW& __cordl_internal_get__nodeSaveFilePath();

  constexpr void __cordl_internal_set__nodeSaveFilePath(::StringW value);

  /// @brief Method .ctor, addr 0x39f6f84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_NodeSync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_NodeSync(HEU_NodeSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_NodeSync(HEU_NodeSync const&) = delete;

  /// @brief Field _nodeSaveFilePath, offset: 0x88, size: 0x8, def value: None
  ::StringW ____nodeSaveFilePath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_NodeSync, 0x90>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_NodeSync, ____nodeSaveFilePath) == 0x88, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_NodeSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_NodeSync*, "HoudiniEngineUnity", "HEU_NodeSync");
