#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSerializable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSerializable);
// Type: ::ColorSerializable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15188))
// CS Name: ::ColorSerializable
struct CORDL_TYPE ColorSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*();

  /// @brief Method .ctor addr 0x12366f4 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method Serialize addr 0x1236700 size 0x60 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x1236760 size 0x64 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method op_Implicit addr 0x12367c4 size 0x4 virtual false final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSerializable c);

  /// @brief Method op_Implicit addr 0x12367c8 size 0x4 virtual false final false
  static inline ::GlobalNamespace::ColorSerializable op_Implicit___GlobalNamespace__ColorSerializable(::UnityEngine::Color c);

  /// @brief Method Equals addr 0x12367cc size 0x13c virtual true final true
  inline bool Equals(::GlobalNamespace::ColorSerializable other);

  /// @brief Method Equals addr 0x1236908 size 0x7c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x1236984 size 0x84 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x1236a08 size 0x8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr ColorSerializable(::UnityEngine::Color _color) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSerializable();

  /// @brief Field _color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color _color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSerializable, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSerializable, _color) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSerializable, "", "ColorSerializable");
