#pragma once
// IWYU pragma private; include "GlobalNamespace/ResetLocalLeaderboardOnKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ResetLocalLeaderboardOnKey)
namespace GlobalNamespace {
class IFileStorage;
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
// CS Name: ::ResetLocalLeaderboardOnKey*
class CORDL_TYPE ResetLocalLeaderboardOnKey : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fileStorage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _keyCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__keyCode, put = __cordl_internal_set__keyCode))::UnityEngine::KeyCode _keyCode;

  /// @brief Field _localLeaderboardsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardsModel, put = __cordl_internal_set__localLeaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardsModel;

  static inline ::GlobalNamespace::ResetLocalLeaderboardOnKey* New_ctor();

  /// @brief Method Update, addr 0x14ee318, size 0xb8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get__keyCode() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get__keyCode();

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __cordl_internal_get__localLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __cordl_internal_get__localLeaderboardsModel() const;

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__keyCode(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  /// @brief Method .ctor, addr 0x14ee3d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetLocalLeaderboardOnKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey const&) = delete;

  /// @brief Field _keyCode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode;

  /// @brief Field _fileStorage, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _localLeaderboardsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetLocalLeaderboardOnKey, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____keyCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____fileStorage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetLocalLeaderboardOnKey, ____localLeaderboardsModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetLocalLeaderboardOnKey);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetLocalLeaderboardOnKey*, "", "ResetLocalLeaderboardOnKey");
