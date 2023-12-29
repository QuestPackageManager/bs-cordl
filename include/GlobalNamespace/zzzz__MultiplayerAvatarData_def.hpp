#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarData)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarData);
// Type: ::MultiplayerAvatarData
// SizeInfo { instance_size: 112, native_size: 112, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15167))
// CS Name: ::MultiplayerAvatarData
struct CORDL_TYPE MultiplayerAvatarData {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarData>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarData>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarData>*();

  /// @brief Method .ctor addr 0x1231268 size 0x4c virtual false final false
  inline void _ctor(::StringW headTopId, ::UnityEngine::Color32 headTopPrimaryColor, ::UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, ::UnityEngine::Color32 glassesColor,
                    ::StringW facialHairId, ::UnityEngine::Color32 facialHairColor, ::StringW handsId, ::UnityEngine::Color32 handsColor, ::StringW clothesId,
                    ::UnityEngine::Color32 clothesPrimaryColor, ::UnityEngine::Color32 clothesSecondaryColor, ::UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId,
                    ::StringW mouthId);

  /// @brief Method Serialize addr 0x12312b4 size 0x154 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData addr 0x1231470 size 0x34 virtual true final true
  inline ::GlobalNamespace::MultiplayerAvatarData CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize addr 0x12314a4 size 0x1b0 virtual false final false
  static inline ::GlobalNamespace::MultiplayerAvatarData Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals addr 0x12316b8 size 0x2d4 virtual true final true
  inline bool Equals(::GlobalNamespace::MultiplayerAvatarData other);

  /// @brief Method Equals addr 0x123198c size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x1231a1c size 0x2e0 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "headTopId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "headTopPrimaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }, CppParam { name: "headTopSecondaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "glassesId", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "glassesColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "facialHairId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "facialHairColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "handsId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "handsColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "clothesId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "clothesPrimaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "clothesSecondaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None },
  // CppParam { name: "clothesDetailColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "skinColorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "eyesId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mouthId", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr MultiplayerAvatarData(::StringW headTopId, ::UnityEngine::Color32 headTopPrimaryColor, ::UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId,
                                  ::UnityEngine::Color32 glassesColor, ::StringW facialHairId, ::UnityEngine::Color32 facialHairColor, ::StringW handsId, ::UnityEngine::Color32 handsColor,
                                  ::StringW clothesId, ::UnityEngine::Color32 clothesPrimaryColor, ::UnityEngine::Color32 clothesSecondaryColor, ::UnityEngine::Color32 clothesDetailColor,
                                  ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarData();

  /// @brief Field headTopId, offset: 0x0, size: 0x8, def value: None
  ::StringW headTopId;

  /// @brief Field headTopPrimaryColor, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Color32 headTopPrimaryColor;

  /// @brief Field headTopSecondaryColor, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 headTopSecondaryColor;

  /// @brief Field glassesId, offset: 0x10, size: 0x8, def value: None
  ::StringW glassesId;

  /// @brief Field glassesColor, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Color32 glassesColor;

  /// @brief Field facialHairId, offset: 0x20, size: 0x8, def value: None
  ::StringW facialHairId;

  /// @brief Field facialHairColor, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Color32 facialHairColor;

  /// @brief Field handsId, offset: 0x30, size: 0x8, def value: None
  ::StringW handsId;

  /// @brief Field handsColor, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Color32 handsColor;

  /// @brief Field clothesId, offset: 0x40, size: 0x8, def value: None
  ::StringW clothesId;

  /// @brief Field clothesPrimaryColor, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Color32 clothesPrimaryColor;

  /// @brief Field clothesSecondaryColor, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::Color32 clothesSecondaryColor;

  /// @brief Field clothesDetailColor, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Color32 clothesDetailColor;

  /// @brief Field skinColorId, offset: 0x58, size: 0x8, def value: None
  ::StringW skinColorId;

  /// @brief Field eyesId, offset: 0x60, size: 0x8, def value: None
  ::StringW eyesId;

  /// @brief Field mouthId, offset: 0x68, size: 0x8, def value: None
  ::StringW mouthId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarData, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, headTopId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, headTopPrimaryColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, headTopSecondaryColor) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, glassesId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, glassesColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, facialHairId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, facialHairColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, handsId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, handsColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, clothesId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, clothesPrimaryColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, clothesSecondaryColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, clothesDetailColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, skinColorId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, eyesId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, mouthId) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
