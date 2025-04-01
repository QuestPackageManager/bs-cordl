#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneInfo)
// Forward declare root types
namespace GlobalNamespace {
class SceneInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneInfo);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneInfo
class CORDL_TYPE SceneInfo : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _disabledRootObjects, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disabledRootObjects, put = __cordl_internal_set__disabledRootObjects)) bool _disabledRootObjects;

  /// @brief Field _sceneName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneName, put = __cordl_internal_set__sceneName)) ::StringW _sceneName;

  __declspec(property(get = get_disabledRootObjects)) bool disabledRootObjects;

  __declspec(property(get = get_sceneName)) ::StringW sceneName;

  static inline ::GlobalNamespace::SceneInfo* New_ctor();

  constexpr bool const& __cordl_internal_get__disabledRootObjects() const;

  constexpr bool& __cordl_internal_get__disabledRootObjects();

  constexpr ::StringW const& __cordl_internal_get__sceneName() const;

  constexpr ::StringW& __cordl_internal_get__sceneName();

  constexpr void __cordl_internal_set__disabledRootObjects(bool value);

  constexpr void __cordl_internal_set__sceneName(::StringW value);

  /// @brief Method .ctor, addr 0x2297dc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledRootObjects, addr 0x2297dc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_disabledRootObjects();

  /// @brief Method get_sceneName, addr 0x2297db8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sceneName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneInfo(SceneInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneInfo(SceneInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17631 };

  /// @brief Field _sceneName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sceneName;

  /// @brief Field _disabledRootObjects, offset: 0x20, size: 0x1, def value: None
  bool ____disabledRootObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneInfo, ____sceneName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneInfo, ____disabledRootObjects) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneInfo*, "", "SceneInfo");
