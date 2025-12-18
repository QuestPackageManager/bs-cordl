#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XRMeshSubsystem)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
namespace UnityEngine::XR {
struct XRMeshSubsystem_MeshTransformList;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystem;
}
namespace UnityEngine::XR {
struct XRMeshSubsystem_MeshTransformList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRMeshSubsystem);
MARK_VAL_T(::UnityEngine::XR::XRMeshSubsystem_MeshTransformList);
// Dependencies System.IntPtr
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRMeshSubsystem/MeshTransformList
struct CORDL_TYPE XRMeshSubsystem_MeshTransformList {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6c6b498, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6c6b4d4, size 0x3c, virtual false, abstract: false, final false
  static inline void Dispose(::System::IntPtr self);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRMeshSubsystem_MeshTransformList();

  // Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr XRMeshSubsystem_MeshTransformList(::System::IntPtr m_Self) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21967 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Self, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRMeshSubsystem_MeshTransformList, m_Self) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRMeshSubsystem_MeshTransformList, 0x8>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies UnityEngine.IntegratedSubsystem`1<TSubsystemDescriptor>
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRMeshSubsystem
class CORDL_TYPE XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
  // Declarations
  using MeshTransformList = ::UnityEngine::XR::XRMeshSubsystem_MeshTransformList;

  /// @brief Method InvokeMeshReadyDelegate, addr 0x6c6b420, size 0x3c, virtual false, abstract: false, final false
  inline void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);

  static inline ::UnityEngine::XR::XRMeshSubsystem* New_ctor();

  /// @brief Method .ctor, addr 0x6c6b45c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRMeshSubsystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRMeshSubsystem(XRMeshSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRMeshSubsystem(XRMeshSubsystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21968 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRMeshSubsystem, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystem_MeshTransformList, "UnityEngine.XR", "XRMeshSubsystem/MeshTransformList");
