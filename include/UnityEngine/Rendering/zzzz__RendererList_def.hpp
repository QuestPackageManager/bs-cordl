#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UIntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererList)
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RendererList;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererList);
// Dependencies System.UIntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RendererList
struct CORDL_TYPE RendererList {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field nullRendererList, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_nullRendererList, put = setStaticF_nullRendererList)) ::UnityEngine::Rendering::RendererList nullRendererList;

  /// @brief Method .ctor, addr 0x695999c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::UIntPtr ctx, uint32_t indx);

  static inline ::UnityEngine::Rendering::RendererList getStaticF_nullRendererList();

  /// @brief Method get_isValid, addr 0x6959960, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isValid();

  static inline void setStaticF_nullRendererList(::UnityEngine::Rendering::RendererList value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererList();

  // Ctor Parameters [CppParam { name: "context", ty: "::System::UIntPtr", modifiers: "", def_value: None }, CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "frame", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "contextID", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr RendererList(::System::UIntPtr context, uint32_t index, uint32_t frame, uint32_t type, uint32_t contextID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10803 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field context, offset: 0x0, size: 0x8, def value: None
  ::System::UIntPtr context;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  uint32_t index;

  /// @brief Field frame, offset: 0xc, size: 0x4, def value: None
  uint32_t frame;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  uint32_t type;

  /// @brief Field contextID, offset: 0x14, size: 0x4, def value: None
  uint32_t contextID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RendererList, context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererList, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererList, frame) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererList, type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererList, contextID) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererList, "UnityEngine.Rendering", "RendererList");
