#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderTagId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderTagId)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderTagId);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderTagId
struct CORDL_TYPE ShaderTagId {
public:
  // Declarations
  __declspec(property(get = get_id, put = set_id)) int32_t id;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>*();

  /// @brief Method Equals, addr 0x48c9c48, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48c9cc0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ShaderTagId other);

  /// @brief Method GetHashCode, addr 0x48c9cd0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x48c9c18, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_id, addr 0x48c9c38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>* i___System__IEquatable_1___UnityEngine__Rendering__ShaderTagId_();

  /// @brief Method set_id, addr 0x48c9c40, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderTagId();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderTagId(int32_t m_Id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderTagId, m_Id) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderTagId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");
