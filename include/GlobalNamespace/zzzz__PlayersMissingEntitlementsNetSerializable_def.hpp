#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayersMissingEntitlementsNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersMissingEntitlementsNetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
// Dependencies PoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayersMissingEntitlementsNetSerializable
class CORDL_TYPE PlayersMissingEntitlementsNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _playersWithoutEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playersWithoutEntitlements,
                      put = __cordl_internal_set__playersWithoutEntitlements)) ::System::Collections::Generic::List_1<::StringW>* _playersWithoutEntitlements;

  __declspec(property(get = get_playersWithoutEntitlements)) ::System::Collections::Generic::List_1<::StringW>* playersWithoutEntitlements;

  /// @brief Method Deserialize, addr 0x2728280, size 0x114, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x2728088, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Init(::System::Collections::Generic::IEnumerable_1<::StringW>* playersWithoutEntitlements);

  static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x2727f84, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x2728120, size 0x160, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__playersWithoutEntitlements() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__playersWithoutEntitlements();

  constexpr void __cordl_internal_set__playersWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2727fe8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playersWithoutEntitlements, addr 0x2727f7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_playersWithoutEntitlements();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersMissingEntitlementsNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17015 };

  /// @brief Field _playersWithoutEntitlements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____playersWithoutEntitlements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, ____playersWithoutEntitlements) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*, "", "PlayersMissingEntitlementsNetSerializable");
