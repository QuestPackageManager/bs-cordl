#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CuttingManager)
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class NoteCutter;
}
namespace GlobalNamespace {
class SaberManager;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttingManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CuttingManager);
// Type: ::CuttingManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5287))
// CS Name: ::CuttingManager*
class CORDL_TYPE CuttingManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberManager, offset 0x18, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _noteCutter, offset 0x20, size 0x8
  __declspec(property(get = __get__noteCutter, put = __set__noteCutter))::GlobalNamespace::NoteCutter* _noteCutter;

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::GlobalNamespace::NoteCutter*& __get__noteCutter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutter*> const& __get__noteCutter() const;

  constexpr void __set__noteCutter(::GlobalNamespace::NoteCutter* value);

  /// @brief Method OnEnable, addr 0x22627a8, size 0x88, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x22628e0, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleSaberManagerDidUpdateSaberPositions, addr 0x2262a18, size 0x44, virtual false, abstract: false, final false
  inline void HandleSaberManagerDidUpdateSaberPositions(::GlobalNamespace::Saber* leftSaber, ::GlobalNamespace::Saber* rightSaber);

  static inline ::GlobalNamespace::CuttingManager* New_ctor();

  /// @brief Method .ctor, addr 0x2262f80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CuttingManager(CuttingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CuttingManager(CuttingManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CuttingManager();

public:
  /// @brief Field _saberManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _noteCutter, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutter* ____noteCutter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttingManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CuttingManager, ____saberManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuttingManager, ____noteCutter) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttingManager*, "", "CuttingManager");
