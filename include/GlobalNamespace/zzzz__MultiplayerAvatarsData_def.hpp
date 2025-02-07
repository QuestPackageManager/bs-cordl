#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerAvatarsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarsData)
namespace GlobalNamespace {
struct BitMask128;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarsData);
// Dependencies BitMask128, LiteNetLib.Utils.INetImmutableSerializable`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerAvatarsData
struct CORDL_TYPE MultiplayerAvatarsData {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*();

  /// @brief Method CreateFromSerializedData, addr 0x27214e8, size 0x38, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x2721520, size 0x34, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MultiplayerAvatarsData Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method DeserializeAvatarsData, addr 0x2721554, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* DeserializeAvatarsData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x27217f0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2721684, size 0x16c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::MultiplayerAvatarsData other);

  /// @brief Method GetHashCode, addr 0x2721880, size 0x224, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x2721320, size 0x28, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SerializeAvatarsData, addr 0x2721348, size 0x1a0, virtual false, abstract: false, final false
  inline void SerializeAvatarsData(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SupportsOptionalAvatarDataType, addr 0x2721aa4, size 0x60, virtual false, abstract: false, final false
  inline bool SupportsOptionalAvatarDataType(uint32_t typeHash);

  /// @brief Method .ctor, addr 0x27212a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                    ::System::Collections::Generic::IEnumerable_1<uint32_t>* supportedAvatarTypeIdHashes);

  /// @brief Method .ctor, addr 0x2721314, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData, ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter);

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__MultiplayerAvatarsData_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>* i___System__IEquatable_1___GlobalNamespace__MultiplayerAvatarsData_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarsData();

  // Ctor Parameters [CppParam { name: "multiplayerAvatarsData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*", modifiers: "", def_value: None }, CppParam {
  // name: "supportedAvatarTypeIdHashesBloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
  constexpr MultiplayerAvatarsData(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                   ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16999 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field multiplayerAvatarsData, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData;

  /// @brief Field supportedAvatarTypeIdHashesBloomFilter, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarsData, multiplayerAvatarsData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarsData, supportedAvatarTypeIdHashesBloomFilter) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarsData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarsData, "", "MultiplayerAvatarsData");
