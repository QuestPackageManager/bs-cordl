#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SceneExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneExtensions)
namespace System::Reflection {
class PropertyInfo;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SceneExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SceneExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SceneExtensions
class CORDL_TYPE SceneExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_SceneGUID, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SceneGUID, put = setStaticF_s_SceneGUID)) ::System::Reflection::PropertyInfo* s_SceneGUID;

  /// @brief Method GetGUID, addr 0x6572b7c, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetGUID(::UnityEngine::SceneManagement::Scene scene);

  static inline ::System::Reflection::PropertyInfo* getStaticF_s_SceneGUID();

  static inline void setStaticF_s_SceneGUID(::System::Reflection::PropertyInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneExtensions(SceneExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneExtensions(SceneExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SceneExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SceneExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SceneExtensions*, "UnityEngine.Rendering", "SceneExtensions");
