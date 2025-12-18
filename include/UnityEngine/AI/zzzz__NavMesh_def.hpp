#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NavMesh)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AI {
class NavMesh_OnNavMeshPreUpdate;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMesh;
}
namespace UnityEngine::AI {
class NavMesh_OnNavMeshPreUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AI::NavMesh);
MARK_REF_PTR_T(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
class CORDL_TYPE NavMesh_OnNavMeshPreUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x684e650, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x684e5e8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavMesh_OnNavMeshPreUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavMesh_OnNavMeshPreUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavMesh_OnNavMeshPreUpdate(NavMesh_OnNavMeshPreUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavMesh_OnNavMeshPreUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavMesh_OnNavMeshPreUpdate(NavMesh_OnNavMeshPreUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23046 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::AI
// Dependencies System.Object
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMesh
class CORDL_TYPE NavMesh : public ::System::Object {
public:
  // Declarations
  using OnNavMeshPreUpdate = ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate;

  /// @brief Field onPreUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onPreUpdate, put = setStaticF_onPreUpdate)) ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* onPreUpdate;

  /// @brief Method ClearPreUpdateListeners, addr 0x684e59c, size 0x4c, virtual false, abstract: false, final false
  static inline void ClearPreUpdateListeners();

  static inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* getStaticF_onPreUpdate();

  static inline void setStaticF_onPreUpdate(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavMesh(NavMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavMesh(NavMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMesh, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AI
NEED_NO_BOX(::UnityEngine::AI::NavMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMesh*, "UnityEngine.AI", "NavMesh");
NEED_NO_BOX(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "UnityEngine.AI", "NavMesh/OnNavMeshPreUpdate");
