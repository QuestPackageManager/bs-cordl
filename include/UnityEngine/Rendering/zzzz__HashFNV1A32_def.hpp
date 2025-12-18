#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HashFNV1A32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashFNV1A32)
namespace System {
class Delegate;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct HashFNV1A32;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::HashFNV1A32);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HashFNV1A32
struct CORDL_TYPE HashFNV1A32 {
public:
  // Declarations
  __declspec(property(get = get_value)) int32_t value;

  /// @brief Method Append, addr 0x660e458, size 0x74, virtual false, abstract: false, final false
  inline void Append(::System::Delegate* del);

  /// @brief Method Append, addr 0x660e328, size 0x48, virtual false, abstract: false, final false
  inline void Append(::ByRef<::UnityEngine::Vector2> input);

  /// @brief Method Append, addr 0x660e370, size 0x64, virtual false, abstract: false, final false
  inline void Append(::ByRef<::UnityEngine::Vector3> input);

  /// @brief Method Append, addr 0x660e3d4, size 0x84, virtual false, abstract: false, final false
  inline void Append(::ByRef<::UnityEngine::Vector4> input);

  /// @brief Method Append, addr 0x660e298, size 0x28, virtual false, abstract: false, final false
  inline void Append(::ByRef<bool> input);

  /// @brief Method Append, addr 0x660e2f0, size 0x38, virtual false, abstract: false, final false
  inline void Append(::ByRef<double_t> input);

  /// @brief Method Append, addr 0x660e2c0, size 0x30, virtual false, abstract: false, final false
  inline void Append(::ByRef<float_t> input);

  /// @brief Method Append, addr 0x660e258, size 0x20, virtual false, abstract: false, final false
  inline void Append(::ByRef<int32_t> input);

  /// @brief Method Append, addr 0x660e278, size 0x20, virtual false, abstract: false, final false
  inline void Append(::ByRef<uint32_t> input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Append(T input);

  /// @brief Method Create, addr 0x660e24c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::HashFNV1A32 Create();

  /// @brief Method GetFuncHashCode, addr 0x660e4cc, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t GetFuncHashCode(::System::Delegate* del);

  /// @brief Method GetHashCode, addr 0x660e520, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_value, addr 0x660e518, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashFNV1A32();

  // Ctor Parameters [CppParam { name: "m_Hash", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr HashFNV1A32(uint32_t m_Hash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12277 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_OffsetBasis offset 0xffffffff size 0x4
  static constexpr uint32_t k_OffsetBasis{ static_cast<uint32_t>(0x811c9dc5u) };

  /// @brief Field k_Prime offset 0xffffffff size 0x4
  static constexpr uint32_t k_Prime{ static_cast<uint32_t>(0x1000193u) };

  /// @brief Field m_Hash, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HashFNV1A32, m_Hash) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HashFNV1A32, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HashFNV1A32, "UnityEngine.Rendering", "HashFNV1A32");
