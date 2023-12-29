#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LineRenderer);
// Type: UnityEngine::LineRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9993))
// CS Name: ::UnityEngine::LineRenderer*
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(put = set_startWidth)) float_t startWidth;

  __declspec(property(put = set_endWidth)) float_t endWidth;

  __declspec(property(put = set_useWorldSpace)) bool useWorldSpace;

  __declspec(property(put = set_startColor))::UnityEngine::Color startColor;

  __declspec(property(put = set_endColor))::UnityEngine::Color endColor;

  __declspec(property(put = set_positionCount)) int32_t positionCount;

  /// @brief Method set_startWidth addr 0x2b3e8e0 size 0x4c virtual false final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_endWidth addr 0x2b3e92c size 0x4c virtual false final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_useWorldSpace addr 0x2b3e978 size 0x44 virtual false final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_startColor addr 0x2b3e9bc size 0x54 virtual false final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_endColor addr 0x2b3ea54 size 0x54 virtual false final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_positionCount addr 0x2b3eaec size 0x44 virtual false final false
  inline void set_positionCount(int32_t value);

  /// @brief Method SetPosition addr 0x2b3eb30 size 0x5c virtual false final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPositions addr 0x2b3ebe0 size 0x44 virtual false final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method set_startColor_Injected addr 0x2b3ea10 size 0x44 virtual false final false
  inline void set_startColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_endColor_Injected addr 0x2b3eaa8 size 0x44 virtual false final false
  inline void set_endColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method SetPosition_Injected addr 0x2b3eb8c size 0x54 virtual false final false
  inline void SetPosition_Injected(int32_t index, ByRef<::UnityEngine::Vector3> position);

  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineRenderer(LineRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineRenderer(LineRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineRenderer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
