#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUserAccountHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserAccountHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserAccountHandle);
// Dependencies
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUserAccountHandle
struct CORDL_TYPE InputUserAccountHandle {
public:
  // Declarations
  __declspec(property(get = get_apiName)) ::StringW apiName;

  __declspec(property(get = get_handle)) uint64_t handle;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*();

  /// @brief Method Equals, addr 0x6373d88, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6373cec, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle other);

  /// @brief Method GetHashCode, addr 0x6373e38, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6373c08, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6373ba8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW apiName, uint64_t handle);

  /// @brief Method get_apiName, addr 0x6373b98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_apiName();

  /// @brief Method get_handle, addr 0x6373ba0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_handle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>* i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUserAccountHandle_();

  /// @brief Method op_Equality, addr 0x6373a34, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right);

  /// @brief Method op_Inequality, addr 0x6373e08, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left, ::UnityEngine::InputSystem::Users::InputUserAccountHandle right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUserAccountHandle();

  // Ctor Parameters [CppParam { name: "m_ApiName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr InputUserAccountHandle(::StringW m_ApiName, uint64_t m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8830 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_ApiName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_ApiName;

  /// @brief Field m_Handle, offset: 0x8, size: 0x8, def value: None
  uint64_t m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUserAccountHandle, m_ApiName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUserAccountHandle, m_Handle) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserAccountHandle, "UnityEngine.InputSystem.Users", "InputUserAccountHandle");
