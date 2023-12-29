#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Resources)
namespace UnityEngine {
class ResourceRequest;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine {
class Resources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Resources);
// Type: UnityEngine::Resources
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10192))
// CS Name: ::UnityEngine::Resources*
class CORDL_TYPE Resources : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertObjects addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ConvertObjects(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> rawObjects);

  /// @brief Method FindObjectsOfTypeAll addr 0x2b78ca8 size 0x68 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindObjectsOfTypeAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindObjectsOfTypeAll();

  /// @brief Method Load addr 0x2b78d10 size 0x84 virtual false final false
  static inline ::UnityEngine::Object* Load(::StringW path);

  /// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Load(::StringW path);

  /// @brief Method Load addr 0x2b787a0 size 0x78 virtual false final false
  static inline ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAsync addr 0x2b78d94 size 0x78 virtual false final false
  static inline ::UnityEngine::ResourceRequest* LoadAsync(::StringW path, ::System::Type* type);

  /// @brief Method LoadAll addr 0x2b78e0c size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll addr 0x2b78e84 size 0x84 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAll(::StringW path);

  /// @brief Method GetBuiltinResource addr 0x2b78f08 size 0x44 virtual false final false
  static inline ::UnityEngine::Object* GetBuiltinResource(::System::Type* type, ::StringW path);

  /// @brief Method GetBuiltinResource addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetBuiltinResource(::StringW path);

  /// @brief Method UnloadAsset addr 0x2b78f4c size 0x68 virtual false final false
  static inline void UnloadAsset(::UnityEngine::Object* assetToUnload);

  /// @brief Method UnloadUnusedAssets addr 0x2b78fb4 size 0x28 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadUnusedAssets();

  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Resources(Resources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Resources(Resources const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Resources();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Resources, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Resources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Resources*, "UnityEngine", "Resources");
