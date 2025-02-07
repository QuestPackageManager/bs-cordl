#pragma once
// IWYU pragma private; include "UnityEngine/AssemblyFullName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AssemblyVersion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyFullName)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct AssemblyFullName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AssemblyFullName);
// Dependencies UnityEngine.AssemblyVersion
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AssemblyFullName
struct CORDL_TYPE AssemblyFullName {
public:
  // Declarations
  /// @brief Method Equals, addr 0x48acbe0, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x48accb8, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x48acd40, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyFullName();

  // Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "::UnityEngine::AssemblyVersion", modifiers: "", def_value: None },
  // CppParam { name: "PublicKeyToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Culture", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr AssemblyFullName(::StringW Name, ::UnityEngine::AssemblyVersion Version, ::StringW PublicKeyToken, ::StringW Culture) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10876 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::StringW Name;

  /// @brief Field Version, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::AssemblyVersion Version;

  /// @brief Field PublicKeyToken, offset: 0x10, size: 0x8, def value: None
  ::StringW PublicKeyToken;

  /// @brief Field Culture, offset: 0x18, size: 0x8, def value: None
  ::StringW Culture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AssemblyFullName, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyFullName, Version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyFullName, PublicKeyToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyFullName, Culture) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AssemblyFullName, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssemblyFullName, "UnityEngine", "AssemblyFullName");
