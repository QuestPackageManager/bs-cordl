#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryConstants)
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Scene;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Editor;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB;
}
namespace GlobalNamespace {
struct __OVRTelemetryConstants__OVRManager__ConsentOrigins;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager__AnnotationTypes;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager__MarkerId;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB__AnnotationType;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB__MarkerId;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Scene__MarkerId;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRTelemetryConstants__OVRManager__ConsentOrigins;
}
namespace GlobalNamespace {
class OVRTelemetryConstants;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Editor;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager__AnnotationTypes;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__OVRManager__MarkerId;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB__AnnotationType;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__SBB__MarkerId;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Scene;
}
namespace GlobalNamespace {
class __OVRTelemetryConstants__Scene__MarkerId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetryConstants);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__Editor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__OVRManager);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__AnnotationTypes);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__SBB);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__SBB__AnnotationType);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__SBB__MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__Scene);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetryConstants__Scene__MarkerId);
// Type: ::MarkerId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8012))
// CS Name: ::OVRTelemetryConstants::OVRManager::MarkerId*
class CORDL_TYPE __OVRTelemetryConstants__OVRManager__MarkerId : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager__MarkerId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__OVRManager__MarkerId(__OVRTelemetryConstants__OVRManager__MarkerId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager__MarkerId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__OVRManager__MarkerId(__OVRTelemetryConstants__OVRManager__MarkerId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__OVRManager__MarkerId();

public:
  /// @brief Field Init offset 0xffffffff size 0x4
  static constexpr int32_t Init{ static_cast<int32_t>(0x9b83dd9) };

  /// @brief Field Consent offset 0xffffffff size 0x4
  static constexpr int32_t Consent{ static_cast<int32_t>(0x9b80c82) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__OVRManager__MarkerId, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AnnotationTypes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8013))
// CS Name: ::OVRTelemetryConstants::OVRManager::AnnotationTypes*
class CORDL_TYPE __OVRTelemetryConstants__OVRManager__AnnotationTypes : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager__AnnotationTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__OVRManager__AnnotationTypes(__OVRTelemetryConstants__OVRManager__AnnotationTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager__AnnotationTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__OVRManager__AnnotationTypes(__OVRTelemetryConstants__OVRManager__AnnotationTypes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__OVRManager__AnnotationTypes();

public:
  /// @brief Field Origin offset 0xffffffff size 0x8
  static constexpr ::ConstString Origin{ u"Origin" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__OVRManager__AnnotationTypes, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConsentOrigins
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8014))
// CS Name: ::OVRTelemetryConstants::OVRManager::ConsentOrigins
struct CORDL_TYPE __OVRTelemetryConstants__OVRManager__ConsentOrigins {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRTelemetryConstants__OVRManager__ConsentOrigins_Unwrapped
  enum struct ____OVRTelemetryConstants__OVRManager__ConsentOrigins_Unwrapped : int32_t {
    __E_Popup = static_cast<int32_t>(0x0),
    __E_Settings = static_cast<int32_t>(0x1),
    __E_Legacy = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRTelemetryConstants__OVRManager__ConsentOrigins_Unwrapped() const noexcept {
    return static_cast<____OVRTelemetryConstants__OVRManager__ConsentOrigins_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRTelemetryConstants__OVRManager__ConsentOrigins(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__OVRManager__ConsentOrigins();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Popup value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins const Popup;

  /// @brief Field Settings value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins const Settings;

  /// @brief Field Legacy value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins const Legacy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8007)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8015))
// CS Name: ::OVRTelemetryConstants::OVRManager*
class CORDL_TYPE __OVRTelemetryConstants__OVRManager : public ::System::Object {
public:
  // Declarations
  using ConsentOrigins = ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins;

  using AnnotationTypes = ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__AnnotationTypes;

  using MarkerId = ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__MarkerId;

  /// @brief Field InitializeInsightPassthrough, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_InitializeInsightPassthrough, put = setStaticF_InitializeInsightPassthrough))::GlobalNamespace::__OVRTelemetry__MarkerPoint InitializeInsightPassthrough;

  /// @brief Field InitPermissionRequest, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_InitPermissionRequest, put = setStaticF_InitPermissionRequest))::GlobalNamespace::__OVRTelemetry__MarkerPoint InitPermissionRequest;

  static inline void setStaticF_InitializeInsightPassthrough(::GlobalNamespace::__OVRTelemetry__MarkerPoint value);

  static inline ::GlobalNamespace::__OVRTelemetry__MarkerPoint getStaticF_InitializeInsightPassthrough();

  static inline void setStaticF_InitPermissionRequest(::GlobalNamespace::__OVRTelemetry__MarkerPoint value);

  static inline ::GlobalNamespace::__OVRTelemetry__MarkerPoint getStaticF_InitPermissionRequest();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__OVRManager(__OVRTelemetryConstants__OVRManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__OVRManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__OVRManager(__OVRTelemetryConstants__OVRManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__OVRManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__OVRManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MarkerId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8016))
// CS Name: ::OVRTelemetryConstants::Scene::MarkerId*
class CORDL_TYPE __OVRTelemetryConstants__Scene__MarkerId : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Scene__MarkerId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__Scene__MarkerId(__OVRTelemetryConstants__Scene__MarkerId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Scene__MarkerId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__Scene__MarkerId(__OVRTelemetryConstants__Scene__MarkerId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__Scene__MarkerId();

public:
  /// @brief Field SpatialAnchorSetComponentStatus offset 0xffffffff size 0x4
  static constexpr int32_t SpatialAnchorSetComponentStatus{ static_cast<int32_t>(0x9b8087e) };

  /// @brief Field SpatialAnchorSave offset 0xffffffff size 0x4
  static constexpr int32_t SpatialAnchorSave{ static_cast<int32_t>(0x9b80987) };

  /// @brief Field SpatialAnchorQuery offset 0xffffffff size 0x4
  static constexpr int32_t SpatialAnchorQuery{ static_cast<int32_t>(0x9b810ce) };

  /// @brief Field SpatialAnchorErase offset 0xffffffff size 0x4
  static constexpr int32_t SpatialAnchorErase{ static_cast<int32_t>(0x9b81686) };

  /// @brief Field SpatialAnchorCreate offset 0xffffffff size 0x4
  static constexpr int32_t SpatialAnchorCreate{ static_cast<int32_t>(0x9b83ae1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__Scene__MarkerId, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Scene
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8017))
// CS Name: ::OVRTelemetryConstants::Scene*
class CORDL_TYPE __OVRTelemetryConstants__Scene : public ::System::Object {
public:
  // Declarations
  using MarkerId = ::GlobalNamespace::__OVRTelemetryConstants__Scene__MarkerId;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Scene", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__Scene(__OVRTelemetryConstants__Scene&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Scene", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__Scene(__OVRTelemetryConstants__Scene const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__Scene();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__Scene, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Editor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8018))
// CS Name: ::OVRTelemetryConstants::Editor*
class CORDL_TYPE __OVRTelemetryConstants__Editor : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Editor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__Editor(__OVRTelemetryConstants__Editor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__Editor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__Editor(__OVRTelemetryConstants__Editor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__Editor();

public:
  /// @brief Field Start offset 0xffffffff size 0x4
  static constexpr int32_t Start{ static_cast<int32_t>(0x9b83563) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__Editor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MarkerId
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8019))
// CS Name: ::OVRTelemetryConstants::SBB::MarkerId*
class CORDL_TYPE __OVRTelemetryConstants__SBB__MarkerId : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB__MarkerId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__SBB__MarkerId(__OVRTelemetryConstants__SBB__MarkerId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB__MarkerId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__SBB__MarkerId(__OVRTelemetryConstants__SBB__MarkerId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__SBB__MarkerId();

public:
  /// @brief Field OpenWindow offset 0xffffffff size 0x4
  static constexpr int32_t OpenWindow{ static_cast<int32_t>(0x9b82479) };

  /// @brief Field AddBlock offset 0xffffffff size 0x4
  static constexpr int32_t AddBlock{ static_cast<int32_t>(0x9b81ac4) };

  /// @brief Field RunBlock offset 0xffffffff size 0x4
  static constexpr int32_t RunBlock{ static_cast<int32_t>(0x9b82868) };

  /// @brief Field InstallSDK offset 0xffffffff size 0x4
  static constexpr int32_t InstallSDK{ static_cast<int32_t>(0x9b83799) };

  /// @brief Field RemoveSDK offset 0xffffffff size 0x4
  static constexpr int32_t RemoveSDK{ static_cast<int32_t>(0x9b836a8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__SBB__MarkerId, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AnnotationType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8020))
// CS Name: ::OVRTelemetryConstants::SBB::AnnotationType*
class CORDL_TYPE __OVRTelemetryConstants__SBB__AnnotationType : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB__AnnotationType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__SBB__AnnotationType(__OVRTelemetryConstants__SBB__AnnotationType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB__AnnotationType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__SBB__AnnotationType(__OVRTelemetryConstants__SBB__AnnotationType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__SBB__AnnotationType();

public:
  /// @brief Field BlockId offset 0xffffffff size 0x8
  static constexpr ::ConstString BlockId{ u"BlockId" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__SBB__AnnotationType, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SBB
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8021))
// CS Name: ::OVRTelemetryConstants::SBB*
class CORDL_TYPE __OVRTelemetryConstants__SBB : public ::System::Object {
public:
  // Declarations
  using AnnotationType = ::GlobalNamespace::__OVRTelemetryConstants__SBB__AnnotationType;

  using MarkerId = ::GlobalNamespace::__OVRTelemetryConstants__SBB__MarkerId;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetryConstants__SBB(__OVRTelemetryConstants__SBB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetryConstants__SBB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetryConstants__SBB(__OVRTelemetryConstants__SBB const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryConstants__SBB();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryConstants__SBB, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTelemetryConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8022))
// CS Name: ::OVRTelemetryConstants*
class CORDL_TYPE OVRTelemetryConstants : public ::System::Object {
public:
  // Declarations
  using SBB = ::GlobalNamespace::__OVRTelemetryConstants__SBB;

  using Editor = ::GlobalNamespace::__OVRTelemetryConstants__Editor;

  using Scene = ::GlobalNamespace::__OVRTelemetryConstants__Scene;

  using OVRManager = ::GlobalNamespace::__OVRTelemetryConstants__OVRManager;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetryConstants(OVRTelemetryConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetryConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetryConstants(OVRTelemetryConstants const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetryConstants();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins, "", "OVRTelemetryConstants/OVRManager/ConsentOrigins");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetryConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryConstants*, "", "OVRTelemetryConstants");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__Editor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__Editor*, "", "OVRTelemetryConstants/Editor");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__OVRManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__OVRManager*, "", "OVRTelemetryConstants/OVRManager");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__AnnotationTypes);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__AnnotationTypes*, "", "OVRTelemetryConstants/OVRManager/AnnotationTypes");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__OVRManager__MarkerId*, "", "OVRTelemetryConstants/OVRManager/MarkerId");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__SBB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__SBB*, "", "OVRTelemetryConstants/SBB");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__SBB__AnnotationType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__SBB__AnnotationType*, "", "OVRTelemetryConstants/SBB/AnnotationType");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__SBB__MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__SBB__MarkerId*, "", "OVRTelemetryConstants/SBB/MarkerId");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__Scene);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__Scene*, "", "OVRTelemetryConstants/Scene");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetryConstants__Scene__MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryConstants__Scene__MarkerId*, "", "OVRTelemetryConstants/Scene/MarkerId");
