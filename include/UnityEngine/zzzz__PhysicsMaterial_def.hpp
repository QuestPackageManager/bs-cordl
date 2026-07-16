#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsMaterial)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct PhysicsMaterialCombine;
}
// Forward declare root types
namespace UnityEngine {
class PhysicsMaterial;
}
// Write type traits
MARK_REF_T(::UnityEngine::PhysicsMaterial*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsMaterial*, "UnityEngine", "PhysicsMaterial");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicsMaterial
class CORDL_TYPE PhysicsMaterial : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bounceCombine, put = set_bounceCombine)) ::UnityEngine::PhysicsMaterialCombine bounceCombine;

  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  __declspec(property(get = get_dynamicFriction, put = set_dynamicFriction)) float_t dynamicFriction;

  __declspec(property(get = get_frictionCombine, put = set_frictionCombine)) ::UnityEngine::PhysicsMaterialCombine frictionCombine;

  __declspec(property(get = get_staticFriction, put = set_staticFriction)) float_t staticFriction;

  /// @brief Method Internal_CreateDynamicsMaterial, addr 0x6b8fc8c, size 0x134, virtual false, abstract: false, final false
  static inline void Internal_CreateDynamicsMaterial(::UnityEngine::PhysicsMaterial* mat, ::StringW name);

  /// @brief Method Internal_CreateDynamicsMaterial_Injected, addr 0x6b8fe28, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateDynamicsMaterial_Injected(::UnityEngine::PhysicsMaterial* mat, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::PhysicsMaterial* New_ctor();

  static inline ::UnityEngine::PhysicsMaterial* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6b8fc18, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b8fdc0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_bounceCombine, addr 0x6b904c4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsMaterialCombine get_bounceCombine();

  /// @brief Method get_bounceCombine_Injected, addr 0x6b90544, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsMaterialCombine get_bounceCombine_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bounciness, addr 0x6b8fe6c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// @brief Method get_bounciness_Injected, addr 0x6b8feec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_bounciness_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dynamicFriction, addr 0x6b90004, size 0x80, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction();

  /// @brief Method get_dynamicFriction_Injected, addr 0x6b90084, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_dynamicFriction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frictionCombine, addr 0x6b90334, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicsMaterialCombine get_frictionCombine();

  /// @brief Method get_frictionCombine_Injected, addr 0x6b903b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsMaterialCombine get_frictionCombine_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_staticFriction, addr 0x6b9019c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_staticFriction();

  /// @brief Method get_staticFriction_Injected, addr 0x6b9021c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_staticFriction_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bounceCombine, addr 0x6b90580, size 0x90, virtual false, abstract: false, final false
  inline void set_bounceCombine(::UnityEngine::PhysicsMaterialCombine value);

  /// @brief Method set_bounceCombine_Injected, addr 0x6b90610, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounceCombine_Injected(::System::IntPtr _unity_self, ::UnityEngine::PhysicsMaterialCombine value);

  /// @brief Method set_bounciness, addr 0x6b8ff28, size 0x90, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// @brief Method set_bounciness_Injected, addr 0x6b8ffb8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_bounciness_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_dynamicFriction, addr 0x6b900c0, size 0x90, virtual false, abstract: false, final false
  inline void set_dynamicFriction(float_t value);

  /// @brief Method set_dynamicFriction_Injected, addr 0x6b90150, size 0x4c, virtual false, abstract: false, final false
  static inline void set_dynamicFriction_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_frictionCombine, addr 0x6b903f0, size 0x90, virtual false, abstract: false, final false
  inline void set_frictionCombine(::UnityEngine::PhysicsMaterialCombine value);

  /// @brief Method set_frictionCombine_Injected, addr 0x6b90480, size 0x44, virtual false, abstract: false, final false
  static inline void set_frictionCombine_Injected(::System::IntPtr _unity_self, ::UnityEngine::PhysicsMaterialCombine value);

  /// @brief Method set_staticFriction, addr 0x6b90258, size 0x90, virtual false, abstract: false, final false
  inline void set_staticFriction(float_t value);

  /// @brief Method set_staticFriction_Injected, addr 0x6b902e8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_staticFriction_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsMaterial(PhysicsMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsMaterial(PhysicsMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PhysicsMaterial) == 0x18, "Size mismatch!");

} // namespace UnityEngine
