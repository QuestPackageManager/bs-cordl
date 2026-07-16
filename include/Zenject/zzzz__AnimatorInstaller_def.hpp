#pragma once
// IWYU pragma private; include "Zenject/AnimatorInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AnimatorInstaller)
namespace System {
class Object;
}
namespace UnityEngine {
class Animator;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorInstaller;
}
// Write type traits
MARK_REF_T(::Zenject::AnimatorInstaller*);
DEFINE_IL2CPP_CLASS(::Zenject::AnimatorInstaller*, "Zenject", "AnimatorInstaller");
// Dependencies Zenject.Installer`2<TParam1, TDerived>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AnimatorInstaller
class CORDL_TYPE AnimatorInstaller : public ::Zenject::Installer_2<::UnityW<::UnityEngine::Animator>, ::Zenject::AnimatorInstaller*> {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Method InstallBindings, addr 0x6e8a304, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Zenject::AnimatorInstaller* New_ctor(::UnityEngine::Animator* animator);

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method __zenCreate, addr 0x6e8a3c0, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e8a4b0, size 0x248, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e8a2b4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorInstaller(AnimatorInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorInstaller(AnimatorInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14628 };

  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AnimatorInstaller, ____animator) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::AnimatorInstaller) == 0x20, "Size mismatch!");

} // namespace Zenject
