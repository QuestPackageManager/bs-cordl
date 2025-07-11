#pragma once
// IWYU pragma private; include "GlobalNamespace/Color32Serializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color32Serializable)
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
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
struct Color32Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Color32Serializable);
// Dependencies LiteNetLib.Utils.INetSerializable, System.IEquatable`1<T>, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: Color32Serializable
struct CORDL_TYPE Color32Serializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Color32Serializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::Color32Serializable>*();

  /// @brief Method Deserialize, addr 0x2726b40, size 0x64, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x2726bf8, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2726bb4, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::Color32Serializable other);

  /// @brief Method GetHashCode, addr 0x2726ca0, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x2726ae0, size 0x60, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToString, addr 0x2726d08, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2726ad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color32 color);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Color32Serializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::Color32Serializable>* i___System__IEquatable_1___GlobalNamespace__Color32Serializable_();

  /// @brief Method op_Implicit, addr 0x2726bac, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Color32Serializable op_Implicit___GlobalNamespace__Color32Serializable(::UnityEngine::Color32 c);

  /// @brief Method op_Implicit, addr 0x2726ba4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 op_Implicit___UnityEngine__Color32(::GlobalNamespace::Color32Serializable c);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Color32Serializable();

  // Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr Color32Serializable(::UnityEngine::Color32 _color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17029 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _color, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Color32 _color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Color32Serializable, _color) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Color32Serializable, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Color32Serializable, "", "Color32Serializable");
