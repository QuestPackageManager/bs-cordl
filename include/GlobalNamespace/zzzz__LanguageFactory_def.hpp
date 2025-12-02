#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LanguageFactory)
namespace BGLib::Polyglot {
struct LocalizationLanguage;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageFactory);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LanguageFactory
class CORDL_TYPE LanguageFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _platform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _settingsManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>"
  constexpr operator ::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>*() noexcept;

  /// @brief Method Create, addr 0x3648a4c, size 0x154, virtual true, abstract: false, final true
  inline ::BGLib::Polyglot::LocalizationLanguage Create();

  static inline ::GlobalNamespace::LanguageFactory* New_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                             ::OculusStudios::Platform::Core::IPlatform* platform);

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3648a40, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager, ::OculusStudios::Platform::Core::IPlatform* platform);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Convert to "::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>"
  constexpr ::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>* i___Zenject__IFactory_1___BGLib__Polyglot__LocalizationLanguage_() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21047 };

  /// @brief Field _playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _settingsManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _platform, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____playerDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____settingsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageFactory, ____platform) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageFactory, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageFactory*, "", "LanguageFactory");
