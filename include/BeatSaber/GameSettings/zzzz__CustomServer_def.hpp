#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomServer)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class CustomServer;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::CustomServer);
// Type: BeatSaber.GameSettings::CustomServer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::CustomServer*
class CORDL_TYPE CustomServer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _customServerHostName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__customServerHostName, put = __cordl_internal_set__customServerHostName))::StringW _customServerHostName;

  /// @brief Field _forceGameLiftServerEnvironment, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__forceGameLiftServerEnvironment, put = __cordl_internal_set__forceGameLiftServerEnvironment)) bool _forceGameLiftServerEnvironment;

  /// @brief Field <isDirty>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  /// @brief Field _useCustomServerEnvironment, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__useCustomServerEnvironment, put = __cordl_internal_set__useCustomServerEnvironment)) bool _useCustomServerEnvironment;

  __declspec(property(get = get_customServerHostName, put = set_customServerHostName))::StringW customServerHostName;

  __declspec(property(get = get_forceGameLiftServerEnvironment, put = set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_useCustomServerEnvironment, put = set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  static inline ::BeatSaber::GameSettings::CustomServer* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__customServerHostName() const;

  constexpr ::StringW& __cordl_internal_get__customServerHostName();

  constexpr bool const& __cordl_internal_get__forceGameLiftServerEnvironment() const;

  constexpr bool& __cordl_internal_get__forceGameLiftServerEnvironment();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr bool const& __cordl_internal_get__useCustomServerEnvironment() const;

  constexpr bool& __cordl_internal_get__useCustomServerEnvironment();

  constexpr void __cordl_internal_set__customServerHostName(::StringW value);

  constexpr void __cordl_internal_set__forceGameLiftServerEnvironment(bool value);

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__useCustomServerEnvironment(bool value);

  /// @brief Method .ctor, addr 0x1060628, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customServerHostName, addr 0x1060620, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_customServerHostName();

  /// @brief Method get_forceGameLiftServerEnvironment, addr 0x1060618, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceGameLiftServerEnvironment();

  /// @brief Method get_isDirty, addr 0x10605fc, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_useCustomServerEnvironment, addr 0x1060610, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCustomServerEnvironment();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_customServerHostName, addr 0x106042c, size 0x10, virtual false, abstract: false, final false
  inline void set_customServerHostName(::StringW value);

  /// @brief Method set_forceGameLiftServerEnvironment, addr 0x1060418, size 0x14, virtual false, abstract: false, final false
  inline void set_forceGameLiftServerEnvironment(bool value);

  /// @brief Method set_isDirty, addr 0x1060604, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

  /// @brief Method set_useCustomServerEnvironment, addr 0x1060404, size 0x14, virtual false, abstract: false, final false
  inline void set_useCustomServerEnvironment(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomServer(CustomServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomServer(CustomServer const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  /// @brief Field _useCustomServerEnvironment, offset: 0x11, size: 0x1, def value: None
  bool ____useCustomServerEnvironment;

  /// @brief Field _forceGameLiftServerEnvironment, offset: 0x12, size: 0x1, def value: None
  bool ____forceGameLiftServerEnvironment;

  /// @brief Field _customServerHostName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____customServerHostName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::CustomServer, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::CustomServer, ____isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::CustomServer, ____useCustomServerEnvironment) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::CustomServer, ____forceGameLiftServerEnvironment) == 0x12, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::CustomServer, ____customServerHostName) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::CustomServer);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::CustomServer*, "BeatSaber.GameSettings", "CustomServer");
