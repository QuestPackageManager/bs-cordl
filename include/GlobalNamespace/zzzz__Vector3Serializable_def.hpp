#pragma once
// IWYU pragma private; include "GlobalNamespace/Vector3Serializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Serializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector3Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Vector3Serializable);
// Dependencies LiteNetLib.Utils.INetSerializable, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Vector3Serializable
struct CORDL_TYPE Vector3Serializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*();

  /// @brief Method Approximately, addr 0x2724b14, size 0x60, virtual false, abstract: false, final false
  inline bool Approximately(::GlobalNamespace::Vector3Serializable other);

  /// @brief Method Deserialize, addr 0x27223c8, size 0x64, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x2724b74, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2724ae0, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::Vector3Serializable other);

  /// @brief Method GetHashCode, addr 0x2724c0c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSize, addr 0x2724d5c, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method Serialize, addr 0x27225d4, size 0x84, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x2724c34, size 0x128, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x272509c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method .ctor, addr 0x2724e14, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 v);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>* i___System__IEquatable_1___GlobalNamespace__Vector3Serializable_();

  /// @brief Method op_Addition, addr 0x27250d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector3Serializable op_Addition(::GlobalNamespace::Vector3Serializable a, ::GlobalNamespace::Vector3Serializable b);

  /// @brief Method op_Implicit, addr 0x2722a24, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector3Serializable op_Implicit___GlobalNamespace__Vector3Serializable(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x27250a8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::GlobalNamespace::Vector3Serializable v);

  /// @brief Method op_Subtraction, addr 0x27250ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector3Serializable op_Subtraction(::GlobalNamespace::Vector3Serializable a, ::GlobalNamespace::Vector3Serializable b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Serializable();

  // Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr Vector3Serializable(int32_t _x, int32_t _y, int32_t _z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field _x, offset: 0x0, size: 0x4, def value: None
  int32_t _x;

  /// @brief Field _y, offset: 0x4, size: 0x4, def value: None
  int32_t _y;

  /// @brief Field _z, offset: 0x8, size: 0x4, def value: None
  int32_t _z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Vector3Serializable, _x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3Serializable, _y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3Serializable, _z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3Serializable, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
