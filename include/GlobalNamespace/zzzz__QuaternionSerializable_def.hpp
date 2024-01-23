#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuaternionSerializable)
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
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct QuaternionSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QuaternionSerializable);
// Type: ::QuaternionSerializable
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15041))
// CS Name: ::QuaternionSerializable
struct CORDL_TYPE QuaternionSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>* i___System__IEquatable_1___GlobalNamespace__QuaternionSerializable_();

  /// @brief Method get_identity, addr 0x12a7a90, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::QuaternionSerializable get_identity();

  /// @brief Method ToSmallest, addr 0x12a7c58, size 0x3e8, virtual false, abstract: false, final false
  static inline void ToSmallest(::UnityEngine::Quaternion q, ByRef<int32_t> sa, ByRef<int32_t> sb, ByRef<int32_t> sc);

  /// @brief Method FromSmallest, addr 0x12a8040, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromSmallest(int32_t sa, int32_t sb, int32_t sc);

  /// @brief Method Serialize, addr 0x12a4624, size 0x54, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0x12a4468, size 0x64, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x12a8110, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::QuaternionSerializable other);

  /// @brief Method Equals, addr 0x12a8144, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Approximately, addr 0x12a81dc, size 0x80, virtual false, abstract: false, final false
  inline bool Approximately(::GlobalNamespace::QuaternionSerializable other);

  /// @brief Method GetHashCode, addr 0x12a826c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSize, addr 0x12a8284, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method .ctor, addr 0x12a7af4, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion q);

  /// @brief Method .ctor, addr 0x12a82d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ToString, addr 0x12a82e4, size 0x38, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method op_Implicit, addr 0x12a825c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::GlobalNamespace::QuaternionSerializable q);

  /// @brief Method op_Implicit, addr 0x12a4a0c, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::QuaternionSerializable op_Implicit___GlobalNamespace__QuaternionSerializable(::UnityEngine::Quaternion q);

  /// @brief Method op_Addition, addr 0x12a831c, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::QuaternionSerializable op_Addition(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b);

  /// @brief Method op_Subtraction, addr 0x12a8338, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::QuaternionSerializable op_Subtraction(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b);

  // Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_c", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr QuaternionSerializable(int32_t _a, int32_t _b, int32_t _c) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionSerializable();

  /// @brief Field _a, offset: 0x0, size: 0x4, def value: None
  int32_t _a;

  /// @brief Field _b, offset: 0x4, size: 0x4, def value: None
  int32_t _b;

  /// @brief Field _c, offset: 0x8, size: 0x4, def value: None
  int32_t _c;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kSqrtTwo offset 0xffffffff size 0x4
  static constexpr float_t kSqrtTwo{ 1.4142135 };

  /// @brief Field kOneOverSqrtTwo offset 0xffffffff size 0x4
  static constexpr float_t kOneOverSqrtTwo{ 0.70710677 };

  /// @brief Field kScale offset 0xffffffff size 0x4
  static constexpr float_t kScale{ 11584.53 };

  /// @brief Field kInvScale offset 0xffffffff size 0x4
  static constexpr float_t kInvScale{ 0.00008632201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuaternionSerializable, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuaternionSerializable, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuaternionSerializable, _b) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuaternionSerializable, _c) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuaternionSerializable, "", "QuaternionSerializable");
