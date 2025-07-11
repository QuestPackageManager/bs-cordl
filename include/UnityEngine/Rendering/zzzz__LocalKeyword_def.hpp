#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeyword)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeyword);
// Dependencies System.IEquatable`1<T>, UnityEngine.Rendering.LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LocalKeyword
struct CORDL_TYPE LocalKeyword {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*();

  /// @brief Method Equals, addr 0x48cb010, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x48cb09c, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::LocalKeyword rhs);

  /// @brief Method GetHashCode, addr 0x48cb0ec, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x48cb008, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>* i___System__IEquatable_1___UnityEngine__Rendering__LocalKeyword_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalKeyword();

  // Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11260 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_SpaceInfo, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo;

  /// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  uint32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_SpaceInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LocalKeyword, m_Index) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LocalKeyword, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");
