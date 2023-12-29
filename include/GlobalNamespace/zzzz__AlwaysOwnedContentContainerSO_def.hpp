#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AlwaysOwnedContentContainerSO)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class AlwaysOwnedContentSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysOwnedContentContainerSO);
// Type: ::AlwaysOwnedContentContainerSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4129))
// CS Name: ::AlwaysOwnedContentContainerSO*
class CORDL_TYPE AlwaysOwnedContentContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _alwaysOwnedContent, offset 0x18, size 0x8
  __declspec(property(get = __get__alwaysOwnedContent, put = __set__alwaysOwnedContent))::GlobalNamespace::AlwaysOwnedContentSO* _alwaysOwnedContent;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset 0x20, size 0x8
  __declspec(property(get = __get__alwaysOwnedBeatmapLevelIds, put = __set__alwaysOwnedBeatmapLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset 0x28, size 0x8
  __declspec(property(get = __get__alwaysOwnedPacksIds, put = __set__alwaysOwnedPacksIds))::System::Collections::Generic::HashSet_1<::StringW>* _alwaysOwnedPacksIds;

  __declspec(property(get = get_alwaysOwnedBeatmapLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* alwaysOwnedBeatmapLevelIds;

  __declspec(property(get = get_alwaysOwnedPacksIds))::System::Collections::Generic::HashSet_1<::StringW>* alwaysOwnedPacksIds;

  constexpr ::GlobalNamespace::AlwaysOwnedContentSO*& __get__alwaysOwnedContent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentSO*> const& __get__alwaysOwnedContent() const;

  constexpr void __set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__alwaysOwnedBeatmapLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__alwaysOwnedBeatmapLevelIds() const;

  constexpr void __set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__alwaysOwnedPacksIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__alwaysOwnedPacksIds() const;

  constexpr void __set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method get_alwaysOwnedBeatmapLevelIds addr 0x20da440 size 0x24 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_alwaysOwnedBeatmapLevelIds();

  /// @brief Method get_alwaysOwnedPacksIds addr 0x20da714 size 0x24 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_alwaysOwnedPacksIds();

  /// @brief Method OnEnable addr 0x20dacd8 size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method InitAlwaysOwnedItems addr 0x20da790 size 0x548 virtual false final false
  inline void InitAlwaysOwnedItems();

  static inline ::GlobalNamespace::AlwaysOwnedContentContainerSO* New_ctor();

  /// @brief Method .ctor addr 0x20dacf4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysOwnedContentContainerSO();

public:
  /// @brief Field _alwaysOwnedContent, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AlwaysOwnedContentSO* ____alwaysOwnedContent;

  /// @brief Field _alwaysOwnedBeatmapLevelIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedBeatmapLevelIds;

  /// @brief Field _alwaysOwnedPacksIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____alwaysOwnedPacksIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysOwnedContentContainerSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentContainerSO, ____alwaysOwnedContent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentContainerSO, ____alwaysOwnedBeatmapLevelIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentContainerSO, ____alwaysOwnedPacksIds) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentContainerSO*, "", "AlwaysOwnedContentContainerSO");
