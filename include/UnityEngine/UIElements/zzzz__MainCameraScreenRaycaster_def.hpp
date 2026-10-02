#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MainCameraScreenRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CameraScreenRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MainCameraScreenRaycaster)
// Forward declare root types
namespace UnityEngine::UIElements {
class MainCameraScreenRaycaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::MainCameraScreenRaycaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MainCameraScreenRaycaster*, "UnityEngine.UIElements", "MainCameraScreenRaycaster");
// Dependencies UnityEngine.Camera, UnityEngine.UIElements.CameraScreenRaycaster
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MainCameraScreenRaycaster
class CORDL_TYPE MainCameraScreenRaycaster : public ::UnityEngine::UIElements::CameraScreenRaycaster {
public:
  // Declarations
  /// @brief Field singleCameraArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_singleCameraArray, put = __cordl_internal_set_singleCameraArray)) ::ArrayW<::UnityW<::UnityEngine::Camera>> singleCameraArray;

  static inline ::UnityEngine::UIElements::MainCameraScreenRaycaster* New_ctor();

  /// @brief Method ResolveCamera, addr 0x7248aa0, size 0x110, virtual false, abstract: false, final false
  inline void ResolveCamera();

  /// @brief Method Update, addr 0x7248bb0, size 0x4, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_singleCameraArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_singleCameraArray();

  constexpr void __cordl_internal_set_singleCameraArray(::ArrayW<::UnityW<::UnityEngine::Camera>> value);

  /// @brief Method .ctor, addr 0x7245a68, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCameraScreenRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainCameraScreenRaycaster", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCameraScreenRaycaster(MainCameraScreenRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCameraScreenRaycaster", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCameraScreenRaycaster(MainCameraScreenRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4632 };

  /// @brief Field singleCameraArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>> ___singleCameraArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MainCameraScreenRaycaster, ___singleCameraArray) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::MainCameraScreenRaycaster) == 0x30, "Size mismatch!");

} // namespace UnityEngine::UIElements
