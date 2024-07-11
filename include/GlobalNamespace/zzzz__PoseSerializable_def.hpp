#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseSerializable)
namespace GlobalNamespace {
struct QuaternionSerializable;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace LiteNetLib::Utils {
class INetSerializable;
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
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct PoseSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PoseSerializable);
// Type: ::PoseSerializable
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PoseSerializable
struct CORDL_TYPE PoseSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PoseSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*();

  /// @brief Method Deserialize, addr 0x1519d4c, size 0x28, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x1519de0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1519d74, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::PoseSerializable other);

  /// @brief Method GetHashCode, addr 0x1519e70, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSize, addr 0x1519f80, size 0x2c, virtual false, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method Serialize, addr 0x1519d24, size 0x28, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x1519eb4, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x1519cec, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation);

  /// @brief Method get_identity, addr 0x1519d00, size 0x24, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable get_identity();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PoseSerializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>* i___System__IEquatable_1___GlobalNamespace__PoseSerializable_();

  /// @brief Method op_Addition, addr 0x151a0c0, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable op_Addition(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b);

  /// @brief Method op_Implicit, addr 0x151a044, size 0x7c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable op_Implicit___GlobalNamespace__PoseSerializable(::UnityEngine::Pose p);

  /// @brief Method op_Implicit, addr 0x1519fac, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose op_Implicit___UnityEngine__Pose(::GlobalNamespace::PoseSerializable p);

  /// @brief Method op_Subtraction, addr 0x151a124, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable op_Subtraction(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseSerializable();

  // Ctor Parameters [CppParam { name: "position", ty: "::GlobalNamespace::Vector3Serializable", modifiers: "", def_value: None }, CppParam { name: "rotation", ty:
  // "::GlobalNamespace::QuaternionSerializable", modifiers: "", def_value: None }]
  constexpr PoseSerializable(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable position;

  /// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
  ::GlobalNamespace::QuaternionSerializable rotation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoseSerializable, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseSerializable, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseSerializable, rotation) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseSerializable, "", "PoseSerializable");
