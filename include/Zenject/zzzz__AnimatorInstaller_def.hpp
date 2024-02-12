#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Zenject::AnimatorInstaller);
// Type: Zenject::AnimatorInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10274)), TypeDefinitionIndex(TypeDefinitionIndex(14755)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10274), inst:
// 3889 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10443)) CS Name: ::Zenject::AnimatorInstaller*
class CORDL_TYPE AnimatorInstaller : public ::Zenject::Installer_2<::UnityW<::UnityEngine::Animator>, ::Zenject::AnimatorInstaller*> {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  static inline ::Zenject::AnimatorInstaller* New_ctor(::UnityEngine::Animator* animator);

  /// @brief Method .ctor, addr 0x2f2a798, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator);

  /// @brief Method InstallBindings, addr 0x2f2a7f4, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method __zenCreate, addr 0x2f2a8ac, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f2a970, size 0x274, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorInstaller(AnimatorInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorInstaller(AnimatorInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorInstaller();

public:
  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AnimatorInstaller, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::AnimatorInstaller, ____animator) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AnimatorInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorInstaller*, "Zenject", "AnimatorInstaller");
