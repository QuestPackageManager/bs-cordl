#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXHierarchyAttributeMapBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXHierarchyAttributeMapBinder_Bone;
}
namespace UnityEngine::VFX::Utility {
struct VFXHierarchyAttributeMapBinder_RadiusMode;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXHierarchyAttributeMapBinder_RadiusMode;
}
namespace UnityEngine::VFX::Utility {
class VFXHierarchyAttributeMapBinder;
}
namespace UnityEngine::VFX::Utility {
struct VFXHierarchyAttributeMapBinder_Bone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*);
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder/RadiusMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder/Bone");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder/RadiusMode
struct CORDL_TYPE VFXHierarchyAttributeMapBinder_RadiusMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped
  enum struct __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped : int32_t {
    __E_Fixed = static_cast<int32_t>(0x0),
    __E_Interpolate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped() const noexcept {
    return static_cast<__VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXHierarchyAttributeMapBinder_RadiusMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXHierarchyAttributeMapBinder_RadiusMode(int32_t value__) noexcept;

  /// @brief Field Fixed value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode const Fixed;

  /// @brief Field Interpolate value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode const Interpolate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder/Bone
struct CORDL_TYPE VFXHierarchyAttributeMapBinder_Bone {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXHierarchyAttributeMapBinder_Bone();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "sourceRadius", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "target", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "targetRadius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VFXHierarchyAttributeMapBinder_Bone(::UnityW<::UnityEngine::Transform> source, float_t sourceRadius, ::UnityW<::UnityEngine::Transform> target, float_t targetRadius) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19957 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> source;

  /// @brief Field sourceRadius, offset: 0x8, size: 0x4, def value: None
  float_t sourceRadius;

  /// @brief Field target, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> target;

  /// @brief Field targetRadius, offset: 0x18, size: 0x4, def value: None
  float_t targetRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone, sourceRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone, target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone, targetRadius) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder::RadiusMode
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder
class CORDL_TYPE VFXHierarchyAttributeMapBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using Bone = ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone;

  using RadiusMode = ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode;

  /// @brief Field DefaultRadius, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_DefaultRadius, put = __cordl_internal_set_DefaultRadius)) float_t DefaultRadius;

  /// @brief Field HierarchyRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_HierarchyRoot, put = __cordl_internal_set_HierarchyRoot)) ::UnityW<::UnityEngine::Transform> HierarchyRoot;

  /// @brief Field MaximumDepth, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_MaximumDepth, put = __cordl_internal_set_MaximumDepth)) uint32_t MaximumDepth;

  /// @brief Field Radius, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_Radius, put = __cordl_internal_set_Radius)) ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode Radius;

  /// @brief Field bones, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_bones,
                      put = __cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>* bones;

  /// @brief Field m_BoneCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoneCount, put = __cordl_internal_set_m_BoneCount)) ::UnityEngine::VFX::Utility::ExposedProperty* m_BoneCount;

  /// @brief Field m_PositionMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionMap, put = __cordl_internal_set_m_PositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty* m_PositionMap;

  /// @brief Field m_RadiusPositionMap, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadiusPositionMap, put = __cordl_internal_set_m_RadiusPositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty* m_RadiusPositionMap;

  /// @brief Field m_TargetPositionMap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetPositionMap, put = __cordl_internal_set_m_TargetPositionMap)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetPositionMap;

  /// @brief Field position, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityW<::UnityEngine::Texture2D> position;

  /// @brief Field radius, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) ::UnityW<::UnityEngine::Texture2D> radius;

  /// @brief Field targetPosition, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_targetPosition, put = __cordl_internal_set_targetPosition)) ::UnityW<::UnityEngine::Texture2D> targetPosition;

  /// @brief Method ChildrenOf, addr 0x69dd46c, size 0x470, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>* ChildrenOf(::UnityEngine::Transform* source, uint32_t depth);

  /// @brief Method IsValid, addr 0x69ddcec, size 0xfc, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69dd344, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69dd468, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69ddeb8, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69ddde8, size 0xd0, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateData, addr 0x69dd8dc, size 0x410, virtual false, abstract: false, final false
  inline void UpdateData();

  /// @brief Method UpdateHierarchy, addr 0x69dd360, size 0x108, virtual false, abstract: false, final false
  inline void UpdateHierarchy();

  constexpr float_t const& __cordl_internal_get_DefaultRadius() const;

  constexpr float_t& __cordl_internal_get_DefaultRadius();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_HierarchyRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_HierarchyRoot();

  constexpr uint32_t const& __cordl_internal_get_MaximumDepth() const;

  constexpr uint32_t& __cordl_internal_get_MaximumDepth();

  constexpr ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode const& __cordl_internal_get_Radius() const;

  constexpr ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode& __cordl_internal_get_Radius();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>* const& __cordl_internal_get_bones() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>*& __cordl_internal_get_bones();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_BoneCount() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_BoneCount();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_PositionMap() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_PositionMap();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_RadiusPositionMap() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_RadiusPositionMap();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPositionMap() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPositionMap();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_position() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_position();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_radius() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_radius();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_targetPosition() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_targetPosition();

  constexpr void __cordl_internal_set_DefaultRadius(float_t value);

  constexpr void __cordl_internal_set_HierarchyRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_MaximumDepth(uint32_t value);

  constexpr void __cordl_internal_set_Radius(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode value);

  constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>* value);

  constexpr void __cordl_internal_set_m_BoneCount(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_PositionMap(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_RadiusPositionMap(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_TargetPositionMap(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_position(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_radius(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_targetPosition(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x69ddfac, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXHierarchyAttributeMapBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXHierarchyAttributeMapBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXHierarchyAttributeMapBinder(VFXHierarchyAttributeMapBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXHierarchyAttributeMapBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXHierarchyAttributeMapBinder(VFXHierarchyAttributeMapBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19958 };

  /// @brief Field m_BoneCount, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_BoneCount;

  /// @brief Field m_PositionMap, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_PositionMap;

  /// @brief Field m_TargetPositionMap, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetPositionMap;

  /// @brief Field m_RadiusPositionMap, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_RadiusPositionMap;

  /// @brief Field HierarchyRoot, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___HierarchyRoot;

  /// @brief Field DefaultRadius, offset: 0x50, size: 0x4, def value: None
  float_t ___DefaultRadius;

  /// @brief Field MaximumDepth, offset: 0x54, size: 0x4, def value: None
  uint32_t ___MaximumDepth;

  /// @brief Field Radius, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_RadiusMode ___Radius;

  /// @brief Field position, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___position;

  /// @brief Field targetPosition, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___targetPosition;

  /// @brief Field radius, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___radius;

  /// @brief Field bones, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder_Bone>* ___bones;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_BoneCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_PositionMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_TargetPositionMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___m_RadiusPositionMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___HierarchyRoot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___DefaultRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___MaximumDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___Radius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___position) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___targetPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___radius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder, ___bones) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder) == 0x80, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
