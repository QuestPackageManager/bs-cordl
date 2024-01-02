#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ResetLocalLeaderboardOnKey)
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetLocalLeaderboardOnKey;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResetLocalLeaderboardOnKey);
// Type: ::ResetLocalLeaderboardOnKey
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4667))
// CS Name: ::ResetLocalLeaderboardOnKey*
class CORDL_TYPE ResetLocalLeaderboardOnKey : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _localLeaderboardsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__localLeaderboardsModel, put = __set__localLeaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardsModel;

  /// @brief Field _keyCode, offset 0x20, size 0x4
  __declspec(property(get = __get__keyCode, put = __set__keyCode))::UnityEngine::KeyCode _keyCode;

  /// @brief Field _saveData, offset 0x28, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __get__localLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __get__localLeaderboardsModel() const;

  constexpr void __set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr ::UnityEngine::KeyCode& __get__keyCode();

  constexpr ::UnityEngine::KeyCode const& __get__keyCode() const;

  constexpr void __set__keyCode(::UnityEngine::KeyCode value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  /// @brief Method Update, addr 0x2373554, size 0x40, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::ResetLocalLeaderboardOnKey* New_ctor();

  /// @brief Method .ctor, addr 0x2373594, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetLocalLeaderboardOnKey();

public:
  /// @brief Field _localLeaderboardsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardsModel;

  /// @brief Field _keyCode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode;

  /// @brief Field _saveData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetLocalLeaderboardOnKey, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____localLeaderboardsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____keyCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____saveData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetLocalLeaderboardOnKey);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetLocalLeaderboardOnKey*, "", "ResetLocalLeaderboardOnKey");
