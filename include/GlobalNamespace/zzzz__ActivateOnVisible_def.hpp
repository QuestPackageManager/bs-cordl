#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ActivateOnVisible)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateOnVisible;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActivateOnVisible);
// Type: ::ActivateOnVisible
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13830))
// CS Name: ::ActivateOnVisible*
class CORDL_TYPE ActivateOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameObjects, offset 0x18, size 0x8
  __declspec(property(get = __get__gameObjects, put = __set__gameObjects))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _gameObjects;

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__gameObjects();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__gameObjects() const;

  constexpr void __set__gameObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  /// @brief Method Awake addr 0x1f937dc size 0x64 virtual false final false
  inline void Awake();

  /// @brief Method OnBecameVisible addr 0x1f93840 size 0x64 virtual false final false
  inline void OnBecameVisible();

  /// @brief Method OnBecameInvisible addr 0x1f938a4 size 0x64 virtual false final false
  inline void OnBecameInvisible();

  static inline ::GlobalNamespace::ActivateOnVisible* New_ctor();

  /// @brief Method .ctor addr 0x1f93908 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivateOnVisible(ActivateOnVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivateOnVisible(ActivateOnVisible const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivateOnVisible();

public:
  /// @brief Field _gameObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____gameObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActivateOnVisible, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateOnVisible, ____gameObjects) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActivateOnVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActivateOnVisible*, "", "ActivateOnVisible");
