#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomRenderTextureManager)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class CustomRenderTexture;
}
// Forward declare root types
namespace UnityEngine {
class CustomRenderTextureManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CustomRenderTextureManager);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CustomRenderTextureManager
class CORDL_TYPE CustomRenderTextureManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field textureLoaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textureLoaded, put = setStaticF_textureLoaded)) ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* textureLoaded;

  /// @brief Field textureUnloaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textureUnloaded, put = setStaticF_textureUnloaded)) ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* textureUnloaded;

  /// @brief Method InvokeOnTextureLoaded_Internal, addr 0x68b7140, size 0x70, virtual false, abstract: false, final false
  static inline void InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture* source);

  /// @brief Method InvokeOnTextureUnloaded_Internal, addr 0x68b71b0, size 0x70, virtual false, abstract: false, final false
  static inline void InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture* source);

  static inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* getStaticF_textureLoaded();

  static inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* getStaticF_textureUnloaded();

  static inline void setStaticF_textureLoaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* value);

  static inline void setStaticF_textureUnloaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomRenderTextureManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomRenderTextureManager(CustomRenderTextureManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomRenderTextureManager(CustomRenderTextureManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CustomRenderTextureManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CustomRenderTextureManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomRenderTextureManager*, "UnityEngine", "CustomRenderTextureManager");
