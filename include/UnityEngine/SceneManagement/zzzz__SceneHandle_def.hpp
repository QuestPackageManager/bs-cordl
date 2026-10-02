#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct SceneHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::SceneHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::SceneHandle, "UnityEngine.SceneManagement", "SceneHandle");
// [NativeClass("UnitySceneHandle")]
// [NativeHeader("Runtime/SceneManager/UnitySceneHandle.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.EntityId
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.SceneHandle
struct CORDL_TYPE SceneHandle {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>*();

  /// @brief Method Equals, addr 0x6f5aeac, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6f5af28, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::SceneManagement::SceneHandle other);

  /// @brief Method GetHashCode, addr 0x6f5adc8, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6f5af3c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>* i___System__IEquatable_1___UnityEngine__SceneManagement__SceneHandle_();

  /// @brief Method op_Equality, addr 0x6f5ad54, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::SceneManagement::SceneHandle left, ::UnityEngine::SceneManagement::SceneHandle right);

  /// @brief Method op_Implicit, addr 0x6f5af38, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::SceneManagement::SceneHandle handle);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneHandle();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }]
  constexpr SceneHandle(::UnityEngine::EntityId m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10077 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::EntityId m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::SceneHandle, m_Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SceneManagement::SceneHandle) == 0x4, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
