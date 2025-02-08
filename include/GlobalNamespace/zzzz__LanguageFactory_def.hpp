#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
CORDL_MODULE_EXPORT(LanguageFactory)
namespace BGLib::Polyglot {
struct Language;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageFactory);
// Dependencies BGLib.Polyglot.Language, System.Object, Zenject.IFactory, Zenject.IFactory`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LanguageFactory
class CORDL_TYPE LanguageFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _platformUserModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserModel, put = __cordl_internal_set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _settingsManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory_1<::BGLib::Polyglot::Language>"
  constexpr operator ::Zenject::IFactory_1<::BGLib::Polyglot::Language>*() noexcept;

  /// @brief Method Create, addr 0x2718550, size 0xd8, virtual true, abstract: false, final true
  inline ::BGLib::Polyglot::Language Create();

  static inline ::GlobalNamespace::LanguageFactory* New_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                             ::GlobalNamespace::IPlatformUserModel* platformUserModel);

  constexpr ::GlobalNamespace::IPlatformUserModel* const& __cordl_internal_get__platformUserModel() const;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x2718514, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::IPlatformUserModel* platformUserModel);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Convert to "::Zenject::IFactory_1<::BGLib::Polyglot::Language>"
  constexpr ::Zenject::IFactory_1<::BGLib::Polyglot::Language>* i___Zenject__IFactory_1___BGLib__Polyglot__Language_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageFactory(LanguageFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageFactory(LanguageFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17785 };

  /// @brief Field _playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _settingsManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _platformUserModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____playerDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____settingsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____platformUserModel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageFactory, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageFactory*, "", "LanguageFactory");
