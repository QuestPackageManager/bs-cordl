#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoundary)
namespace GlobalNamespace {
struct OVRBoundary_BoundaryTestResult;
}
namespace GlobalNamespace {
struct OVRBoundary_BoundaryType;
}
namespace GlobalNamespace {
struct OVRBoundary_Node;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBoundary_BoundaryType;
}
namespace GlobalNamespace {
struct OVRBoundary_Node;
}
namespace GlobalNamespace {
class OVRBoundary;
}
namespace GlobalNamespace {
struct OVRBoundary_BoundaryTestResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBoundary_BoundaryType);
MARK_VAL_T(::GlobalNamespace::OVRBoundary_Node);
MARK_REF_PTR_T(::GlobalNamespace::OVRBoundary);
MARK_VAL_T(::GlobalNamespace::OVRBoundary_BoundaryTestResult);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/Node
struct CORDL_TYPE OVRBoundary_Node {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRBoundary_Node_Unwrapped
  enum struct __OVRBoundary_Node_Unwrapped : int32_t {
    __E_HandLeft = static_cast<int32_t>(0x3),
    __E_HandRight = static_cast<int32_t>(0x4),
    __E_Head = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRBoundary_Node_Unwrapped() const noexcept {
    return static_cast<__OVRBoundary_Node_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoundary_Node();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRBoundary_Node(int32_t value__) noexcept;

  /// @brief Field HandLeft value: I32(3)
  static ::GlobalNamespace::OVRBoundary_Node const HandLeft;

  /// @brief Field HandRight value: I32(4)
  static ::GlobalNamespace::OVRBoundary_Node const HandRight;

  /// @brief Field Head value: I32(9)
  static ::GlobalNamespace::OVRBoundary_Node const Head;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_Node, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoundary_Node, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/BoundaryType
struct CORDL_TYPE OVRBoundary_BoundaryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRBoundary_BoundaryType_Unwrapped
  enum struct __OVRBoundary_BoundaryType_Unwrapped : int32_t {
    __E_OuterBoundary = static_cast<int32_t>(0x1),
    __E_PlayArea = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRBoundary_BoundaryType_Unwrapped() const noexcept {
    return static_cast<__OVRBoundary_BoundaryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoundary_BoundaryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRBoundary_BoundaryType(int32_t value__) noexcept;

  /// @brief Field OuterBoundary value: I32(1)
  static ::GlobalNamespace::OVRBoundary_BoundaryType const OuterBoundary;

  /// @brief Field PlayArea value: I32(256)
  static ::GlobalNamespace::OVRBoundary_BoundaryType const PlayArea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoundary_BoundaryType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/BoundaryTestResult
struct CORDL_TYPE OVRBoundary_BoundaryTestResult {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoundary_BoundaryTestResult();

  // Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr OVRBoundary_BoundaryTestResult(bool IsTriggering, float_t ClosestDistance, ::UnityEngine::Vector3 ClosestPoint, ::UnityEngine::Vector3 ClosestPointNormal) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field IsTriggering, offset: 0x0, size: 0x1, def value: None
  bool IsTriggering;

  /// @brief Field ClosestDistance, offset: 0x4, size: 0x4, def value: None
  float_t ClosestDistance;

  /// @brief Field ClosestPoint, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ClosestPoint;

  /// @brief Field ClosestPointNormal, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ClosestPointNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, IsTriggering) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestPointNormal) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoundary_BoundaryTestResult, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRBoundary
class CORDL_TYPE OVRBoundary : public ::System::Object {
public:
  // Declarations
  using BoundaryTestResult = ::GlobalNamespace::OVRBoundary_BoundaryTestResult;

  using BoundaryType = ::GlobalNamespace::OVRBoundary_BoundaryType;

  using Node = ::GlobalNamespace::OVRBoundary_Node;

  /// @brief Field cachedGeometryList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedGeometryList, put = __cordl_internal_set_cachedGeometryList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* cachedGeometryList;

  /// @brief Field cachedGeometryManagedBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cachedGeometryManagedBuffer, put = setStaticF_cachedGeometryManagedBuffer)) ::ArrayW<float_t, ::Array<float_t>*> cachedGeometryManagedBuffer;

  /// @brief Field cachedGeometryNativeBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cachedGeometryNativeBuffer, put = setStaticF_cachedGeometryNativeBuffer)) ::GlobalNamespace::OVRNativeBuffer* cachedGeometryNativeBuffer;

  /// @brief Field cachedVector3fSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cachedVector3fSize, put = setStaticF_cachedVector3fSize)) int32_t cachedVector3fSize;

  /// @brief Method GetConfigured, addr 0x3f99bc8, size 0x98, virtual false, abstract: false, final false
  inline bool GetConfigured();

  /// @brief Method GetDimensions, addr 0x3fa4624, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDimensions(::GlobalNamespace::OVRBoundary_BoundaryType boundaryType);

  /// @brief Method GetGeometry, addr 0x3f99c60, size 0x3c4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetGeometry(::GlobalNamespace::OVRBoundary_BoundaryType boundaryType);

  /// @brief Method GetVisible, addr 0x3fa46f8, size 0x98, virtual false, abstract: false, final false
  inline bool GetVisible();

  static inline ::GlobalNamespace::OVRBoundary* New_ctor();

  /// @brief Method SetVisible, addr 0x3fa4790, size 0x9c, virtual false, abstract: false, final false
  inline void SetVisible(bool value);

  /// @brief Method TestNode, addr 0x3fa4428, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult TestNode(::GlobalNamespace::OVRBoundary_Node node, ::GlobalNamespace::OVRBoundary_BoundaryType boundaryType);

  /// @brief Method TestPoint, addr 0x3fa44e4, size 0xdc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult TestPoint(::UnityEngine::Vector3 point, ::GlobalNamespace::OVRBoundary_BoundaryType boundaryType);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_cachedGeometryList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_cachedGeometryList();

  constexpr void __cordl_internal_set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x3fa482c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_cachedGeometryManagedBuffer();

  static inline ::GlobalNamespace::OVRNativeBuffer* getStaticF_cachedGeometryNativeBuffer();

  static inline int32_t getStaticF_cachedVector3fSize();

  static inline void setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer* value);

  static inline void setStaticF_cachedVector3fSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBoundary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRBoundary(OVRBoundary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRBoundary(OVRBoundary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7844 };

  /// @brief Field cachedGeometryList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___cachedGeometryList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary, ___cachedGeometryList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoundary, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary_BoundaryType, "", "OVRBoundary/BoundaryType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary_Node, "", "OVRBoundary/Node");
NEED_NO_BOX(::GlobalNamespace::OVRBoundary);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary_BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
