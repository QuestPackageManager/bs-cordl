#pragma once
// IWYU pragma private; include "GlobalNamespace/MainCameraCullingMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCameraCullingMask)
namespace GlobalNamespace {
class MainCameraCullingMask_InitData;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCameraCullingMask;
}
namespace GlobalNamespace {
class MainCameraCullingMask_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainCameraCullingMask);
MARK_REF_PTR_T(::GlobalNamespace::MainCameraCullingMask_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainCameraCullingMask/InitData
class CORDL_TYPE MainCameraCullingMask_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field showDebris, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_showDebris, put = __cordl_internal_set_showDebris)) bool showDebris;

  static inline ::GlobalNamespace::MainCameraCullingMask_InitData* New_ctor(bool showDebris);

  constexpr bool const& __cordl_internal_get_showDebris() const;

  constexpr bool& __cordl_internal_get_showDebris();

  constexpr void __cordl_internal_set_showDebris(bool value);

  /// @brief Method .ctor, addr 0x5d2cd28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool showDebris);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCameraCullingMask_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCameraCullingMask_InitData(MainCameraCullingMask_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCameraCullingMask_InitData(MainCameraCullingMask_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20756 };

  /// @brief Field showDebris, offset: 0x10, size: 0x1, def value: None
  bool ___showDebris;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask_InitData, ___showDebris) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCameraCullingMask_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainCameraCullingMask
class CORDL_TYPE MainCameraCullingMask : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::MainCameraCullingMask_InitData;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MainCameraCullingMask_InitData* _initData;

  static inline ::GlobalNamespace::MainCameraCullingMask* New_ctor();

  /// @brief Method Start, addr 0x5d2cbdc, size 0xec, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::GlobalNamespace::MainCameraCullingMask_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MainCameraCullingMask_InitData*& __cordl_internal_get__initData();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MainCameraCullingMask_InitData* value);

  /// @brief Method .ctor, addr 0x5d2ccc8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCameraCullingMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCameraCullingMask(MainCameraCullingMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCameraCullingMask(MainCameraCullingMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20757 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainCameraCullingMask_InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____initData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCameraCullingMask, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCameraCullingMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCameraCullingMask*, "", "MainCameraCullingMask");
NEED_NO_BOX(::GlobalNamespace::MainCameraCullingMask_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCameraCullingMask_InitData*, "", "MainCameraCullingMask/InitData");
