#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructure)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_BuildSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RayTracingAccelerationStructure);
MARK_REF_PTR_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller);
MARK_VAL_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings);
// Dependencies UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BuildSettings
struct CORDL_TYPE RayTracingAccelerationStructure_BuildSettings {
public:
  // Declarations
  __declspec(property(put = set_buildFlags)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags buildFlags;

  __declspec(property(put = set_relativeOrigin)) ::UnityEngine::Vector3 relativeOrigin;

  /// @brief Method .ctor, addr 0x68d749c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_buildFlags, addr 0x68d7488, size 0x8, virtual false, abstract: false, final false
  inline void set_buildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  /// @brief Method set_relativeOrigin, addr 0x68d7490, size 0xc, virtual false, abstract: false, final false
  inline void set_relativeOrigin(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_BuildSettings();

  // Ctor Parameters [CppParam { name: "_buildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None }, CppParam { name:
  // "_relativeOrigin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr RayTracingAccelerationStructure_BuildSettings(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlags_k__BackingField,
                                                          ::UnityEngine::Vector3 _relativeOrigin_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <buildFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlags_k__BackingField;

  /// @brief Field <relativeOrigin>k__BackingField, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 _relativeOrigin_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, _buildFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, _relativeOrigin_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BindingsMarshaller
class CORDL_TYPE RayTracingAccelerationStructure_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x68d74fc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure
class CORDL_TYPE RayTracingAccelerationStructure : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller;

  using BuildSettings = ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Destroy, addr 0x68d7404, size 0x48, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelStruct);

  /// @brief Method Destroy_Injected, addr 0x68d744c, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy_Injected(::System::IntPtr accelStruct);

  /// @brief Method Dispose, addr 0x68d7314, size 0x98, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x68d73ac, size 0x58, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingAccelerationStructure(RayTracingAccelerationStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingAccelerationStructure(RayTracingAccelerationStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10746 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RayTracingAccelerationStructure, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RayTracingAccelerationStructure);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RayTracingAccelerationStructure*, "UnityEngine.Rendering", "RayTracingAccelerationStructure");
NEED_NO_BOX(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BindingsMarshaller");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BuildSettings");
