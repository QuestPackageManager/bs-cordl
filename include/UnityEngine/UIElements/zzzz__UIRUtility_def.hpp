#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRUtility)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRUtility);
// Type: UnityEngine.UIElements::UIRUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7414))
// CS Name: ::UnityEngine.UIElements::UIRUtility*
class CORDL_TYPE UIRUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_DefaultShaderName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DefaultShaderName, put = setStaticF_k_DefaultShaderName))::StringW k_DefaultShaderName;

  /// @brief Field k_DefaultWorldSpaceShaderName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DefaultWorldSpaceShaderName, put = setStaticF_k_DefaultWorldSpaceShaderName))::StringW k_DefaultWorldSpaceShaderName;

  static inline void setStaticF_k_DefaultShaderName(::StringW value);

  static inline ::StringW getStaticF_k_DefaultShaderName();

  static inline void setStaticF_k_DefaultWorldSpaceShaderName(::StringW value);

  static inline ::StringW getStaticF_k_DefaultWorldSpaceShaderName();

  /// @brief Method ShapeWindingIsClockwise addr 0x2d0f148 size 0x8c virtual false final false
  static inline bool ShapeWindingIsClockwise(int32_t maskDepth, int32_t stencilRef);

  /// @brief Method IsRoundRect addr 0x2d0f1d4 size 0x204 virtual false final false
  static inline bool IsRoundRect(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsVectorImageBackground addr 0x2d0f3d8 size 0x90 virtual false final false
  static inline bool IsVectorImageBackground(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsElementSelfHidden addr 0x2d0f468 size 0xc0 virtual false final false
  static inline bool IsElementSelfHidden(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Destroy addr 0x2d0f528 size 0xa8 virtual false final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method GetPrevPow2 addr 0x2d0f5d0 size 0x34 virtual false final false
  static inline int32_t GetPrevPow2(int32_t n);

  /// @brief Method GetNextPow2 addr 0x2d0f604 size 0x1c virtual false final false
  static inline int32_t GetNextPow2(int32_t n);

  /// @brief Method GetNextPow2Exp addr 0x2d0f620 size 0x30 virtual false final false
  static inline int32_t GetNextPow2Exp(int32_t n);

  // Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRUtility(UIRUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRUtility(UIRUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRUtility*, "UnityEngine.UIElements", "UIRUtility");
