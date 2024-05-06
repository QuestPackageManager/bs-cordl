#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ShelfTools)
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
namespace HoudiniEngineUnity {
class HEU_Shelf;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ShelfTools;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ShelfTools);
// Type: HoudiniEngineUnity::HEU_ShelfTools
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_ShelfTools*
class CORDL_TYPE HEU_ShelfTools : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentSelectedShelf, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__currentSelectedShelf, put = setStaticF__currentSelectedShelf)) int32_t _currentSelectedShelf;

  /// @brief Field _shelves, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__shelves, put = setStaticF__shelves))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>* _shelves;

  /// @brief Field _shelvesLoaded, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__shelvesLoaded, put = setStaticF__shelvesLoaded)) bool _shelvesLoaded;

  /// @brief Method AddShelf, addr 0x25b53d0, size 0x108, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_Shelf* AddShelf(::StringW shelfName, ::StringW shelfPath);

  /// @brief Method AreShelvesLoaded, addr 0x25b466c, size 0x58, virtual false, abstract: false, final false
  static inline bool AreShelvesLoaded();

  /// @brief Method ClearShelves, addr 0x25b471c, size 0x98, virtual false, abstract: false, final false
  static inline void ClearShelves();

  /// @brief Method ExecuteTool, addr 0x25b69b8, size 0x384, virtual false, abstract: false, final false
  static inline void ExecuteTool(int32_t toolSlot);

  /// @brief Method ExecuteToolBatch, addr 0x25b7be0, size 0x6c, virtual false, abstract: false, final false
  static inline void ExecuteToolBatch(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> batchObjects);

  /// @brief Method ExecuteToolGenerator, addr 0x25b6d3c, size 0x210, virtual false, abstract: false, final false
  static inline void ExecuteToolGenerator(::StringW toolName, ::StringW toolPath, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetScale);

  /// @brief Method ExecuteToolNoInput, addr 0x25b6f4c, size 0x1b8, virtual false, abstract: false, final false
  static inline void ExecuteToolNoInput(::StringW toolName, ::StringW toolPath);

  /// @brief Method ExecuteToolOperatorMultiple, addr 0x25b7700, size 0x4e0, virtual false, abstract: false, final false
  static inline void ExecuteToolOperatorMultiple(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> inputObjects);

  /// @brief Method ExecuteToolOperatorSingle, addr 0x25b7104, size 0x5fc, virtual false, abstract: false, final false
  static inline void ExecuteToolOperatorSingle(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> inputObjects);

  /// @brief Method GetCurrentShelfIndex, addr 0x25b4824, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetCurrentShelfIndex();

  /// @brief Method GetNumShelves, addr 0x25b47b4, size 0x70, virtual false, abstract: false, final false
  static inline int32_t GetNumShelves();

  /// @brief Method GetShelf, addr 0x25b48d8, size 0xcc, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_Shelf* GetShelf(int32_t index);

  /// @brief Method GetShelf, addr 0x25b49a4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_Shelf* GetShelf(::StringW shelfName);

  /// @brief Method GetShelfStorageEntry, addr 0x25b4b5c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetShelfStorageEntry(::StringW shelfName, ::StringW shelfPath);

  /// @brief Method GetSplitShelfEntry, addr 0x25b4bb8, size 0xd0, virtual false, abstract: false, final false
  static inline void GetSplitShelfEntry(::StringW shelfEntry, ByRef<::StringW> shelfName, ByRef<::StringW> shelfPath);

  /// @brief Method GetToolAssetPath, addr 0x25b65c4, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW GetToolAssetPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath);

  /// @brief Method GetToolIconPath, addr 0x25b6720, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW GetToolIconPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath);

  /// @brief Method GetToolResourcePath, addr 0x25b7d48, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW GetToolResourcePath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath, ::StringW ext);

  /// @brief Method IsValidInput, addr 0x25b7c4c, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsValidInput(::UnityEngine::GameObject* gameObject);

  /// @brief Method LoadShelves, addr 0x25b4c88, size 0x748, virtual false, abstract: false, final false
  static inline void LoadShelves();

  /// @brief Method LoadToolFromJsonFile, addr 0x25b5a10, size 0x1cc, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonFile(::StringW jsonFilePath);

  /// @brief Method LoadToolFromJsonString, addr 0x25b5bdc, size 0x990, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonString(::StringW json, ::StringW jsonFilePath);

  /// @brief Method LoadToolsFromDirectory, addr 0x25b54d8, size 0x2ac, virtual false, abstract: false, final false
  static inline bool LoadToolsFromDirectory(::StringW folderPath, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> tools);

  static inline ::HoudiniEngineUnity::HEU_ShelfTools* New_ctor();

  /// @brief Method RemoveShelf, addr 0x25b6874, size 0x144, virtual false, abstract: false, final false
  static inline void RemoveShelf(int32_t shelfIndex);

  /// @brief Method SaveShelf, addr 0x25b5784, size 0x28c, virtual false, abstract: false, final false
  static inline void SaveShelf();

  /// @brief Method SetCurrentShelf, addr 0x25b487c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetCurrentShelf(int32_t index);

  /// @brief Method SetReloadShelves, addr 0x25b46c4, size 0x58, virtual false, abstract: false, final false
  static inline void SetReloadShelves();

  /// @brief Method .ctor, addr 0x25b7e28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__currentSelectedShelf();

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>* getStaticF__shelves();

  static inline bool getStaticF__shelvesLoaded();

  static inline void setStaticF__currentSelectedShelf(int32_t value);

  static inline void setStaticF__shelves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>* value);

  static inline void setStaticF__shelvesLoaded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ShelfTools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ShelfTools(HEU_ShelfTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ShelfTools(HEU_ShelfTools const&) = delete;

  /// @brief Field TARGET_ALL offset 0xffffffff size 0x8
  static constexpr ::ConstString TARGET_ALL{ u"all" };

  /// @brief Field TARGET_UNITY offset 0xffffffff size 0x8
  static constexpr ::ConstString TARGET_UNITY{ u"unity" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ShelfTools, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ShelfTools);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfTools*, "HoudiniEngineUnity", "HEU_ShelfTools");
