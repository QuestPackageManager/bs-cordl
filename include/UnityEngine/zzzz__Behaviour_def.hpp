#pragma once
// IWYU pragma private; include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Behaviour)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class Behaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::Behaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Behaviour*, "UnityEngine", "Behaviour");
// [UsedByNativeCode]
// [NativeHeader("Runtime/Mono/MonoBehaviour.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Behaviour
class CORDL_TYPE Behaviour : public ::UnityEngine::Component {
public:
  // Declarations
  /// [RequiredByNativeCode]
  /// @brief [NativeProperty]
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief [NativeProperty]
  __declspec(property(get = get_isActiveAndEnabled)) bool isActiveAndEnabled;

  static inline ::UnityEngine::Behaviour* New_ctor();

  /// @brief Method .ctor, addr 0x6f36fc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x6f36d78, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x6f36df8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsAddedToManager")]
  /// @brief Method get_isActiveAndEnabled, addr 0x6f36f08, size 0x80, virtual false, abstract: false, final false
  inline bool get_isActiveAndEnabled();

  /// @brief Method get_isActiveAndEnabled_Injected, addr 0x6f36f88, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isActiveAndEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_enabled, addr 0x6f36e34, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x6f36ec4, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Behaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Behaviour(Behaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Behaviour(Behaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Behaviour) == 0x18, "Size mismatch!");

} // namespace UnityEngine
