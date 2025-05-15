#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlatformAdditionalContentModelInitialDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MockPlatformAdditionalContentModelInitialDataSO)
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlatformAdditionalContentModelInitialDataSO
class CORDL_TYPE MockPlatformAdditionalContentModelInitialDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPacksEntitlements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPacksEntitlements,
                      put = __cordl_internal_set__levelPacksEntitlements)) ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>
      _levelPacksEntitlements;

  /// @brief Field _levelsEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsEntitlements,
                      put = __cordl_internal_set__levelsEntitlements)) ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>
      _levelsEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__packBetterBuyThanLevel, put = __cordl_internal_set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  __declspec(property(get = get_levelPacksEntitlements)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* levelPacksEntitlements;

  __declspec(property(get = get_levelsEntitlements)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* levelsEntitlements;

  __declspec(property(get = get_packBetterBuyThanLevel)) bool packBetterBuyThanLevel;

  static inline ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> const& __cordl_internal_get__levelPacksEntitlements() const;

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>& __cordl_internal_get__levelPacksEntitlements();

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> const& __cordl_internal_get__levelsEntitlements() const;

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>& __cordl_internal_get__levelsEntitlements();

  constexpr bool const& __cordl_internal_get__packBetterBuyThanLevel() const;

  constexpr bool& __cordl_internal_get__packBetterBuyThanLevel();

  constexpr void __cordl_internal_set__levelPacksEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> value);

  constexpr void __cordl_internal_set__levelsEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> value);

  constexpr void __cordl_internal_set__packBetterBuyThanLevel(bool value);

  /// @brief Method .ctor, addr 0x26a6348, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPacksEntitlements, addr 0x26a6338, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* get_levelPacksEntitlements();

  /// @brief Method get_levelsEntitlements, addr 0x26a6330, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* get_levelsEntitlements();

  /// @brief Method get_packBetterBuyThanLevel, addr 0x26a6340, size 0x8, virtual false, abstract: false, final false
  inline bool get_packBetterBuyThanLevel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModelInitialDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModelInitialDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformAdditionalContentModelInitialDataSO(MockPlatformAdditionalContentModelInitialDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModelInitialDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformAdditionalContentModelInitialDataSO(MockPlatformAdditionalContentModelInitialDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12769 };

  /// @brief Field _levelsEntitlements, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> ____levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x28, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____levelsEntitlements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____levelPacksEntitlements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____packBetterBuyThanLevel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, "", "MockPlatformAdditionalContentModelInitialDataSO");
