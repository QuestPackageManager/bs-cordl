#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourcesAPIInternal)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPIInternal;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourcesAPIInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
// [NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
// [NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ResourcesAPIInternal
class CORDL_TYPE ResourcesAPIInternal : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("Resources_Bindings::FindObjectsOfTypeAll")]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)2)]
  /// @brief Method FindObjectsOfTypeAll, addr 0x6f32c84, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type* type);

  /// [FreeFunction("GetShaderNameRegistry().FindShader")]
  /// @brief Method FindShaderByName, addr 0x6f32cc0, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindShaderByName(::StringW name);

  /// @brief Method FindShaderByName_Injected, addr 0x6f32f34, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindShaderByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [NativeThrows]
  /// [FreeFunction("Resources_Bindings::Load")]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)1)]
  /// @brief Method Load, addr 0x6f32f70, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path, /* [NotNull] */ ::System::Type* systemTypeInstance);

  /// [FreeFunction("Resources_Bindings::LoadAll")]
  /// [NativeThrows]
  /// @brief Method LoadAll, addr 0x6f33240, size 0x188, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll(/* [NotNull] */ ::StringW path, /* [NotNull] */ ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll_Injected, addr 0x6f333c8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, ::System::Type* systemTypeInstance);

  /// @brief Method Load_Injected, addr 0x6f331fc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Load_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, ::System::Type* systemTypeInstance);

  /// [FreeFunction("Scripting::UnloadAssetFromScripting")]
  /// @brief Method UnloadAsset, addr 0x6f3340c, size 0x80, virtual false, abstract: false, final false
  static inline void UnloadAsset(::UnityEngine::Object* assetToUnload);

  /// @brief Method UnloadAsset_Injected, addr 0x6f3348c, size 0x3c, virtual false, abstract: false, final false
  static inline void UnloadAsset_Injected(::System::IntPtr assetToUnload);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesAPIInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesAPIInternal(ResourcesAPIInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesAPIInternal(ResourcesAPIInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourcesAPIInternal) == 0x10, "Size mismatch!");

} // namespace UnityEngine
