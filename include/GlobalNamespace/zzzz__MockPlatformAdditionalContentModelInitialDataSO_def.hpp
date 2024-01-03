#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::MockPlatformAdditionalContentModelInitialDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4105))
// CS Name: ::MockPlatformAdditionalContentModelInitialDataSO*
class CORDL_TYPE MockPlatformAdditionalContentModelInitialDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelsEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __get__levelsEntitlements,
                      put = __set__levelsEntitlements))::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> _levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset 0x20, size 0x8
  __declspec(property(get = __get__levelPacksEntitlements,
                      put = __set__levelPacksEntitlements))::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> _levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset 0x28, size 0x1
  __declspec(property(get = __get__packBetterBuyThanLevel, put = __set__packBetterBuyThanLevel)) bool _packBetterBuyThanLevel;

  __declspec(property(get = get_levelsEntitlements))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* levelsEntitlements;

  __declspec(property(get = get_levelPacksEntitlements))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* levelPacksEntitlements;

  __declspec(property(get = get_packBetterBuyThanLevel)) bool packBetterBuyThanLevel;

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>& __get__levelsEntitlements();

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> const& __get__levelsEntitlements() const;

  constexpr void __set__levelsEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*>& __get__levelPacksEntitlements();

  constexpr ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> const& __get__levelPacksEntitlements() const;

  constexpr void __set__levelPacksEntitlements(::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> value);

  constexpr bool& __get__packBetterBuyThanLevel();

  constexpr bool const& __get__packBetterBuyThanLevel() const;

  constexpr void __set__packBetterBuyThanLevel(bool value);

  /// @brief Method get_levelsEntitlements, addr 0x2235244, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* get_levelsEntitlements();

  /// @brief Method get_levelPacksEntitlements, addr 0x223524c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MockPlatformEntitlement*>* get_levelPacksEntitlements();

  /// @brief Method get_packBetterBuyThanLevel, addr 0x2235254, size 0x8, virtual false, abstract: false, final false
  inline bool get_packBetterBuyThanLevel();

  static inline ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x223525c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModelInitialDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformAdditionalContentModelInitialDataSO(MockPlatformAdditionalContentModelInitialDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModelInitialDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformAdditionalContentModelInitialDataSO(MockPlatformAdditionalContentModelInitialDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformAdditionalContentModelInitialDataSO();

public:
  /// @brief Field _levelsEntitlements, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> ____levelsEntitlements;

  /// @brief Field _levelPacksEntitlements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockPlatformEntitlement*, ::Array<::GlobalNamespace::MockPlatformEntitlement*>*> ____levelPacksEntitlements;

  /// @brief Field _packBetterBuyThanLevel, offset: 0x28, size: 0x1, def value: None
  bool ____packBetterBuyThanLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____levelsEntitlements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____levelPacksEntitlements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO, ____packBetterBuyThanLevel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, "", "MockPlatformAdditionalContentModelInitialDataSO");
