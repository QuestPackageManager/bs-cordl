#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace UnityEngine {
struct Pose;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct QuaternionSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15039)), TypeDefinitionIndex(TypeDefinitionIndex(15041))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15042))
// CS Name: ::PoseSerializable
struct CORDL_TYPE PoseSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PoseSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*();

  /// @brief Method .ctor addr 0x12a8354 size 0x14 virtual false final false
  inline void _ctor(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation);

  /// @brief Method get_identity addr 0x12a8368 size 0x24 virtual false final false
  static inline ::GlobalNamespace::PoseSerializable get_identity();

  /// @brief Method Serialize addr 0x12a838c size 0x28 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x12a83b4 size 0x28 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals addr 0x12a83dc size 0x6c virtual true final true
  inline bool Equals(::GlobalNamespace::PoseSerializable other);

  /// @brief Method Equals addr 0x12a8448 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x12a84d8 size 0x44 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x12a851c size 0xcc virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetSize addr 0x12a85e8 size 0x2c virtual false final false
  inline int32_t GetSize();

  /// @brief Method op_Implicit addr 0x12a8614 size 0x98 virtual false final false
  static inline ::UnityEngine::Pose op_Implicit___UnityEngine__Pose(::GlobalNamespace::PoseSerializable p);

  /// @brief Method op_Implicit addr 0x12a86ac size 0x7c virtual false final false
  static inline ::GlobalNamespace::PoseSerializable op_Implicit___GlobalNamespace__PoseSerializable(::UnityEngine::Pose p);

  /// @brief Method op_Addition addr 0x12a8728 size 0x64 virtual false final false
  static inline ::GlobalNamespace::PoseSerializable op_Addition(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b);

  /// @brief Method op_Subtraction addr 0x12a878c size 0x64 virtual false final false
  static inline ::GlobalNamespace::PoseSerializable op_Subtraction(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b);

  // Ctor Parameters [CppParam { name: "position", ty: "::GlobalNamespace::Vector3Serializable", modifiers: "", def_value: None }, CppParam { name: "rotation", ty:
  // "::GlobalNamespace::QuaternionSerializable", modifiers: "", def_value: None }]
  constexpr PoseSerializable(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseSerializable();

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseSerializable, "", "PoseSerializable");
