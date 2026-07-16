#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncStateId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncStateId)
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class INetImmutableSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SyncStateId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SyncStateId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SyncStateId, "", "SyncStateId");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SyncStateId
struct CORDL_TYPE SyncStateId {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SyncStateId>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::SyncStateId>*();

  /// @brief Method Before, addr 0x333fe54, size 0x2c, virtual false, abstract: false, final false
  inline bool Before(::GlobalNamespace::SyncStateId other);

  /// @brief Method CreateFromSerializedData, addr 0x333ff10, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x333fed0, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SyncStateId Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method DeserializeWithFlag, addr 0x333fee4, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SyncStateId DeserializeWithFlag(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<bool> flag);

  /// @brief Method Equals, addr 0x333fd80, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x333fd70, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::SyncStateId other);

  /// @brief Method GetHashCode, addr 0x333fdfc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Increment, addr 0x333fe44, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SyncStateId Increment();

  /// @brief Method Serialize, addr 0x333fe80, size 0x20, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SerializeWithFlag, addr 0x333fea0, size 0x30, virtual false, abstract: false, final false
  inline void SerializeWithFlag(::LiteNetLib::Utils::NetDataWriter* writer, bool flag);

  /// @brief Method ToString, addr 0x333fe04, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x333fd68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t id);

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable* i___LiteNetLib__Utils__INetImmutableSerializable();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__SyncStateId_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SyncStateId>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::SyncStateId>* i___System__IEquatable_1___GlobalNamespace__SyncStateId_();

  /// @brief Method op_Equality, addr 0x333fe24, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b);

  /// @brief Method op_Inequality, addr 0x333fe34, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncStateId();

  // Ctor Parameters [CppParam { name: "_id", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr SyncStateId(uint8_t _id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field kMaxValue offset 0xffffffff size 0x1
  static constexpr uint8_t kMaxValue{ static_cast<uint8_t>(0x80u) };

  /// @brief Field _id, offset: 0x0, size: 0x1, def value: None
  uint8_t _id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncStateId, _id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SyncStateId) == 0x1, "Size mismatch!");

} // namespace GlobalNamespace
