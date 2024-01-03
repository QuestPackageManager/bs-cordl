#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRMeshSubsystem)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR {
struct __XRMeshSubsystem__MeshTransformList;
}
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystem;
}
namespace UnityEngine::XR {
struct __XRMeshSubsystem__MeshTransformList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRMeshSubsystem);
MARK_VAL_T(::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList);
// Type: ::MeshTransformList
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15638))
// CS Name: ::XRMeshSubsystem::MeshTransformList
struct CORDL_TYPE __XRMeshSubsystem__MeshTransformList {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2eb3e34, size 0x3c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2eb3e70, size 0x3c, virtual false, abstract: false, final false
  static inline void Dispose(void* self);

  // Ctor Parameters [CppParam { name: "m_Self", ty: "void*", modifiers: "", def_value: None }]
  constexpr __XRMeshSubsystem__MeshTransformList(void* m_Self) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRMeshSubsystem__MeshTransformList();

  /// @brief Field m_Self, offset: 0x0, size: 0x8, def value: None
  void* m_Self;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList, m_Self) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
// Type: UnityEngine.XR::XRMeshSubsystem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15965)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15965), inst: 3918 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15639))
// CS Name: ::UnityEngine.XR::XRMeshSubsystem*
class CORDL_TYPE XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
  // Declarations
  using MeshTransformList = ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList;

  /// @brief Method InvokeMeshReadyDelegate, addr 0x2eb3d94, size 0x58, virtual false, abstract: false, final false
  inline void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);

  static inline ::UnityEngine::XR::XRMeshSubsystem* New_ctor();

  /// @brief Method .ctor, addr 0x2eb3dec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRMeshSubsystem(XRMeshSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRMeshSubsystem(XRMeshSubsystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRMeshSubsystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRMeshSubsystem, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList, "UnityEngine.XR", "XRMeshSubsystem/MeshTransformList");
