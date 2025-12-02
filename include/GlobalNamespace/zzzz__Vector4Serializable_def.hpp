#pragma once
// IWYU pragma private; include "GlobalNamespace/Vector4Serializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4Serializable)
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
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector4Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Vector4Serializable);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Vector4Serializable
struct CORDL_TYPE Vector4Serializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>*();

  /// @brief Method Approximately, addr 0x36549cc, size 0x74, virtual false, abstract: false, final false
  inline bool Approximately(::GlobalNamespace::Vector4Serializable other);

  /// @brief Method Deserialize, addr 0x36548fc, size 0x8c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x3654a40, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3654988, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::Vector4Serializable other);

  /// @brief Method GetHashCode, addr 0x3654aec, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSize, addr 0x3654c68, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method Serialize, addr 0x3654860, size 0x9c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x3654b08, size 0x160, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x36550ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method .ctor, addr 0x3654d34, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 v);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>* i___System__IEquatable_1___GlobalNamespace__Vector4Serializable_();

  /// @brief Method op_Addition, addr 0x365510c, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector4Serializable op_Addition(::GlobalNamespace::Vector4Serializable a, ::GlobalNamespace::Vector4Serializable b);

  /// @brief Method op_Implicit, addr 0x36550e8, size 0x24, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector4Serializable op_Implicit___GlobalNamespace__Vector4Serializable(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x36550b4, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::GlobalNamespace::Vector4Serializable v);

  /// @brief Method op_Subtraction, addr 0x3655138, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Vector4Serializable op_Subtraction(::GlobalNamespace::Vector4Serializable a, ::GlobalNamespace::Vector4Serializable b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4Serializable();

  // Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_w", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Vector4Serializable(int32_t _x, int32_t _y, int32_t _z, int32_t _w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20859 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _x, offset: 0x0, size: 0x4, def value: None
  int32_t _x;

  /// @brief Field _y, offset: 0x4, size: 0x4, def value: None
  int32_t _y;

  /// @brief Field _z, offset: 0x8, size: 0x4, def value: None
  int32_t _z;

  /// @brief Field _w, offset: 0xc, size: 0x4, def value: None
  int32_t _w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Vector4Serializable, _x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector4Serializable, _y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector4Serializable, _z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector4Serializable, _w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector4Serializable, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector4Serializable, "", "Vector4Serializable");
