#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CommandBufferGOCore)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
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
// Type: ::CommandBufferGOCore
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15278))
// CS Name: ::CommandBufferGOCore*
class CORDL_TYPE CommandBufferGOCore : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cameras, offset 0x18, size 0x8
  __declspec(property(get = __get__cameras, put = __set__cameras))::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  /// @brief Field _mesh, offset 0x20, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _material, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__material, put = setStaticF__material))::UnityEngine::Material* _material;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>*& __get__cameras();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>*> const& __get__cameras() const;

  constexpr void __set__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  static inline void setStaticF__material(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF__material();

  /// @brief Method OnEnable addr 0x280691c size 0x414 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2806d30 size 0x404 virtual false final false
  inline void OnDisable();

  /// @brief Method OnWillRenderObject addr 0x28071dc size 0x1b4 virtual true final false
  inline void OnWillRenderObject();

  /// @brief Method CommandBufferCameraEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  /// @brief Method CreateCommandBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  /// @brief Method CamerasDict addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  static inline ::GlobalNamespace::CommandBufferGOCore* New_ctor();

  /// @brief Method .ctor addr 0x2806558 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferGOCore(CommandBufferGOCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferGOCore(CommandBufferGOCore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferGOCore();

public:
  /// @brief Field _cameras, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* ____cameras;

  /// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferGOCore, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferGOCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferGOCore*, "", "CommandBufferGOCore");
