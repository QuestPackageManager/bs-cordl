#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerBadgesModelSO)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesModelSO);
// Type: ::MultiplayerBadgesModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5110))
// CS Name: ::MultiplayerBadgesModelSO*
class CORDL_TYPE MultiplayerBadgesModelSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _positiveBadges, offset 0x18, size 0x8
  __declspec(property(get = __get__positiveBadges, put = __set__positiveBadges))::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* _positiveBadges;

  /// @brief Field _negativeBadges, offset 0x20, size 0x8
  __declspec(property(get = __get__negativeBadges, put = __set__negativeBadges))::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* _negativeBadges;

  __declspec(property(get = get_positiveBadges))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* positiveBadges;

  __declspec(property(get = get_negativeBadges))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* negativeBadges;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*& __get__positiveBadges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> const& __get__positiveBadges() const;

  constexpr void __set__positiveBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*& __get__negativeBadges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> const& __get__negativeBadges() const;

  constexpr void __set__negativeBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* value);

  /// @brief Method get_positiveBadges addr 0x23cf914 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* get_positiveBadges();

  /// @brief Method get_negativeBadges addr 0x23cf91c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* get_negativeBadges();

  static inline ::GlobalNamespace::MultiplayerBadgesModelSO* New_ctor();

  /// @brief Method .ctor addr 0x23cf924 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgesModelSO(MultiplayerBadgesModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgesModelSO(MultiplayerBadgesModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgesModelSO();

public:
  /// @brief Field _positiveBadges, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* ____positiveBadges;

  /// @brief Field _negativeBadges, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* ____negativeBadges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesModelSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesModelSO*, "", "MultiplayerBadgesModelSO");
