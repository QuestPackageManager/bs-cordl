#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsMask_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsShape)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsMask;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactFilter;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactId;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_MoverData;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ShapeType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_SurfaceMaterial;
}
namespace UnityEngine::LowLevelPhysics2D {
struct SurfaceMaterial_PhysicsShape_MixingMode;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ShapeType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct SurfaceMaterial_PhysicsShape_MixingMode;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactFilter;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactId;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_MoverData;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_SurfaceMaterial;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/ShapeType");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/SurfaceMaterial/MixingMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape, "UnityEngine.LowLevelPhysics2D", "PhysicsShape");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/ContactFilter");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/ContactId");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/MoverData");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, "UnityEngine.LowLevelPhysics2D", "PhysicsShape/SurfaceMaterial");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/SurfaceMaterial/MixingMode
struct CORDL_TYPE SurfaceMaterial_PhysicsShape_MixingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SurfaceMaterial_PhysicsShape_MixingMode_Unwrapped
  enum struct __SurfaceMaterial_PhysicsShape_MixingMode_Unwrapped : int32_t {
    __E_Average = static_cast<int32_t>(0x0),
    __E_Mean = static_cast<int32_t>(0x1),
    __E_Multiply = static_cast<int32_t>(0x2),
    __E_Minimum = static_cast<int32_t>(0x3),
    __E_Maximum = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SurfaceMaterial_PhysicsShape_MixingMode_Unwrapped() const noexcept {
    return static_cast<__SurfaceMaterial_PhysicsShape_MixingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SurfaceMaterial_PhysicsShape_MixingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr SurfaceMaterial_PhysicsShape_MixingMode(int32_t value__) noexcept;

  /// @brief Field Average value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode const Average;

  /// @brief Field Maximum value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode const Maximum;

  /// @brief Field Mean value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode const Mean;

  /// @brief Field Minimum value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode const Minimum;

  /// @brief Field Multiply value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode const Multiply;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.Color32, UnityEngine.LowLevelPhysics2D.PhysicsShape::SurfaceMaterial::MixingMode
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/SurfaceMaterial
struct CORDL_TYPE PhysicsShape_SurfaceMaterial {
public:
  // Declarations
  using MixingMode = ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode;

  /// @brief Method .ctor, addr 0x6fd85f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Default, addr 0x6fd8618, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape_SurfaceMaterial();

  // Ctor Parameters [CppParam { name: "m_Friction", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_FrictionMixing", ty: "::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "m_BouncinessMixing", ty: "::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_FrictionPriority", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BouncinessPriority", ty: "uint16_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_RollingResistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TangentSpeed", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_CustomColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsShape_SurfaceMaterial(float_t m_Friction, float_t m_Bounciness, ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_FrictionMixing,
                                         ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_BouncinessMixing, uint16_t m_FrictionPriority, uint16_t m_BouncinessPriority,
                                         float_t m_RollingResistance, float_t m_TangentSpeed, ::UnityEngine::Color32 m_CustomColor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21575 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_Friction, offset: 0x0, size: 0x4, def value: None
  float_t m_Friction;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_Bounciness, offset: 0x4, size: 0x4, def value: None
  float_t m_Bounciness;

  /// [SerializeField]
  /// [FormerlySerializedAs("m_FrictionCombine")]
  /// @brief Field m_FrictionMixing, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_FrictionMixing;

  /// [FormerlySerializedAs("m_BouncinessCombine")]
  /// [SerializeField]
  /// @brief Field m_BouncinessMixing, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_BouncinessMixing;

  /// [SerializeField]
  /// [Range(0, 65535)]
  /// @brief Field m_FrictionPriority, offset: 0x10, size: 0x2, def value: None
  uint16_t m_FrictionPriority;

  /// [SerializeField]
  /// [Range(0, 65535)]
  /// @brief Field m_BouncinessPriority, offset: 0x12, size: 0x2, def value: None
  uint16_t m_BouncinessPriority;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_RollingResistance, offset: 0x14, size: 0x4, def value: None
  float_t m_RollingResistance;

  /// [SerializeField]
  /// @brief Field m_TangentSpeed, offset: 0x18, size: 0x4, def value: None
  float_t m_TangentSpeed;

  /// [SerializeField]
  /// @brief Field m_CustomColor, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Color32 m_CustomColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_Friction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_Bounciness) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_FrictionMixing) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_BouncinessMixing) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_FrictionPriority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_BouncinessPriority) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_RollingResistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_TangentSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial, m_CustomColor) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/ShapeType
struct CORDL_TYPE PhysicsShape_ShapeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsShape_ShapeType_Unwrapped
  enum struct __PhysicsShape_ShapeType_Unwrapped : int32_t {
    __E_Circle = static_cast<int32_t>(0x0),
    __E_Capsule = static_cast<int32_t>(0x1),
    __E_Segment = static_cast<int32_t>(0x2),
    __E_Polygon = static_cast<int32_t>(0x3),
    __E_ChainSegment = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsShape_ShapeType_Unwrapped() const noexcept {
    return static_cast<__PhysicsShape_ShapeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape_ShapeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsShape_ShapeType(int32_t value__) noexcept;

  /// @brief Field Capsule value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType const Capsule;

  /// @brief Field ChainSegment value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType const ChainSegment;

  /// @brief Field Circle value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType const Circle;

  /// @brief Field Polygon value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType const Polygon;

  /// @brief Field Segment value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType const Segment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21576 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/ContactId
struct CORDL_TYPE PhysicsShape_ContactId {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Method ToString, addr 0x6fd8674, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_isValid, addr 0x6fd877c, size 0x50, virtual false, abstract: false, final false
  inline bool get_isValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape_ContactId();

  // Ctor Parameters [CppParam { name: "m_IndexId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WorldId", ty: "uint16_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_Padding", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GenerationId", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr PhysicsShape_ContactId(int32_t m_IndexId, uint16_t m_WorldId, uint16_t m_Padding, int32_t m_GenerationId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_IndexId, offset: 0x0, size: 0x4, def value: None
  int32_t m_IndexId;

  /// @brief Field m_WorldId, offset: 0x4, size: 0x2, def value: None
  uint16_t m_WorldId;

  /// @brief Field m_Padding, offset: 0x6, size: 0x2, def value: None
  uint16_t m_Padding;

  /// @brief Field m_GenerationId, offset: 0x8, size: 0x4, def value: None
  int32_t m_GenerationId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId, m_IndexId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId, m_WorldId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId, m_Padding) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId, m_GenerationId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId) == 0xc, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsMask
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/ContactFilter
struct CORDL_TYPE PhysicsShape_ContactFilter {
public:
  // Declarations
  /// @brief Field DefaultCategories, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultCategories, put = setStaticF_DefaultCategories)) ::UnityEngine::LowLevelPhysics2D::PhysicsMask DefaultCategories;

  /// @brief Field DefaultContacts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultContacts, put = setStaticF_DefaultContacts)) ::UnityEngine::LowLevelPhysics2D::PhysicsMask DefaultContacts;

  /// @brief Field Everything, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_Everything, put = setStaticF_Everything)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter Everything;

  /// @brief Field defaultFilter, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_defaultFilter, put = setStaticF_defaultFilter)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter defaultFilter;

  /// @brief Method .ctor, addr 0x6fd87cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LowLevelPhysics2D::PhysicsMask categories, ::UnityEngine::LowLevelPhysics2D::PhysicsMask contacts, int32_t groupIndex);

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask getStaticF_DefaultCategories();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask getStaticF_DefaultContacts();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter getStaticF_Everything();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter getStaticF_defaultFilter();

  static inline void setStaticF_DefaultCategories(::UnityEngine::LowLevelPhysics2D::PhysicsMask value);

  static inline void setStaticF_DefaultContacts(::UnityEngine::LowLevelPhysics2D::PhysicsMask value);

  static inline void setStaticF_Everything(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter value);

  static inline void setStaticF_defaultFilter(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape_ContactFilter();

  // Ctor Parameters [CppParam { name: "m_Categories", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Contacts", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GroupIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsShape_ContactFilter(::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Categories, ::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Contacts, int32_t m_GroupIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [SerializeField]
  /// @brief Field m_Categories, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Categories;

  /// [SerializeField]
  /// @brief Field m_Contacts, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Contacts;

  /// [SerializeField]
  /// @brief Field m_GroupIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_GroupIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, m_Categories) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, m_Contacts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, m_GroupIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter) == 0x18, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape/MoverData
struct CORDL_TYPE PhysicsShape_MoverData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd8898, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape_MoverData();

  // Ctor Parameters [CppParam { name: "m_PushLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ClipVelocity", ty: "bool", modifiers: "", def_value: None,
  // comment: None }]
  constexpr PhysicsShape_MoverData(float_t m_PushLimit, bool m_ClipVelocity) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_PushLimit, offset: 0x0, size: 0x4, def value: None
  float_t m_PushLimit;

  /// [SerializeField]
  /// @brief Field m_ClipVelocity, offset: 0x4, size: 0x1, def value: None
  bool m_ClipVelocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData, m_PushLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData, m_ClipVelocity) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsShape
struct CORDL_TYPE PhysicsShape {
public:
  // Declarations
  using ContactFilter = ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter;

  using ContactId = ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId;

  using MoverData = ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData;

  using ShapeType = ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType;

  using SurfaceMaterial = ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial;

  __declspec(property(get = get_callbackTarget)) ::System::Object* callbackTarget;

  __declspec(property(get = get_isValid)) bool isValid;

  __declspec(property(get = get_shapeType)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType shapeType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>*();

  /// @brief Method Equals, addr 0x6fd84c8, size 0x68, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6fd8530, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::LowLevelPhysics2D::PhysicsShape other);

  /// @brief Method GetHashCode, addr 0x6fd8568, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6fd8240, size 0x244, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_callbackTarget, addr 0x6fd584c, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* get_callbackTarget();

  /// @brief Method get_isValid, addr 0x6fd5804, size 0x48, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_shapeType, addr 0x6fd8484, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType get_shapeType();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>"
  constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>* i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsShape_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsShape();

  // Ctor Parameters [CppParam { name: "m_Index1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_World0", ty: "uint16_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsShape(int32_t m_Index1, uint16_t m_World0, uint16_t m_Generation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Index1, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index1;

  /// @brief Field m_World0, offset: 0x4, size: 0x2, def value: None
  uint16_t m_World0;

  /// @brief Field m_Generation, offset: 0x6, size: 0x2, def value: None
  uint16_t m_Generation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape, m_Index1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape, m_World0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsShape, m_Generation) == 0x6, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsShape) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
