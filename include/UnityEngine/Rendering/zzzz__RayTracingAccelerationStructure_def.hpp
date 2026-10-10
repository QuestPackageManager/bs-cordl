#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructure)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructureBuildFlags;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_BuildSettings;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_ManagementMode;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_RayTracingModeMask;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_Settings;
}
namespace UnityEngine::Rendering {
struct RayTracingMeshInstanceConfig;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_ManagementMode;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_RayTracingModeMask;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_BuildSettings;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_Settings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode);
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask);
MARK_REF_T(::UnityEngine::Rendering::RayTracingAccelerationStructure*);
MARK_REF_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*);
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings);
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode, "UnityEngine.Rendering", "RayTracingAccelerationStructure/ManagementMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask, "UnityEngine.Rendering", "RayTracingAccelerationStructure/RayTracingModeMask");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure*, "UnityEngine.Rendering", "RayTracingAccelerationStructure");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BuildSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, "UnityEngine.Rendering", "RayTracingAccelerationStructure/Settings");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/RayTracingModeMask
struct CORDL_TYPE RayTracingAccelerationStructure_RayTracingModeMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingAccelerationStructure_RayTracingModeMask_Unwrapped
  enum struct __RayTracingAccelerationStructure_RayTracingModeMask_Unwrapped : int32_t {
    __E_Nothing = static_cast<int32_t>(0x0),
    __E_Static = static_cast<int32_t>(0x2),
    __E_DynamicTransform = static_cast<int32_t>(0x4),
    __E_DynamicGeometry = static_cast<int32_t>(0x8),
    __E_DynamicGeometryManualUpdate = static_cast<int32_t>(0x10),
    __E_Everything = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingAccelerationStructure_RayTracingModeMask_Unwrapped() const noexcept {
    return static_cast<__RayTracingAccelerationStructure_RayTracingModeMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_RayTracingModeMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingAccelerationStructure_RayTracingModeMask(int32_t value__) noexcept;

  /// @brief Field DynamicGeometry value: I32(8)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const DynamicGeometry;

  /// @brief Field DynamicGeometryManualUpdate value: I32(16)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const DynamicGeometryManualUpdate;

  /// @brief Field DynamicTransform value: I32(4)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const DynamicTransform;

  /// @brief Field Everything value: I32(30)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const Everything;

  /// @brief Field Nothing value: I32(0)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const Nothing;

  /// @brief Field Static value: I32(2)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/ManagementMode
struct CORDL_TYPE RayTracingAccelerationStructure_ManagementMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayTracingAccelerationStructure_ManagementMode_Unwrapped
  enum struct __RayTracingAccelerationStructure_ManagementMode_Unwrapped : int32_t {
    __E_Manual = static_cast<int32_t>(0x0),
    __E_Automatic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayTracingAccelerationStructure_ManagementMode_Unwrapped() const noexcept {
    return static_cast<__RayTracingAccelerationStructure_ManagementMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_ManagementMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingAccelerationStructure_ManagementMode(int32_t value__) noexcept;

  /// @brief Field Automatic value: I32(1)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode const Automatic;

  /// @brief Field Manual value: I32(0)
  static ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BuildSettings
struct CORDL_TYPE RayTracingAccelerationStructure_BuildSettings {
public:
  // Declarations
  __declspec(property(put = set_buildFlags)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags buildFlags;

  __declspec(property(put = set_relativeOrigin)) ::UnityEngine::Vector3 relativeOrigin;

  /// @brief Method .ctor, addr 0x6f677f0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method set_buildFlags, addr 0x6f677dc, size 0x8, virtual false, abstract: false, final false
  inline void set_buildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  /// [CompilerGenerated]
  /// @brief Method set_relativeOrigin, addr 0x6f677e4, size 0xc, virtual false, abstract: false, final false
  inline void set_relativeOrigin(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_BuildSettings();

  // Ctor Parameters [CppParam { name: "_buildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "_relativeOrigin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingAccelerationStructure_BuildSettings(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlags_k__BackingField,
                                                          ::UnityEngine::Vector3 _relativeOrigin_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10374 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <buildFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlags_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <relativeOrigin>k__BackingField, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 _relativeOrigin_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, _buildFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, _relativeOrigin_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RayTracingAccelerationStructure::ManagementMode, UnityEngine.Rendering.RayTracingAccelerationStructure::RayTracingModeMask,
// UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/Settings
struct CORDL_TYPE RayTracingAccelerationStructure_Settings {
public:
  // Declarations
  __declspec(property(put = set_buildFlagsDynamicGeometries)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags buildFlagsDynamicGeometries;

  __declspec(property(put = set_buildFlagsStaticGeometries)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags buildFlagsStaticGeometries;

  __declspec(property(put = set_enableCompaction)) bool enableCompaction;

  /// @brief Method .ctor, addr 0x6f67868, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method set_buildFlagsDynamicGeometries, addr 0x6f67858, size 0x8, virtual false, abstract: false, final false
  inline void set_buildFlagsDynamicGeometries(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  /// [CompilerGenerated]
  /// @brief Method set_buildFlagsStaticGeometries, addr 0x6f67850, size 0x8, virtual false, abstract: false, final false
  inline void set_buildFlagsStaticGeometries(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  /// [CompilerGenerated]
  /// @brief Method set_enableCompaction, addr 0x6f67860, size 0x8, virtual false, abstract: false, final false
  inline void set_enableCompaction(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_Settings();

  // Ctor Parameters [CppParam { name: "managementMode", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "rayTracingModeMask", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "layerMask", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buildFlagsStaticGeometries_k__BackingField", ty:
  // "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buildFlagsDynamicGeometries_k__BackingField", ty:
  // "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "_enableCompaction_k__BackingField", ty: "bool",
  // modifiers: "", def_value: None, comment: None }]
  constexpr RayTracingAccelerationStructure_Settings(::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode managementMode,
                                                     ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask, int32_t layerMask,
                                                     ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsStaticGeometries_k__BackingField,
                                                     ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsDynamicGeometries_k__BackingField,
                                                     bool _enableCompaction_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field managementMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode managementMode;

  /// @brief Field rayTracingModeMask, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask;

  /// @brief Field layerMask, offset: 0x8, size: 0x4, def value: None
  int32_t layerMask;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <buildFlagsStaticGeometries>k__BackingField, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsStaticGeometries_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <buildFlagsDynamicGeometries>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsDynamicGeometries_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <enableCompaction>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool _enableCompaction_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, managementMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, rayTracingModeMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, layerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, _buildFlagsStaticGeometries_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, _buildFlagsDynamicGeometries_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings, _enableCompaction_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BindingsMarshaller
class CORDL_TYPE RayTracingAccelerationStructure_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6f67884, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [MovedFrom("UnityEngine.Experimental.Rendering")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure
class CORDL_TYPE RayTracingAccelerationStructure : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller;

  using BuildSettings = ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings;

  using ManagementMode = ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode;

  using RayTracingModeMask = ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask;

  using Settings = ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddInstance, addr 0x6f6702c, size 0x2b8, virtual false, abstract: false, final false
  inline int32_t AddInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig const> config, ::UnityEngine::Matrix4x4 matrix,
                             /* [DefaultValue("null")] */ ::System::Nullable_1<::UnityEngine::Matrix4x4> prevMatrix, uint32_t id);

  /// [FreeFunction("RayTracingAccelerationStructure_Bindings::AddMeshInstance", HasExplicitThis = true)]
  /// @brief Method AddMeshInstance, addr 0x6f672e4, size 0x80, virtual false, abstract: false, final false
  inline int32_t AddMeshInstance(::UnityEngine::Rendering::RayTracingMeshInstanceConfig config, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Matrix4x4* prevMatrix, uint32_t id);

  /// @brief Method AddMeshInstance_Injected, addr 0x6f67770, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t AddMeshInstance_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig const> config,
                                                 ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::UnityEngine::Matrix4x4* prevMatrix, uint32_t id);

  /// [FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::ClearInstances", HasExplicitThis = true)]
  /// @brief Method ClearInstances, addr 0x6f6752c, size 0x50, virtual false, abstract: false, final false
  inline void ClearInstances();

  /// @brief Method ClearInstances_Injected, addr 0x6f6757c, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearInstances_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RayTracingAccelerationStructure_Bindings::Create")]
  /// @brief Method Create, addr 0x6f66ff0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings desc);

  /// @brief Method Create_Injected, addr 0x6f675b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings const> desc);

  /// [FreeFunction("RayTracingAccelerationStructure_Bindings::Destroy")]
  /// @brief Method Destroy, addr 0x6f66f4c, size 0x48, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelStruct);

  /// @brief Method Destroy_Injected, addr 0x6f675f4, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy_Injected(::System::IntPtr accelStruct);

  /// @brief Method Dispose, addr 0x6f66eb4, size 0x98, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6f66e5c, size 0x58, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x6f66e54, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Rendering::RayTracingAccelerationStructure* New_ctor(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings settings);

  /// @brief Method RemoveInstance, addr 0x6f67364, size 0x4, virtual false, abstract: false, final false
  inline void RemoveInstance(int32_t handle);

  /// [FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::RemoveInstance", HasExplicitThis = true)]
  /// @brief Method RemoveInstance_InstanceID, addr 0x6f67368, size 0x58, virtual false, abstract: false, final false
  inline void RemoveInstance_InstanceID(int32_t instanceID);

  /// @brief Method RemoveInstance_InstanceID_Injected, addr 0x6f67630, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveInstance_InstanceID_Injected(::System::IntPtr _unity_self, int32_t instanceID);

  /// @brief Method UpdateInstanceID, addr 0x6f67454, size 0x4, virtual false, abstract: false, final false
  inline void UpdateInstanceID(int32_t handle, uint32_t instanceID);

  /// [FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceID", HasExplicitThis = true)]
  /// @brief Method UpdateInstanceID_Handle, addr 0x6f67458, size 0x68, virtual false, abstract: false, final false
  inline void UpdateInstanceID_Handle(int32_t handle, uint32_t id);

  /// @brief Method UpdateInstanceID_Handle_Injected, addr 0x6f6771c, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateInstanceID_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, uint32_t id);

  /// @brief Method UpdateInstanceMask, addr 0x6f674c0, size 0x4, virtual false, abstract: false, final false
  inline void UpdateInstanceMask(int32_t handle, uint32_t mask);

  /// [FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceMask", HasExplicitThis = true)]
  /// @brief Method UpdateInstanceMask_Handle, addr 0x6f674c4, size 0x68, virtual false, abstract: false, final false
  inline void UpdateInstanceMask_Handle(int32_t handle, uint32_t mask);

  /// @brief Method UpdateInstanceMask_Handle_Injected, addr 0x6f676c8, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateInstanceMask_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, uint32_t mask);

  /// @brief Method UpdateInstanceTransform, addr 0x6f673c0, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateInstanceTransform(int32_t handle, ::UnityEngine::Matrix4x4 matrix);

  /// [FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceTransform", HasExplicitThis = true)]
  /// @brief Method UpdateInstanceTransform_Handle, addr 0x6f673ec, size 0x68, virtual false, abstract: false, final false
  inline void UpdateInstanceTransform_Handle(int32_t handle, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method UpdateInstanceTransform_Handle_Injected, addr 0x6f67674, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateInstanceTransform_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6f66f94, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings settings);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingAccelerationStructure(RayTracingAccelerationStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingAccelerationStructure(RayTracingAccelerationStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10377 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
