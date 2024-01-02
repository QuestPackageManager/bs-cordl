#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AlwaysOwnedContentContainerSO)
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4101))
// CS Name: ::AlwaysOwnedContentContainerSO*
class CORDL_TYPE AlwaysOwnedContentContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _alwaysOwnedContent, offset 0x18, size 0x8
  __declspec(property(get = __get__alwaysOwnedContent, put = __set__alwaysOwnedContent))::GlobalNamespace::AlwaysOwnedContentSO* _alwaysOwnedContent;

  __declspec(property(get = get_alwaysOwnedContent))::GlobalNamespace::AlwaysOwnedContentSO* alwaysOwnedContent;

  constexpr ::GlobalNamespace::AlwaysOwnedContentSO*& __get__alwaysOwnedContent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentSO*> const& __get__alwaysOwnedContent() const;

  constexpr void __set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO* value);

  /// @brief Method get_alwaysOwnedContent, addr 0x22343e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AlwaysOwnedContentSO* get_alwaysOwnedContent();

  static inline ::GlobalNamespace::AlwaysOwnedContentContainerSO* New_ctor();

  /// @brief Method .ctor, addr 0x22343ec, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysOwnedContentContainerSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentContainerSO, ____alwaysOwnedContent) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentContainerSO*, "", "AlwaysOwnedContentContainerSO");
