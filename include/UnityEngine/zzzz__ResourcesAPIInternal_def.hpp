#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ResourcesAPIInternal);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ResourcesAPIInternal
class CORDL_TYPE ResourcesAPIInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindObjectsOfTypeAll, addr 0x690e110, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindShaderByName, addr 0x690e14c, size 0x274, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindShaderByName(::StringW name);

  /// @brief Method FindShaderByName_Injected, addr 0x690e3c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindShaderByName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Load, addr 0x690e3fc, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll, addr 0x690e6cc, size 0x188, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll_Injected, addr 0x690e854, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAll_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> path,
                                                                                                                      ::System::Type* systemTypeInstance);

  /// @brief Method Load_Injected, addr 0x690e688, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Load_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> path, ::System::Type* systemTypeInstance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesAPIInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesAPIInternal(ResourcesAPIInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesAPIInternal(ResourcesAPIInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourcesAPIInternal, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ResourcesAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
