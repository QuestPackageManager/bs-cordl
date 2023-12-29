#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FPSManager)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Canvas;
}
namespace GlobalNamespace {
class MainCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FPSManager);
// Type: ::FPSManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5928))
// CS Name: ::FPSManager*
class CORDL_TYPE FPSManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _enableFPSCounter, offset 0x18, size 0x8
  __declspec(property(get = __get__enableFPSCounter, put = __set__enableFPSCounter))::GlobalNamespace::BoolSO* _enableFPSCounter;

  /// @brief Field _fpsCounterCanvasPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__fpsCounterCanvasPrefab, put = __set__fpsCounterCanvasPrefab))::UnityEngine::Canvas* _fpsCounterCanvasPrefab;

  /// @brief Field _mainCamera, offset 0x28, size 0x8
  __declspec(property(get = __get__mainCamera, put = __set__mainCamera))::GlobalNamespace::MainCamera* _mainCamera;

  constexpr ::GlobalNamespace::BoolSO*& __get__enableFPSCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__enableFPSCounter() const;

  constexpr void __set__enableFPSCounter(::GlobalNamespace::BoolSO* value);

  constexpr ::UnityEngine::Canvas*& __get__fpsCounterCanvasPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get__fpsCounterCanvasPrefab() const;

  constexpr void __set__fpsCounterCanvasPrefab(::UnityEngine::Canvas* value);

  constexpr ::GlobalNamespace::MainCamera*& __get__mainCamera();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& __get__mainCamera() const;

  constexpr void __set__mainCamera(::GlobalNamespace::MainCamera* value);

  /// @brief Method Start addr 0x21a8850 size 0xe4 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::FPSManager* New_ctor();

  /// @brief Method .ctor addr 0x21a8934 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FPSManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FPSManager(FPSManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FPSManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FPSManager(FPSManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FPSManager();

public:
  /// @brief Field _enableFPSCounter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____enableFPSCounter;

  /// @brief Field _fpsCounterCanvasPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Canvas* ____fpsCounterCanvasPrefab;

  /// @brief Field _mainCamera, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainCamera* ____mainCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSManager, ____enableFPSCounter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSManager, ____fpsCounterCanvasPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSManager, ____mainCamera) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FPSManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSManager*, "", "FPSManager");
