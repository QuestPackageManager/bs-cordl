#pragma once
// IWYU pragma private; include "UnityEngine/Resources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Resources)
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
class AsyncOperation;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Resources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Resources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Resources*, "UnityEngine", "Resources");
// [NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
// [NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
// Dependencies System.Object, UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Resources
class CORDL_TYPE Resources : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline ::ArrayW<T> ConvertObjects(::ArrayW<::UnityEngine::Object*> rawObjects);

  /// [FreeFunction("Resources_Bindings::DoesObjectWithInstanceIDExist", IsThreadSafe = true)]
  /// @brief Method EntityIdIsValid, addr 0x6f33ddc, size 0x44, virtual false, abstract: false, final false
  static inline bool EntityIdIsValid(::UnityEngine::EntityId entityId);

  /// @brief Method EntityIdIsValid_Injected, addr 0x6f33e20, size 0x3c, virtual false, abstract: false, final false
  static inline bool EntityIdIsValid_Injected(::by_ref<::UnityEngine::EntityId const> entityId);

  /// [FreeFunction("Resources_Bindings::InstanceIDToObject")]
  /// @brief Method EntityIdToObject, addr 0x6f33c80, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> EntityIdToObject(::UnityEngine::EntityId entityId);

  /// @brief Method EntityIdToObject_Injected, addr 0x6f33da0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr EntityIdToObject_Injected(::by_ref<::UnityEngine::EntityId const> entityId);

  /// @brief Method FindObjectsOfTypeAll, addr 0x6f33694, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindObjectsOfTypeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline ::ArrayW<T> FindObjectsOfTypeAll();

  /// [FreeFunction("GetScriptingBuiltinResource", ThrowsException = true)]
  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)0)]
  /// @brief Method GetBuiltinResource, addr 0x6f3385c, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetBuiltinResource(/* [NotNull] */ ::System::Type* type, ::StringW path);

  /// @brief Method GetBuiltinResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline T GetBuiltinResource(::StringW path);

  /// @brief Method GetBuiltinResource_Injected, addr 0x6f33ae8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBuiltinResource_Injected(::System::Type* type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path);

  /// @brief Method Load, addr 0x6f33700, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path);

  /// @brief Method Load, addr 0x6f32b5c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline T Load(::StringW path);

  /// @brief Method LoadAll, addr 0x6f337ec, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll(::StringW path);

  /// @brief Method LoadAll, addr 0x6f33770, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method UnloadAsset, addr 0x6f33b2c, size 0x6c, virtual false, abstract: false, final false
  static inline void UnloadAsset(::UnityEngine::Object* assetToUnload);

  /// [FreeFunction("Resources_Bindings::UnloadUnusedAssets")]
  /// @brief Method UnloadUnusedAssets, addr 0x6f33b98, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadUnusedAssets();

  /// @brief Method UnloadUnusedAssets_Injected, addr 0x6f33bd0, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnloadUnusedAssets_Injected();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Resources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Resources(Resources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Resources(Resources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9881 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Resources) == 0x10, "Size mismatch!");

} // namespace UnityEngine
