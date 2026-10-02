#pragma once
// IWYU pragma private; include "BeatSaber/AppInit/MetaApiUserAgentLocaleUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MetaApiUserAgentLocaleUpdater)
namespace BGLib::Polyglot {
class ILocalize;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace BeatSaber::AppInit {
class MetaApiUserAgentProvider;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::AppInit {
class MetaApiUserAgentLocaleUpdater;
}
// Write type traits
MARK_REF_T(::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*);
DEFINE_IL2CPP_CLASS(::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*, "BeatSaber.AppInit", "MetaApiUserAgentLocaleUpdater");
// Dependencies System.Object
namespace BeatSaber::AppInit {
// Is value type: false
// CS Name: BeatSaber.AppInit.MetaApiUserAgentLocaleUpdater
class CORDL_TYPE MetaApiUserAgentLocaleUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Field _localizationModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationModel, put = __cordl_internal_set__localizationModel)) ::BGLib::Polyglot::LocalizationModel* _localizationModel;

  /// @brief Field _metaApiUserAgentProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__metaApiUserAgentProvider,
                      put = __cordl_internal_set__metaApiUserAgentProvider)) ::BeatSaber::AppInit::MetaApiUserAgentProvider* _metaApiUserAgentProvider;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x3a046b0, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x3a04694, size 0x1c, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater* New_ctor();

  /// @brief Method OnLocalize, addr 0x3a046cc, size 0x38, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  constexpr ::BGLib::Polyglot::LocalizationModel* const& __cordl_internal_get__localizationModel() const;

  constexpr ::BGLib::Polyglot::LocalizationModel*& __cordl_internal_get__localizationModel();

  constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider* const& __cordl_internal_get__metaApiUserAgentProvider() const;

  constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider*& __cordl_internal_get__metaApiUserAgentProvider();

  constexpr void __cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value);

  constexpr void __cordl_internal_set__metaApiUserAgentProvider(::BeatSaber::AppInit::MetaApiUserAgentProvider* value);

  /// @brief Method .ctor, addr 0x3a04740, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgentLocaleUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentLocaleUpdater", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgentLocaleUpdater(MetaApiUserAgentLocaleUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentLocaleUpdater", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgentLocaleUpdater(MetaApiUserAgentLocaleUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21872 };

  /// [Inject]
  /// @brief Field _metaApiUserAgentProvider, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::AppInit::MetaApiUserAgentProvider* ____metaApiUserAgentProvider;

  /// [Inject]
  /// @brief Field _localizationModel, offset: 0x18, size: 0x8, def value: None
  ::BGLib::Polyglot::LocalizationModel* ____localizationModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater, ____metaApiUserAgentProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater, ____localizationModel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater) == 0x20, "Size mismatch!");

} // namespace BeatSaber::AppInit
