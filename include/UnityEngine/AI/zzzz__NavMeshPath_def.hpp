#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshPath)
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshPath;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AI::NavMeshPath);
// Type: UnityEngine.AI::NavMeshPath
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AI {
// Is value type: false
// CS Name: ::UnityEngine.AI::NavMeshPath*
class CORDL_TYPE NavMeshPath : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners;

  /// @brief Field m_Corners, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Corners, put = __cordl_internal_set_m_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_status))::UnityEngine::AI::NavMeshPathStatus status;

  /// @brief Method CalculateCorners, addr 0x2dc0c84, size 0x4c, virtual false, abstract: false, final false
  inline void CalculateCorners();

  /// @brief Method CalculateCornersInternal, addr 0x2dc0bc8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> CalculateCornersInternal();

  /// @brief Method ClearCorners, addr 0x2dc0c40, size 0x44, virtual false, abstract: false, final false
  inline void ClearCorners();

  /// @brief Method ClearCornersInternal, addr 0x2dc0c04, size 0x3c, virtual false, abstract: false, final false
  inline void ClearCornersInternal();

  /// @brief Method DestroyNavMeshPath, addr 0x2dc0b8c, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyNavMeshPath(void* ptr);

  /// @brief Method Finalize, addr 0x2dc0a98, size 0xf4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InitializeNavMeshPath, addr 0x2dc0a70, size 0x28, virtual false, abstract: false, final false
  static inline void* InitializeNavMeshPath();

  static inline ::UnityEngine::AI::NavMeshPath* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Corners();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x2dc0a28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_corners, addr 0x2dc0cd0, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_corners();

  /// @brief Method get_status, addr 0x2dc0d1c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AI::NavMeshPathStatus get_status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavMeshPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavMeshPath(NavMeshPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavMeshPath(NavMeshPath const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  /// @brief Field m_Corners, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMeshPath, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshPath, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshPath, ___m_Corners) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::AI
NEED_NO_BOX(::UnityEngine::AI::NavMeshPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
