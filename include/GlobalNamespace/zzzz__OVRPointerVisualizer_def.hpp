#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRPointerVisualizer)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPointerVisualizer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRPointerVisualizer);
// Type: ::OVRPointerVisualizer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7948))
// CS Name: ::OVRPointerVisualizer*
class CORDL_TYPE OVRPointerVisualizer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field rayTransform, offset 0x18, size 0x8
  __declspec(property(get = __get_rayTransform, put = __set_rayTransform))::UnityEngine::Transform* rayTransform;

  /// @brief Field linePointer, offset 0x20, size 0x8
  __declspec(property(get = __get_linePointer, put = __set_linePointer))::UnityEngine::LineRenderer* linePointer;

  /// @brief Field rayDrawDistance, offset 0x28, size 0x4
  __declspec(property(get = __get_rayDrawDistance, put = __set_rayDrawDistance)) float_t rayDrawDistance;

  constexpr ::UnityEngine::Transform*& __get_rayTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rayTransform() const;

  constexpr void __set_rayTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::LineRenderer*& __get_linePointer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> const& __get_linePointer() const;

  constexpr void __set_linePointer(::UnityEngine::LineRenderer* value);

  constexpr float_t& __get_rayDrawDistance();

  constexpr float_t const& __get_rayDrawDistance() const;

  constexpr void __set_rayDrawDistance(float_t value);

  /// @brief Method Update addr 0x277ed04 size 0x1a0 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRPointerVisualizer* New_ctor();

  /// @brief Method .ctor addr 0x277eea4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPointerVisualizer(OVRPointerVisualizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPointerVisualizer(OVRPointerVisualizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPointerVisualizer();

public:
  /// @brief Field rayTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rayTransform;

  /// @brief Field linePointer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::LineRenderer* ___linePointer;

  /// @brief Field rayDrawDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___rayDrawDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPointerVisualizer, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRPointerVisualizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPointerVisualizer*, "", "OVRPointerVisualizer");
