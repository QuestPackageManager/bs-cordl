#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Dependencies UnityEngine.Rendering.LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LocalKeyword
struct CORDL_TYPE LocalKeyword {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*();

  /// @brief Method Equals, addr 0x68f9838, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x68f98c4, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::LocalKeyword rhs);

  /// @brief Method GetComputeShaderKeywordCount, addr 0x68f926c, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordCount(::UnityEngine::ComputeShader* shader);

  /// @brief Method GetComputeShaderKeywordCount_Injected, addr 0x68f92ec, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordCount_Injected(::System::IntPtr shader);

  /// @brief Method GetComputeShaderKeywordIndex, addr 0x68f9328, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordIndex(::UnityEngine::ComputeShader* shader, ::StringW keyword);

  /// @brief Method GetComputeShaderKeywordIndex_Injected, addr 0x68f949c, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetComputeShaderKeywordIndex_Injected(::System::IntPtr shader, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method GetHashCode, addr 0x68f98fc, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetShaderKeywordCount, addr 0x68f8ff8, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordCount(::UnityEngine::Shader* shader);

  /// @brief Method GetShaderKeywordCount_Injected, addr 0x68f9078, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordCount_Injected(::System::IntPtr shader);

  /// @brief Method GetShaderKeywordIndex, addr 0x68f90b4, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordIndex(::UnityEngine::Shader* shader, ::StringW keyword);

  /// @brief Method GetShaderKeywordIndex_Injected, addr 0x68f9228, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetShaderKeywordIndex_Injected(::System::IntPtr shader, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ToString, addr 0x68f9830, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x68f9688, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ComputeShader* shader, ::StringW name);

  /// @brief Method .ctor, addr 0x68f94e0, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader, ::StringW name);

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LocalKeyword, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");
