#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSerializable)
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
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSerializable);
// Dependencies LiteNetLib.Utils.INetSerializable, System.IEquatable`1<T>, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: ColorSerializable
struct CORDL_TYPE ColorSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*();

  /// @brief Method Deserialize, addr 0x2726820, size 0x64, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x27269c8, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x272688c, size 0x13c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::ColorSerializable other);

  /// @brief Method GetHashCode, addr 0x2726a44, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x27267c0, size 0x60, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x2726ac8, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x27267b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>* i___System__IEquatable_1___GlobalNamespace__ColorSerializable_();

  /// @brief Method op_Implicit, addr 0x2726888, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorSerializable op_Implicit___GlobalNamespace__ColorSerializable(::UnityEngine::Color c);

  /// @brief Method op_Implicit, addr 0x2726884, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSerializable c);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSerializable();

  // Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr ColorSerializable(::UnityEngine::Color _color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17028 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color _color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSerializable, _color) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSerializable, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSerializable, "", "ColorSerializable");
