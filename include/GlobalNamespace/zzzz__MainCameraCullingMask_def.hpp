#pragma once
// IWYU pragma private; include "GlobalNamespace/MainCameraCullingMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCameraCullingMask)
namespace GlobalNamespace {
class __MainCameraCullingMask__InitData;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCameraCullingMask;
}
namespace GlobalNamespace {
class __MainCameraCullingMask__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainCameraCullingMask);
MARK_REF_PTR_T(::GlobalNamespace::__MainCameraCullingMask__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainCameraCullingMask::InitData*
class CORDL_TYPE __MainCameraCullingMask__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field showDebris, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_showDebris, put = __cordl_internal_set_showDebris)) bool showDebris;

  static inline ::GlobalNamespace::__MainCameraCullingMask__InitData* New_ctor(bool showDebris);

  constexpr bool const& __cordl_internal_get_showDebris() const;

  constexpr bool& __cordl_internal_get_showDebris();

  constexpr void __cordl_internal_set_showDebris(bool value);

  /// @brief Method .ctor, addr 0x400b49c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool showDebris);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainCameraCullingMask__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MainCameraCullingMask__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainCameraCullingMask__InitData(__MainCameraCullingMask__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainCameraCullingMask__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainCameraCullingMask__InitData(__MainCameraCullingMask__InitData const&) = delete;

  /// @brief Field showDebris, offset: 0x10, size: 0x1, def value: None
  bool ___showDebris;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainCameraCullingMask__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainCameraCullingMask__InitData, ___showDebris) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainCameraCullingMask
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainCameraCullingMask*
class CORDL_TYPE MainCameraCullingMask : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MainCameraCullingMask__InitData;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__MainCameraCullingMask__InitData* _initData;

  static inline ::GlobalNamespace::MainCameraCullingMask* New_ctor();

  /// @brief Method Start, addr 0x400b384, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::GlobalNamespace::__MainCameraCullingMask__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MainCameraCullingMask__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__MainCameraCullingMask__InitData* value);

  /// @brief Method .ctor, addr 0x400b434, size 0x68, virtual false, abstract: false, final false
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

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MainCameraCullingMask__InitData* ____initData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCameraCullingMask, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____initData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCameraCullingMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCameraCullingMask*, "", "MainCameraCullingMask");
NEED_NO_BOX(::GlobalNamespace::__MainCameraCullingMask__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainCameraCullingMask__InitData*, "", "MainCameraCullingMask/InitData");
