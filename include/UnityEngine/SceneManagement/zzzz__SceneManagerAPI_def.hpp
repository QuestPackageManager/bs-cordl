#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManagerAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerAPI)
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPI;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SceneManagement::SceneManagerAPI);
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneManagerAPI
class CORDL_TYPE SceneManagerAPI : public ::System::Object {
public:
  // Declarations
  /// @brief Field <overrideAPI>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__overrideAPI_k__BackingField, put = setStaticF__overrideAPI_k__BackingField)) ::UnityEngine::SceneManagement::SceneManagerAPI* _overrideAPI_k__BackingField;

  /// @brief Field s_DefaultAPI, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultAPI, put = setStaticF_s_DefaultAPI)) ::UnityEngine::SceneManagement::SceneManagerAPI* s_DefaultAPI;

  /// @brief Method GetNumScenesInBuildSettings, addr 0x48cd1fc, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetNumScenesInBuildSettings();

  /// @brief Method LoadFirstScene, addr 0x48cd284, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadFirstScene(bool mustLoadAsync);

  /// @brief Method LoadSceneAsyncByNameOrIndex, addr 0x48cd224, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                    bool mustCompleteNextFrame);

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* New_ctor();

  /// @brief Method .ctor, addr 0x48cd1f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* getStaticF__overrideAPI_k__BackingField();

  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* getStaticF_s_DefaultAPI();

  /// @brief Method get_ActiveAPI, addr 0x48cd0f4, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* get_ActiveAPI();

  /// @brief Method get_overrideAPI, addr 0x48cd19c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::SceneManagerAPI* get_overrideAPI();

  static inline void setStaticF__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI* value);

  static inline void setStaticF_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneManagerAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManagerAPI(SceneManagerAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManagerAPI(SceneManagerAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11009 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManagerAPI, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPI*, "UnityEngine.SceneManagement", "SceneManagerAPI");
