#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCameraCullingMask)
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class __MainCameraCullingMask__InitData;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15316))
// CS Name: ::MainCameraCullingMask::InitData*
class CORDL_TYPE __MainCameraCullingMask__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field showDebris, offset 0x10, size 0x1
  __declspec(property(get = __get_showDebris, put = __set_showDebris)) bool showDebris;

  constexpr bool& __get_showDebris();

  constexpr bool const& __get_showDebris() const;

  constexpr void __set_showDebris(bool value);

  static inline ::GlobalNamespace::__MainCameraCullingMask__InitData* New_ctor(bool showDebris);

  /// @brief Method .ctor addr 0x268d0f4 size 0x28 virtual false final false
  inline void _ctor(bool showDebris);

  // Ctor Parameters [CppParam { name: "", ty: "__MainCameraCullingMask__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainCameraCullingMask__InitData(__MainCameraCullingMask__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainCameraCullingMask__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainCameraCullingMask__InitData(__MainCameraCullingMask__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainCameraCullingMask__InitData();

public:
  /// @brief Field showDebris, offset: 0x10, size: 0x1, def value: None
  bool ___showDebris;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainCameraCullingMask__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainCameraCullingMask__InitData, ___showDebris) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainCameraCullingMask
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15317))
// CS Name: ::MainCameraCullingMask*
class CORDL_TYPE MainCameraCullingMask : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MainCameraCullingMask__InitData;

  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MainCameraCullingMask__InitData* _initData;

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::__MainCameraCullingMask__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MainCameraCullingMask__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MainCameraCullingMask__InitData* value);

  /// @brief Method Start addr 0x268cfd4 size 0xb0 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::MainCameraCullingMask* New_ctor();

  /// @brief Method .ctor addr 0x268d084 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCameraCullingMask(MainCameraCullingMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCameraCullingMask(MainCameraCullingMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCameraCullingMask();

public:
  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MainCameraCullingMask__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCameraCullingMask, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCameraCullingMask, ____initData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCameraCullingMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCameraCullingMask*, "", "MainCameraCullingMask");
NEED_NO_BOX(::GlobalNamespace::__MainCameraCullingMask__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainCameraCullingMask__InitData*, "", "MainCameraCullingMask/InitData");
