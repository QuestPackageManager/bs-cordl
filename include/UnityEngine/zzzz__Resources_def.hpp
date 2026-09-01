#pragma once
// IWYU pragma private; include "UnityEngine\Resources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Resources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Resources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Resources*, "UnityEngine", "Resources");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Resources
class CORDL_TYPE Resources : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> ConvertObjects(::ArrayW<::UnityEngine::Object*> rawObjects);

  /// @brief Method FindObjectsOfTypeAll, addr 0x6ad9560, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindObjectsOfTypeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> FindObjectsOfTypeAll();

  /// @brief Method GetBuiltinResource, addr 0x6ad9728, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetBuiltinResource(::System::Type* type, ::StringW path);

  /// @brief Method GetBuiltinResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetBuiltinResource(::StringW path);

  /// @brief Method GetBuiltinResource_Injected, addr 0x6ad99b4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBuiltinResource_Injected(::System::Type* type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path);

  /// @brief Method Load, addr 0x6ad95cc, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path);

  /// @brief Method Load, addr 0x6ad8af4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Load(::StringW path);

  /// @brief Method LoadAll, addr 0x6ad96b8, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll(::StringW path);

  /// @brief Method LoadAll, addr 0x6ad963c, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method UnloadUnusedAssets, addr 0x6ad99f8, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadUnusedAssets();

  /// @brief Method UnloadUnusedAssets_Injected, addr 0x6ad9a30, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnloadUnusedAssets_Injected();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Resources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Resources(Resources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Resources(Resources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Resources) == 0x10, "Size mismatch!");

} // namespace UnityEngine
