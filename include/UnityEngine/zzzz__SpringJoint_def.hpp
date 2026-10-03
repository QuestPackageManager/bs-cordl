#pragma once
// IWYU pragma private; include "UnityEngine/SpringJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpringJoint)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class SpringJoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpringJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpringJoint*, "UnityEngine", "SpringJoint");
// [NativeClass("Unity::SpringJoint")]
// [NativeHeader("Modules/Physics/SpringJoint.h")]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpringJoint
class CORDL_TYPE SpringJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_damper, put = set_damper)) float_t damper;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  __declspec(property(get = get_spring, put = set_spring)) float_t spring;

  __declspec(property(get = get_tolerance, put = set_tolerance)) float_t tolerance;

  static inline ::UnityEngine::SpringJoint* New_ctor();

  /// @brief Method .ctor, addr 0x7009ab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_damper, addr 0x7009454, size 0x80, virtual false, abstract: false, final false
  inline float_t get_damper();

  /// @brief Method get_damper_Injected, addr 0x70094d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_damper_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDistance, addr 0x7009784, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_maxDistance_Injected, addr 0x7009804, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minDistance, addr 0x70095ec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_minDistance_Injected, addr 0x700966c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spring, addr 0x70092bc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spring();

  /// @brief Method get_spring_Injected, addr 0x700933c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spring_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tolerance, addr 0x700991c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_tolerance();

  /// @brief Method get_tolerance_Injected, addr 0x700999c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_tolerance_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_damper, addr 0x7009510, size 0x90, virtual false, abstract: false, final false
  inline void set_damper(float_t value);

  /// @brief Method set_damper_Injected, addr 0x70095a0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_damper_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDistance, addr 0x7009840, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_maxDistance_Injected, addr 0x70098d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_minDistance, addr 0x70096a8, size 0x90, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_minDistance_Injected, addr 0x7009738, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_spring, addr 0x7009378, size 0x90, virtual false, abstract: false, final false
  inline void set_spring(float_t value);

  /// @brief Method set_spring_Injected, addr 0x7009408, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spring_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_tolerance, addr 0x70099d8, size 0x90, virtual false, abstract: false, final false
  inline void set_tolerance(float_t value);

  /// @brief Method set_tolerance_Injected, addr 0x7009a68, size 0x4c, virtual false, abstract: false, final false
  static inline void set_tolerance_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpringJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpringJoint(SpringJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpringJoint", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpringJoint(SpringJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SpringJoint) == 0x18, "Size mismatch!");

} // namespace UnityEngine
