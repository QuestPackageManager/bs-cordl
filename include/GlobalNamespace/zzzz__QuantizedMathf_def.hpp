#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QuantizedMathf)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class QuantizedMathf;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuantizedMathf);
// Type: ::QuantizedMathf
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15038))
// CS Name: ::QuantizedMathf*
class CORDL_TYPE QuantizedMathf : public ::System::Object {
public:
  // Declarations
  /// @brief Method Approximately, addr 0x12a67b8, size 0xd4, virtual false, abstract: false, final false
  static inline bool Approximately(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);

  /// @brief Method Approximately, addr 0x12a688c, size 0x10, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b, float_t epsilon);

  /// @brief Method Approximately, addr 0x12a689c, size 0x74, virtual false, abstract: false, final false
  static inline bool Approximately(int32_t a, int32_t b, int32_t epsilon);

  /// @brief Method Approximately, addr 0x12a6910, size 0x38, virtual false, abstract: false, final false
  static inline bool Approximately(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Approximately, addr 0x12a6948, size 0x60, virtual false, abstract: false, final false
  static inline bool Approximately(::UnityEngine::Pose a, ::UnityEngine::Pose b);

  /// @brief Method QuantizedVectorComponentToString, addr 0x12a69a8, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW QuantizedVectorComponentToString(int32_t v);

  // Ctor Parameters [CppParam { name: "", ty: "QuantizedMathf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuantizedMathf(QuantizedMathf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuantizedMathf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuantizedMathf(QuantizedMathf const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuantizedMathf();

public:
  /// @brief Field kQuaternionSerializableScaleFactor offset 0xffffffff size 0x4
  static constexpr int32_t kQuaternionSerializableScaleFactor{ static_cast<int32_t>(0x3fff) };

  /// @brief Field kQuaternionSerializableEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kQuaternionSerializableEpsilon{ 0.00006103888 };

  /// @brief Field kVectorSerializableScaleInt offset 0xffffffff size 0x4
  static constexpr int32_t kVectorSerializableScaleInt{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kVectorSerializableScale offset 0xffffffff size 0x4
  static constexpr float_t kVectorSerializableScale{ 1000.0 };

  /// @brief Field kVectorSerializableEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kVectorSerializableEpsilon{ 0.001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuantizedMathf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuantizedMathf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuantizedMathf*, "", "QuantizedMathf");
