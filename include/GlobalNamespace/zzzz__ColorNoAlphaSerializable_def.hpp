#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNoAlphaSerializable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorNoAlphaSerializable);
// Type: ::ColorNoAlphaSerializable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15045))
// CS Name: ::ColorNoAlphaSerializable
struct CORDL_TYPE ColorNoAlphaSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*();

  /// @brief Method .ctor, addr 0x12a8d48, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method Serialize, addr 0x12a8d54, size 0x50, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0x12a8da4, size 0x5c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method op_Implicit, addr 0x12a8e00, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorNoAlphaSerializable c);

  /// @brief Method op_Implicit, addr 0x12a8e04, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorNoAlphaSerializable op_Implicit___GlobalNamespace__ColorNoAlphaSerializable(::UnityEngine::Color c);

  /// @brief Method Equals, addr 0x12a8e08, size 0x104, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::ColorNoAlphaSerializable other);

  /// @brief Method Equals, addr 0x12a8f0c, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x12a8f88, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x12a900c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr ColorNoAlphaSerializable(::UnityEngine::Color _color) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNoAlphaSerializable();

  /// @brief Field _color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color _color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorNoAlphaSerializable, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoAlphaSerializable, _color) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoAlphaSerializable, "", "ColorNoAlphaSerializable");
