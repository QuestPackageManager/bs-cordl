#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupEditorPrefabContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupEditorPrefabContext)
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupEditorPrefabContext;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupEditorPrefabContext);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupEditorPrefabContext
class CORDL_TYPE LightGroupEditorPrefabContext : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field lightGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lightGroups, put = __cordl_internal_set_lightGroups)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups;

  static inline ::GlobalNamespace::LightGroupEditorPrefabContext* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const& __cordl_internal_get_lightGroups() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get_lightGroups();

  constexpr void __cordl_internal_set_lightGroups(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  /// @brief Method .ctor, addr 0x56b8854, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupEditorPrefabContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupEditorPrefabContext(LightGroupEditorPrefabContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupEditorPrefabContext(LightGroupEditorPrefabContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19698 };

  /// @brief Field lightGroups, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* ___lightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupEditorPrefabContext, ___lightGroups) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupEditorPrefabContext, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupEditorPrefabContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupEditorPrefabContext*, "", "LightGroupEditorPrefabContext");
