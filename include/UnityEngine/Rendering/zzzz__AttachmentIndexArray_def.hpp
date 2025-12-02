#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AttachmentIndexArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttachmentIndexArray)
// Forward declare root types
namespace UnityEngine::Rendering {
struct AttachmentIndexArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AttachmentIndexArray);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AttachmentIndexArray
struct CORDL_TYPE AttachmentIndexArray {
public:
  // Declarations
  /// @brief Field Emtpy, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_Emtpy, put = setStaticF_Emtpy)) ::UnityEngine::Rendering::AttachmentIndexArray Emtpy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method .ctor, addr 0x68e9a54, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t numAttachments);

  static inline ::UnityEngine::Rendering::AttachmentIndexArray getStaticF_Emtpy();

  /// @brief Method get_Item, addr 0x68e9ae4, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x68e9c44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  static inline void setStaticF_Emtpy(::UnityEngine::Rendering::AttachmentIndexArray value);

  /// @brief Method set_Item, addr 0x68e9b94, size 0xb0, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttachmentIndexArray();

  // Ctor Parameters [CppParam { name: "a0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a2", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "a3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a4", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "a5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a6", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a7", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "activeAttachments", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttachmentIndexArray(int32_t a0, int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t activeAttachments) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10761 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field a0, offset: 0x0, size: 0x4, def value: None
  int32_t a0;

  /// @brief Field a1, offset: 0x4, size: 0x4, def value: None
  int32_t a1;

  /// @brief Field a2, offset: 0x8, size: 0x4, def value: None
  int32_t a2;

  /// @brief Field a3, offset: 0xc, size: 0x4, def value: None
  int32_t a3;

  /// @brief Field a4, offset: 0x10, size: 0x4, def value: None
  int32_t a4;

  /// @brief Field a5, offset: 0x14, size: 0x4, def value: None
  int32_t a5;

  /// @brief Field a6, offset: 0x18, size: 0x4, def value: None
  int32_t a6;

  /// @brief Field a7, offset: 0x1c, size: 0x4, def value: None
  int32_t a7;

  /// @brief Field activeAttachments, offset: 0x20, size: 0x4, def value: None
  int32_t activeAttachments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a5) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, a7) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AttachmentIndexArray, activeAttachments) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AttachmentIndexArray, 0x24>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AttachmentIndexArray, "UnityEngine.Rendering", "AttachmentIndexArray");
