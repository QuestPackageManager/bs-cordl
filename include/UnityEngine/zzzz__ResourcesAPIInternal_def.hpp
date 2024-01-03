#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourcesAPIInternal)
namespace UnityEngine {
class ResourceRequest;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPIInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourcesAPIInternal);
// Type: UnityEngine::ResourcesAPIInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10263))
// CS Name: ::UnityEngine::ResourcesAPIInternal*
class CORDL_TYPE ResourcesAPIInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindObjectsOfTypeAll, addr 0x2cde084, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindShaderByName, addr 0x2cde0c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Shader* FindShaderByName(::StringW name);

  /// @brief Method Load, addr 0x2cde0fc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll, addr 0x2cde140, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAsyncInternal, addr 0x2cde184, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceRequest* LoadAsyncInternal(::StringW path, ::System::Type* type);

  /// @brief Method UnloadAsset, addr 0x2cde1c8, size 0x3c, virtual false, abstract: false, final false
  static inline void UnloadAsset(::UnityEngine::Object* assetToUnload);

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesAPIInternal(ResourcesAPIInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesAPIInternal(ResourcesAPIInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesAPIInternal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourcesAPIInternal, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ResourcesAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
