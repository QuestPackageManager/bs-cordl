#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLightControllerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorTargetsBucket_def.hpp"
#include "GlobalNamespace/zzzz__CompositeColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxTargetsBucket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeLightControllerData)
namespace GlobalNamespace {
class ColorTargetsBucket;
}
namespace GlobalNamespace {
class CompositeColorGroup;
}
namespace GlobalNamespace {
class FloatFxTargetsBucket;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLightControllerData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeLightControllerData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightControllerData*, "", "CompositeLightControllerData");
// Dependencies ColorTargetsBucket, CompositeColorGroup, FloatFxTargetsBucket, System.Object, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightControllerData
class CORDL_TYPE CompositeLightControllerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _children, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _children;

  /// @brief Field _colorGroups, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorGroups, put = __cordl_internal_set__colorGroups)) ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> _colorGroups;

  /// @brief Field _colorTargets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTargets, put = __cordl_internal_set__colorTargets)) ::ArrayW<::GlobalNamespace::ColorTargetsBucket*> _colorTargets;

  /// @brief Field _defaultTransformTarget, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultTransformTarget, put = __cordl_internal_set__defaultTransformTarget)) ::UnityW<::UnityEngine::Transform> _defaultTransformTarget;

  /// @brief Field _floatFxTargets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxTargets, put = __cordl_internal_set__floatFxTargets)) ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> _floatFxTargets;

  /// @brief Field _lightGroupSO, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupSO, put = __cordl_internal_set__lightGroupSO)) ::UnityW<::GlobalNamespace::LightGroupSO> _lightGroupSO;

  /// @brief Field _rotationTransformsX, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTransformsX, put = __cordl_internal_set__rotationTransformsX)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _rotationTransformsX;

  /// @brief Field _rotationTransformsY, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTransformsY, put = __cordl_internal_set__rotationTransformsY)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _rotationTransformsY;

  /// @brief Field _rotationTransformsZ, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTransformsZ, put = __cordl_internal_set__rotationTransformsZ)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _rotationTransformsZ;

  /// @brief Field _rotationXMirrored, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__rotationXMirrored, put = __cordl_internal_set__rotationXMirrored)) bool _rotationXMirrored;

  /// @brief Field _rotationYMirrored, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__rotationYMirrored, put = __cordl_internal_set__rotationYMirrored)) bool _rotationYMirrored;

  /// @brief Field _rotationZMirrored, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__rotationZMirrored, put = __cordl_internal_set__rotationZMirrored)) bool _rotationZMirrored;

  /// @brief Field _translationTransformsX, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__translationTransformsX, put = __cordl_internal_set__translationTransformsX)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _translationTransformsX;

  /// @brief Field _translationTransformsY, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__translationTransformsY, put = __cordl_internal_set__translationTransformsY)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _translationTransformsY;

  /// @brief Field _translationTransformsZ, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__translationTransformsZ, put = __cordl_internal_set__translationTransformsZ)) ::ArrayW<::UnityW<::UnityEngine::Transform>> _translationTransformsZ;

  /// @brief Field _translationXMirrored, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__translationXMirrored, put = __cordl_internal_set__translationXMirrored)) bool _translationXMirrored;

  /// @brief Field _translationYMirrored, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__translationYMirrored, put = __cordl_internal_set__translationYMirrored)) bool _translationYMirrored;

  /// @brief Field _translationZMirrored, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__translationZMirrored, put = __cordl_internal_set__translationZMirrored)) bool _translationZMirrored;

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_children)) ::ArrayW<::UnityW<::UnityEngine::Transform>> children;

  __declspec(property(get = get_colorGroups)) ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> colorGroups;

  __declspec(property(get = get_colorTargets)) ::ArrayW<::GlobalNamespace::ColorTargetsBucket*> colorTargets;

  __declspec(property(get = get_defaultTransformTarget)) ::UnityW<::UnityEngine::Transform> defaultTransformTarget;

  __declspec(property(get = get_floatFxTargets)) ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> floatFxTargets;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_lightGroupSO)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroupSO;

  __declspec(property(get = get_rotationTransformsX)) ::ArrayW<::UnityW<::UnityEngine::Transform>> rotationTransformsX;

  __declspec(property(get = get_rotationTransformsY)) ::ArrayW<::UnityW<::UnityEngine::Transform>> rotationTransformsY;

  __declspec(property(get = get_rotationTransformsZ)) ::ArrayW<::UnityW<::UnityEngine::Transform>> rotationTransformsZ;

  __declspec(property(get = get_rotationXMirrored)) bool rotationXMirrored;

  __declspec(property(get = get_rotationYMirrored)) bool rotationYMirrored;

  __declspec(property(get = get_rotationZMirrored)) bool rotationZMirrored;

  __declspec(property(get = get_translationTransformsX)) ::ArrayW<::UnityW<::UnityEngine::Transform>> translationTransformsX;

  __declspec(property(get = get_translationTransformsY)) ::ArrayW<::UnityW<::UnityEngine::Transform>> translationTransformsY;

  __declspec(property(get = get_translationTransformsZ)) ::ArrayW<::UnityW<::UnityEngine::Transform>> translationTransformsZ;

  __declspec(property(get = get_translationXMirrored)) bool translationXMirrored;

  __declspec(property(get = get_translationYMirrored)) bool translationYMirrored;

  __declspec(property(get = get_translationZMirrored)) bool translationZMirrored;

  /// @brief Method IsValid, addr 0x59932a0, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::GlobalNamespace::CompositeLightControllerData* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__children() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__children();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> const& __cordl_internal_get__colorGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>>& __cordl_internal_get__colorGroups();

  constexpr ::ArrayW<::GlobalNamespace::ColorTargetsBucket*> const& __cordl_internal_get__colorTargets() const;

  constexpr ::ArrayW<::GlobalNamespace::ColorTargetsBucket*>& __cordl_internal_get__colorTargets();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__defaultTransformTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__defaultTransformTarget();

  constexpr ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> const& __cordl_internal_get__floatFxTargets() const;

  constexpr ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*>& __cordl_internal_get__floatFxTargets();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroupSO() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroupSO();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__rotationTransformsX() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__rotationTransformsX();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__rotationTransformsY() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__rotationTransformsY();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__rotationTransformsZ() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__rotationTransformsZ();

  constexpr bool const& __cordl_internal_get__rotationXMirrored() const;

  constexpr bool& __cordl_internal_get__rotationXMirrored();

  constexpr bool const& __cordl_internal_get__rotationYMirrored() const;

  constexpr bool& __cordl_internal_get__rotationYMirrored();

  constexpr bool const& __cordl_internal_get__rotationZMirrored() const;

  constexpr bool& __cordl_internal_get__rotationZMirrored();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__translationTransformsX() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__translationTransformsX();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__translationTransformsY() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__translationTransformsY();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__translationTransformsZ() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__translationTransformsZ();

  constexpr bool const& __cordl_internal_get__translationXMirrored() const;

  constexpr bool& __cordl_internal_get__translationXMirrored();

  constexpr bool const& __cordl_internal_get__translationYMirrored() const;

  constexpr bool& __cordl_internal_get__translationYMirrored();

  constexpr bool const& __cordl_internal_get__translationZMirrored() const;

  constexpr bool& __cordl_internal_get__translationZMirrored();

  constexpr void __cordl_internal_set__children(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__colorGroups(::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> value);

  constexpr void __cordl_internal_set__colorTargets(::ArrayW<::GlobalNamespace::ColorTargetsBucket*> value);

  constexpr void __cordl_internal_set__defaultTransformTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__floatFxTargets(::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> value);

  constexpr void __cordl_internal_set__lightGroupSO(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set__rotationTransformsX(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__rotationTransformsY(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__rotationTransformsZ(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__rotationXMirrored(bool value);

  constexpr void __cordl_internal_set__rotationYMirrored(bool value);

  constexpr void __cordl_internal_set__rotationZMirrored(bool value);

  constexpr void __cordl_internal_set__translationTransformsX(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__translationTransformsY(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__translationTransformsZ(::ArrayW<::UnityW<::UnityEngine::Transform>> value);

  constexpr void __cordl_internal_set__translationXMirrored(bool value);

  constexpr void __cordl_internal_set__translationYMirrored(bool value);

  constexpr void __cordl_internal_set__translationZMirrored(bool value);

  /// @brief Method .ctor, addr 0x59932c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childCount, addr 0x599077c, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_children, addr 0x5993210, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_children();

  /// @brief Method get_colorGroups, addr 0x5993268, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> get_colorGroups();

  /// @brief Method get_colorTargets, addr 0x5993260, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ColorTargetsBucket*> get_colorTargets();

  /// @brief Method get_defaultTransformTarget, addr 0x5993218, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_defaultTransformTarget();

  /// @brief Method get_floatFxTargets, addr 0x5993258, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> get_floatFxTargets();

  /// @brief Method get_groupId, addr 0x59904f0, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_groupId();

  /// @brief Method get_lightGroupSO, addr 0x5993220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroupSO();

  /// @brief Method get_rotationTransformsX, addr 0x5993270, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_rotationTransformsX();

  /// @brief Method get_rotationTransformsY, addr 0x5993278, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_rotationTransformsY();

  /// @brief Method get_rotationTransformsZ, addr 0x5993280, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_rotationTransformsZ();

  /// @brief Method get_rotationXMirrored, addr 0x5993228, size 0x8, virtual false, abstract: false, final false
  inline bool get_rotationXMirrored();

  /// @brief Method get_rotationYMirrored, addr 0x5993230, size 0x8, virtual false, abstract: false, final false
  inline bool get_rotationYMirrored();

  /// @brief Method get_rotationZMirrored, addr 0x5993238, size 0x8, virtual false, abstract: false, final false
  inline bool get_rotationZMirrored();

  /// @brief Method get_translationTransformsX, addr 0x5993288, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_translationTransformsX();

  /// @brief Method get_translationTransformsY, addr 0x5993290, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_translationTransformsY();

  /// @brief Method get_translationTransformsZ, addr 0x5993298, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_translationTransformsZ();

  /// @brief Method get_translationXMirrored, addr 0x5993240, size 0x8, virtual false, abstract: false, final false
  inline bool get_translationXMirrored();

  /// @brief Method get_translationYMirrored, addr 0x5993248, size 0x8, virtual false, abstract: false, final false
  inline bool get_translationYMirrored();

  /// @brief Method get_translationZMirrored, addr 0x5993250, size 0x8, virtual false, abstract: false, final false
  inline bool get_translationZMirrored();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightControllerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightControllerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightControllerData(CompositeLightControllerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightControllerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightControllerData(CompositeLightControllerData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5828 };

  /// @brief Field _children, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____children;

  /// @brief Field _lightGroupSO, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroupSO;

  /// @brief Field _defaultTransformTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____defaultTransformTarget;

  /// @brief Field _rotationXMirrored, offset: 0x28, size: 0x1, def value: None
  bool ____rotationXMirrored;

  /// @brief Field _rotationYMirrored, offset: 0x29, size: 0x1, def value: None
  bool ____rotationYMirrored;

  /// @brief Field _rotationZMirrored, offset: 0x2a, size: 0x1, def value: None
  bool ____rotationZMirrored;

  /// @brief Field _translationXMirrored, offset: 0x2b, size: 0x1, def value: None
  bool ____translationXMirrored;

  /// @brief Field _translationYMirrored, offset: 0x2c, size: 0x1, def value: None
  bool ____translationYMirrored;

  /// @brief Field _translationZMirrored, offset: 0x2d, size: 0x1, def value: None
  bool ____translationZMirrored;

  /// @brief Field _floatFxTargets, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FloatFxTargetsBucket*> ____floatFxTargets;

  /// @brief Field _colorTargets, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ColorTargetsBucket*> ____colorTargets;

  /// @brief Field _colorGroups, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CompositeColorGroup>> ____colorGroups;

  /// @brief Field _rotationTransformsX, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____rotationTransformsX;

  /// @brief Field _rotationTransformsY, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____rotationTransformsY;

  /// @brief Field _rotationTransformsZ, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____rotationTransformsZ;

  /// @brief Field _translationTransformsX, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____translationTransformsX;

  /// @brief Field _translationTransformsY, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____translationTransformsY;

  /// @brief Field _translationTransformsZ, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>> ____translationTransformsZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____children) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____lightGroupSO) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____defaultTransformTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationXMirrored) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationYMirrored) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationZMirrored) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationXMirrored) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationYMirrored) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationZMirrored) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____floatFxTargets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____colorTargets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____colorGroups) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationTransformsX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationTransformsY) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____rotationTransformsZ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationTransformsX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationTransformsY) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerData, ____translationTransformsZ) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightControllerData) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
