#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicString)
// Forward declare root types
namespace UnityEngine::Rendering {
class DynamicString;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DynamicString);
// Dependencies UnityEngine.Rendering.DynamicArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicString
class CORDL_TYPE DynamicString : public ::UnityEngine::Rendering::DynamicArray_1<char16_t> {
public:
  // Declarations
  /// @brief Method Append, addr 0x65a1f60, size 0x10c, virtual false, abstract: false, final false
  inline void Append(::StringW s);

  /// @brief Method Append, addr 0x65a206c, size 0x5c, virtual false, abstract: false, final false
  inline void Append(::UnityEngine::Rendering::DynamicString* s);

  static inline ::UnityEngine::Rendering::DynamicString* New_ctor();

  static inline ::UnityEngine::Rendering::DynamicString* New_ctor(int32_t capacity);

  static inline ::UnityEngine::Rendering::DynamicString* New_ctor(::StringW s);

  /// @brief Method ToString, addr 0x65a20c8, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x65a1e04, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x65a1f00, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x65a1e50, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicString(DynamicString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicString(DynamicString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicString, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DynamicString);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicString*, "UnityEngine.Rendering", "DynamicString");
