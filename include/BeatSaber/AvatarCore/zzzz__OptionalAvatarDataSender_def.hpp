#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarDataSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OptionalAvatarDataSender)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSyncHandler;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::OptionalAvatarDataSender);
// Dependencies BeatSaber.AvatarCore.AvatarDisplayContext, System.IDisposable, System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.OptionalAvatarDataSender
class CORDL_TYPE OptionalAvatarDataSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _avatarSystemCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _currentAvatarDisplayContext, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__currentAvatarDisplayContext,
                      put = __cordl_internal_set__currentAvatarDisplayContext)) ::BeatSaber::AvatarCore::AvatarDisplayContext _currentAvatarDisplayContext;

  /// @brief Field _optionalAvatarDataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalAvatarDataProvider,
                      put = __cordl_internal_set__optionalAvatarDataProvider)) ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* _optionalAvatarDataProvider;

  /// @brief Field _optionalAvatarDataSyncHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalAvatarDataSyncHandler,
                      put = __cordl_internal_set__optionalAvatarDataSyncHandler)) ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* _optionalAvatarDataSyncHandler;

  /// @brief Field _selectedAvatarTypeId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAvatarTypeId, put = __cordl_internal_set__selectedAvatarTypeId)) ::StringW _selectedAvatarTypeId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2251ce4, size 0x100, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleOptionalAvatarDataProviderDataDidChange, addr 0x2251c08, size 0x18, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataProviderDataDidChange(::BeatSaber::AvatarCore::OptionalAvatarData data);

  static inline ::BeatSaber::AvatarCore::OptionalAvatarDataSender* New_ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                            ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Method SetCurrentLocalAvatarDisplayContext, addr 0x2251c20, size 0xc4, virtual false, abstract: false, final false
  inline void SetCurrentLocalAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext);

  /// @brief Method SetSelectedAvatarTypeId, addr 0x22517e0, size 0x428, virtual false, abstract: false, final false
  inline void SetSelectedAvatarTypeId(::StringW selectedAvatarTypeId);

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& __cordl_internal_get__currentAvatarDisplayContext() const;

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& __cordl_internal_get__currentAvatarDisplayContext();

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* const& __cordl_internal_get__optionalAvatarDataProvider() const;

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& __cordl_internal_get__optionalAvatarDataProvider();

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* const& __cordl_internal_get__optionalAvatarDataSyncHandler() const;

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*& __cordl_internal_get__optionalAvatarDataSyncHandler();

  constexpr ::StringW const& __cordl_internal_get__selectedAvatarTypeId() const;

  constexpr ::StringW& __cordl_internal_get__selectedAvatarTypeId();

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__currentAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value);

  constexpr void __cordl_internal_set__optionalAvatarDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value);

  constexpr void __cordl_internal_set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* value);

  constexpr void __cordl_internal_set__selectedAvatarTypeId(::StringW value);

  /// @brief Method .ctor, addr 0x22517b4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAvatarDataSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalAvatarDataSender(OptionalAvatarDataSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalAvatarDataSender(OptionalAvatarDataSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17593 };

  /// @brief Field _avatarSystemCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _optionalAvatarDataSyncHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* ____optionalAvatarDataSyncHandler;

  /// @brief Field _optionalAvatarDataProvider, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* ____optionalAvatarDataProvider;

  /// @brief Field _currentAvatarDisplayContext, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::AvatarCore::AvatarDisplayContext ____currentAvatarDisplayContext;

  /// @brief Field _selectedAvatarTypeId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____selectedAvatarTypeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSender, ____avatarSystemCollection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSender, ____optionalAvatarDataSyncHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSender, ____optionalAvatarDataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSender, ____currentAvatarDisplayContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSender, ____selectedAvatarTypeId) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarDataSender, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::OptionalAvatarDataSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarDataSender*, "BeatSaber.AvatarCore", "OptionalAvatarDataSender");
