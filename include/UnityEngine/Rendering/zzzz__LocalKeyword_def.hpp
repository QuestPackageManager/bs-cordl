#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeyword)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeyword);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");
// Dependencies UnityEngine.Rendering.LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LocalKeyword
struct CORDL_TYPE LocalKeyword {
public:
  // Declarations
  __declspec(property(get = get_isOverridable)) bool isOverridable;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*();

  /// @brief Method Equals, addr 0x6b2a548, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6b2a5d4, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::LocalKeyword rhs);

  /// @brief Method GetComputeShaderKeywordCount, addr 0x6b29f24, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordCount(::UnityEngine::ComputeShader* shader);

  /// @brief Method GetComputeShaderKeywordCount_Injected, addr 0x6b29fa4, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordCount_Injected(::System::IntPtr shader);

  /// @brief Method GetComputeShaderKeywordIndex, addr 0x6b29fe0, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordIndex(::UnityEngine::ComputeShader* shader, ::StringW keyword);

  /// @brief Method GetComputeShaderKeywordIndex_Injected, addr 0x6b2a154, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordIndex_Injected(::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method GetHashCode, addr 0x6b2a60c, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetShaderKeywordCount, addr 0x6b29cb0, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordCount(::UnityEngine::Shader* shader);

  /// @brief Method GetShaderKeywordCount_Injected, addr 0x6b29d30, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordCount_Injected(::System::IntPtr shader);

  /// @brief Method GetShaderKeywordIndex, addr 0x6b29d6c, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordIndex(::UnityEngine::Shader* shader, ::StringW keyword);

  /// @brief Method GetShaderKeywordIndex_Injected, addr 0x6b29ee0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordIndex_Injected(::System::IntPtr shader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method IsOverridable, addr 0x6b29c38, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsOverridable(::UnityEngine::Rendering::LocalKeyword kw);

  /// @brief Method IsOverridable_Injected, addr 0x6b29c74, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsOverridable_Injected(::by_ref<::UnityEngine::Rendering::LocalKeyword> kw);

  /// @brief Method ToString, addr 0x6b2a540, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6b2a398, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ComputeShader* shader, ::StringW name);

  /// @brief Method .ctor, addr 0x6b2a1f0, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader, ::StringW name);

  /// @brief Method get_isOverridable, addr 0x6b2a1a0, size 0x50, virtual false, abstract: false, final false
  inline bool get_isOverridable();

  /// @brief Method get_name, addr 0x6b2a198, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>* i___System__IEquatable_1___UnityEngine__Rendering__LocalKeyword_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalKeyword();

  // Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10863 };

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

static_assert(sizeof(::UnityEngine::Rendering::LocalKeyword) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
