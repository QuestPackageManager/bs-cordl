#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRIKLODController)
namespace RootMotion::FinalIK {
class VRIK;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIKLODController;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::VRIKLODController);
// Type: RootMotion.FinalIK::VRIKLODController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12673))
// CS Name: ::RootMotion.FinalIK::VRIKLODController*
class CORDL_TYPE VRIKLODController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field LODRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get_LODRenderer, put = __set_LODRenderer))::UnityEngine::Renderer* LODRenderer;

  /// @brief Field LODDistance, offset 0x20, size 0x4
  __declspec(property(get = __get_LODDistance, put = __set_LODDistance)) float_t LODDistance;

  /// @brief Field allowCulled, offset 0x24, size 0x1
  __declspec(property(get = __get_allowCulled, put = __set_allowCulled)) bool allowCulled;

  /// @brief Field ik, offset 0x28, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::VRIK* ik;

  constexpr ::UnityEngine::Renderer*& __get_LODRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get_LODRenderer() const;

  constexpr void __set_LODRenderer(::UnityEngine::Renderer* value);

  constexpr float_t& __get_LODDistance();

  constexpr float_t const& __get_LODDistance() const;

  constexpr void __set_LODDistance(float_t value);

  constexpr bool& __get_allowCulled();

  constexpr bool const& __get_allowCulled() const;

  constexpr void __set_allowCulled(bool value);

  constexpr ::RootMotion::FinalIK::VRIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::VRIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::VRIK* value);

  /// @brief Method Start, addr 0x129d5fc, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x129d64c, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method GetLODLevel, addr 0x129d674, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetLODLevel();

  static inline ::RootMotion::FinalIK::VRIKLODController* New_ctor();

  /// @brief Method .ctor, addr 0x129d794, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRIKLODController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRIKLODController(VRIKLODController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRIKLODController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRIKLODController(VRIKLODController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRIKLODController();

public:
  /// @brief Field LODRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Renderer* ___LODRenderer;

  /// @brief Field LODDistance, offset: 0x20, size: 0x4, def value: None
  float_t ___LODDistance;

  /// @brief Field allowCulled, offset: 0x24, size: 0x1, def value: None
  bool ___allowCulled;

  /// @brief Field ik, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::VRIK* ___ik;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::VRIKLODController, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKLODController, ___LODRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKLODController, ___LODDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKLODController, ___allowCulled) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKLODController, ___ik) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::VRIKLODController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKLODController*, "RootMotion.FinalIK", "VRIKLODController");
