#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RandomAnimatorStartTime)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimatorStartTime;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomAnimatorStartTime);
// Type: ::RandomAnimatorStartTime
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13884))
// CS Name: ::RandomAnimatorStartTime*
class CORDL_TYPE RandomAnimatorStartTime : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _stateName, offset 0x20, size 0x8
  __declspec(property(get = __get__stateName, put = __set__stateName))::StringW _stateName;

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr ::StringW& __get__stateName();

  constexpr ::StringW const& __get__stateName() const;

  constexpr void __set__stateName(::StringW value);

  /// @brief Method Start addr 0x1f98480 size 0x40 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::RandomAnimatorStartTime* New_ctor();

  /// @brief Method .ctor addr 0x1f984c0 size 0x50 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimatorStartTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomAnimatorStartTime(RandomAnimatorStartTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimatorStartTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomAnimatorStartTime(RandomAnimatorStartTime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomAnimatorStartTime();

public:
  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _stateName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____stateName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomAnimatorStartTime, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimatorStartTime, ____animator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimatorStartTime, ____stateName) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimatorStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimatorStartTime*, "", "RandomAnimatorStartTime");
