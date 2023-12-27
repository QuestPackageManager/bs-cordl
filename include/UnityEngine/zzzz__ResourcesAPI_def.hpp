#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourcesAPI)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
class Shader;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPI;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourcesAPI);
// Type: UnityEngine::ResourcesAPI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10264))
// CS Name: ::UnityEngine::ResourcesAPI*
class CORDL_TYPE ResourcesAPI : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultAPI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultAPI, put = setStaticF_s_DefaultAPI))::UnityEngine::ResourcesAPI* s_DefaultAPI;

  /// @brief Field <overrideAPI>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__overrideAPI_k__BackingField, put = setStaticF__overrideAPI_k__BackingField))::UnityEngine::ResourcesAPI* _overrideAPI_k__BackingField;

  static inline void setStaticF_s_DefaultAPI(::UnityEngine::ResourcesAPI* value);

  static inline ::UnityEngine::ResourcesAPI* getStaticF_s_DefaultAPI();

  static inline void setStaticF__overrideAPI_k__BackingField(::UnityEngine::ResourcesAPI* value);

  static inline ::UnityEngine::ResourcesAPI* getStaticF__overrideAPI_k__BackingField();

  /// @brief Method get_ActiveAPI addr 0x2cde204 size 0xa8 virtual false final false
  static inline ::UnityEngine::ResourcesAPI* get_ActiveAPI();

  /// @brief Method get_overrideAPI addr 0x2cde2ac size 0x58 virtual false final false
  static inline ::UnityEngine::ResourcesAPI* get_overrideAPI();

  static inline ::UnityEngine::ResourcesAPI* New_ctor();

  /// @brief Method .ctor addr 0x2cde304 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method FindObjectsOfTypeAll addr 0x2cde30c size 0x3c virtual true final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfTypeAll(::System::Type* systemTypeInstance);

  /// @brief Method FindShaderByName addr 0x2cde348 size 0x3c virtual true final false
  inline ::UnityEngine::Shader* FindShaderByName(::StringW name);

  /// @brief Method Load addr 0x2cde384 size 0x44 virtual true final false
  inline ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAll addr 0x2cde3c8 size 0x44 virtual true final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method LoadAsync addr 0x2cde40c size 0x54 virtual true final false
  inline ::UnityEngine::ResourceRequest* LoadAsync(::StringW path, ::System::Type* systemTypeInstance);

  /// @brief Method UnloadAsset addr 0x2cde460 size 0x3c virtual true final false
  inline void UnloadAsset(::UnityEngine::Object* assetToUnload);

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesAPI(ResourcesAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesAPI(ResourcesAPI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesAPI();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourcesAPI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ResourcesAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPI*, "UnityEngine", "ResourcesAPI");
