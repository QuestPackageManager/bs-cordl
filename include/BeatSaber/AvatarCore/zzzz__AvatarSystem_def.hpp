#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystem)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystem;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSystem;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSystem);
// Type: BeatSaber.AvatarCore::AvatarSystem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15179))
// CS Name: ::BeatSaber.AvatarCore::AvatarSystem*
class CORDL_TYPE AvatarSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _typeIdentifier, offset 0x10, size 0x10
  __declspec(property(get = __get__typeIdentifier, put = __set__typeIdentifier))::BeatSaber::AvatarCore::AvatarSystemIdentifier _typeIdentifier;

  /// @brief Field _supportedOptionalAvatarDataTypes, offset 0x20, size 0x8
  __declspec(property(get = __get__supportedOptionalAvatarDataTypes,
                      put = __set__supportedOptionalAvatarDataTypes))::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* _supportedOptionalAvatarDataTypes;

  /// @brief Field _isFallbackSystem, offset 0x28, size 0x1
  __declspec(property(get = __get__isFallbackSystem, put = __set__isFallbackSystem)) bool _isFallbackSystem;

  /// @brief Field _selectionSortOrder, offset 0x2c, size 0x4
  __declspec(property(get = __get__selectionSortOrder, put = __set__selectionSortOrder)) int32_t _selectionSortOrder;

  /// @brief Field _selectableByUser, offset 0x30, size 0x1
  __declspec(property(get = __get__selectableByUser, put = __set__selectableByUser)) bool _selectableByUser;

  __declspec(property(get = get_typeIdentifier))::BeatSaber::AvatarCore::AvatarSystemIdentifier typeIdentifier;

  __declspec(property(get = get_selectableByUser)) bool selectableByUser;

  __declspec(property(get = get_isFallbackSystem)) bool isFallbackSystem;

  __declspec(property(get = get_selectionSortOrder)) int32_t selectionSortOrder;

  __declspec(property(get = get_supportedOptionalAvatarDataTypes))::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes;

  __declspec(property(get = get_avatarCreated))::System::Threading::Tasks::Task_1<bool>* avatarCreated;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarSystem"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarSystem*() noexcept;

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarSystem"
  constexpr ::BeatSaber::AvatarCore::IAvatarSystem* i___BeatSaber__AvatarCore__IAvatarSystem() noexcept;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarSystemMetadata*() noexcept;

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* i___BeatSaber__AvatarCore__IAvatarSystemMetadata() noexcept;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier& __get__typeIdentifier();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemIdentifier const& __get__typeIdentifier() const;

  constexpr void __set__typeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value);

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& __get__supportedOptionalAvatarDataTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*> const& __get__supportedOptionalAvatarDataTypes() const;

  constexpr void __set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value);

  constexpr bool& __get__isFallbackSystem();

  constexpr bool const& __get__isFallbackSystem() const;

  constexpr void __set__isFallbackSystem(bool value);

  constexpr int32_t& __get__selectionSortOrder();

  constexpr int32_t const& __get__selectionSortOrder() const;

  constexpr void __set__selectionSortOrder(int32_t value);

  constexpr bool& __get__selectableByUser();

  constexpr bool const& __get__selectableByUser() const;

  constexpr void __set__selectableByUser(bool value);

  static inline ::BeatSaber::AvatarCore::AvatarSystem* New_ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier identifier, bool isFallbackSystem, bool selectableByUser, int32_t selectionSortOrder,
                                                                ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes);

  /// @brief Method .ctor, addr 0xe0cb60, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::AvatarCore::AvatarSystemIdentifier identifier, bool isFallbackSystem, bool selectableByUser, int32_t selectionSortOrder,
                    ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes);

  /// @brief Method get_typeIdentifier, addr 0xe0cbbc, size 0xc, virtual true, abstract: false, final true
  inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier get_typeIdentifier();

  /// @brief Method get_selectableByUser, addr 0xe0cbc8, size 0x8, virtual true, abstract: false, final true
  inline bool get_selectableByUser();

  /// @brief Method get_isFallbackSystem, addr 0xe0cbd0, size 0x8, virtual true, abstract: false, final true
  inline bool get_isFallbackSystem();

  /// @brief Method get_selectionSortOrder, addr 0xe0cbd8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_selectionSortOrder();

  /// @brief Method get_supportedOptionalAvatarDataTypes, addr 0xe0cbe0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* get_supportedOptionalAvatarDataTypes();

  /// @brief Method get_avatarCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_avatarCreated();

  /// @brief Method InstantiateAvatar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>* InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail,
                                                                                                 ::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarEditorUI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* InstantiateAvatarEditorUI(::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarSelectionView, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>* InstantiateAvatarSelectionView(::Zenject::DiContainer* container);

  /// @brief Method GetMultiplayerAvatarsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* GetMultiplayerAvatarsData();

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider();

  /// @brief Method CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist();

  /// @brief Method __GetRandomizedMultiplayerAvatarsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __GetRandomizedMultiplayerAvatarsData();

  /// @brief Method DeleteUserCreatedAvatar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DeleteUserCreatedAvatar();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSystem(AvatarSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSystem(AvatarSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystem();

public:
  /// @brief Field _typeIdentifier, offset: 0x10, size: 0x10, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemIdentifier ____typeIdentifier;

  /// @brief Field _supportedOptionalAvatarDataTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* ____supportedOptionalAvatarDataTypes;

  /// @brief Field _isFallbackSystem, offset: 0x28, size: 0x1, def value: None
  bool ____isFallbackSystem;

  /// @brief Field _selectionSortOrder, offset: 0x2c, size: 0x4, def value: None
  int32_t ____selectionSortOrder;

  /// @brief Field _selectableByUser, offset: 0x30, size: 0x1, def value: None
  bool ____selectableByUser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystem, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystem, ____typeIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystem, ____supportedOptionalAvatarDataTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystem, ____isFallbackSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystem, ____selectionSortOrder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystem, ____selectableByUser) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSystem);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystem*, "BeatSaber.AvatarCore", "AvatarSystem");
