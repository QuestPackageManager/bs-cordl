#pragma once
// IWYU pragma private; include "GlobalNamespace\ScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScenesTransitionSetupData)
namespace GlobalNamespace {
class SceneSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScenesTransitionSetupData*, "", "ScenesTransitionSetupData");
// Dependencies SceneSetupData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScenesTransitionSetupData
class CORDL_TYPE ScenesTransitionSetupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sceneSetupDataArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupDataArray, put = __cordl_internal_set__sceneSetupDataArray)) ::ArrayW<::GlobalNamespace::SceneSetupData*> _sceneSetupDataArray;

  /// @brief Field <scenes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__scenes_k__BackingField, put = __cordl_internal_set__scenes_k__BackingField)) ::ArrayW<::StringW> _scenes_k__BackingField;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_scenes, put = set_scenes)) ::ArrayW<::StringW> scenes;

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x3308338, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  /// @brief Method Init, addr 0x3308330, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::StringW> newScenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method Init, addr 0x330814c, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method InstallBindings, addr 0x3305530, size 0x148, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::ScenesTransitionSetupData* New_ctor();

  static inline ::GlobalNamespace::ScenesTransitionSetupData* New_ctor(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  static inline ::GlobalNamespace::ScenesTransitionSetupData* New_ctor(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*> const& __cordl_internal_get__sceneSetupDataArray() const;

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*>& __cordl_internal_get__sceneSetupDataArray();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__scenes_k__BackingField() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__scenes_k__BackingField();

  constexpr void __cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*> value);

  constexpr void __cordl_internal_set__scenes_k__BackingField(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x33081cc, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x330832c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method .ctor, addr 0x3308324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);

  /// @brief Method get_name, addr 0x33082ec, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_scenes, addr 0x3308314, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_scenes();

  /// @brief Method set_scenes, addr 0x330831c, size 0x8, virtual false, abstract: false, final false
  inline void set_scenes(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScenesTransitionSetupData(ScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScenesTransitionSetupData(ScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21543 };

  /// @brief Field <scenes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> ____scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneSetupData*> ____sceneSetupDataArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupData, ____scenes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupData, ____sceneSetupDataArray) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
