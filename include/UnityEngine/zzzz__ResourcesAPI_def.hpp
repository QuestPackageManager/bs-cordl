#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourcesAPI)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPI;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourcesAPI);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ResourcesAPI
class CORDL_TYPE ResourcesAPI : public ::System::Object {
public:
  // Declarations
  /// @brief Field <overrideAPI>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__overrideAPI_k__BackingField, put = setStaticF__overrideAPI_k__BackingField)) ::UnityEngine::ResourcesAPI* _overrideAPI_k__BackingField;

  /// @brief Field s_DefaultAPI, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultAPI, put = setStaticF_s_DefaultAPI)) ::UnityEngine::ResourcesAPI* s_DefaultAPI;

  /// @brief Method FindObjectsOfTypeAll, addr 0x68a5b28, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type* systemTypeInstance);

  /// @brief Method FindShaderByName, addr 0x68a5b64, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> FindShaderByName(::StringW name);

  /// @brief Method Load, addr 0x68a5b6c, size 0xc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll, addr 0x68a5b78, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  static inline ::UnityEngine::ResourcesAPI* New_ctor();

  /// @brief Method .ctor, addr 0x68a5b24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ResourcesAPI* getStaticF__overrideAPI_k__BackingField();

  static inline ::UnityEngine::ResourcesAPI* getStaticF_s_DefaultAPI();

  /// @brief Method get_ActiveAPI, addr 0x68a5a14, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourcesAPI* get_ActiveAPI();

  /// @brief Method get_overrideAPI, addr 0x68a5ac8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourcesAPI* get_overrideAPI();

  static inline void setStaticF__overrideAPI_k__BackingField(::UnityEngine::ResourcesAPI* value);

  static inline void setStaticF_s_DefaultAPI(::UnityEngine::ResourcesAPI* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesAPI(ResourcesAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesAPI(ResourcesAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10270 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourcesAPI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ResourcesAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPI*, "UnityEngine", "ResourcesAPI");
