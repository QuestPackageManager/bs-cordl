#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSpectatingSpotManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSpectatingSpotManager)
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatingSpotManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatingSpotManager___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatingSpotManager/<>c
class CORDL_TYPE MultiplayerSpectatingSpotManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* __9__3_0;

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* New_ctor();

  /// @brief Method .ctor, addr 0x3be5b08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_defaultSpot>b__3_0, addr 0x3be5b10, size 0xa0, virtual false, abstract: false, final false
  inline bool _get_defaultSpot_b__3_0(::GlobalNamespace::IMultiplayerSpectatingSpot* s);

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerSpectatingSpotManager___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatingSpotManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatingSpotManager___c(MultiplayerSpectatingSpotManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatingSpotManager___c(MultiplayerSpectatingSpotManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotManager___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatingSpotManager
class CORDL_TYPE MultiplayerSpectatingSpotManager : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::MultiplayerSpectatingSpotManager___c;

  /// @brief Field _spectatingSpots, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatingSpots,
                      put = __cordl_internal_set__spectatingSpots)) ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* _spectatingSpots;

  /// @brief Field _spotIndexBySpot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__spotIndexBySpot,
                      put = __cordl_internal_set__spotIndexBySpot)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* _spotIndexBySpot;

  __declspec(property(get = get_defaultSpot)) ::GlobalNamespace::IMultiplayerSpectatingSpot* defaultSpot;

  __declspec(property(get = get_spectatingSpots)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpots;

  /// @brief Method GetAdjacentSpot, addr 0x3be578c, size 0xb4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GetAdjacentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot, int32_t offset);

  /// @brief Method GetIndexBySpot, addr 0x3be5840, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetIndexBySpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotManager* New_ctor();

  /// @brief Method RegisterSpectatingSpot, addr 0x3be4d7c, size 0x164, virtual false, abstract: false, final false
  inline void RegisterSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method SpotOnHasBeenRemoved, addr 0x3be58c4, size 0x124, virtual false, abstract: false, final false
  inline void SpotOnHasBeenRemoved(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method UpdateIndexBySpotDictionary, addr 0x3be5618, size 0x174, virtual false, abstract: false, final false
  inline void UpdateIndexBySpotDictionary();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const& __cordl_internal_get__spectatingSpots() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __cordl_internal_get__spectatingSpots();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* const& __cordl_internal_get__spotIndexBySpot() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>*& __cordl_internal_get__spotIndexBySpot();

  constexpr void __cordl_internal_set__spectatingSpots(::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  constexpr void __cordl_internal_set__spotIndexBySpot(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* value);

  /// @brief Method .ctor, addr 0x3be59e8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_defaultSpot, addr 0x3be54b8, size 0x160, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* get_defaultSpot();

  /// @brief Method get_spectatingSpots, addr 0x3be54b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* get_spectatingSpots();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatingSpotManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4626 };

  /// @brief Field _spectatingSpots, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ____spectatingSpots;

  /// @brief Field _spotIndexBySpot, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* ____spotIndexBySpot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotManager, ____spectatingSpots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatingSpotManager, ____spotIndexBySpot) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotManager, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotManager*, "", "MultiplayerSpectatingSpotManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotManager___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotManager___c*, "", "MultiplayerSpectatingSpotManager/<>c");
