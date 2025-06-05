#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteLODGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomLODGroup_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteLODGroup)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteLODGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteLODGroup);
// Dependencies CustomLODGroup
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteLODGroup
class CORDL_TYPE NoteLODGroup : public ::GlobalNamespace::CustomLODGroup {
public:
  // Declarations
  /// @brief Field _postProcessEnabled, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__postProcessEnabled, put = __cordl_internal_set__postProcessEnabled)) ::UnityW<::GlobalNamespace::BoolSO> _postProcessEnabled;

  __declspec(property(get = get_meshFilter)) ::UnityW<::UnityEngine::MeshFilter> meshFilter;

  __declspec(property(get = get_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  /// @brief Method GetStartupLevel, addr 0x3b7de8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetStartupLevel();

  static inline ::GlobalNamespace::NoteLODGroup* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__postProcessEnabled() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__postProcessEnabled();

  constexpr void __cordl_internal_set__postProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3b7de94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_meshFilter, addr 0x3b7dd9c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_meshFilter();

  /// @brief Method get_meshRenderer, addr 0x3b7de14, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteLODGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteLODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteLODGroup(NoteLODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteLODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteLODGroup(NoteLODGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4191 };

  /// @brief Field _postProcessEnabled, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____postProcessEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteLODGroup, ____postProcessEnabled) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteLODGroup, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteLODGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLODGroup*, "", "NoteLODGroup");
