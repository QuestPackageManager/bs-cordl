#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraDepthTextureMode)
// Forward declare root types
namespace GlobalNamespace {
class CameraDepthTextureMode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CameraDepthTextureMode);
// Type: ::CameraDepthTextureMode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10108)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14354))
// CS Name: ::CameraDepthTextureMode*
class CORDL_TYPE CameraDepthTextureMode : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _depthTextureMode, offset 0x18, size 0x4
  __declspec(property(get = __get__depthTextureMode, put = __set__depthTextureMode))::UnityEngine::DepthTextureMode _depthTextureMode;

  constexpr ::UnityEngine::DepthTextureMode& __get__depthTextureMode();

  constexpr ::UnityEngine::DepthTextureMode const& __get__depthTextureMode() const;

  constexpr void __set__depthTextureMode(::UnityEngine::DepthTextureMode value);

  /// @brief Method Awake, addr 0x20f1204, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::CameraDepthTextureMode* New_ctor();

  /// @brief Method .ctor, addr 0x20f1260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraDepthTextureMode(CameraDepthTextureMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraDepthTextureMode(CameraDepthTextureMode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraDepthTextureMode();

public:
  /// @brief Field _depthTextureMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::DepthTextureMode ____depthTextureMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CameraDepthTextureMode, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDepthTextureMode, ____depthTextureMode) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CameraDepthTextureMode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CameraDepthTextureMode*, "", "CameraDepthTextureMode");
