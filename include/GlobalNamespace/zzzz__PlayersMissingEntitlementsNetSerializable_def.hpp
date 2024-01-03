#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersMissingEntitlementsNetSerializable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
// Type: ::PlayersMissingEntitlementsNetSerializable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15032))
// CS Name: ::PlayersMissingEntitlementsNetSerializable*
class CORDL_TYPE PlayersMissingEntitlementsNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _playersWithoutEntitlements, offset 0x18, size 0x8
  __declspec(property(get = __get__playersWithoutEntitlements, put = __set__playersWithoutEntitlements))::System::Collections::Generic::List_1<::StringW>* _playersWithoutEntitlements;

  __declspec(property(get = get_playersWithoutEntitlements))::System::Collections::Generic::List_1<::StringW>* playersWithoutEntitlements;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__playersWithoutEntitlements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__playersWithoutEntitlements() const;

  constexpr void __set__playersWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_playersWithoutEntitlements, addr 0x12a5dbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_playersWithoutEntitlements();

  /// @brief Method Obtain, addr 0x12a5dc4, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Obtain();

  static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* New_ctor();

  /// @brief Method .ctor, addr 0x12a5e28, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x12a5ec8, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Init(::System::Collections::Generic::IEnumerable_1<::StringW>* playersWithoutEntitlements);

  /// @brief Method Serialize, addr 0x12a5f60, size 0x160, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0x12a60c0, size 0x118, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersMissingEntitlementsNetSerializable();

public:
  /// @brief Field _playersWithoutEntitlements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____playersWithoutEntitlements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, ____playersWithoutEntitlements) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*, "", "PlayersMissingEntitlementsNetSerializable");
