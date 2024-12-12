#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferGOCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CommandBufferGOCore)
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferGOCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferGOCore);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandBufferGOCore
class CORDL_TYPE CommandBufferGOCore : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cameras, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cameras,
                      put = __cordl_internal_set__cameras)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  /// @brief Field _material, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__material, put = setStaticF__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Method CamerasDict, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  /// @brief Method CommandBufferCameraEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  /// @brief Method CreateCommandBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::CommandBufferGOCore* New_ctor();

  /// @brief Method OnDisable, addr 0x407fe9c, size 0x400, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x407fabc, size 0x3e0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnWillRenderObject, addr 0x4080344, size 0x1b0, virtual true, abstract: false, final false
  inline void OnWillRenderObject();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* const& __cordl_internal_get__cameras() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*& __cordl_internal_get__cameras();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr void __cordl_internal_set__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  /// @brief Method .ctor, addr 0x407f6f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF__material();

  static inline void setStaticF__material(::UnityW<::UnityEngine::Material> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferGOCore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferGOCore(CommandBufferGOCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferGOCore(CommandBufferGOCore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17885 };

  /// @brief Field _cameras, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* ____cameras;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBufferGOCore, ____cameras) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferGOCore, ____mesh) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferGOCore, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferGOCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferGOCore*, "", "CommandBufferGOCore");
