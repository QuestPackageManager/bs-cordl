#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutHandle)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutHandle);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutHandle
struct CORDL_TYPE LayoutHandle {
public:
  // Declarations
  /// @brief Method Equals, addr 0x6ac97e8, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac97c0, size 0x28, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::Layout::LayoutHandle other);

  /// @brief Method GetHashCode, addr 0x6ac9874, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6ac97b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, int32_t version);

  /// @brief Method get_Undefined, addr 0x6ac9734, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutHandle get_Undefined();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutHandle();

  // Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutHandle(int32_t Index, int32_t Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Index, offset: 0x0, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field Version, offset: 0x4, size: 0x4, def value: None
  int32_t Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutHandle, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutHandle, Version) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutHandle, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutHandle, "UnityEngine.UIElements.Layout", "LayoutHandle");
